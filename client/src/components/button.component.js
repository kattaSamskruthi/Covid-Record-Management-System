import React from "react";

const Button = (props) => {
  return (
    <div className="flex justify-center">
      <button className="p-2 text-xl w-60 cursor-pointer border-none focus:outline-none bg-pink-primary text-white rounded-lg">
        {props.children}
      </button>
    </div>
  );
};

export default Button;
