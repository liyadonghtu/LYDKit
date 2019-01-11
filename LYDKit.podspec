
Pod::Spec.new do |s|
  s.name             = 'LYDKit'
  s.version          = '0.1.0'
  s.summary          = 'iOS开发常用基础组件'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/liyadonghtu'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liyadonghtu' => '799715787@qq.com' }
  s.source           = { :git => 'https://github.com/liyadonghtu/LYDKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'LYDKit/Classes/**/*'

end
