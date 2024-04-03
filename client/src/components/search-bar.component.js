import React, { useState } from "react";
import Button from "./button.component";

function SearchBar(props) {
  return (
    <div className="text-center rounded-lg p-5">
      <div className="my-5 text-3xl font-bold">{props.text}</div>
      <form className="grid justify-center">
        <input
          className="rounded-lg my-3 w-full p-2.5 text-md border-outline-[#DCD6E4] outline-[#DCD6E4]"
          type="text"
          placeholder={props.placeholder}
        />
        <Button>Search</Button>
      </form>
    </div>
  );
}

export default SearchBar;
