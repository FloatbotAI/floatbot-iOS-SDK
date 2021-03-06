
Pod::Spec.new do |s|

  s.name         = "floatbot"
  s.version      = "1.0.9"
  s.summary      = "Integrates floatbot with the iOS app."

  s.description  = <<-DESC
			Integrates floatbot with the iOS app.
                   DESC

  s.source       = { :git => "https://github.com/FloatbotAI/floatbot-iOS-SDK.git" }
  s.social_media_url   = "https://twitter.com/floatbot_ai"
  s.homepage = "https://github.com/FloatbotAI/floatbot-iOS-SDK"
  s.author = { "Jhanvi" => "jhanvi@jpctechnologies.net" }
  s.platform = :ios, "8.0"
  s.ios.deployment_target = '8.0'
  s.resources  = "flbAssets.bundle"
  s.dependency "SDWebImage"
  s.dependency "AFNetworking"
  s.vendored_frameworks = "floatbot.framework"
end




