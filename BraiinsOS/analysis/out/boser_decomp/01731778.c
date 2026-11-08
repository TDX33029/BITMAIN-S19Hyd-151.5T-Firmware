// FUN_01731778 @ 01731778 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_01731778(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar4 = param_1 + 2;
  if (uVar2 != 0 || uVar3 != 0) {
    uVar2 = *puVar4;
    iVar1 = 1;
    uVar3 = -(param_1[3] + (uint)(uVar2 >= 4));
    if ((uint)(uVar2 < 4) <= -param_1[3]) {
      iVar1 = uVar2 - 4;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      FUN_01731870(param_1 + 0x2a);
      if (param_1[4] == 3 && param_1[5] == 0) {
        return;
      }
      FUN_0172f9c0(param_1 + 4);
      return;
    }
  }
  if (*puVar4 != 3 || param_1[3] != 0) {
    FUN_0172f9c0(puVar4,param_1[3],uVar2,uVar3);
  }
  FUN_01731870(param_1 + 0x28);
  FUN_01705ae8(param_1 + 0x6c);
  return;
}

