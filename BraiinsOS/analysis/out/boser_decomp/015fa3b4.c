// FUN_015fa3b4 @ 015fa3b4 size=340 calls_out=2 calls_in=4
// strings: 

void FUN_015fa3b4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *unaff_r9;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  uVar4 = param_2[2];
  uVar1 = uVar4;
  if (uVar4 < 5) {
    uVar1 = 4;
  }
  iVar5 = param_1 + (uVar1 - 1 & 0xfffffff8);
  bVar10 = *(int *)(iVar5 + 8) != 0;
  uVar1 = 0;
  if (bVar10) {
    unaff_r9 = (uint *)(iVar5 + 0x14);
    uVar1 = *unaff_r9;
  }
  if (bVar10 && uVar1 != 0x80000006) {
    uVar3 = 4;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x80000000;
    }
    iVar6 = 0x10;
    iVar8 = 0x1c;
    iVar2 = 0x18;
    iVar7 = 4;
    switch(uVar3) {
    case 1:
      iVar7 = 8;
      if (*(uint *)(iVar5 + 0x18) < 2) goto switchD_015fa454_caseD_2;
      break;
    case 2:
    case 3:
      goto switchD_015fa454_caseD_2;
    case 4:
      FUN_0134bd64(uVar1,*(undefined4 *)(iVar5 + 0x18));
      iVar6 = 0x18;
      iVar8 = 0x24;
      iVar2 = 0x20;
    case 0:
      FUN_0134bd64(*(undefined4 *)(iVar5 + iVar2),*(undefined4 *)(iVar5 + iVar8));
      iVar7 = iVar6;
    }
    FUN_0134bd64(*(undefined4 *)((int)unaff_r9 + iVar7),((undefined4 *)((int)unaff_r9 + iVar7))[1]);
  }
switchD_015fa454_caseD_2:
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar5 + 8 + (uVar4 - 1 & 0xffffffcc) + 0x34);
  }
  if (param_1 != -1) {
    piVar9 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar9;
      bVar10 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar10);
    *piVar9 = iVar5 + -1;
    if (iVar5 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar1 = param_2[2];
    if (uVar1 < 5) {
      uVar1 = 4;
    }
    if ((uVar1 + (param_2[1] + uVar1 + 0x33 & -uVar1) + 7 & -uVar1) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

