const defaultTheme = require("tailwindcss/defaultTheme");

/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{js,jsx,ts,tsx}"],
  theme: {
    extend: {
      fontFamily: {
        sans: ["'Poppins'", ...defaultTheme.fontFamily.sans],
      },
      colors: {
        pink: {
          primary: "#E54980",
          secondary: "#F2CCD9",
          tertiary: "#FFE8F0",
        },
      },
    },
  },
  plugins: [],
};
