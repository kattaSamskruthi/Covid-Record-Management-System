import React from "react";

function RegisteredData() {
    return (
        <div className="flex p-5">
          <div className="mr-5">
            <div className="flex-col bg-pink-secondary rounded-2xl p-5 text-center">
              <div className="text-6xl font-bold p-4">50</div>
              <div className="text-3xl font-bold p-2 pb-4">
                Total kids registered with the creche
              </div>
            </div>
          </div>
          <div className="ml-5">
            <div className="flex-col bg-pink-secondary rounded-2xl p-5 text-center">
              <div className="text-6xl font-bold p-4">78</div>
              <div className="text-3xl font-bold p-2 pb-4">
                Total customer feedbacks submitted
              </div>
            </div>
          </div>
        </div>
    )
}

export default RegisteredData;