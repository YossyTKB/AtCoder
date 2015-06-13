#! /usr/bin/env ruby -Ku
# -*- mode:ruby; coding:utf-8 -*-
#

def calcKaijo(start,num)
	total=1
	(start-num+1..start).each do |no|
		total = total * no
	end
	return no
end

def selectNums(totalnums,selectnum)
	if (selectnum==0)
		return Array.new(0)
	end

	patternnum = 1;
	(totalnums-selectnum+1..totalnums).each do |n|
		patternnum = patternnum * n
	end

	patterns = Array.new(patternnum)
	patterns.each do |pattern|
		pattern = Array.new(selectnum)
	end

	selectnum.times do |keta|
		patternno=0
		(0..totalnums-1).each do |n|
			calcKaijo(totalnums-(keta+1),selectnums-1).times do
				if(!pattern[patternno].include(n))
					pattern[patternno].add(n)
					patternno += 1
				end
			end
		end
	end

end


if $0 == __FILE__
	line = gets()
	iv = line.split(" ")

	stop_num = iv[0].to_i()
	rosen_num = iv[1].to_i()

	all_rosen = Array.new()
	roesn_num.times do
		line = gets()
		roseninfo = line.split(" ")
		src_stop = roseninfo[0].to_i()
		dst_stop = roseninfo[1].to_i()
		interval = roseninfo[2].to_i()

		# バス停のIDを0オリジンに補正
		all_rosen.add([src_stop-1,dst_stop-1,interval])
	end


	mintime_table = Array.new(stop_num)
	src_stopno = 0
	mintime_table.foreach do |row|
		# 本停留所に済んでいると仮定した場合に、その他の各バス停まで最低何分かかるか算出し、テーブルに登録する

		row = Array.new(stop_num)

		(0..stop_num-1).each do |dst_stopno|

			candidata_times = Array.new()

			# 住んでいる停留所から目的の停留所までの全路線を算出する
			rosen_eachtimes = Array.new()

			# 中継する停車場の数のバリエーションは0〜N-2
			(0..N-2).each do |relay_stop_num|
				stops = Array.new()
				# 住んでいる停留所、目的の停留所をのぞく、relay_stop_num個分の停留所を抽出
				
				
			end

		end

		src_stopno += 1
	end

end


