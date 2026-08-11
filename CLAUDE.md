# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this repo is

A Jekyll static site (GitHub Pages, `maherou.github.io/Teaching`) for Mike Heroux's teaching and research materials: syllabi, schedules, lecture slides, and course handouts for CSCI 317 and CSCI 373 at St. John's University / CSB. There is no application code, build pipeline for logic, or test suite — changes are almost always content edits (Markdown pages, front matter, linked files) or minor Sass/HTML tweaks to the theme.

## Commands

Ruby/Jekyll (primary):
```bash
bundle install          # install jekyll, jekyll-sitemap, jekyll-paginate, jemoji
bundle exec jekyll serve # local dev server with live rebuild, served at /Teaching baseurl
bundle exec jekyll build # static output to _site/
```

Gulp (optional asset pipeline — compiles Sass, runs BrowserSync, watches files):
```bash
npm install
npx gulp          # default task: sass + img + jekyll-build, then browser-sync + watch
npx gulp sass      # compile assets/css/scss/main.scss -> assets/css (and _site/assets/css)
```
Gulp's `jekyll-build`/`jekyll-rebuild` tasks shell out to the `jekyll` executable directly (not `bundle exec`), so it must be on PATH (e.g. `gem install jekyll` or an activated bundler binstub).

There is no lint/test command — validate changes by building the site and checking the rendered pages, or by checking that new/edited Markdown files have correct YAML front matter (a malformed front matter block is the most common way to break a Jekyll build).

## Site configuration

`_config.yml` holds sitewide settings referenced throughout templates via `site.*`: `baseurl: /Teaching`, author/social fields, and the current `course`/`course-img`/`about-course` fields used by the course sidebar. `permalink: ':title/'` — pages/posts render at their title slug, not their file path.

## Content architecture

Two Jekyll collections/mechanisms produce nearly all pages:

- **`_posts/`** — one Markdown file per course-per-semester (e.g. `2026-01-10-spring2026-CS373.md`), using `layout: post`. This is the current/live syllabus page for a course; front matter carries `title`, `description`, `date`, `img`, `tags`, `location`. The body links out to per-semester files under `files/<COURSE>/` using **relative paths** (e.g. `../files/CS373/2026-Spring-Class-Meeting-Schedule`).
- **`files/<COURSE>/`** (e.g. `files/CS373/`, `files/CS317/`) — the actual course content: schedules, due-date pages, handouts, slides (PDF/PPTX), and reference docs. Markdown files here use `layout: coursepost` (or plain `post`) and are linked to from the course's `_posts` page. Non-Markdown assets (PDF, PPTX, DOCX, images, code samples) live alongside the Markdown and are linked directly.
- **`Archive/`** (top level) — frozen historical course pages and per-semester schedule/due-date snapshots from past years, kept for reference and generally not linked from current navigation.
- **`files/<COURSE>/Archive/`** — the equivalent per-semester archive for that course's schedules/due-dates/presentation lists, one set per past semester.

**When starting a new semester for a course**, the existing pattern is: copy the prior semester's `_posts/*-<course>.md` entry point and its `files/<COURSE>/*-Class-Meeting-Schedule.md`, `*-Class-Assignment-Due-Dates.md`, and `*-Final-Presentation-Schedule.md` files, update dates/links, and move last semester's dated files into `files/<COURSE>/Archive/`.

## Layouts

`_layouts/` defines the page chrome, chained as `main`/`course` -> `default` -> raw HTML:
- `default.html` — outer `<html>`/`<body>` shell, pulls in `_includes/head.html` and `analytics.html`.
- `main.html` / `course.html` — nearly identical sidebars (author bio+socials vs. course banner+description pulled from `site.*`), wrapping `{{ content }}` in `.content-box`.
- `post.html` / `coursepost.html` — article template used by actual content pages (cover image, title, date, tag list linking to `/tags`, Disqus include). Both extend `main`/`course` respectively and are functionally identical, differing only in which sidebar they inherit.

`index.html` (paginated post listing) and `tags.html` (tag index, grouping `site.tags`) are the two generated listing pages at the site root.

## Assets

`assets/css/scss/` is the Sass source compiled by Gulp into `assets/css/`; edit the `.scss`, not the generated CSS, and recompile with `npx gulp sass`. `assets/img/` holds banners/photos referenced by `_config.yml` and page front matter (`img:` field).
