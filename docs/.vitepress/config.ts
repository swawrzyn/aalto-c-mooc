import { defineConfig } from "vitepress";
import enLocale from "./locales/en";

// https://vitepress.dev/reference/site-config
export default defineConfig({
  title: "Aalto C MOOC",
  description: "Course material for the 2016 Aalto C MOOC.",
  markdown: {
    lineNumbers: true,
  },
  locales: {
    en: {
      label: "English",
      lang: "en",
      themeConfig: enLocale,
    },
    // fi: {
    //   label: "Suomi",
    //   lang: "fi",
    // },
  },
  themeConfig: {
    socialLinks: [
      { icon: "github", link: "https://github.com/swawrzyn/aalto-c-mooc" },
    ],
    footer: {
      message:
        '<img alt="Creative Commons License" src="https://i.creativecommons.org/l/by-nc-sa/3.0/88x31.png" style="border-width:0;">',
    },
  },
});
