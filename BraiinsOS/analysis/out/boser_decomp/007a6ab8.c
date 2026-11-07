// FUN_007a6ab8 @ 007a6ab8 size=228 calls_out=2 calls_in=3
// strings: 

void FUN_007a6ab8(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *unaff_r5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  bVar8 = *(int *)(param_1 + 8) != 0;
  uVar1 = 0;
  if (bVar8) {
    unaff_r5 = (uint *)(param_1 + 0x14);
    uVar1 = *unaff_r5;
  }
  if (bVar8 && uVar1 != 0x80000006) {
    uVar5 = 4;
    if ((int)uVar1 < 0) {
      uVar5 = uVar1 ^ 0x80000000;
    }
    iVar6 = 0x10;
    iVar7 = 0x1c;
    iVar4 = 0x18;
    iVar3 = 4;
    switch(uVar5) {
    case 1:
      iVar3 = 8;
      if (*(uint *)(param_1 + 0x18) < 2) goto switchD_007a6b54_caseD_2;
      break;
    case 2:
    case 3:
      goto switchD_007a6b54_caseD_2;
    case 4:
      FUN_019bb7e0(uVar1,*(undefined4 *)(param_1 + 0x18));
      iVar6 = 0x18;
      iVar7 = 0x24;
      iVar4 = 0x20;
    case 0:
      FUN_019bb7e0(*(undefined4 *)(param_1 + iVar4),*(undefined4 *)(param_1 + iVar7));
      iVar3 = iVar6;
    }
    FUN_019bb7e0(*(undefined4 *)((int)unaff_r5 + iVar3),((undefined4 *)((int)unaff_r5 + iVar3))[1]);
  }
switchD_007a6b54_caseD_2:
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

