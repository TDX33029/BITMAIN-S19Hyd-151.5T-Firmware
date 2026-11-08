// FUN_013b1600 @ 013b1600 size=304 calls_out=5 calls_in=2
// strings: 

void FUN_013b1600(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_2;
  iVar5 = param_2[1];
  iVar4 = param_2[2];
  iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  if (*(byte *)(iVar1 + 0x20) < 6) {
    return;
  }
  iVar1 = FUN_0139f148(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  FUN_013b63b0(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = param_3;
  *(undefined1 *)(iVar1 + 0x20) = 5;
  iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  uVar2 = *(uint *)(iVar1 + 0xd4);
  iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  if (*(uint *)(iVar1 + 0xd8) < uVar2) {
    iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar7 = *(int *)(iVar1 + 0xd4);
    iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar3 = *(int *)(iVar1 + 0xd8);
    iVar1 = FUN_0139f148(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar7 = iVar7 - iVar3;
    if (!SBORROW4(*(int *)(iVar1 + 0x3c),iVar7)) {
      *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) - iVar7;
    }
    FUN_013a4374(param_1 + 8,iVar7,param_2,param_4);
  }
  FUN_013a388c(param_1 + 8,param_2,param_5);
  return;
}

