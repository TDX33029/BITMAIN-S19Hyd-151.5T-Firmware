// FUN_01338710 @ 01338710 size=80 calls_out=1 calls_in=4
// strings: 

void FUN_01338710(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = uVar2 - 0x22;
  if (uVar2 < 0x22) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    iVar1 = 0x1c;
    if (uVar2 == 0x22) {
      iVar1 = 4;
    }
    uVar2 = *(uint *)((int)param_1 + iVar1);
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar2 = param_1[2];
    iVar1 = 8;
    if ((int)uVar2 < -0x7ffffffc) {
      return;
    }
  }
  FUN_0134bd64(uVar2,*(undefined4 *)((int)param_1 + iVar1 + 4));
  return;
}

