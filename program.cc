#include <cassert>
#include <cstdio>

int func(int t, int _, const char* a) {
  if (t > 1) {
    if (t < 3) {
      assert(t == 2);
      func(-79, -13, a + func(-87, 1 - _, func(-86, 0, a + 1) + a));
    }
    if (t < _) {
      func(t + 1, _, a);
    }
    if (func(-94, -27 + t, a) && t == 2) {
      if (_ < 13) {
        return func(2, _ + 1, "%s %d %d\n");
      } else {
        return 9;
      }
    } else {
      return 16;
    }
  } else if (t < 0) {
    if (t < -72) {
      return func(_, t, "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n"
                        "+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d"
                        "'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw"
                        "' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n"
                        "'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'"
                        "c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+"
                        "}{rl#'{n' ')# }'+}##(!!/");
    } else if (t < -50) {
      if (_ == *a) {
        return putchar(a[31]);
      } else {
        return func(-65, _, a + 1);
      }
    } else {
      return func((*a == '/') + t, _, a + 1);
    }
  } else if (t > 0) {
    assert(t == 1);
    return func(2, 2, "%s");
  } else if (*a != '/') {
    assert(t == 0);
    func(0,
         func(-61,
              *a,
              "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry"),
         a + 1);
    return 1;
  } else {
    assert(t == 0 && *a == '/');
    return 1;
  }
}

int main() {
  func(1, 0, "");
  return 0;
}
