// FUN_01539fc0 @ 01539fc0 size=140 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01539fc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  uVar2 = 0xffffffff;
  uVar3 = 0;
  iVar4 = uVar6 * 0x14;
  do {
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_01577618(iVar5,param_2,param_3);
    uVar2 = uVar2 + 1;
    iVar4 = iVar4 + -0x14;
    iVar5 = iVar5 + 0x14;
  } while (iVar1 == 0);
  if (uVar2 < uVar6) {
    do {
      if (iVar4 == 0) goto LAB_0153a040;
      iVar1 = FUN_01577618(iVar5,param_2,param_3);
      iVar5 = iVar5 + 0x14;
      iVar4 = iVar4 + -0x14;
    } while (iVar1 == 0);
  }
  else {
LAB_0153a040:
    uVar3 = 1;
  }
  return uVar3;
}

