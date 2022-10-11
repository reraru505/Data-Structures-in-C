package main

import ("fmt")

type node struct {

	val int32
	next *node

}

type linkedlist struct{

	head node
	counter int32

}

func (ll *linkedlist) prepend(val int32){

	var buffernode node

	buffernode.val = val

	if ll.counter == 0{
		ll.head.next = &buffernode
		ll.counter++
	}

	buffernode.next = ll.head.next
	ll.head.next = &buffernode
	ll.counter++

}

func (ll linkedlist)printlist(){

	headdotnext := ll.head.next
	var i int32

	for i = 1 ; i < ll.counter ; i++{
		fmt.Println(headdotnext.val)
		headdotnext = headdotnext.next
	}
}

func main(){

	var ll linkedlist

	var thenumber int32 = 23456

	ll.prepend(thenumber%10)
	ll.prepend(thenumber/10 %10)
	ll.prepend(thenumber/100 %10)
	ll.prepend(thenumber/1000 %10)
	ll.prepend(thenumber/10000 %10)

	ll.printlist();
}