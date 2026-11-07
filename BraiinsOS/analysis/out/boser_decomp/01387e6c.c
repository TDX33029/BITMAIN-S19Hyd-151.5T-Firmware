// FUN_01387e6c @ 01387e6c size=304 calls_out=5 calls_in=4
// strings: 

void FUN_01387e6c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  if (*(byte *)(iVar1 + 0x20) < 6) {
    return;
  }
  iVar1 = FUN_01367cb8(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  FUN_0137ac50(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = param_3;
  *(undefined1 *)(iVar1 + 0x20) = 5;
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  uVar2 = *(uint *)(iVar1 + 0xdc);
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
  if (*(uint *)(iVar1 + 0xe0) < uVar2) {
    iVar1 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar7 = *(int *)(iVar1 + 0xdc);
    iVar1 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar3 = *(int *)(iVar1 + 0xe0);
    iVar1 = FUN_01367cb8(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar5,iVar4);
    iVar7 = iVar7 - iVar3;
    if (!SBORROW4(*(int *)(iVar1 + 0x3c),iVar7)) {
      *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) - iVar7;
    }
    FUN_0136d3c8(param_1 + 8,iVar7,param_2,param_4);
  }
  FUN_0136c108(param_1 + 8,param_2,param_5);
  return;
}

