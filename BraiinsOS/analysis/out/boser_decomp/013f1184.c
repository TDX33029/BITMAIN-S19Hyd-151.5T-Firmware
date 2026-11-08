// FUN_013f1184 @ 013f1184 size=264 calls_out=8 calls_in=2
// strings: 

void FUN_013f1184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = FUN_01401870(*(undefined4 *)(param_7 + 0x84));
  if (iVar1 != 0) {
    FUN_0140a2dc(param_5,param_6,iVar1);
    FUN_01409c78(iVar1);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*(int *)(param_7 + 0x80) + 0x38) == '\0') {
    FUN_01401748(*(undefined4 *)(param_7 + 0x84));
  }
  else {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(*(int *)(param_7 + 0x80) + 0x38) = 0;
    uVar3 = *(uint *)(*(int *)(param_7 + 0x80) + 0x30);
    DataMemoryBarrier(0xb);
    iVar4 = *param_8;
    uVar6 = param_8[2];
    uVar5 = param_8[3];
    iVar1 = uVar6 - uVar3;
    uVar2 = *(undefined4 *)(param_7 + 0x84);
    iVar7 = uVar5 - (uVar3 > uVar6);
    *param_8 = iVar4 + -1;
    param_8[1] = param_8[1] - (uint)(iVar4 == 0);
    if (uVar5 == 0 && (uVar3 <= uVar6) <= uVar5) {
      iVar1 = 0;
      iVar7 = 0;
    }
    param_8[2] = iVar1;
    param_8[3] = iVar7;
    iVar1 = FUN_01401a24(uVar2);
    if (iVar1 != 0) {
      FUN_01406f68(param_1,param_2,param_3,iVar1);
    }
    FUN_01407120(param_4,*(undefined4 *)(param_7 + 0x84));
  }
  FUN_01406bcc(param_7);
  return;
}

