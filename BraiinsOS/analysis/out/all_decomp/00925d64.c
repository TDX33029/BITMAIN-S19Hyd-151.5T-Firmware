// FUN_00925d64 @ 00925d64 size=948 calls_out=8 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00925d64(int *param_1,uint *param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 **local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined **local_a0;
  undefined *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_80;
  int **ppiStack_7c;
  int *piStack_78;
  code *pcStack_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  int local_2c;
  
  uVar5 = *param_2;
  uVar3 = 0x15;
  if ((int)uVar5 < 0) {
    uVar3 = uVar5 ^ 0x80000000;
  }
  if (uVar3 == 0x10) {
LAB_00925d98:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
joined_r0x00925e60:
    if (uVar5 != 0x80000011) {
      FUN_008f7448(param_2);
    }
  }
  else {
    if (uVar3 == 0x11) {
      puVar8 = (undefined4 *)param_2[1];
      local_40 = *puVar8;
      local_3c = puVar8[1];
      uStack_38 = puVar8[2];
      uStack_34 = puVar8[3];
      FUN_009065f0(&local_70,&local_40);
      if (local_70 == 2) {
        *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
        *param_1 = 2;
      }
      else {
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = iStack_68;
        param_1[3] = local_64;
        param_1[4] = local_60;
        param_1[5] = iStack_5c;
        param_1[6] = local_58;
        param_1[7] = local_54;
        param_1[8] = local_50;
        param_1[9] = local_4c;
        param_1[10] = local_48;
        param_1[0xb] = iStack_44;
      }
      thunk_FUN_016d3fb4(puVar8);
      goto joined_r0x00925e60;
    }
    if (uVar3 == 0x12) goto LAB_00925d98;
    FUN_009065f0(&local_70);
    if (local_70 == 2) {
      *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
      *param_1 = 2;
    }
    else {
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = iStack_68;
      param_1[3] = local_64;
      param_1[4] = local_60;
      param_1[5] = iStack_5c;
      param_1[6] = local_58;
      param_1[7] = local_54;
      param_1[8] = local_50;
      param_1[9] = local_4c;
      param_1[10] = local_48;
      param_1[0xb] = iStack_44;
    }
  }
  if (*param_1 == 2) {
    return;
  }
  local_70 = *param_1;
  local_6c = param_1[1];
  iStack_68 = param_1[2];
  local_64 = param_1[3];
  local_60 = param_1[4];
  iStack_5c = param_1[5];
  local_58 = param_1[6];
  local_54 = param_1[7];
  local_50 = param_1[8];
  local_4c = param_1[9];
  local_48 = param_1[10];
  iStack_44 = param_1[0xb];
  if ((3 < DAT_018d9130) || (DAT_018d97e8 == '\0')) goto LAB_00926070;
  if (DAT_018d97e8 == '\x01') {
LAB_00925f00:
    DataMemoryBarrier(0xb);
    pcVar6 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar4 = (**(code **)(puVar1 + 0x14))(pcVar6,DAT_018d97e0);
    if (iVar4 == 0) goto LAB_00926070;
  }
  else if (DAT_018d97e8 != '\x02') {
    cVar2 = FUN_0169ac90(&DAT_018d97e0);
    if (cVar2 == '\0') goto LAB_00926070;
    if (cVar2 != '\x02') goto LAB_00925f00;
  }
  local_2c = DAT_018d97e0;
  if (*(int *)(DAT_018d97e0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867d00);
  }
  local_94 = *(undefined4 *)(DAT_018d97e0 + 0x20);
  local_90 = *(undefined4 *)(DAT_018d97e0 + 0x24);
  local_8c = *(undefined4 *)(DAT_018d97e0 + 0x28);
  local_a4 = &local_98;
  local_a0 = &local_80;
  local_a8 = (undefined4 *)(DAT_018d97e0 + 0x1c);
  local_98 = *local_a8;
  ppiStack_7c = &piStack_78;
  pcStack_74 = FUN_0168c724;
  local_b0 = &local_a4;
  local_88 = 0;
  local_9c = &DAT_018abb78;
  local_80 = &DAT_005713b3;
  local_ac = 1;
  local_3c = 0;
  local_40 = 1;
  DataMemoryBarrier(0xb);
  pcVar6 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  piStack_78 = &local_70;
  local_30 = (undefined1 *)&local_b0;
  iVar4 = (**(code **)(puVar1 + 0x28))(pcVar6,&local_40);
  if (iVar4 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar6,&local_40);
  }
LAB_00926070:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  if (local_64 != 0) {
    thunk_FUN_016d3fb4(local_60);
  }
  if ((local_4c & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_48);
  }
  iVar4 = local_54;
  puVar8 = (undefined4 *)(local_54 + 4);
  for (iVar7 = local_50; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  if (local_58 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  return;
}

