# BannerView 一种无限循环展示的BannerView

###项目整体介绍
* 该控件主要用于循环展示的广告视图，其实现原理如下
  * 1.通过三个imageView 放在scrollView
    * 滑动时，暂停定时器。当滑动停止时，重启定时器
  * 2.通过重置所有图片，删除所有imageView，然后重新生成，放在scorllView 上
    * (效率可能不是很高，待优化，scorllView 始终位于正中)
  * 3.图片对象通过modle保存，可网络加载（需要SDWebImage）
