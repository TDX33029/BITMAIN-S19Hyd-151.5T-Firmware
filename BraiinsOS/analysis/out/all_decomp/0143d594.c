// FUN_0143d594 @ 0143d594 size=112 calls_out=4 calls_in=1
// strings: 

void FUN_0143d594(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if ((uint)(uVar2 < 4) <= -param_1[1]) {
    iVar1 = uVar2 - 4;
  }
  if (iVar1 == 0) {
    FUN_0145cbd0(param_1 + 0x5e,-(param_1[1] + (uint)(uVar2 >= 4)));
    FUN_0143d644(param_1 + 0x28);
    if (param_1[2] == 3 && param_1[3] == 0) {
      return;
    }
    FUN_0142bf80(param_1 + 2);
    return;
  }
  if (iVar1 == 1) {
    FUN_0143d4c0(param_1);
    return;
  }
  return;
}

