#! /usr/bin/env ruby -Ku
# -*- mode:ruby; coding:utf-8 -*-

if $0 == __FILE__
	
	requirenum = 0;
	(1..9).each do |num1|
		(1..9).each do |num2|
			requirenum = requirenum + num1 * num2
		end
	end

	line = gets()
	sum_tk = line.to_i()

	wasureta = requirenum-sum_tk

	(1..9).each do |num1|
		(1..9).each do |num2|
			if (num1 * num2 == wasureta)
				printf("%d x %d\n",num1,num2)
			end
		end
	end

end


