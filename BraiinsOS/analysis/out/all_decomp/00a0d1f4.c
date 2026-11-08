// FUN_00a0d1f4 @ 00a0d1f4 size=1204 calls_out=18 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

int FUN_00a0d1f4(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_268 [120];
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [8];
  int ***local_110;
  int local_10c;
  undefined8 local_a0;
  undefined4 *local_50;
  int **local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined4 ***local_30;
  undefined4 **local_2c;
  code *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0xe1) = 1;
    FUN_01656eb8(&local_120,&DAT_0186ba44,*param_1,param_1[1],param_1[2],&DAT_0186ba44);
    FUN_016dd1aa(&local_1f0,&local_120,0x50);
    FUN_016dd1aa(param_1 + 0x24,&local_1f0,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186ba54);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186ba54);
  }
  iVar4 = FUN_01657fc4(param_1 + 0x24,param_2);
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0x38) = 3;
    return iVar4;
  }
  FUN_00a07b4c(param_1 + 0x24);
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  piVar7 = (int *)param_1[0x22];
  FUN_016dd1aa(auStack_268,param_1 + 4,0x78);
  iVar4 = DAT_018d7d58;
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    puVar5 = (uint *)(DAT_018d7d58 + 8);
    do {
      uVar6 = *puVar5;
      piVar9 = (int *)(DAT_018d7d58 + 0xc);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar6 + 1;
    *(uint *)(iVar4 + 0xc) = *piVar9 + (uint)(0xfffffffe < uVar6);
  }
  piVar9 = piVar7 + 2;
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_00a0d31c;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_00a0d31c:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
  }
  uVar11 = FUN_00a6bd58(9,1);
  FUN_016dd1aa(auStack_118,auStack_268,0x78);
  puVar8 = (undefined4 *)0x0;
  local_11c = 0;
  local_120 = 5;
  local_a0 = uVar11;
  FUN_00a8a8ec(&local_1f0,piVar7[4],&local_120);
  if (local_1f0 != 8 || local_1ec != 0) {
    FUN_016dd1aa(&local_120,&local_1f0,0xd0);
    puVar8 = (undefined4 *)FUN_00a3648c(&local_120);
  }
  if ((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
    iVar4 = FUN_015bf3f8();
    if (iVar4 == 0) {
      *(undefined1 *)(piVar7 + 3) = 1;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar9,0x81,1);
  }
  if (puVar8 == (undefined4 *)0x0) goto LAB_00a0d5f8;
  local_50 = puVar8;
  if ((DAT_018d9130 < 4) && (DAT_018d9920 != '\0')) {
    if (DAT_018d9920 == '\x01') {
LAB_00a0d47c:
      DataMemoryBarrier(0xb);
      pcVar10 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar4 = (**(code **)(puVar2 + 0x14))(pcVar10,DAT_018d9918);
      if (iVar4 == 0) goto LAB_00a0d5dc;
    }
    else if (DAT_018d9920 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d9918);
      if (cVar3 == '\0') goto LAB_00a0d5dc;
      if (cVar3 != '\x02') goto LAB_00a0d47c;
    }
    local_10c = DAT_018d9918;
    if (*(int *)(DAT_018d9918 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c5d0);
    }
    local_1ec = *(int *)(DAT_018d9918 + 0x20);
    local_1e8 = *(undefined4 *)(DAT_018d9918 + 0x24);
    local_1e4 = *(undefined4 *)(DAT_018d9918 + 0x28);
    local_3c = &local_34;
    local_30 = &local_2c;
    local_44 = (int *)(DAT_018d9918 + 0x1c);
    local_1f0 = *local_44;
    local_2c = &local_50;
    local_4c = &local_40;
    local_110 = &local_4c;
    local_1e0 = 0;
    local_38 = &DAT_018abb78;
    local_34 = &DAT_0058a2a9;
    local_28 = FUN_00604528;
    local_48 = 1;
    local_11c = 0;
    local_120 = 1;
    DataMemoryBarrier(0xb);
    pcVar10 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_40 = &local_1f0;
    iVar4 = (**(code **)(puVar2 + 0x28))(pcVar10,&local_120);
    if (iVar4 != 0) {
      (**(code **)(puVar2 + 0x2c))(pcVar10,&local_120);
    }
  }
LAB_00a0d5dc:
  (**(code **)*local_50)();
LAB_00a0d5f8:
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar7;
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(piVar7);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 0;
}

