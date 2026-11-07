// FUN_008ac610 @ 008ac610 size=620 calls_out=6 calls_in=1
// strings: 

void FUN_008ac610(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_60 [56];
  int *local_28;
  undefined1 local_24;
  
  piVar9 = (int *)(param_2 + 8);
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_008ac644;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_008ac644:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0xc);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_24 = (undefined1)uVar10;
    local_28 = piVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01863b6c,&DAT_01886a4c);
  }
  FUN_008ac8bc(param_2 + 0x10,1);
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    uVar5 = *(int *)(param_2 + 0x18) + 1;
    piVar4 = (int *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) * 0x3c);
    iVar8 = *piVar4;
    uVar7 = uVar5 - *(uint *)(param_2 + 0x10);
    if (uVar5 < *(uint *)(param_2 + 0x10)) {
      uVar7 = uVar5;
    }
    *(uint *)(param_2 + 0x18) = uVar7;
    if (iVar8 != -0x80000000) {
      iVar3 = piVar4[1];
      FUN_016dd1aa(auStack_60,(int)piVar4 + 5,0x37);
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
      FUN_016dd1aa((int)param_1 + 5,auStack_60,0x37);
      *(char *)(param_1 + 1) = (char)iVar3;
      *param_1 = iVar8;
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x4c);
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = 0;
  }
  else {
    if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = 0;
  }
  if (iVar8 == 2) {
    FUN_016d6968(0xf0,piVar9,0x81,1);
  }
  *param_1 = -0x80000000;
  *(bool *)(param_1 + 1) = cVar1 != '\0';
  return;
}

