// FUN_007db370 @ 007db370 size=1008 calls_out=12 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_007db370(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int **local_8c;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  undefined **local_7c;
  undefined *local_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined *local_60;
  int *local_5c;
  undefined *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *local_4c;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int ***local_30;
  int local_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x115)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x45);
    iVar8 = param_1[0x44];
    if ((DAT_018d9130 < 3) && (DAT_018d93d4 != '\0')) {
      if (DAT_018d93d4 == '\x01') {
LAB_007db418:
        DataMemoryBarrier(0xb);
        pcVar11 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar11 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar4 = (**(code **)(puVar2 + 0x14))(pcVar11,DAT_018d93cc);
        if (iVar4 == 0) goto LAB_007db600;
      }
      else if (DAT_018d93d4 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d93cc);
        if (cVar3 == '\0') goto LAB_007db600;
        if (cVar3 != '\x02') goto LAB_007db418;
      }
      local_2c = DAT_018d93cc;
      local_70 = *(int *)(DAT_018d93cc + 0x20);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e944);
      }
      local_7c = &local_60;
      uStack_6c = *(undefined4 *)(DAT_018d93cc + 0x24);
      uStack_68 = *(undefined4 *)(DAT_018d93cc + 0x28);
      local_84 = (int *)(DAT_018d93cc + 0x1c);
      local_74 = *local_84;
      local_54 = 7;
      if (cVar1 == '\x01') {
        local_54 = 6;
      }
      local_80 = &local_74;
      local_64 = 0;
      local_78 = &DAT_018abb78;
      local_58 = &DAT_00342f1b;
      if (cVar1 != '\x01') {
        local_58 = &DAT_00342f21;
      }
      local_5c = &local_50;
      local_60 = &DAT_00598f49;
      local_44 = &DAT_0157d360;
      local_48 = &local_58;
      local_4c = &DAT_00f5c97c;
      local_50 = iVar8 + 0x50;
      local_8c = &local_80;
      local_30 = &local_8c;
      local_88 = 1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar11 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar4 = (**(code **)(puVar2 + 0x28))(pcVar11,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar11,&local_40);
      }
    }
LAB_007db600:
    iVar8 = *(int *)(iVar8 + 0x6c);
    uVar12 = 2;
    pcVar11 = (char *)thunk_FUN_016d4a50(2);
    if (pcVar11 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,2);
    }
    *(undefined2 *)(param_1 + 5) = 0x1500;
    iVar8 = iVar8 + 8;
    pcVar11[1] = '\0';
    *pcVar11 = cVar1;
    param_1[0x40] = iVar8;
    param_1[0x41] = 2;
    *param_1 = 2;
    param_1[1] = pcVar11;
    param_1[2] = 2;
    param_1[3] = FUN_007d4260;
    param_1[4] = 1;
    *(undefined1 *)(param_1 + 0x42) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e954);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e954);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x42)) {
    case 0:
      iVar8 = param_1[0x40];
      uVar12 = param_1[0x41];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185f9d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185f9d0);
    case 3:
      goto switchD_007db5d0_caseD_3;
    }
  }
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  puVar13 = (undefined4 *)((uint)&local_40 | 4);
  *puVar13 = *param_1;
  puVar13[1] = uVar5;
  puVar13[2] = uVar6;
  puVar13[3] = uVar7;
  puVar13[4] = uVar9;
  puVar13[5] = uVar10;
  param_1[8] = &DAT_3b9aca00;
  param_1[9] = local_40;
  param_1[10] = local_3c;
  param_1[0xb] = uStack_38;
  param_1[0xc] = local_34;
  param_1[0xd] = local_30;
  param_1[0xe] = local_2c;
  param_1[0xf] = uStack_28;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x14] = iVar8;
  param_1[0x15] = uVar12;
switchD_007db5d0_caseD_3:
  FUN_007d4540(&local_74,param_1 + 6,param_2);
  iVar8 = local_74;
  if (local_74 == -0x7fffffff) {
    *(undefined1 *)(param_1 + 0x42) = 3;
    *(undefined1 *)((int)param_1 + 0x115) = 3;
    return 1;
  }
  FUN_007d42e4(param_1 + 6);
  *(undefined1 *)(param_1 + 0x42) = 1;
  if (iVar8 == -0x80000000) {
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    return 0;
  }
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(local_70,0);
  }
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0;
}

