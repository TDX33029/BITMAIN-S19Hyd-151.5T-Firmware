// FUN_0141fa98 @ 0141fa98 size=92 calls_out=5 calls_in=2
// strings: 

void FUN_0141fa98(int *param_1)

{
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  FUN_0141fc44(param_1);
  if (param_1[0x58] != 2) {
    FUN_014060c0();
  }
  FUN_0141fdd4(param_1 + 0x5b);
  if ((char)param_1[0x62] != '\x03') {
    FUN_0069f218(param_1 + 0x5e);
  }
  FUN_0148c594(param_1[99]);
  return;
}

