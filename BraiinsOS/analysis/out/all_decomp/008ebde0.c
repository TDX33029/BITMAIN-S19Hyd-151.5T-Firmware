// FUN_008ebde0 @ 008ebde0 size=336 calls_out=3 calls_in=0
// strings: BUG: poisoned lock

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ebde0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *local_28;
  undefined1 local_24;
  
  piVar8 = (int *)(param_2 + 0x3d0);
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      goto LAB_008ebe0c;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_008ebe0c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_2 + 0x3d4) != '\0') {
      uVar3 = 0;
LAB_008ebee8:
      local_24 = (undefined1)uVar3;
      local_28 = piVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: poisoned lock",0x12,&local_28,&DAT_018667e4,&DAT_01866750);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x3dc);
    uVar5 = *(undefined4 *)(param_2 + 0x3e0);
    uVar6 = *(undefined4 *)(param_2 + 0x3e4);
    uVar7 = *(undefined4 *)(param_2 + 1000);
    *param_1 = *(undefined4 *)(param_2 + 0x3d8);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if (*(char *)(param_2 + 0x3d4) != '\0') goto LAB_008ebee8;
    uVar4 = *(undefined4 *)(param_2 + 0x3dc);
    uVar5 = *(undefined4 *)(param_2 + 0x3e0);
    uVar6 = *(undefined4 *)(param_2 + 0x3e4);
    uVar7 = *(undefined4 *)(param_2 + 1000);
    *param_1 = *(undefined4 *)(param_2 + 0x3d8);
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    if (uVar3 != 0) goto LAB_008ebe4c;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    *(undefined1 *)(param_2 + 0x3d4) = 1;
  }
LAB_008ebe4c:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar8,0x81,1,param_5);
    return;
  }
  return;
}

