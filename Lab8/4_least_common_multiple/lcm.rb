#!/usr/bin/env ruby

def gcd(a, b)
  return a if b == 0;
  gcd(b, (a % b))
end

def lcm(a, b)
  return (a*b)/gcd(a,b)
end

if __FILE__ == $0
  a, b = gets.split().map(&:to_i)
  puts "#{lcm(a, b)}"
end
