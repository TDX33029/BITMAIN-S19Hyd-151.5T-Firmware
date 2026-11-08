// FUN_00a35ad4 @ 00a35ad4 size=928 calls_out=12 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00a35ad4(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  int ***local_110;
  int local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
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
  
  iVar10 = DAT_018d7d58;
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    puVar5 = (uint *)(DAT_018d7d58 + 8);
    do {
      uVar6 = *puVar5;
      piVar9 = (int *)(DAT_018d7d58 + 0xc);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar6 + 1;
    *(uint *)(iVar10 + 0xc) = *piVar9 + (uint)(0xfffffffe < uVar6);
  }
  iVar10 = *param_1;
  piVar9 = (int *)(iVar10 + 8);
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_00a35b40;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_00a35b40:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
  }
  local_d8 = FUN_00a6bd58(5,1);
  local_118 = *param_2;
  uStack_114 = param_2[1];
  local_110 = (int ***)param_2[2];
  local_10c = param_2[3];
  uStack_108 = param_2[4];
  local_104 = param_2[5];
  uStack_100 = param_2[6];
  uStack_fc = param_2[7];
  uStack_f8 = param_2[8];
  uStack_f4 = param_2[9];
  local_f0 = param_2[10];
  uStack_ec = param_2[0xb];
  uStack_e8 = param_2[0xc];
  uStack_e4 = param_2[0xd];
  uStack_e0 = param_2[0xe];
  uStack_dc = param_2[0xf];
  puVar8 = (undefined4 *)0x0;
  local_11c = 0;
  local_120 = 4;
  FUN_00a8a8ec(&local_1f0,*(undefined4 *)(iVar10 + 0x10));
  if (local_1f0 != 8 || local_1ec != 0) {
    FUN_016dd1aa(&local_120,&local_1f0,0xd0);
    puVar8 = (undefined4 *)FUN_00a3648c(&local_120);
  }
  if ((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
    iVar4 = FUN_015bf3f8();
    if (iVar4 == 0) {
      *(undefined1 *)(iVar10 + 0xc) = 1;
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 0;
  if (iVar10 == 2) {
    FUN_016d6968(0xf0,piVar9,0x81,1);
  }
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  local_50 = puVar8;
  if ((3 < DAT_018d9130) || (DAT_018d98fc == '\0')) goto LAB_00a35df0;
  if (DAT_018d98fc == '\x01') {
LAB_00a35ca0:
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar10 = (**(code **)(puVar2 + 0x14))(pcVar7,DAT_018d98f4);
    if (iVar10 == 0) goto LAB_00a35df0;
  }
  else if (DAT_018d98fc != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d98f4);
    if (cVar3 == '\0') goto LAB_00a35df0;
    if (cVar3 != '\x02') goto LAB_00a35ca0;
  }
  if (*(int *)(DAT_018d98f4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c4e0);
  }
  local_1ec = *(int *)(DAT_018d98f4 + 0x20);
  local_1e8 = *(undefined4 *)(DAT_018d98f4 + 0x24);
  local_1e4 = *(undefined4 *)(DAT_018d98f4 + 0x28);
  local_3c = &local_34;
  local_30 = &local_2c;
  local_44 = (int *)(DAT_018d98f4 + 0x1c);
  local_1f0 = *local_44;
  local_2c = &local_50;
  local_4c = &local_40;
  local_110 = &local_4c;
  local_1e0 = 0;
  local_38 = &DAT_018abb78;
  local_34 = &DAT_0058c1b7;
  local_28 = FUN_00604528;
  local_48 = 1;
  local_11c = 0;
  local_120 = 1;
  DataMemoryBarrier(0xb);
  pcVar7 = s_SetGloba_00414c05;
  puVar2 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_10c = DAT_018d98f4;
  local_40 = &local_1f0;
  iVar10 = (**(code **)(puVar2 + 0x28))(pcVar7,&local_120);
  if (iVar10 != 0) {
    (**(code **)(puVar2 + 0x2c))(pcVar7,&local_120);
  }
LAB_00a35df0:
  (**(code **)*local_50)();
  return;
}

