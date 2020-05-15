### Design Documentation

Agile software methodologies emphasize _Working software over comprehensive documentation_ ([Agile Manifesto](https://agilemanifesto.org)).  Even so, lightweight design documents are an important development tool and provide a valuable means of conveying the intent and basic structure of a software product before it is written.

A design document is valuable for a variety of reasons including:
1. **Improve product team thinking:** Writing thoughts tends to improve our understanding, independent of being able to communicate to others.
1. **Improve common understanding across the product team:** Verbal exchange can obscure detail and give a false impression that everyone on the team understands and agrees about the product.  Writing can address this challenge.
1. **Enable rapid dissemination of design and more opportunity for feedback:** A right-sized design document can enable the team to get buy-in from stakeholders and input from experts whose feedback would improve the design.

A design document should not be used in these ways:
1. **Substitute for documented and working code:** For most projects, writing a design document is a step done before writing production-quality code. Once a well-documented code is available, keeping the design document up-to-date typically does not make a lot of sense.  
1. **Substitue for developer or user guide:** If design information is important in the future, it is best to have a living document targeted at the stakeholders for that document in the form of a developer or user guide.

#### Elements of a good design document

A good design document will have elements that allow a quick overview, communicate to multiple stakeholders and still be concise.  An added feature is that the document will describe what your product **won't** do.

There are numerous articles describing the elements of a good design document. Here are a few:
1. [How to write a good software design doc](https://medium.freecodecamp.org/how-to-write-a-good-software-design-document-66fcf019569c)
1. [Design docs - A design doc](https://medium.com/@cramforce/design-docs-a-design-doc-a152f4484c6b)
1. [jlhawn/design_docke_template.md](https://gist.github.com/jlhawn/0a861fb21e162bf367ad) - A markdown template for a design document.

We will use the design template described in the first article [How to write a good software design doc](https://medium.freecodecamp.org/how-to-write-a-good-software-design-document-66fcf019569c).

#### Final Note

Just because it is a good idea to write a design document before writing product source code, it is still a good idea to write some software as a part of the design.  Writing a new software product often comes with challenging design issues, officially known as a _wicked problem_ in the software literature.  In this situation, it is reasonable and recommended to write some prototype software that improves your design or addresses concerns about your design. 
