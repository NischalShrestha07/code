gsap.to("#nav", {
    backgroundColor: "aqua",
    duration: 1.5,
    height: "120px",
    scrollTrigger: {
        trigger: "#nav",
        scroller: "body",
        markers: true,
        start: "top -10%",
        end: "top -11%",
        scrub: 1
    }

})
gsap.to("#main", {
    backgroundColor: "black",
    scrollTrigger: {
        trigger: "#main",
        scroller: "body",
        markers: true,
        start: "top -50%",
        end: "top -80vh",
        scrub: 2

    }
})