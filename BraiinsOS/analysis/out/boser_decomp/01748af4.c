// FUN_01748af4 @ 01748af4 size=244 calls_out=8 calls_in=1
// strings: 

void FUN_01748af4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  iVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar4 = 0;
  if (*param_1 != 0 || iVar5 != 0) {
    iVar3 = 1;
    iVar5 = -(iVar1 + (uint)(uVar2 >= 4));
    if ((uint)(uVar2 < 4) <= (uint)-iVar1) {
      iVar3 = uVar2 - 4;
    }
    uVar4 = 1;
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        FUN_01748cc8(param_1 + 0x2a);
        if (param_1[4] != 3 || param_1[5] != 0) {
          FUN_01712008(param_1 + 4);
        }
      }
      goto LAB_01748b90;
    }
  }
  if ((uVar2 ^ 3) != 0 || iVar1 != 0) {
    FUN_01712008(param_1 + 2,uVar2 ^ 3,uVar4,iVar5);
  }
  FUN_01748cc8(param_1 + 0x28);
  if ((char)param_1[0x6c] == '\0') {
    FUN_01139b38(param_1[0x6d],param_1[0x6e]);
  }
LAB_01748b90:
  FUN_01748cc8(param_1 + 0x80);
  FUN_01703ff8(param_1 + 0xc9);
  if ((9 < *(byte *)(param_1 + 0xd9)) && (param_1[0xdb] != 0)) {
    thunk_FUN_01be4678(param_1[0xda]);
  }
  FUN_01a8c248(param_1 + 0xce);
  FUN_0142e6dc(param_1 + 0x70);
  if (param_1[0xc4] == 0) {
    FUN_0181eb40(param_1 + 0xc5);
    return;
  }
  return;
}

