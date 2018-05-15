#include <stdio.h>

int main(int t, int _, char* a) {
  if (t > 1) {                                      // #1
    if (t < 3) {                                    // #2
      main(-79, -13, a + main(-87, 1 - _, main(-86, 0, a + 1) + a));
    }
    if (t < _) {                                    // #3
      main(t + 1, _, a);
    }
    if (main(-94, -27 + t, a) && t == 2) {          // #4
      if (_ < 13) {                                 // #5
        return main(2, _ + 1, "%s %d %d\n");
      } else {
        return 9;
      }
    } else {
      return 16;
    }
  } else if (t < 0) {                             // #6
    if (t < -72) {                                // #7
      return main(_, t, "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/");
    } else if (t < -50) {                         // #8
      if (_ == *a) {                              // #9
        return putchar(a[31]);
      } else {
        return main(-65, _, a + 1);
      }
    } else {
      return main((*a == '/') + t, _, a + 1);
    }
  } else if (0 < t) {                             // #10
    return main(2, 2, "%s");
  } else if (*a != '/') {                         // #11
    main(0,
         main(-61,
              *a,
              "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry"),
         a + 1);
    return 1;
  } else {
    return 1;
  }
}
