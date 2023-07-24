export default {
  nav: [
    { text: "Home", link: "/en" },
    { text: "Instructions", link: "/en/instructions" },
    {
      text: "Modules",
      items: [
        { text: "M1: Introduction", link: "/module-01/01-introduction" },
        { text: "M2: Pointers", link: "/module-01/01-introduction" },
        { text: "M3: Dynamic Memory", link: "/module-01/01-introduction" },
        { text: "M4: Arrays and Bits", link: "/module-01/01-introduction" },
        { text: "M5: Advanced Features", link: "/module-01/01-introduction" },
        { text: "M6: Course Summary", link: "/module-01/01-introduction" },
      ],
    },
  ],
  sidebar: {
    "/en/module-01/": [
      {
        text: "Module 1: Introduction",
        items: [
          { text: "01. Introduction", link: "/en/module-01/" },
          {
            text: "02. First C Program",
            link: "/en/module-01/02-first-c-program",
            items: [{ text: "Task: Hi C!", link: "/en/module-01/02t-intro-1" }],
          },
          {
            text: "03. Data Types and Variables",
            link: "/en/module-01/03-data-types-and-variables",
            items: [
              {
                text: "Task: Fix the types",
                link: "/en/module-01/03t-intro-2",
              },
            ],
          },
          {
            text: "04. Functions",
            link: "/en/module-01/04-functions",
            items: [
              { text: "Task: Vector function", link: "/en/module-01/04t-func" },
            ],
          },
          {
            text: "05. Formatted Input and Output Basics",
            link: "/en/module-01/05-formatted-input-and-output-basics",
            items: [{ text: "Task: Sum", link: "/en/module-01/05t-calc-1" }],
          },
          {
            text: "06. Conditional Statements",
            link: "/en/module-01/06-conditional-statements",
            items: [
              { text: "Task: Calculator", link: "/en/module-01/06t-calc-2" },
            ],
          },
          {
            text: "07. Loops",
            link: "/en/module-01/07-loops",
            items: [
              { text: "Tasks: Geometry", link: "/en/module-01/07t-geometry" },
            ],
          },
        ],
      },
      {"text": "Module 2: Pointers", link: "/en/module-02/"},
      {"text": "Module 3: Dynamic Memory", link: "/en/module-03/"},
      {"text": "Module 4: Arrays and Bits", link: "/en/module-04/"},
      {"text": "Module 5: Advanced Features", link: "/en/module-05/"},
      {"text": "Module 6: Course Summary", link: "/en/module-06/"}
    ],
  },
};
