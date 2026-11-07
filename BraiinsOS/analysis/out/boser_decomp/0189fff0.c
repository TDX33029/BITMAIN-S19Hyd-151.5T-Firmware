// FUN_0189fff0 @ 0189fff0 size=68 calls_out=1 calls_in=1
// strings: 

int FUN_0189fff0(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (int)param_2 - (int)param_1;
  if (0xf < uVar1) {
    iVar2 = FUN_012fa650();
    return iVar2;
  }
  if (param_2 == param_1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      if (-0x41 < *param_1) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return iVar2;
}

