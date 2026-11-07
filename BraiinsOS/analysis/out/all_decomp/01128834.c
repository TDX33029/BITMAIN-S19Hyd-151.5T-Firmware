// FUN_01128834 @ 01128834 size=1080 calls_out=15 calls_in=3
// strings: BUG: there is no message in the submit share queueperform_notifyextended_job | SetGloba | SetGloba | lDefaultError

void FUN_01128834(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  int *local_90;
  int iStack_8c;
  int *local_88;
  int local_84;
  int local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int *local_70;
  int local_6c;
  int *local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((DAT_018d9130 < 3) || (bVar1 = false, DAT_018dd947 == '\0')) {
    if ((DAT_018d9130 < 3) && (DAT_018da67c != '\0')) {
      if (DAT_018da67c == '\x01') {
LAB_0112893c:
        DataMemoryBarrier(0xb);
        puVar13 = &DAT_018ae394;
        pcVar14 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar14 = DAT_018daa74, puVar13 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar14 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar12 = (**(code **)(puVar13 + 0x14))(pcVar14,DAT_018da674);
        if (iVar12 == 0) goto LAB_011289d8;
      }
      else if (DAT_018da67c != '\x02') {
        cVar2 = FUN_0169ac90(&DAT_018da674);
        if (cVar2 == '\0') goto LAB_011289d8;
        if (cVar2 != '\x02') goto LAB_0112893c;
      }
      local_48 = (int *)(DAT_018da674 + 0x1c);
      local_4c = 0;
      local_50 = (int *)&DAT_00000004;
      FUN_016948f0(&local_70,DAT_018da674,&local_50);
    }
    else {
LAB_011289d8:
      local_38 = DAT_018da674;
      local_48 = (int *)&SUB_00000002;
      if (DAT_018dd947 == '\0') {
        local_68 = (int *)(DAT_018da674 + 0x1c);
        local_6c = 0;
        local_70 = (int *)0x4;
        FUN_01694880(&local_50,&local_70);
      }
      local_70 = local_50;
      local_6c = local_4c;
      local_68 = local_48;
      iStack_64 = local_44;
      local_60 = local_40;
      uStack_5c = uStack_3c;
      iStack_58 = local_38;
      uStack_54 = uStack_34;
    }
    local_90 = local_70;
    iStack_8c = local_6c;
    local_88 = local_68;
    local_84 = iStack_64;
    local_80 = local_60;
    uStack_7c = uStack_5c;
    iStack_78 = iStack_58;
    uStack_74 = uStack_54;
    if (local_68 != (int *)&SUB_00000002) {
      iVar12 = iStack_64;
      if (((uint)local_68 & 1) != 0) {
        iVar12 = iStack_64 + (*(int *)(local_60 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_60 + 0x30))(iVar12,&local_90);
    }
    bVar1 = true;
    iVar6 = *param_4;
    iVar12 = param_4[1];
    if (iVar6 != 2) goto LAB_01128aa4;
LAB_01128888:
    uVar7 = *(uint *)(param_2 + 0x80);
    uVar4 = *(uint *)(param_2 + 0x8c);
    if (uVar4 == uVar7) {
      FUN_0113bc98();
      uVar7 = *(uint *)(param_2 + 0x80);
      uVar4 = *(uint *)(param_2 + 0x8c);
    }
    uVar9 = *(int *)(param_2 + 0x88) + uVar4;
    *(uint *)(param_2 + 0x8c) = uVar4 + 1;
    uVar8 = uVar9 - uVar7;
    if (uVar9 < uVar7) {
      uVar8 = uVar9;
    }
    piVar10 = (int *)(*(int *)(param_2 + 0x84) + uVar8 * 0x20);
    *piVar10 = 3;
    if (uVar4 + 1 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: there is no message in the submit share queueperform_notifyextended_job",
                   0x32,&DAT_01887920);
    }
  }
  else {
    iVar6 = *param_4;
    iVar12 = param_4[1];
    if (iVar6 == 2) goto LAB_01128888;
LAB_01128aa4:
    FUN_01128d34(&local_50,param_2,iVar6,iVar12);
    piVar10 = local_48;
    iVar12 = local_4c;
    if (local_50 != (int *)&DAT_00000011) {
      param_1[3] = local_44;
      param_1[4] = local_40;
      param_1[5] = uStack_3c;
      param_1[6] = local_38;
      param_1[7] = uStack_34;
      param_1[8] = uStack_30;
      param_1[9] = uStack_2c;
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = local_48;
      goto joined_r0x01128bbc;
    }
  }
  piVar5 = (int *)param_5[2];
  iVar6 = param_5[1];
  piVar11 = piVar5;
  if (&DAT_0000001f < piVar5) {
    piVar11 = (int *)&DAT_00000020;
  }
  if (piVar5 < &DAT_00000021) {
    if (piVar5 != (int *)0x0) goto LAB_01128b24;
    iVar3 = 1;
    piVar5 = (int *)0x0;
  }
  else {
    if (*(char *)(iVar6 + (int)piVar11) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar6,piVar5,0,piVar11,&DAT_01887930);
    }
LAB_01128b24:
    iVar3 = thunk_FUN_016d4a50(piVar11);
    piVar5 = piVar11;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,piVar11);
    }
  }
  local_50 = piVar5;
  local_4c = iVar3;
  FUN_016dd1aa(iVar3,iVar6,piVar11);
  local_48 = piVar11;
  uVar15 = FUN_01139000(&local_50);
  if ((*piVar10 == 1) && (piVar10[2] != 0)) {
    thunk_FUN_016d3fb4(piVar10[1]);
  }
  *(undefined8 *)(piVar10 + 1) = uVar15;
  piVar10[3] = param_3;
  piVar10[4] = iVar12;
  *piVar10 = 1;
  FUN_01128f08(param_1,param_2);
joined_r0x01128bbc:
  if (bVar1) {
    if (local_88 != (int *)&SUB_00000002) {
      iVar12 = local_84;
      if (((uint)local_88 & 1) != 0) {
        iVar12 = local_84 + (*(int *)(local_80 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_80 + 0x34))(iVar12,&local_90);
    }
    FUN_005c3320(&local_90);
  }
  if (*param_5 != 0) {
    thunk_FUN_016d3fb4(param_5[1]);
  }
  return;
}

