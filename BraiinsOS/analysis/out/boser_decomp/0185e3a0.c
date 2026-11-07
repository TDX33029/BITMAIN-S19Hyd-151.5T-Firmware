// FUN_0185e3a0 @ 0185e3a0 size=180 calls_out=3 calls_in=1
// strings: 

void FUN_0185e3a0(uint *param_1)

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
      FUN_0185e584(param_1 + 0x2a);
      if (param_1[4] == 3 && param_1[5] == 0) {
        return;
      }
      FUN_0185e46c(param_1 + 4);
      return;
    }
  }
  if (*puVar4 != 3 || param_1[3] != 0) {
    FUN_0185e46c(puVar4,param_1[3],uVar2,uVar3);
  }
  FUN_0185e584(param_1 + 0x28);
  if ((char)param_1[0x6c] == '\0') {
    FUN_01139b38(param_1[0x6d],param_1[0x6e]);
    return;
  }
  return;
}

