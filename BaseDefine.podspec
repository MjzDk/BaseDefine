

Pod::Spec.new do |s|


  s.name         = "BaseDefine"
  s.version      = "0.0.1"
  s.summary      = "baseDefine"


  s.homepage     = "https://github.com/MjzDk/BaseDefine.git"

  s.license      = { :type => "MIT", :file => "LICENSE" }


  s.author             = { "dangkai" => "15929996560@163.com" }

  s.platform     = :ios, "7.0"

  s.source       = { :git => "https://github.com/MjzDk/BaseDefine.git", :tag => "#{s.version}" }

  s.source_files  = "BaseDefine", "BaseDefine/*.{h}"


  s.requires_arc = true


end