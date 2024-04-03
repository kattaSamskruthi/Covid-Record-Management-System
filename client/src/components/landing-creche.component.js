import React from "react";

function LandingCreche() {
    return (
        <div className="flex gap-x-44 items-center p-12">
            
            <div className="flex-col mr-5">
                <div className="text-3xl p-3 mb-5 text-center text-pink-primary font-bold underline">
                    CRECHES
                </div>
                <div className="text-xl p-3 mb-5 text-center">
                We are continually encouraging new, established, or well-known organisations to join our platform in order to better serve the needs of parents by facilitating their access to the finest facilities for their children!
                </div>
                <div className="px-6 flex justify-center items-center">
                    <button className="bg-pink-primary hover:bg-pink-300 text-white font-bold rounded-full text-xl px-10 py-4 mt-5">Creche Registration</button>
                </div>
            </div>
            <div className="p-5 ml-5">
                <img className="max-w-xl h-auto" height="15" src="https://i.postimg.cc/tTtPyZVz/Untitled-design.png" />
            </div>
        </div>
    )
}

export default LandingCreche;