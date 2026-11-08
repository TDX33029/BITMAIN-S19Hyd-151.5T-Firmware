// FUN_00b14ab8 @ 00b14ab8 size=1956 calls_out=14 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

bool FUN_00b14ab8(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined4 ****local_8c;
  undefined4 local_88;
  int *local_84;
  int **local_80;
  int ****local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined *local_6c;
  int *local_68;
  undefined4 *local_64;
  code *local_60;
  int *local_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int ***local_4c;
  undefined **local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int ****local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    iVar11 = param_1[0x3a];
    param_1[3] = param_1[1];
    piVar12 = param_1 + 0x3d;
    *piVar12 = param_1[0x3c];
    param_1[2] = *param_1;
    iVar4 = *(int *)(iVar11 + 0x5a0);
    iVar17 = param_1[0x3b];
    bVar22 = iVar4 == 1;
    if (bVar22) {
      iVar4 = *(int *)(iVar11 + 0x5a4);
    }
    if (!bVar22 || iVar4 != param_1[0x3c]) {
      if ((DAT_018d9130 < 3) && (DAT_018da0d0 != '\0')) {
        puVar20 = &DAT_018ae394;
        if (DAT_018da0d0 == '\x01') {
LAB_00b14bb0:
          DataMemoryBarrier(0xb);
          pcVar15 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar15 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar4 = (**(code **)(puVar20 + 0x14))(pcVar15,DAT_018da0c8);
          if (iVar4 == 0) goto LAB_00b14d94;
        }
        else if (DAT_018da0d0 != '\x02') {
          cVar1 = FUN_0169ac90(&DAT_018da0c8);
          if (cVar1 == '\0') goto LAB_00b14d94;
          if (cVar1 != '\x02') goto LAB_00b14bb0;
        }
        local_2c = DAT_018da0c8;
        local_7c = *(int *****)(DAT_018da0c8 + 0x20);
        if (local_7c == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f5a0);
        }
        local_78 = *(undefined **)(DAT_018da0c8 + 0x24);
        local_84 = (int *)(DAT_018da0c8 + 0x1c);
        local_80 = (int **)*local_84;
        local_4c = &local_80;
        local_74 = *(undefined4 *)(DAT_018da0c8 + 0x28);
        local_48 = &local_6c;
        local_8c = &local_4c;
        local_70 = 0;
        local_44 = (int *)&DAT_018abb78;
        local_68 = (int *)&local_64;
        local_6c = &DAT_00587706;
        local_88 = 1;
        local_50 = &DAT_0157d360;
        local_58 = &LAB_00fac484;
        local_3c = 0;
        local_30 = (int ****)&local_8c;
        local_60 = FUN_00baea48;
        local_64 = (undefined4 *)(iVar17 + 0x14);
        local_40 = 1;
        DataMemoryBarrier(0xb);
        pcVar15 = s_SetGloba_00414c05;
        puVar20 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar15 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_5c = piVar12;
        local_54 = param_1 + 2;
        iVar4 = (**(code **)(puVar20 + 0x28))(pcVar15,&local_40);
        if (iVar4 != 0) {
          (**(code **)(puVar20 + 0x2c))(pcVar15,&local_40);
        }
      }
LAB_00b14d94:
      iVar4 = *piVar12;
      *(undefined4 *)(iVar11 + 0x5a0) = 1;
      *(int *)(iVar11 + 0x5a4) = iVar4;
      FUN_015f3b0c(&local_40);
      *(undefined4 *)(iVar11 + 0x5c8) = local_40;
      *(undefined4 *)(iVar11 + 0x5cc) = local_3c;
      *(undefined4 *)(iVar11 + 0x5d0) = local_38;
      iVar4 = DAT_018d7d44;
      DataMemoryBarrier(0xb);
      if (DAT_018d7d14 == 0) {
        do {
          bVar22 = (bool)hasExclusiveAccess((int *)(DAT_018d7d44 + 8));
        } while (!bVar22);
        *(int *)(DAT_018d7d44 + 8) = *piVar12;
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
    }
    uVar13 = *(byte *)(iVar17 + 0x14) - 5;
    if (((uVar13 < 2) && (DAT_018d9130 < 3)) && (DAT_018da0dc != '\0')) {
      if (DAT_018da0dc == '\x01') {
LAB_00b14e60:
        DataMemoryBarrier(0xb);
        puVar20 = &DAT_018ae394;
        pcVar15 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar15 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar4 = (**(code **)(puVar20 + 0x14))(pcVar15,DAT_018da0d4);
        if (iVar4 == 0) goto LAB_00b15030;
      }
      else if (DAT_018da0dc != '\x02') {
        cVar1 = FUN_0169ac90(&DAT_018da0d4);
        if (cVar1 == '\0') goto LAB_00b15030;
        if (cVar1 != '\x02') goto LAB_00b14e60;
      }
      if (*(code **)(DAT_018da0d4 + 0x20) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f5b0);
      }
      local_7c = (int ****)&local_8c;
      local_5c = *(int **)(DAT_018da0d4 + 0x24);
      local_58 = *(undefined1 **)(DAT_018da0d4 + 0x28);
      local_44 = (int *)(DAT_018da0d4 + 0x1c);
      local_64 = (undefined4 *)*local_44;
      local_80 = &local_64;
      local_4c = &local_80;
      local_30 = &local_4c;
      local_54 = (undefined4 *)0x0;
      puVar20 = &DAT_018ae394;
      local_48 = (undefined **)&DAT_00000001;
      local_78 = &DAT_018abb78;
      local_88 = 0x47;
      local_8c = (undefined4 ****)&DAT_0034e7d0;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar15 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_60 = *(code **)(DAT_018da0d4 + 0x20);
      local_2c = DAT_018da0d4;
      iVar4 = (**(code **)(puVar20 + 0x28))(pcVar15,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar20 + 0x2c))(pcVar15,&local_40);
      }
    }
LAB_00b15030:
    uVar23 = uVar13 < 2;
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined1 *)((int)param_1 + 0xe5) = uVar23;
    param_1[0x38] = iVar11;
LAB_00b1504c:
    uVar2 = *(undefined4 *)(iVar11 + 0x570);
    uVar3 = *(undefined4 *)(iVar11 + 0x580);
    uVar5 = *(undefined4 *)(iVar11 + 0x5d8);
    uVar6 = *(undefined4 *)(iVar11 + 0x5dc);
    uVar7 = *(undefined4 *)(iVar11 + 0x5e0);
    iVar17 = *(int *)(iVar11 + 0x58c);
    uVar18 = *(undefined4 *)(iVar11 + 0x5c8);
    uVar8 = *(undefined4 *)(iVar11 + 0x5d0);
    uVar19 = *(undefined4 *)(iVar11 + 0x5cc);
    uVar14 = *(undefined4 *)(iVar11 + 0x5b8);
    uVar16 = *(undefined4 *)(iVar11 + 0x5bc);
    uVar21 = *(undefined4 *)(iVar11 + 0x5a4);
    uVar9 = *(undefined4 *)(iVar11 + 0x5c0);
    uVar10 = *(undefined4 *)(iVar11 + 0x5a0);
    if (*(int *)(iVar11 + 0x588) != 5 || iVar17 != 0) {
      local_40 = *(undefined4 *)(iVar11 + 0x590);
      local_3c = *(undefined4 *)(iVar11 + 0x594);
      local_38 = *(undefined4 *)(iVar11 + 0x598);
      local_34 = *(undefined4 *)(iVar11 + 0x59c);
    }
    iVar4 = *(int *)(iVar11 + 0x620);
    param_1[4] = *(int *)(iVar11 + 0x588);
    param_1[5] = iVar17;
    param_1[0xc] = uVar14;
    param_1[0xd] = uVar16;
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar6;
    *(undefined1 *)(param_1 + 0x37) = 0;
    param_1[7] = local_3c;
    param_1[8] = local_38;
    param_1[9] = local_34;
    param_1[10] = uVar10;
    param_1[0xe] = uVar9;
    param_1[0x12] = uVar8;
    param_1[0x18] = uVar2;
    param_1[6] = local_40;
    iVar4 = iVar4 + 8;
    param_1[0x10] = uVar18;
    param_1[0x11] = uVar19;
    param_1[0xb] = uVar21;
    param_1[0x36] = iVar4;
    *(undefined1 *)(param_1 + 0x1a) = uVar23;
    param_1[0x19] = uVar3;
    param_1[0x16] = uVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f5c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f5c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x39)) {
    case 0:
      uVar23 = *(undefined1 *)((int)param_1 + 0xe5);
      iVar11 = param_1[0x38];
      goto LAB_00b1504c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186f5e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186f5e0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x37)) {
      case 0:
        iVar4 = param_1[0x36];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186f9d0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186f9d0);
      case 3:
        goto switchD_00b14fd0_caseD_3;
      }
    }
  }
  FUN_016dd1aa(param_1 + 0x1c,param_1 + 4,0x60);
  param_1[0x34] = iVar4;
  param_1[0x35] = 0xffffffff;
switchD_00b14fd0_caseD_3:
  iVar4 = FUN_00c81384(param_1 + 0x34,param_2);
  if (iVar4 == 0) {
    uVar23 = 3;
  }
  else {
    iVar11 = param_1[0x34];
    if (iVar11 != 0) {
      FUN_00c81a4c(iVar11,param_1[0x35],1);
    }
    FUN_016dd52c(iVar4 + 0x20,param_1 + 0x1c,0x60);
    FUN_00bd4644(iVar4 + 0x20);
    uVar23 = 1;
    FUN_00c822ec(iVar4);
  }
  *(undefined1 *)(param_1 + 0x39) = uVar23;
  *(undefined1 *)(param_1 + 0x37) = uVar23;
  *(undefined1 *)(param_1 + 0x3e) = uVar23;
  return iVar4 == 0;
}

