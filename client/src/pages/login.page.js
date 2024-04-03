import React from "react";
import Button from "../components/button.component";

const Login = () => {
  return (
    <div className="min-h-full flex items-center justify-center py-12 px-4 sm:px-6 lg:px-8">
      <div className="max-w-md w-full space-y-8">
        <div>
          <h2 className="mt-6 text-center text-4xl font-extrabold text-gray-900">
            Welcome back!
          </h2>
          <p className="mt-2 text-center text-sm font-medium text-pink-primary">
            Sign in to your account
          </p>
        </div>
        <form className="mt-8 space-y-6">
          <input type="hidden" name="remember" defaultValue="true" />
          <div className="rounded-md shadow-sm -space-y-px">
            <div>
              <input
                type="email"
                required
                className="appearance-none rounded-none relative block
                w-full px-3 py-2 m-2 border border-gray-300
                placeholder-gray-500 text-gray-900
                focus:outline-none focus:ring-pink-tertiary
                focus:border-pink-tertiary focus:z-10 sm:text-sm"
                placeholder="Email address"
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
          </div>
          <div className="flex items-center justify-between">
            <div className="flex items-center">
              <input
                id="remember-me"
                name="remember-me"
                type="checkbox"
                className="h-4 w-4 text-indigo-600 focus:ring-indigo-500
                  border-gray-300 rounded"
              />
              <label
                htmlFor="remember-me"
                className="ml-2 block text-sm text-gray-900"
              >
                Remember me
              </label>
            </div>
            <div className="text-sm">
              <a href="#" className="font-medium text-pink-primary">
                Forgot your password?
              </a>
            </div>
          </div>
          <div>
            <Button>Sign in</Button>
          </div>
        </form>
      </div>
    </div>
  );
};

export default Login;
