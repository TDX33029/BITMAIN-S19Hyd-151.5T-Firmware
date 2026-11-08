// FUN_0065ffb0 @ 0065ffb0 size=4260 calls_out=42 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_0065ffb0(int *param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  char *pcVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  int *local_19c;
  int *local_190;
  undefined4 *local_180;
  int local_17c;
  int local_178;
  undefined4 ****local_170;
  undefined4 local_16c;
  int *local_168;
  undefined4 ***local_164;
  undefined4 **local_160;
  undefined *local_15c;
  undefined4 *local_158;
  undefined4 local_154;
  undefined4 **local_150;
  undefined1 *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 *local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 *****local_128;
  int local_124;
  int local_120;
  uint local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  uint local_100;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x11)) {
  case 0:
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = param_1[3];
    param_1[5] = param_1[3] + 0x4f8;
    param_1[6] = -1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185851c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185851c);
  case 4:
    piVar4 = (int *)param_1[6];
    piVar6 = (int *)param_1[7];
    goto LAB_00660348;
  case 5:
    uVar25 = *(undefined8 *)(param_1 + 5);
    goto LAB_006603d8;
  case 6:
    goto switchD_0065ffd0_caseD_6;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x39]) {
    case '\0':
      piVar4 = (int *)param_1[0x17];
      goto LAB_006607a4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01857d9c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01857d9c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x38]) {
    case '\0':
      iVar15 = param_1[0x32];
      goto LAB_00660860;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a4a8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a4a8);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x2b]) {
      case '\0':
        piVar4 = (int *)param_1[0x20];
        goto LAB_00660888;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185a69c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0185a69c);
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x2a]) {
    case '\0':
      piVar4 = (int *)param_1[0x21];
      goto LAB_0066089c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a6ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a6ac);
    case '\x03':
      goto switchD_00660138_caseD_3;
    }
  case 8:
    goto switchD_0065ffd0_caseD_8;
  case 9:
    goto switchD_0065ffd0_caseD_9;
  case 10:
    goto switchD_0065ffd0_caseD_a;
  case 0xb:
    goto switchD_0065ffd0_caseD_b;
  }
  iVar15 = FUN_006f59b4(param_1 + 5,param_2);
  if (iVar15 == 0) {
    uVar7 = 1;
    uVar16 = 3;
LAB_006600b4:
    *(undefined1 *)((int)param_1 + 0x11) = uVar16;
    return uVar7;
  }
  iVar11 = param_1[5];
  if (iVar11 != 0) {
    FUN_006f5fbc(iVar11,param_1[6],1);
  }
  FUN_006e6690(iVar15 + 0x20);
  FUN_006f625c(iVar15);
  do {
    local_118 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = (undefined4 *****)0x0;
    local_124 = 0;
    local_120 = 0;
    local_11c = local_11c & 0xffffff00;
    local_100 = local_100 & 0xffffff00;
    local_108 = 0;
    local_10c = 0;
    local_110 = 0;
    local_114 = 4;
    local_134 = 1;
    local_138 = (undefined4 *)0x1;
    local_104 = 1;
    piVar4 = (int *)thunk_FUN_016d4a50(0x3c);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x3c);
    }
    *piVar4 = (int)local_138;
    piVar4[1] = local_134;
    piVar4[2] = local_130;
    piVar4[3] = local_12c;
    piVar4[4] = (int)local_128;
    piVar4[5] = local_124;
    piVar4[6] = local_120;
    piVar4[7] = local_11c;
    piVar4[8] = local_118;
    piVar4[9] = local_114;
    piVar4[10] = local_110;
    piVar4[0xb] = local_10c;
    piVar4[0xc] = local_108;
    piVar4[0xd] = local_104;
    piVar4[0xe] = local_100;
    param_1[1] = (int)piVar4;
    iVar15 = FUN_01663af4();
    *(undefined1 *)(param_1 + 4) = 1;
    piVar8 = (int *)*param_1;
    piVar4 = param_1 + 5;
    *(undefined1 *)piVar4 = 0;
    do {
      iVar11 = *piVar8;
      bVar24 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar24);
    *piVar8 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_0066114c;
    param_1[0x372] = iVar15;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x37a) = 0;
    *(undefined1 *)((int)param_1 + 0xdcd) = 0;
    piVar6 = param_1 + 8;
    param_1[0x371] = (int)piVar8;
    param_1[6] = (int)piVar4;
    param_1[7] = (int)piVar6;
    param_1[0x374] = *param_1 + 0x2b0;
LAB_00660348:
    bVar3 = FUN_00704c6c(piVar4,piVar6,param_2);
    if (bVar3 == 3) {
      *(undefined1 *)((int)param_1 + 0x11) = 4;
      return 1;
    }
    FUN_0065ac74(param_1 + 8);
    if ((char)param_1[0x37a] == '\x03') {
      if ((char)param_1[0x377] == '\x04') {
        FUN_006f625c(param_1[0x376]);
      }
      else if (((char)param_1[0x377] == '\x03') && (param_1[0x378] != 0)) {
        FUN_006f5fbc(param_1[0x378],param_1[0x379],1);
      }
    }
    if (1 < bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0185852c);
    }
    FUN_01662df8(param_1[1]);
    uVar25 = (**(code **)(*(int *)(*param_1 + 0x3cc) + 0x10))(*(undefined4 *)(*param_1 + 0x3c8));
    *(undefined8 *)(param_1 + 5) = uVar25;
LAB_006603d8:
    uVar26 = (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))((int)uVar25,param_2);
    puVar22 = (undefined4 *)(uVar26 >> 0x20);
    if ((uVar26 & 1) != 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 5;
      return 1;
    }
    puVar20 = (undefined4 *)param_1[6];
    iVar15 = param_1[5];
    pcVar10 = (code *)*puVar20;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(iVar15);
    }
    if (puVar20[1] != 0) {
      thunk_FUN_016d3fb4(iVar15);
    }
    if (puVar22 != (undefined4 *)0x0) {
      iVar15 = *param_1;
      local_14c = &LAB_00604520;
      local_150 = &local_158;
      local_158 = puVar22;
      FUN_00600d2c(&local_138,&DAT_0057a802,&local_150);
      local_180 = local_138;
      local_17c = local_134;
      local_178 = local_130;
      if (((*(uint *)(iVar15 + 0x548) < 3) && (DAT_018d9130 < 3)) && (DAT_018d932c != '\0')) {
        if (DAT_018d932c == '\x01') {
LAB_006604cc:
          puVar21 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          pcVar23 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar23 = DAT_018daa74, puVar21 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar15 = (**(code **)(puVar21 + 0x14))(pcVar23,DAT_018d9324);
          if (iVar15 == 0) goto LAB_00660648;
        }
        else if (DAT_018d932c != '\x02') {
          cVar2 = FUN_0169ac90(&DAT_018d9324);
          if (cVar2 == '\0') goto LAB_00660648;
          if (cVar2 != '\x02') goto LAB_006604cc;
        }
        if (*(int *)(DAT_018d9324 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185cf3c);
        }
        local_160 = &local_180;
        local_170 = &local_164;
        local_168 = (int *)(DAT_018d9324 + 0x1c);
        local_150 = (undefined4 **)*local_168;
        local_144 = *(undefined4 *)(DAT_018d9324 + 0x28);
        local_14c = *(undefined1 **)(DAT_018d9324 + 0x20);
        local_148 = *(undefined4 *)(DAT_018d9324 + 0x24);
        local_128 = &local_170;
        local_140 = 0;
        local_16c = 1;
        local_15c = &DAT_0185850c;
        local_134 = 0;
        local_138 = (undefined4 *)0x1;
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        puVar21 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar23 = DAT_018daa74, puVar21 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_164 = &local_150;
        local_124 = DAT_018d9324;
        iVar15 = (**(code **)(puVar21 + 0x28))(pcVar23,&local_138);
        if (iVar15 != 0) {
          (**(code **)(puVar21 + 0x2c))(pcVar23,&local_138);
        }
      }
LAB_00660648:
      if (local_180 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_17c);
      }
      (**(code **)*local_158)();
    }
    param_1[5] = *param_1 + 0x340;
    param_1[6] = -1;
switchD_0065ffd0_caseD_6:
    piVar6 = param_1 + 5;
    iVar15 = FUN_006f59b4(piVar6,param_2);
    if (iVar15 == 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 6;
      return 1;
    }
    param_1[2] = iVar15;
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
      iVar15 = param_1[2];
    }
    sVar1 = *(short *)(iVar15 + 0x20);
    FUN_016dd1aa(&local_138,iVar15 + 0x22,0x1e);
    *(undefined2 *)(iVar15 + 0x20) = 2;
    piVar4 = *(int **)(*param_1 + 0x574);
    if (piVar4 == (int *)0x0) {
      *(short *)piVar6 = 2;
    }
    else {
      do {
        iVar15 = *piVar4;
        bVar24 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar24);
      *piVar4 = iVar15 + 1;
      if (iVar15 < 0) {
LAB_0066114c:
                    /* WARNING: Does not return */
        pcVar10 = (code *)software_udf(0xfdee,0x66114c);
        (*pcVar10)();
      }
      if (sVar1 == 2) {
        *(short *)piVar6 = 2;
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar4;
          bVar24 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar24);
        *piVar4 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fb60(piVar4);
        }
        if ((short)*piVar6 == 2) goto LAB_00660c2c;
      }
      else {
        *(short *)(param_1 + 5) = sVar1;
        FUN_016dd1aa((int)param_1 + 0x16,&local_138,0x1e);
        param_1[0xd] = (int)piVar4;
      }
      param_1[0xe] = param_1[0xd];
      piVar4 = (int *)(param_1[0xd] + 8);
      param_1[0xf] = *piVar6;
      param_1[0x10] = param_1[6];
      param_1[0x11] = param_1[7];
      param_1[0x12] = param_1[8];
      param_1[0x13] = param_1[9];
      param_1[0x14] = param_1[10];
      param_1[0x15] = param_1[0xb];
      param_1[0x16] = param_1[0xc];
      *(undefined1 *)(param_1 + 0x39) = 0;
      param_1[0x17] = (int)piVar4;
LAB_006607a4:
      param_1[0x18] = param_1[0xf];
      param_1[0x19] = param_1[0x10];
      param_1[0x1a] = param_1[0x11];
      param_1[0x1b] = param_1[0x12];
      param_1[0x1c] = param_1[0x13];
      param_1[0x1d] = param_1[0x14];
      param_1[0x1e] = param_1[0x15];
      param_1[0x1f] = param_1[0x16];
      iVar15 = *piVar4 + 8;
      bVar24 = (short)param_1[0x18] != 1;
      if (bVar24) {
        iVar11 = *(int *)((int)param_1 + 0x62);
        iVar14 = 6;
      }
      else {
        local_138 = (undefined4 *)param_1[0x11];
        local_134 = param_1[0x12];
        local_130 = param_1[0x13];
        iVar14 = 0x1c;
        iVar11 = param_1[0x19];
      }
      *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)((int)(param_1 + 0x18) + iVar14);
      *(undefined2 *)((int)param_1 + 0xdf) = 1;
      local_180 = local_138;
      local_17c = local_134;
      local_178 = local_130;
      *(int *)((int)param_1 + 0xcf) = iVar11;
      *(bool *)((int)param_1 + 0xce) = !bVar24;
      param_1[0x32] = iVar15;
      *(undefined4 **)((int)param_1 + 0xd3) = local_138;
      *(int *)((int)param_1 + 0xd7) = local_134;
      *(int *)((int)param_1 + 0xdb) = local_130;
LAB_00660860:
      param_1[0x2c] = iVar15;
      piVar4 = (int *)(iVar15 + 8);
      param_1[0x2d] = param_1[0x33];
      param_1[0x2e] = param_1[0x34];
      param_1[0x2f] = param_1[0x35];
      param_1[0x30] = param_1[0x36];
      param_1[0x31] = param_1[0x37];
      *(undefined1 *)(param_1 + 0x2b) = 0;
      param_1[0x20] = (int)piVar4;
LAB_00660888:
      param_1[0x21] = (int)piVar4;
      *(undefined1 *)(param_1 + 0x2a) = 0;
LAB_0066089c:
      iVar15 = *piVar4;
      *(undefined1 *)(param_1 + 0x29) = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = iVar15;
      param_1[0x28] = iVar15;
      param_1[0x22] = (int)(piVar4 + 1);
      param_1[0x23] = 0;
switchD_00660138_caseD_3:
      local_190 = param_1 + 0x38;
      local_19c = param_1 + 0x39;
      bVar3 = FUN_0163c8bc(param_1 + 0x22,param_2);
      if (bVar3 == 2) {
        *(undefined1 *)(param_1 + 0x2a) = 3;
        *(undefined1 *)(param_1 + 0x2b) = 3;
        *(undefined1 *)local_190 = 3;
        *(undefined1 *)local_19c = 3;
        *(undefined1 *)((int)param_1 + 0x11) = 7;
        return 1;
      }
      FUN_0163c790(param_1 + 0x22);
      if (param_1[0x23] != 0) {
        (**(code **)(param_1[0x23] + 0xc))(param_1[0x24]);
      }
      if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0185a6bc);
      }
      piVar4 = (int *)param_1[0x21];
      puVar18 = (uint *)(piVar4 + 6);
      piVar6 = piVar4 + 1;
      iVar15 = *piVar4;
      *(undefined1 *)(param_1 + 0x2b) = 1;
      *(undefined1 *)(param_1 + 0x2a) = 1;
      FUN_007b9840(puVar18,param_1 + 0x2d);
      if (*(char *)((int)param_1 + 199) == '\0') {
        uVar19 = piVar4[8];
        if (uVar19 < *(uint *)(param_1[0x2c] + 4)) {
          FUN_016dd1aa(&local_138,(int)param_1 + 0xb6,0x11);
          iVar11 = param_1[0x2d];
          if (uVar19 == *puVar18) {
            FUN_006bca00(puVar18);
          }
          puVar17 = (undefined2 *)(piVar4[7] + uVar19 * 0x14);
          *puVar17 = (short)iVar11;
          FUN_016dd1aa(puVar17 + 1,&local_138,0x11);
          *(undefined1 *)((int)puVar17 + 0x13) = 0;
          piVar4[8] = uVar19 + 1;
        }
        else if ((DAT_018d9130 < 5) && (DAT_018da3c4 != '\0')) {
          if (DAT_018da3c4 == '\x01') {
LAB_00660a1c:
            DataMemoryBarrier(0xb);
            pcVar23 = s_SetGloba_00414c05;
            puVar21 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar23 = DAT_018daa74, puVar21 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar11 = (**(code **)(puVar21 + 0x14))(pcVar23,DAT_018da3bc);
            if (iVar11 == 0) goto LAB_00660b78;
          }
          else if (DAT_018da3c4 != '\x02') {
            cVar2 = FUN_0169ac90(&DAT_018da3bc);
            if (cVar2 == '\0') goto LAB_00660b78;
            if (cVar2 != '\x02') goto LAB_00660a1c;
          }
          if (*(undefined1 **)(DAT_018da3bc + 0x20) == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185a4b8);
          }
          local_160 = &local_158;
          local_148 = *(undefined4 *)(DAT_018da3bc + 0x24);
          local_144 = *(undefined4 *)(DAT_018da3bc + 0x28);
          local_168 = (int *)(DAT_018da3bc + 0x1c);
          local_150 = (undefined4 **)*local_168;
          local_164 = &local_150;
          local_170 = &local_164;
          local_140 = 0;
          local_16c = 1;
          local_15c = &DAT_018abb78;
          local_154 = 0x2f;
          local_138 = (undefined4 *)0x1;
          local_128 = &local_170;
          local_158 = (undefined4 *)&DAT_003404c1;
          local_134 = 0;
          DataMemoryBarrier(0xb);
          pcVar23 = s_SetGloba_00414c05;
          puVar21 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar23 = DAT_018daa74, puVar21 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_14c = *(undefined1 **)(DAT_018da3bc + 0x20);
          local_124 = DAT_018da3bc;
          iVar11 = (**(code **)(puVar21 + 0x28))(pcVar23,&local_138);
          if (iVar11 != 0) {
            (**(code **)(puVar21 + 0x2c))(pcVar23,&local_138);
          }
        }
      }
LAB_00660b78:
      local_138 = (undefined4 *)param_1[0x2d];
      local_134 = param_1[0x2e];
      local_130 = param_1[0x2f];
      local_12c = param_1[0x30];
      local_128 = (undefined4 *****)param_1[0x31];
      FUN_0072a3d4(&local_150,*(undefined4 *)param_1[0x2c]);
      if (iVar15 != 0) {
        if ((char)*piVar6 == '\0') {
          bVar24 = (bool)hasExclusiveAccess(piVar6);
          if (!bVar24) goto LAB_00660bcc;
          *(char *)piVar6 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00660bcc:
          FUN_01280da8(piVar6);
        }
        FUN_0128236c(piVar6);
        FUN_0163af68(piVar6,iVar15,piVar6);
      }
      piVar4 = (int *)param_1[0xe];
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(undefined1 *)(param_1 + 0x39) = 1;
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar4;
        bVar24 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar24);
      *piVar4 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fb60(param_1[0xe]);
      }
    }
LAB_00660c2c:
    FUN_006f625c(param_1[2]);
    param_1[5] = *param_1 + 0x520;
    param_1[6] = -1;
switchD_0065ffd0_caseD_8:
    iVar15 = FUN_006f59b4(param_1 + 5,param_2);
    if (iVar15 == 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 8;
      return 1;
    }
    iVar11 = param_1[5];
    if (iVar11 != 0) {
      FUN_006f5fbc(iVar11,param_1[6],1);
    }
    iVar11 = *(int *)(iVar15 + 0x20);
    puVar22 = *(undefined4 **)(iVar15 + 0x24);
    *(undefined4 *)(iVar15 + 0x20) = 0;
    if (iVar11 != 0) {
      pcVar10 = (code *)*puVar22;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(iVar11);
      }
      if (puVar22[1] != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
    }
    FUN_006f625c(iVar15);
    uVar26 = FUN_00714ecc(*(int *)(*param_1 + 0x54c) + 8);
    piVar4 = (int *)uVar26;
    FUN_007150a8(piVar4 + 2);
    if ((((uVar26 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
      *(undefined1 *)(piVar4 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar4;
      bVar24 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar24);
    *piVar4 = 0;
    if (iVar15 == 2) {
      FUN_016d6968(0xf0,piVar4,0x81,1);
    }
    param_1[5] = *param_1 + 0x4f8;
    param_1[6] = -1;
switchD_0065ffd0_caseD_9:
    iVar15 = FUN_006f59b4(param_1 + 5,param_2);
    if (iVar15 == 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 9;
      return 1;
    }
    iVar11 = param_1[5];
    if (iVar11 != 0) {
      FUN_006f5fbc(iVar11,param_1[6],1);
    }
    FUN_006e6690(iVar15 + 0x20);
    FUN_006f625c(iVar15);
    param_1[5] = *param_1 + 0x310;
    param_1[6] = -1;
switchD_0065ffd0_caseD_a:
    iVar15 = FUN_006f59b4(param_1 + 5,param_2);
    if (iVar15 == 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 10;
      return 1;
    }
    iVar11 = param_1[5];
    if (iVar11 != 0) {
      FUN_006f5fbc(iVar11,param_1[6],1);
    }
    uVar19 = *(uint *)(iVar15 + 0x2c);
    if (uVar19 != 0) {
      uVar5 = *(uint *)(iVar15 + 0x20);
      uVar9 = *(uint *)(iVar15 + 0x28);
      iVar11 = *(int *)(iVar15 + 0x24);
      *(undefined4 *)(iVar15 + 0x2c) = 0;
      uVar12 = uVar9 - uVar5;
      if (uVar9 < uVar5) {
        uVar12 = uVar9;
      }
      uVar9 = uVar5 - uVar12;
      if (uVar19 <= uVar5 - uVar12) {
        uVar9 = uVar19;
      }
      iVar13 = uVar9 + 1;
      iVar14 = iVar11 + uVar12 * 0xf8;
      while (iVar13 = iVar13 + -1, iVar13 != 0) {
        FUN_00aa3fe0(iVar14);
        iVar14 = iVar14 + 0xf8;
      }
      iVar14 = (uVar19 - uVar9) + 1;
      while (iVar14 = iVar14 + -1, iVar14 != 0) {
        FUN_00aa3fe0(iVar11);
        iVar11 = iVar11 + 0xf8;
      }
    }
    *(undefined4 *)(iVar15 + 0x28) = 0;
    FUN_006f625c(iVar15);
    iVar11 = *param_1;
    FUN_007901fc(&local_138,iVar11 + 0x10);
    iVar15 = thunk_FUN_016d4a50(0x110);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x110);
    }
    FUN_016dd1aa(iVar15,&local_138,0x110);
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[5] = iVar11 + 0x2b0;
    param_1[6] = iVar15;
    param_1[7] = (int)&DAT_0185cbf4;
switchD_0065ffd0_caseD_b:
    bVar3 = FUN_006618cc(param_1 + 5,param_2);
    if (bVar3 == 2) {
      *(undefined1 *)((int)param_1 + 0x11) = 0xb;
      return 1;
    }
    if ((char)param_1[0x14] == '\x03') {
      FUN_00656120(param_1 + 8);
    }
    else if ((char)param_1[0x14] == '\0') {
      puVar22 = (undefined4 *)param_1[7];
      iVar15 = param_1[6];
      pcVar10 = (code *)*puVar22;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(iVar15);
      }
      if (puVar22[1] != 0) {
        thunk_FUN_016d3fb4(iVar15);
      }
    }
    *(undefined1 *)(param_1 + 4) = 0;
    piVar4 = param_1 + 1;
    if ((bVar3 & 1) != 0) {
      FUN_01663cc4(*piVar4);
      piVar6 = (int *)*piVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar6;
        bVar24 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar24);
      *piVar6 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(piVar4);
      }
      piVar4 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar4;
        bVar24 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar24);
      *piVar4 = iVar15 + -1;
      uVar7 = 0;
      uVar16 = 1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(*param_1);
        uVar7 = 0;
      }
      goto LAB_006600b4;
    }
    FUN_01663cc4(*piVar4);
    piVar6 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar6;
      bVar24 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar24);
    *piVar6 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(piVar4);
    }
  } while( true );
}

