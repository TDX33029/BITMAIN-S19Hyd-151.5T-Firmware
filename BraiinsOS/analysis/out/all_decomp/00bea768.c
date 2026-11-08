// FUN_00bea768 @ 00bea768 size=360 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bea768(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *local_28;
  undefined1 local_24;
  
  piVar8 = (int *)(param_1 + 8);
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      goto LAB_00bea794;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_00bea794:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_24 = (undefined1)uVar9;
    local_28 = piVar8;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0035005e,0x1a,&local_28,&DAT_0187264c,&DAT_01871408);
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  *(undefined4 *)(param_1 + 0x24) = param_2[5];
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  if (*(int *)param_2[10] == 1) {
    *(int *)(param_1 + 0x40) = ((int *)param_2[10])[1];
  }
  if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar8,0x81,1,param_5);
    return;
  }
  return;
}

