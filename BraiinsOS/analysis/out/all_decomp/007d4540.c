// FUN_007d4540 @ 007d4540 size=3420 calls_out=26 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x007d4e28) */

void FUN_007d4540(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined4 *unaff_r9;
  bool bVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 *local_100;
  undefined1 *local_fc;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_a0;
  undefined1 *local_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 ***local_90;
  int local_8c;
  undefined4 **local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined *local_34;
  int *local_30;
  int local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x12)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x49) = 1;
    param_2[0x23] = param_2[4];
    param_2[0x24] = param_2[5];
    param_2[0x25] = param_2[6];
    param_2[0x26] = param_2[7];
    param_2[0x27] = param_2[8];
    param_2[0x28] = param_2[9];
    *(undefined1 *)(param_2 + 0x22) = 0;
    param_2[0x14] = param_2[0xe] + 4;
    param_2[10] = *param_2;
    param_2[0xb] = param_2[1];
    param_2[0xc] = param_2[2];
    param_2[0x10] = param_2[0xf];
  case 3:
    unaff_r9 = param_2 + 0x14;
    iVar4 = FUN_007d67b8(unaff_r9,param_3);
    if (iVar4 == 0) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x12) = 3;
      return;
    }
    param_2[0x11] = iVar4;
    if (*(char *)(param_2 + 0x22) == '\x03') {
      cVar2 = *(char *)(param_2 + 0x21);
      bVar15 = cVar2 == '\x03';
      if (bVar15) {
        cVar2 = *(char *)(param_2 + 0x18);
      }
      if (bVar15 && cVar2 == '\x04') {
        FUN_0163c790(param_2 + 0x19);
        if (param_2[0x1a] != 0) {
          (**(code **)(param_2[0x1a] + 0xc))(param_2[0x1b]);
        }
      }
    }
    *(undefined1 *)((int)param_2 + 0x49) = 0;
    iVar4 = param_2[0x11];
    local_a0 = param_2[0x23];
    local_9c = (undefined1 *)param_2[0x24];
    local_98 = param_2[0x25];
    uStack_94 = param_2[0x26];
    local_90 = (undefined4 ***)param_2[0x27];
    local_8c = param_2[0x28];
    FUN_00833640(unaff_r9);
    *(undefined1 *)((int)param_2 + 0x81) = 0;
    piVar8 = (int *)(iVar4 + 0x14);
    uVar3 = param_2[0x15];
    uVar5 = param_2[0x16];
    param_2[0x1f] = piVar8;
    param_2[0x1a] = uVar3;
    param_2[0x1b] = uVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185f9e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185f9e0);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x81)) {
    case 0:
      uVar3 = param_2[0x1a];
      uVar5 = param_2[0x1b];
      piVar8 = (int *)param_2[0x1f];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185fa70);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185fa70);
    case 3:
      goto switchD_007d46ac_caseD_3;
    case 4:
      goto switchD_007d46ac_caseD_4;
    }
    break;
  case 5:
    goto switchD_007d4564_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    case 0:
      piVar8 = (int *)param_2[0x14];
      iVar9 = param_2[0x15];
      goto LAB_007d4eec;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185fa40);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185fa40);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x23)) {
      case 0:
        iVar6 = param_2[0x16];
        iVar4 = param_2[0x17];
        iVar9 = param_2[0x18];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185f9b0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0185f9b0);
      case 3:
        uVar17 = *(undefined8 *)(param_2 + 0x21);
        goto LAB_007d52a4;
      }
    }
    goto LAB_007d4f14;
  case 7:
switchD_007d4564_caseD_7:
    iVar4 = FUN_01657fc4(param_2 + 0x18,*param_3);
    if (iVar4 != 0) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x12) = 7;
      return;
    }
    FUN_00a07b4c(param_2 + 0x18);
    iVar4 = param_2[0x14];
    puVar14 = (undefined1 *)param_2[0x15];
    unaff_r9 = (undefined4 *)param_2[0x16];
LAB_007d54b0:
    pcVar13 = (char *)param_2[0x11];
    if (*pcVar13 == '\0') {
      bVar15 = (bool)hasExclusiveAccess(pcVar13);
      if (!bVar15) goto LAB_007d54d8;
      *pcVar13 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_007d54d8:
      FUN_01280da8(pcVar13);
    }
    FUN_0128236c(pcVar13);
    FUN_0163af68(pcVar13,1,pcVar13);
    goto LAB_007d54f8;
  }
  param_2[0x18] = uVar3;
  param_2[0x19] = uVar5;
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0x1c] = piVar8;
  param_2[0x1d] = 0xf;
  do {
    iVar4 = *piVar8;
    iVar6 = piVar8[1];
    *(undefined1 *)((int)param_2 + 0xa9) = 0;
    param_2[0x25] = uVar3;
    param_2[0x26] = uVar5;
    param_2[0x27] = iVar6;
    param_2[0x29] = iVar4 + 8;
switchD_007d46ac_caseD_3:
    local_fc = (undefined1 *)((int)param_2 + 0x81);
    uVar16 = FUN_007d6eb8(param_2 + 0x21,param_3);
    iVar4 = (int)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) {
      *local_fc = 3;
LAB_007d4fdc:
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x12) = 4;
      return;
    }
    param_2[0x1e] = iVar4;
    *(undefined1 *)(param_2 + 0x20) = 1;
    if (*(char *)((int)param_2 + 0xa9) == '\x03') {
      uVar3 = param_2[0x23];
      unaff_r9 = (undefined4 *)param_2[0x24];
      if ((code *)*unaff_r9 != (code *)0x0) {
        (*(code *)*unaff_r9)(uVar3);
      }
      if (unaff_r9[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      iVar4 = param_2[0x1e];
      *(undefined1 *)(param_2 + 0x2a) = 0;
    }
    if (iVar4 == 0) {
      puVar14 = (undefined1 *)0x0;
      *(undefined1 *)(param_2 + 0x20) = 0;
      goto LAB_007d4de4;
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = param_2[0x1c];
switchD_007d46ac_caseD_4:
    local_fc = (undefined1 *)((int)param_2 + 0x81);
    uVar16 = FUN_007d6c40(param_2 + 0x22,param_3);
    puVar10 = (undefined4 *)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) {
      *local_fc = 4;
      goto LAB_007d4fdc;
    }
    if (*(char *)(param_2 + 0x24) == '\x04') {
      if (*(char *)((int)param_2 + 0xb9) == '\x03') {
        uVar3 = param_2[0x27];
        unaff_r9 = (undefined4 *)param_2[0x28];
        if ((code *)*unaff_r9 != (code *)0x0) {
          (*(code *)*unaff_r9)(uVar3);
        }
        if (unaff_r9[1] != 0) {
          thunk_FUN_016d3fb4(uVar3);
        }
        *(undefined1 *)(param_2 + 0x2e) = 0;
      }
    }
    else if (*(char *)(param_2 + 0x24) == '\x03') {
      FUN_00a07b4c(param_2 + 0x26);
    }
    if (puVar10 == (undefined4 *)0x0) {
      iVar4 = param_2[0x1d];
      param_2[0x1d] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        puVar14 = (undefined1 *)param_2[0x1e];
        *(undefined1 *)(param_2 + 0x20) = 0;
        goto LAB_007d4de4;
      }
    }
    else {
      if ((DAT_018d9130 < 4) && (DAT_018d93f8 != '\0')) {
        unaff_r9 = (undefined4 *)&DAT_018ae394;
        if (DAT_018d93f8 == '\x01') {
LAB_007d49dc:
          DataMemoryBarrier(0xb);
          pcVar13 = s_SetGloba_00414c05;
          puVar11 = unaff_r9;
          if ((DAT_018dd984 == 2) &&
             (pcVar13 = DAT_018daa74, puVar11 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar13 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
          }
          iVar4 = (*(code *)puVar11[5])(pcVar13,DAT_018d93f0);
          if (iVar4 == 0) goto LAB_007d4b40;
        }
        else if (DAT_018d93f8 != '\x02') {
          cVar2 = FUN_0169ac90(&DAT_018d93f0);
          if (cVar2 == '\0') goto LAB_007d4b40;
          if (cVar2 != '\x02') goto LAB_007d49dc;
        }
        if (*(int *)(DAT_018d93f0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185fa80);
        }
        local_3c = &local_34;
        local_40 = &local_f0;
        local_e8 = *(undefined4 *)(DAT_018d93f0 + 0x24);
        local_e4 = *(undefined4 *)(DAT_018d93f0 + 0x28);
        local_44 = (undefined4 *)(DAT_018d93f0 + 0x1c);
        local_f0 = *local_44;
        local_4c = &local_40;
        local_e0 = 0;
        local_30 = &local_2c;
        local_38 = &DAT_018abb78;
        local_48 = 1;
        local_2c = param_2[0x1c] + 4;
        local_34 = &DAT_00578bae;
        local_90 = &local_4c;
        local_28 = &DAT_00f5c97c;
        local_9c = (undefined1 *)0x0;
        local_a0 = 1;
        DataMemoryBarrier(0xb);
        pcVar13 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, unaff_r9 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
        }
        local_ec = *(int *)(DAT_018d93f0 + 0x20);
        local_8c = DAT_018d93f0;
        iVar4 = (*(code *)unaff_r9[10])(pcVar13,&local_a0);
        if (iVar4 != 0) {
          (*(code *)unaff_r9[0xb])(pcVar13,&local_a0);
        }
      }
LAB_007d4b40:
      iVar4 = param_2[0x1d];
      param_2[0x1d] = iVar4 + -1;
      if (iVar4 + -1 == 0) break;
    }
    if ((DAT_018d9130 < 4) && (DAT_018d9404 != '\0')) {
      if (DAT_018d9404 == '\x01') {
LAB_007d4be0:
        puVar11 = (undefined4 *)&DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar13 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, puVar11 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
        }
        iVar4 = (*(code *)puVar11[5])(pcVar13,DAT_018d93fc);
        if (iVar4 == 0) goto LAB_007d4d74;
      }
      else if (DAT_018d9404 != '\x02') {
        cVar2 = FUN_0169ac90(&DAT_018d93fc);
        if (cVar2 == '\0') goto LAB_007d4d74;
        if (cVar2 != '\x02') goto LAB_007d4be0;
      }
      if (*(int *)(DAT_018d93fc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185fa90);
      }
      local_e8 = *(undefined4 *)(DAT_018d93fc + 0x24);
      local_e4 = *(undefined4 *)(DAT_018d93fc + 0x28);
      local_44 = (undefined4 *)(DAT_018d93fc + 0x1c);
      local_f0 = *local_44;
      local_3c = &local_34;
      unaff_r9 = &DAT_00f5c97c;
      local_30 = &local_2c;
      local_40 = &local_f0;
      local_4c = &local_40;
      local_2c = param_2[0x1c] + 4;
      local_90 = &local_4c;
      local_e0 = 0;
      local_38 = &DAT_018abb78;
      local_48 = 1;
      local_34 = &DAT_0056f1f5;
      local_28 = &DAT_00f5c97c;
      local_9c = (undefined1 *)0x0;
      local_a0 = 1;
      DataMemoryBarrier(0xb);
      pcVar13 = s_SetGloba_00414c05;
      puVar11 = (undefined4 *)&DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, puVar11 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar13 = DAT_018daa74 + (DAT_018daa78[2] - 1 & 0xfffffff8) + 8;
      }
      local_ec = *(int *)(DAT_018d93fc + 0x20);
      local_8c = DAT_018d93fc;
      iVar4 = (*(code *)puVar11[10])(pcVar13,&local_a0);
      if (iVar4 != 0) {
        (*(code *)puVar11[0xb])(pcVar13,&local_a0);
      }
    }
LAB_007d4d74:
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)*puVar10)(puVar10);
    }
    if ((undefined4 *)param_2[0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_2[0x1e])();
    }
    uVar3 = param_2[0x18];
    uVar5 = param_2[0x19];
    piVar8 = (int *)param_2[0x1c];
    *(undefined1 *)(param_2 + 0x20) = 0;
  } while( true );
  puVar14 = (undefined1 *)param_2[0x1e];
  *(undefined1 *)(param_2 + 0x20) = 0;
  if (puVar10 != (undefined4 *)0x0) {
    (**(code **)*puVar10)(puVar10);
  }
LAB_007d4de4:
  local_100 = param_2 + 0x18;
  *(undefined2 *)(param_2 + 0x20) = 0x100;
  FUN_007d6a38(local_100);
  iVar4 = param_2[0x14];
  if (puVar14 == (undefined1 *)0x0) {
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(param_2[0x15]);
    }
    FUN_01656eb8(&local_a0,&DAT_0185f9f0,0,0,50000000,&DAT_0185f9f0);
    FUN_016dd1aa(&local_f0,&local_a0,0x50);
    FUN_016dd1aa(param_2 + 0x14,&local_f0,0x50);
switchD_007d4564_caseD_5:
    iVar4 = FUN_01657fc4(param_2 + 0x14,*param_3);
    if (iVar4 != 0) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x12) = 5;
      return;
    }
    FUN_00a07b4c(param_2 + 0x14);
    *(undefined1 *)(param_2 + 0x24) = 0;
    iVar9 = param_2[0x10];
    piVar8 = (int *)(param_2[0x11] + 0x14);
    param_2[0x14] = piVar8;
    param_2[0x15] = iVar9;
LAB_007d4eec:
    iVar4 = piVar8[1];
    iVar6 = *piVar8 + 8;
    param_2[0x16] = iVar6;
    param_2[0x17] = iVar4;
    param_2[0x18] = iVar9;
    *(undefined1 *)(param_2 + 0x23) = 0;
LAB_007d4f14:
    param_2[0x19] = iVar6;
    param_2[0x1a] = iVar4;
    param_2[0x1b] = iVar9;
    if (iVar9 < 0) {
      uVar3 = 0;
LAB_007d4f2c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar9);
    }
    uVar12 = 0;
    if (iVar9 == 0) {
      iVar6 = 1;
      iVar4 = 0;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(iVar9);
      if (iVar6 == 0) {
        uVar3 = 1;
        goto LAB_007d4f2c;
      }
      iVar4 = iVar9;
    }
    param_2[0x1c] = iVar4;
    param_2[0x1d] = iVar6;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x20] = iVar9;
    if (iVar9 != 0) {
      do {
        param_2[0x1f] = uVar12 + 1;
        FUN_007e5ad0(&local_a0,0x20,param_2[0x1a]);
        if ((char)local_a0 != '\0') {
          puVar14 = local_9c;
LAB_007d538c:
          unaff_r9 = param_2 + 0x23;
          if (param_2[0x1c] != 0) {
            thunk_FUN_016d3fb4(param_2[0x1d]);
          }
          iVar4 = -0x80000000;
          *(undefined1 *)unaff_r9 = 1;
          if (*(char *)(param_2 + 0x23) != '\x03') goto LAB_007d5400;
          goto LAB_007d53bc;
        }
        iVar4 = *(int *)(*(int *)param_2[0x19] + 0xc);
        uVar17 = (**(code **)(iVar4 + 0x10))
                           (*(int *)(*(int *)param_2[0x19] + 8) +
                            (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8,local_a0._1_1_,1);
        *(undefined8 *)(param_2 + 0x21) = uVar17;
LAB_007d52a4:
        (**(code **)((int)((ulonglong)uVar17 >> 0x20) + 0xc))(&local_a0,(int)uVar17,param_3);
        iVar6 = local_98;
        puVar14 = local_9c;
        iVar4 = local_a0;
        if (local_a0 == -0x7fffffff) {
          *(undefined1 *)(param_2 + 0x23) = 3;
          goto LAB_007d5360;
        }
        uVar3 = param_2[0x21];
        puVar10 = (undefined4 *)param_2[0x22];
        pcVar7 = (code *)*puVar10;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar3);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar3);
        }
        if (iVar4 == -0x80000000) goto LAB_007d538c;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_0185f9c0);
        }
        uVar1 = *puVar14;
        iVar6 = param_2[0x1e];
        if (iVar6 == param_2[0x1c]) {
          FUN_006029c0();
        }
        *(undefined1 *)(param_2[0x1d] + iVar6) = uVar1;
        param_2[0x1e] = iVar6 + 1;
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(puVar14);
        }
        uVar12 = param_2[0x1f];
      } while (uVar12 < (uint)param_2[0x20]);
    }
    iVar4 = param_2[0x1c];
    puVar14 = (undefined1 *)param_2[0x1d];
    unaff_r9 = (undefined4 *)param_2[0x1e];
    *(undefined1 *)(param_2 + 0x23) = 1;
    if (iVar4 == -0x7fffffff) {
LAB_007d5360:
      local_100 = param_2 + 0x24;
      *(undefined1 *)local_100 = 3;
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x12) = 6;
      return;
    }
    if (*(char *)(param_2 + 0x23) == '\x03') {
LAB_007d53bc:
      uVar3 = param_2[0x21];
      puVar10 = (undefined4 *)param_2[0x22];
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar3);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      if (param_2[0x1c] != 0) {
        thunk_FUN_016d3fb4(param_2[0x1d]);
      }
    }
LAB_007d5400:
    local_100 = param_2 + 0x24;
    *(undefined1 *)local_100 = 1;
    if (iVar4 != -0x80000000) {
      param_2[0x14] = iVar4;
      param_2[0x15] = puVar14;
      param_2[0x16] = unaff_r9;
      if ((undefined1 *)param_2[0xc] != &DAT_3b9aca00) {
        FUN_01656eb8(&local_a0,&DAT_0185fa00,param_2[10],param_2[0xb],(undefined1 *)param_2[0xc],
                     &DAT_0185fa00);
        FUN_016dd1aa(&local_f0,&local_a0,0x50);
        FUN_016dd1aa(param_2 + 0x18,&local_f0,0x50);
        goto switchD_007d4564_caseD_7;
      }
      goto LAB_007d54b0;
    }
  }
  else if (iVar4 != 0) {
    thunk_FUN_016d3fb4(param_2[0x15]);
  }
  pcVar13 = (char *)param_2[0x11];
  if (*pcVar13 == '\0') {
    bVar15 = (bool)hasExclusiveAccess(pcVar13);
    if (!bVar15) goto LAB_007d520c;
    *pcVar13 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_007d520c:
    FUN_01280da8(pcVar13);
  }
  FUN_0128236c(pcVar13);
  FUN_0163af68(pcVar13,1,pcVar13);
  iVar4 = -0x80000000;
LAB_007d54f8:
  *param_1 = iVar4;
  param_1[1] = (int)puVar14;
  param_1[2] = (int)unaff_r9;
  *(undefined1 *)((int)param_2 + 0x49) = 0;
  *(undefined1 *)(param_2 + 0x12) = 1;
  return;
}

