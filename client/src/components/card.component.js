import React from "react";
import crecheImage from "../assets/crecheImage.jpg";

function cardComponent() {
  return (
    <div class="max-w-xs rounded overflow-hidden shadow-lg mx-8 my-4">
      <img class="w-full" src={crecheImage} alt="Creche Provider" />
      <div class="px-6 py-4">
        <div class="font-bold text-xl mb-2">Creche A</div>
        <p class="text-gray-700 text-base">Delhi</p>
      </div>
    </div>
  );
}

export default cardComponent;
