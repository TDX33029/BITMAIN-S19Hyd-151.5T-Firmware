// FUN_00a62278 @ 00a62278 size=148 calls_out=5 calls_in=2
// strings: 

void FUN_00a62278(int *param_1)

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
  cVar1 = (char)param_1[0xb];
  if (cVar1 == '\x04') {
    FUN_00a6183c(param_1 + 0xc);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00a62170;
    }
    FUN_00a621b4(param_1 + 0xc);
  }
  if (param_1[4] != 0) {
    FUN_0084ec48();
  }
  piVar2 = param_1 + 3;
LAB_00a62170:
  FUN_009de9a0(piVar2);
  return;
}

