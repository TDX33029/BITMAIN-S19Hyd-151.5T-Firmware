// FUN_011fdd28 @ 011fdd28 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_011fdd28(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x55555555 + 1;
    iVar1 = param_1[1];
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_011fde2c(iVar1);
      iVar1 = iVar1 + 0xc;
    }
    FUN_0134aee0(param_1[2],iVar3,4,0xc);
  }
  if (param_1[4] != 0) {
    FUN_011fdc34();
  }
  if (param_1[8] == 0) {
    return;
  }
  FUN_011fdc34(param_1 + 8);
  return;
}

