// FUN_010757c0 @ 010757c0 size=740 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010757c0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_stack_00000000;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_010757ec;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_010757ec:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    uVar5 = (uint)local_30 >> 8;
    local_30 = (int *)CONCAT31((int3)uVar5,(char)uVar10);
    local_34 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_34,&DAT_01883bb0,&DAT_01883de0);
  }
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    piVar8 = (int *)param_1[3];
    piVar7 = piVar8;
    do {
      piVar9 = piVar7 + 3;
      piVar6 = (int *)(*piVar7 + 0x14);
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
LAB_01075864:
        bVar2 = (bool)hasExclusiveAccess(piVar6);
        if (!bVar2) goto code_r0x01075870;
        *piVar6 = 2;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x10) + 0x18);
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 1;
        if (iVar4 == -1) {
          FUN_016d6968(0xf0,piVar7,0x81,1);
        }
        goto LAB_01075840;
      }
LAB_01075838:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01075840:
      piVar7 = piVar9;
    } while (piVar9 != piVar8 + iVar3 * 3);
  }
  local_34 = (int *)param_1[6];
  local_28 = param_1[7];
  param_1[7] = 0;
  local_24 = 0;
  local_2c = param_1 + 5;
  local_30 = local_34 + local_28 * 3;
  if (local_28 != 0) {
    do {
      piVar6 = (int *)*local_34;
      piVar7 = local_34 + 1;
      local_34 = local_34 + 3;
      piVar8 = piVar6 + 5;
      if (*piVar8 == 0) {
        DataMemoryBarrier(0xb);
LAB_0107592c:
        bVar2 = (bool)hasExclusiveAccess(piVar8);
        if (!bVar2) goto code_r0x01075938;
        *piVar8 = *piVar7;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar7 = (int *)(piVar6[4] + 0x18);
        do {
          iVar3 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 1;
        if (iVar3 == -1) {
          FUN_016d6968(0xf0,piVar7,0x81,1);
        }
        goto LAB_0107594c;
      }
LAB_01075944:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_0107594c:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fbaa00(piVar6);
      }
    } while (local_34 != local_30);
  }
  FUN_0063e6b8(&local_34);
  uVar5 = 0;
  if (param_1[4] == 0) {
    uVar5 = param_1[7];
  }
  DataMemoryBarrier(0xb);
  if (param_1[4] == 0) {
    uVar5 = (uint)(uVar5 == 0);
  }
  *(char *)(param_1 + 8) = (char)uVar5;
  DataMemoryBarrier(0xb);
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar3 == 2) {
    local_24 = (int)register0x00000054 + -0xc;
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
code_r0x01075870:
  if (*piVar6 != 0) goto LAB_01075838;
  goto LAB_01075864;
code_r0x01075938:
  if (*piVar8 != 0) goto LAB_01075944;
  goto LAB_0107592c;
}

