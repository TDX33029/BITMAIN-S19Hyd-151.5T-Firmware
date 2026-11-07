// FUN_00a61fb4 @ 00a61fb4 size=156 calls_out=6 calls_in=1
// strings: 

void FUN_00a61fb4(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (param_1[2] == 0 && param_1[3] == 0) {
      return;
    }
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  piVar2 = param_1 + 2;
  cVar1 = (char)param_1[0x28];
  if (cVar1 == '\x04') {
    FUN_00a61e3c(param_1 + 0x2a);
  }
  else if (cVar1 != '\x03') {
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_00a61e08;
  }
  FUN_00668c84(param_1[0x26]);
  piVar2 = param_1 + 0x12;
LAB_00a61e08:
  FUN_00a5a6e0();
  FUN_009dee28(piVar2 + 0xf);
  FUN_01435814(piVar2 + 4);
  return;
}

