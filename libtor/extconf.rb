require 'mkmf'

["z", "m", "event", "ssl", "crypto", "pthread", "dl"].each do |l|
    have_library(l)
end
find_library("tor", "lanza_tor", 'tor-0.2.3.25')
create_makefile("Tor")
