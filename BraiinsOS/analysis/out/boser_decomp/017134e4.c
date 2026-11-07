// FUN_017134e4 @ 017134e4 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_017134e4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if ((uint)(uVar2 < 4) <= -param_1[1]) {
    iVar1 = uVar2 - 4;
  }
  if (iVar1 == 0) {
    FUN_01713574(param_1 + 0x28,-(param_1[1] + (uint)(uVar2 >= 4)));
    if (param_1[2] == 3 && param_1[3] == 0) {
      return;
    }
    FUN_01712008(param_1 + 2);
    return;
  }
  if (iVar1 == 1) {
    FUN_01713488(param_1);
    return;
  }
  return;
}

