## step1
最初は総当たりで書こうと思ったが、ペアの値をmapから引く方が個人的に直感的だと感じこの方法で実装した。（コードではなく人力でやる場合を想像した時に飲み込みやすかった）

## step2
mapの存在確認はokからより意図が伝わりやすいexistsにした。また、見つからなかった場合の戻り値はより一般的なnilにした。https://go.dev/wiki/CodeReviewComments
> the nil slice is the preferred style.

## step3
step2の方法で3回実装