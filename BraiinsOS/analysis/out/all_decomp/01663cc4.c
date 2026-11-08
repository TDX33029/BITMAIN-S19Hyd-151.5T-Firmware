// FUN_01663cc4 @ 01663cc4 size=1568 calls_out=6 calls_in=90
// strings: 

void FUN_01663cc4(int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint local_34;
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  
  piVar8 = (int *)(param_1 + 0x18);
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      goto LAB_01663cf4;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_01663cf4:
  pcVar4 = (char *)(param_1 + 0x1c);
  local_2c = piVar8;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      uVar11 = 0;
      goto LAB_01663db4;
    }
    iVar9 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar9;
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    if (*(char *)(param_1 + 0x1c) != '\0') {
LAB_01663db4:
      local_28 = (undefined1)uVar11;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad494);
    }
    iVar9 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar9;
    if (uVar11 != 0) goto LAB_01663d3c;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
LAB_01663d3c:
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar8,0x81,1);
  }
  if (iVar9 != 0) {
    return;
  }
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      goto LAB_01663e2c;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
LAB_01663e2c:
  local_34 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *pcVar4;
  }
  else {
    local_34 = FUN_015bf3f8();
    local_34 = local_34 ^ 1;
    cVar2 = *pcVar4;
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)local_34;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad4c4);
  }
  piVar7 = *(int **)(param_1 + 0x2c);
  if (piVar7 == (int *)0x0) {
LAB_016641b8:
    FUN_016647b4(piVar8,local_34 & 1,local_34,2);
    return;
  }
  piVar12 = (int *)(param_1 + 0x2c);
LAB_01663e8c:
  do {
    iVar9 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar9 + 1;
  if (iVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16642f0);
    (*pcVar1)();
  }
  piVar10 = *(int **)(param_1 + 0x2c);
  piVar7 = piVar10 + 6;
LAB_01663eb4:
  local_30 = piVar10;
  if (*piVar7 == 0) goto code_r0x01663ec0;
  ClearExclusiveLocal();
  if ((((local_34 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = 0;
  if (iVar9 == 2) {
    FUN_016d6968(0xf0,piVar8,0x81,1);
  }
LAB_01663f34:
  if (*piVar7 == 0) goto code_r0x01663f40;
  ClearExclusiveLocal();
  FUN_015bf680(piVar7);
  if ((DAT_018dd988 & 0x7fffffff) != 0) goto LAB_0166404c;
LAB_01663f60:
  uVar11 = 0;
  cVar2 = (char)piVar10[7];
  goto joined_r0x01663f68;
code_r0x01663ec0:
  bVar3 = (bool)hasExclusiveAccess(piVar7);
  if (bVar3) goto code_r0x01663ec0;
  goto LAB_01663eb4;
code_r0x01663ec0:
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)piVar10[7];
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar2 = (char)piVar10[7];
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar11;
    local_2c = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad4d4);
  }
  piVar5 = (int *)*piVar12;
joined_r0x01663ef4:
  if (piVar5 == piVar10) {
    FUN_016647b4(piVar8,local_34 & 1,piVar7,uVar11);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(&local_30);
      return;
    }
    return;
  }
  if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(piVar10 + 7) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = 0;
  if (iVar9 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(&local_30);
  }
  piVar7 = (int *)*piVar12;
  if (piVar7 == (int *)0x0) goto LAB_016641b8;
  goto LAB_01663e8c;
code_r0x01663f40:
  bVar3 = (bool)hasExclusiveAccess(piVar7);
  if (bVar3) goto code_r0x01663f40;
  goto LAB_01663f34;
code_r0x01663f40:
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
  if ((DAT_018dd988 & 0x7fffffff) == 0) goto LAB_01663f60;
LAB_0166404c:
  uVar11 = FUN_015bf3f8();
  uVar11 = uVar11 ^ 1;
  cVar2 = (char)piVar10[7];
joined_r0x01663f68:
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar11;
    local_2c = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad4e4);
  }
  do {
    if (*piVar8 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar8);
      if ((DAT_018dd988 & 0x7fffffff) != 0) goto LAB_01664098;
LAB_01663f98:
      local_34 = 0;
      cVar2 = *pcVar4;
      goto joined_r0x016640b8;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = 1;
  DataMemoryBarrier(0xb);
  if ((DAT_018dd988 & 0x7fffffff) == 0) goto LAB_01663f98;
LAB_01664098:
  local_34 = FUN_015bf3f8();
  local_34 = local_34 ^ 1;
  cVar2 = *pcVar4;
joined_r0x016640b8:
  if (cVar2 != '\0') {
    local_28 = (undefined1)local_34;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad4f4);
  }
  piVar5 = (int *)*piVar12;
  goto joined_r0x01663ef4;
}

