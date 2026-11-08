// FUN_00811e04 @ 00811e04 size=1908 calls_out=15 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_00811e04(ulonglong *param_1,int *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *unaff_r9;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  uint uVar14;
  bool bVar15;
  ulonglong uVar16;
  uint local_a8;
  undefined1 *local_a4;
  uint local_a0;
  undefined4 *local_94;
  undefined4 ***local_90;
  undefined4 local_8c;
  int *local_88;
  undefined4 **local_84;
  undefined **local_80;
  undefined *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_60;
  undefined4 **local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined *local_50;
  code *local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined8 local_40;
  int local_38;
  undefined4 ****local_30;
  int local_2c;
  
  piVar6 = param_2 + 2;
  piVar7 = param_2 + 6;
  if (*param_2 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x22]) {
    case '\0':
      iVar11 = param_2[1];
      iVar5 = *(int *)param_2[2];
      iVar4 = ((int *)param_2[2])[1];
      *(undefined1 *)(param_2 + 0x21) = 0;
      param_2[3] = iVar5;
      param_2[4] = iVar4;
      param_2[5] = iVar11;
LAB_00811eec:
      *(undefined1 *)(param_2 + 0x11) = 0;
      param_2[6] = iVar5;
      param_2[7] = iVar4;
      param_2[8] = iVar11;
      param_2[9] = 0x8c;
      param_2[10] = 4;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dec);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dec);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar5 = param_2[3];
        iVar4 = param_2[4];
        iVar11 = param_2[5];
        goto LAB_00811eec;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864d9c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864d9c);
      }
    }
    FUN_0081292c(&local_78,piVar7);
    puVar12 = local_70;
    local_94 = local_74;
    puVar10 = local_78;
    if (local_78 == (undefined4 *)0x80000001) goto LAB_00811f28;
    FUN_00812744(piVar7);
    if (puVar10 == (undefined4 *)0x80000000) {
LAB_00811f50:
      *(undefined1 *)(param_2 + 0x21) = 1;
LAB_00811f5c:
      iVar11 = param_2[1];
      if ((DAT_018d9130 < 4) && (DAT_018d9890 != '\0')) {
        puVar12 = &DAT_018ae394;
        pcVar9 = s_SetGloba_00414c05;
        if (DAT_018d9890 == '\x01') {
LAB_00811fd0:
          DataMemoryBarrier(0xb);
          pcVar3 = pcVar9;
          puVar1 = puVar12;
          if (DAT_018dd984 == 2) {
            pcVar3 = DAT_018daa74;
            puVar1 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar3 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar4 = (**(code **)(puVar1 + 0x14))(pcVar3,DAT_018d9888);
          if (iVar4 == 0) goto LAB_00812310;
        }
        else if (DAT_018d9890 != '\x02') {
          cVar2 = FUN_0169ac90(&DAT_018d9888);
          if (cVar2 == '\0') goto LAB_00812310;
          if (cVar2 != '\x02') goto LAB_00811fd0;
        }
        local_2c = DAT_018d9888;
        if (*(int *)(DAT_018d9888 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864dfc);
        }
        local_74 = *(undefined4 **)(DAT_018d9888 + 0x20);
        local_70 = *(undefined **)(DAT_018d9888 + 0x24);
        local_6c = *(undefined4 *)(DAT_018d9888 + 0x28);
        local_88 = (int *)(DAT_018d9888 + 0x1c);
        local_78 = (undefined4 *)*local_88;
        local_5c = &local_58;
        local_68 = 0;
        local_60 = &DAT_0058e743;
        local_44 = FUN_00604528;
        local_48 = &local_94;
        local_7c = &DAT_018abb78;
        local_80 = &local_60;
        local_84 = &local_78;
        local_4c = FUN_00fac0c8;
        local_58 = (undefined4 *)(iVar11 + 8);
        local_90 = &local_84;
        local_30 = &local_90;
        local_50 = &DAT_0034386c;
        local_54 = &DAT_00f5c97c;
        local_8c = 1;
        local_40._4_4_ = (undefined4 *)0x0;
        local_40._0_4_ = 1;
        DataMemoryBarrier(0xb);
        if (DAT_018dd984 == 2) {
          pcVar9 = DAT_018daa74;
          puVar12 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar11 = (**(code **)(puVar12 + 0x28))(pcVar9,&local_40);
        if (iVar11 != 0) {
          (**(code **)(puVar12 + 0x2c))(pcVar9,&local_40);
        }
      }
LAB_00812310:
      iVar11 = 1;
      uVar8 = 0x80000000;
      goto LAB_0081231c;
    }
    local_50 = puVar12;
    local_54 = local_94;
    local_58 = puVar10;
    FUN_00832adc(&local_40,&local_58);
    *(undefined1 *)(param_2 + 0x21) = 1;
    local_94 = local_40._4_4_;
    if ((uint)local_40 == 0x80000000) goto LAB_00811f5c;
    uVar8 = (uint)local_40;
    if ((uint)local_40 == 0x80000001) goto LAB_008121a8;
    *(undefined1 *)(param_2 + 0x22) = 1;
    iVar11 = local_38;
    puVar10 = local_40._4_4_;
    unaff_r9 = local_40._4_4_;
    if ((uint)local_40 == 0x80000002) goto LAB_00811e40;
  }
  else {
    unaff_r9 = (undefined4 *)FUN_01657fc4(piVar6,*param_3);
LAB_00811e40:
    if (((uint)unaff_r9 & 1) != 0) {
LAB_00811e48:
      *(int *)param_1 = -0x7fffffff;
      return;
    }
    iVar11 = param_2[0x2a];
    piVar13 = (int *)param_2[0x2b];
    if (*param_2 == 0) {
      cVar2 = (char)param_2[0x22];
      bVar15 = cVar2 == '\x03';
      if (bVar15) {
        cVar2 = (char)param_2[0x21];
      }
      if (bVar15 && cVar2 == '\x03') {
        FUN_00812744(piVar7);
      }
    }
    else {
      FUN_00a07b4c(piVar6);
    }
    while( true ) {
      *(undefined1 *)(param_2 + 0x22) = 0;
      *param_2 = 0;
      param_2[1] = iVar11;
      param_2[2] = (int)piVar13;
      iVar4 = *piVar13;
      iVar5 = piVar13[1];
      *(undefined1 *)(param_2 + 0x21) = 0;
      *(undefined1 *)(param_2 + 0x11) = 0;
      param_2[10] = 4;
      param_2[3] = iVar4;
      param_2[4] = iVar5;
      param_2[5] = iVar11;
      param_2[9] = 0x8c;
      param_2[6] = iVar4;
      param_2[7] = iVar5;
      param_2[8] = iVar11;
      FUN_0081292c(&local_78,piVar7,param_3);
      puVar12 = local_70;
      local_94 = local_74;
      puVar10 = local_78;
      if (local_78 == (undefined4 *)0x80000001) break;
      FUN_00812744(piVar7);
      if (puVar10 == (undefined4 *)0x80000000) goto LAB_00811f50;
      local_50 = puVar12;
      local_54 = local_94;
      local_58 = puVar10;
      FUN_00832adc(&local_40,&local_58);
      unaff_r9 = local_40._4_4_;
      *(undefined1 *)(param_2 + 0x21) = 1;
      uVar8 = (uint)local_40;
      local_94 = local_40._4_4_;
      if ((uint)local_40 == 0x80000001) goto LAB_008121a8;
      if ((uint)local_40 == 0x80000000) goto LAB_00811f5c;
      *(undefined1 *)(param_2 + 0x22) = 1;
      iVar11 = local_38;
      puVar10 = local_40._4_4_;
      if ((uint)local_40 != 0x80000002) goto LAB_00812320;
      if (((uint)local_40._4_4_ & 1) != 0) goto LAB_00811e48;
      iVar11 = param_2[0x2a];
      piVar13 = (int *)param_2[0x2b];
      if (*param_2 == 0) {
        cVar2 = (char)param_2[0x22];
        bVar15 = cVar2 == '\x03';
        if (bVar15) {
          cVar2 = (char)param_2[0x21];
        }
        if (bVar15 && cVar2 == '\x03') {
          FUN_00812744(piVar7);
        }
      }
      else {
        FUN_00a07b4c(piVar6);
      }
    }
LAB_00811f28:
    *(undefined1 *)(param_2 + 0x21) = 3;
    uVar8 = 0x80000001;
    local_94 = unaff_r9;
LAB_008121a8:
    iVar11 = 3;
LAB_0081231c:
    *(char *)(param_2 + 0x22) = (char)iVar11;
    puVar10 = local_94;
  }
LAB_00812320:
  *(uint *)param_1 = uVar8;
  *(undefined4 **)((int)param_1 + 4) = puVar10;
  *(int *)(param_1 + 1) = iVar11;
  if (uVar8 != 0x80000000) {
    if (uVar8 == 0x80000001) {
      *(int *)param_1 = -0x7fffffff;
    }
    return;
  }
  local_58 = puVar10;
  iVar4 = (*(code *)param_2[0x2c])(&local_58);
  iVar11 = 0;
  if (iVar4 != 0) {
    iVar11 = param_2[0x28];
  }
  if (iVar4 == 0 || iVar11 == 0) {
    *(int *)param_1 = -0x80000000;
    *(undefined4 **)((int)param_1 + 4) = puVar10;
    return;
  }
  uVar8 = param_2[0x24];
  uVar14 = param_2[0x25];
  iVar4 = param_2[0x26];
  param_2[0x28] = iVar11 + -1;
  FUN_0165a798(&local_40);
  local_a0 = (uint)local_40 + uVar8;
  local_a8 = (int)local_40._4_4_ + CARRY4((uint)local_40,uVar8) + uVar14;
  if ((int)uVar14 < 0 !=
      (int)(((uint)local_40._4_4_ ^ local_a8) & ~((uint)local_40._4_4_ ^ uVar14)) < 0) {
LAB_00812404:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  local_a4 = (undefined1 *)(iVar4 + local_38);
  if (&DAT_3b9aca00 <= local_a4) {
    bVar15 = 0xfffffffe < local_a0;
    local_a0 = local_a0 + 1;
    uVar8 = local_a8 + bVar15;
    if ((int)((local_a8 ^ uVar8) & ~local_a8) < 0) goto LAB_00812404;
    local_a4 = local_a4 + -1000000000;
    local_a8 = uVar8;
  }
  uVar16 = FUN_0164ec90(&DAT_01864d8c);
  iVar11 = 0x180;
  if ((uVar16 & 1) != 0) {
    iVar11 = 0xb8;
  }
  local_40 = uVar16;
  if (*(undefined1 **)((int)(uVar16 >> 0x20) + iVar11 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01864d8c);
  }
  if (*param_2 == 0) {
    cVar2 = (char)param_2[0x22];
    bVar15 = cVar2 == '\x03';
    if (bVar15) {
      cVar2 = (char)param_2[0x21];
    }
    if (bVar15 && cVar2 == '\x03') {
      FUN_00812744(piVar7);
    }
  }
  else {
    FUN_00a07b4c(piVar6);
  }
  *piVar6 = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *param_2 = 1;
  param_2[0x12] = (int)local_a4;
  param_2[0x10] = local_a0;
  *(ulonglong *)(param_2 + 0xe) = uVar16;
  param_2[0x11] = local_a8;
  FUN_00811e04(&local_40,param_2,param_3);
  uVar16 = local_40;
  iVar4 = (int)local_40._4_4_;
  iVar11 = (uint)local_40;
  (**(code **)*puVar10)(puVar10);
  if (iVar11 == -0x7ffffffe) {
    *(int *)param_1 = -0x80000000;
    *(int *)((int)param_1 + 4) = iVar4;
    return;
  }
  *param_1 = uVar16;
  *(int *)(param_1 + 1) = local_38;
  return;
}

