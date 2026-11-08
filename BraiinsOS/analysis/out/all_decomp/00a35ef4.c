// FUN_00a35ef4 @ 00a35ef4 size=1136 calls_out=12 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00a35ef4(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *local_2a0;
  undefined **local_29c;
  undefined *local_298;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_134;
  int local_130;
  undefined4 local_118;
  undefined4 local_114;
  int ***local_108;
  int local_104;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *local_44;
  int **local_40;
  undefined4 local_3c;
  int *local_38;
  undefined *local_34;
  undefined4 ***local_30;
  undefined4 **local_2c;
  code *local_28;
  
  iVar11 = DAT_018d7d58;
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    puVar5 = (uint *)(DAT_018d7d58 + 8);
    do {
      uVar6 = *puVar5;
      piVar9 = (int *)(DAT_018d7d58 + 0xc);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar6 + 1;
    *(uint *)(iVar11 + 0xc) = *piVar9 + (uint)(0xfffffffe < uVar6);
  }
  iVar11 = param_3[2];
  if (iVar11 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    piVar9 = (int *)(param_3[1] + 200);
    iVar7 = iVar11;
    do {
      iVar7 = iVar7 + -1;
      iVar8 = *piVar9 + iVar8;
      piVar9 = piVar9 + 0x34;
    } while (iVar7 != 0);
  }
  iVar7 = *param_1;
  FUN_016dd1aa(&local_2a0,param_2,0xa8);
  local_1f8 = *param_3;
  uStack_1f4 = param_3[1];
  uStack_1f0 = param_3[2];
  piVar9 = (int *)(iVar7 + 8);
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_00a35fbc;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_00a35fbc:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
  }
  FUN_016dd1aa(&local_1e8,&local_2a0,0xb4);
  local_134 = iVar11;
  local_130 = iVar8;
  uVar12 = FUN_00a6bd58(2,1);
  uVar13 = FUN_00a6bd58(3,iVar11);
  uVar14 = FUN_00a6bd58(4,iVar8);
  FUN_016dd1aa(&local_118,param_2,0xa8);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  local_70 = uVar12;
  uStack_68 = uVar13;
  local_60 = uVar14;
  FUN_00a8a8ec(&local_1e8,*(undefined4 *)(iVar7 + 0x10),&local_118);
  puVar4 = (undefined4 *)0x0;
  if (local_1e8 != 8 || local_1e4 != 0) {
    FUN_016dd1aa(&local_118,&local_1e8,0xd0);
    puVar4 = (undefined4 *)FUN_00a3648c(&local_118);
  }
  if ((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
    iVar11 = FUN_015bf3f8();
    if (iVar11 == 0) {
      *(undefined1 *)(iVar7 + 0xc) = 1;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar9,0x81,1);
  }
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  local_44 = puVar4;
  if ((3 < DAT_018d9130) || (DAT_018d9908 == '\0')) goto LAB_00a362cc;
  if (DAT_018d9908 == '\x01') {
LAB_00a3617c:
    DataMemoryBarrier(0xb);
    pcVar10 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar11 = (**(code **)(puVar2 + 0x14))(pcVar10,DAT_018d9900);
    if (iVar11 == 0) goto LAB_00a362cc;
  }
  else if (DAT_018d9908 != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d9900);
    if (cVar3 == '\0') goto LAB_00a362cc;
    if (cVar3 != '\x02') goto LAB_00a3617c;
  }
  local_104 = DAT_018d9900;
  if (*(int *)(DAT_018d9900 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c530);
  }
  local_1e4 = *(int *)(DAT_018d9900 + 0x20);
  local_1e0 = *(undefined4 *)(DAT_018d9900 + 0x24);
  local_1dc = *(undefined4 *)(DAT_018d9900 + 0x28);
  local_29c = &local_34;
  local_30 = &local_2c;
  local_38 = (int *)(DAT_018d9900 + 0x1c);
  local_1e8 = *local_38;
  local_2c = &local_44;
  local_40 = &local_2a0;
  local_108 = &local_40;
  local_1d8 = 0;
  local_298 = &DAT_018abb78;
  local_34 = &DAT_00574fc4;
  local_28 = FUN_00604528;
  local_3c = 1;
  local_114 = 0;
  local_118 = 1;
  DataMemoryBarrier(0xb);
  pcVar10 = s_SetGloba_00414c05;
  puVar2 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_2a0 = &local_1e8;
  iVar11 = (**(code **)(puVar2 + 0x28))(pcVar10,&local_118);
  if (iVar11 != 0) {
    (**(code **)(puVar2 + 0x2c))(pcVar10,&local_118);
  }
LAB_00a362cc:
  (**(code **)*local_44)();
  return;
}

