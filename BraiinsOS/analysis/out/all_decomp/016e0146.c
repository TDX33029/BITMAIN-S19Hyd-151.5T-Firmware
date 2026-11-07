// FUN_016e0146 @ 016e0146 size=80 calls_out=3 calls_in=1
// strings: 

int FUN_016e0146(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 + 0x27U < 0x4f) {
    iVar1 = FUN_016d63a4(0);
    param_1 = param_1 + iVar1;
  }
  if (param_1 < -0x14) {
    param_1 = -0x14;
  }
  if (0x12 < param_1) {
    param_1 = 0x13;
  }
  iVar1 = FUN_016d695a(0,0,param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_016d2bc8();
    if (*piVar2 == 0xd) {
      *piVar2 = 1;
    }
    param_1 = -1;
  }
  return param_1;
}

