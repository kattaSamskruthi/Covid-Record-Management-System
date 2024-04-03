import React from "react";
import creche from "../assets/creche.png";
import guardian from "../assets/guardian.png";
import Button from "../components/button.component";

const Signup = () => {
  return (
    <div className="min-h-full md:grid md:grid-cols-2 md:divide-x">
      <div className="min-h-full flex items-center justify-center py-12 px-4 sm:px-6 lg:px-8 border-none">
        <div className="max-w-md w-full space-y-8">
          <div className="flex justify-center">
            <img src={creche} className="w-40 h-40" />
          </div>
          <div>
            <h2 className="mt-6 text-center text-4xl font-extrabold text-gray-900">
              Creche
            </h2>
            <p className="mt-2 text-center text-sm font-medium text-pink-primary">
              Register as a creche organization
            </p>
          </div>
          <form className="mt-8 space-y-6">
            <div className="rounded-md shadow-sm -space-y-px">
              <div>
                <input
                  type="text"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Name of Organization"
                />
              </div>
              <div>
                <input
                  type="type"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Location Address"
                />
              </div>
              <div>
                <input
                  type="email"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Email"
                />
              </div>
              <div>
                <input
                  type="password"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Password"
                />
              </div>
              <div>
                <input
                  type="text"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Confirm Password"
                />
              </div>
            </div>
            <div>
              <Button>Register</Button>
            </div>
          </form>
        </div>
      </div>
      <div className="min-h-full flex items-center justify-center py-12 px-4 sm:px-6 lg:px-8 border-none">
        <div className="max-w-md w-full space-y-8">
          <div>
            <div className="flex justify-center">
              <img src={guardian} className="w-40 h-40" />
            </div>
            <h2 className="mt-6 text-center text-4xl font-extrabold text-gray-900">
              Guardian
            </h2>
            <p className="mt-2 text-center text-sm font-medium text-pink-primary">
              Register as a guardian / parent
            </p>
          </div>
          <form className="mt-8 space-y-6">
            <div className="rounded-md shadow-sm -space-y-px">
              <div>
                <input
                  type="text"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Full Name"
                />
              </div>
              <div>
                <input
                  type="text"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Preferred Location"
                />
              </div>
              <div>
                <input
                  type="email"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Email"
                />
              </div>
              <div>
                <input
                  type="password"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Password"
                />
              </div>
              <div>
                <input
                  type="password"
                  required
                  className="appearance-none rounded-none relative block
                  w-full px-3 py-2 m-2 border border-gray-300
                  placeholder-gray-500 text-gray-900
                  focus:outline-none focus:ring-pink-tertiary
                  focus:border-pink-tertiary focus:z-10 sm:text-sm"
                  placeholder="Confirm Password"
                />
              </div>
            </div>
            <div>
              <Button>Register</Button>
            </div>
          </form>
        </div>
      </div>
    </div>
  );
};

export default Signup;
