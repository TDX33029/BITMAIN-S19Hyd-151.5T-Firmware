// FUN_00816b40 @ 00816b40 size=5784 calls_out=37 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x00817604) */
/* WARNING: Removing unreachable block (ram,0x00817610) */
/* WARNING: Removing unreachable block (ram,0x00817624) */
/* WARNING: Removing unreachable block (ram,0x0081762c) */
/* WARNING: Removing unreachable block (ram,0x00817638) */
/* WARNING: Removing unreachable block (ram,0x00817640) */
/* WARNING: Removing unreachable block (ram,0x00817594) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00816b40(uint *param_1,uint *param_2,undefined4 ****param_3)

{
  code cVar1;
  uint *****pppppuVar2;
  undefined1 uVar3;
  uint ******ppppppuVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  code *pcVar11;
  undefined4 extraout_r1;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined4 ****ppppuVar15;
  undefined1 uVar16;
  undefined4 ****unaff_r5;
  uint uVar17;
  undefined4 ****unaff_r6;
  uint uVar18;
  undefined *puVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  char *pcVar23;
  uint ******unaff_r8;
  uint uVar24;
  undefined4 ****ppppuVar25;
  undefined4 ****ppppuVar26;
  uint *puVar27;
  bool bVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  uint *local_18c;
  undefined1 *local_188;
  uint *local_184;
  uint *local_180;
  uint *local_17c;
  undefined4 local_150;
  undefined4 ****local_14c;
  undefined4 ****local_148;
  undefined4 ****local_144;
  uint ******local_140;
  undefined4 ****local_13c;
  undefined2 local_134;
  undefined1 local_132;
  undefined1 local_130 [28];
  undefined2 local_114;
  undefined1 local_112;
  uint *****local_110;
  undefined4 ****ppppuStack_10c;
  undefined4 ****ppppuStack_108;
  undefined4 ****local_104;
  uint ******ppppppuStack_100;
  undefined4 ****ppppuStack_fc;
  uint uStack_f8;
  code *****local_f0;
  undefined4 local_ec;
  undefined4 ****local_e8;
  undefined4 *****local_e4;
  undefined **local_e0;
  undefined *local_dc;
  undefined *local_d8;
  undefined **local_d4;
  undefined *local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  uint ******local_b8;
  undefined4 ****ppppuStack_b4;
  undefined4 local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  uint ******local_68;
  undefined4 ****local_64;
  uint uStack_60;
  
  puVar10 = param_2 + 2;
  if ((*param_2 & 1) != 0) {
    uVar7 = FUN_01657fc4(puVar10,*param_3);
    goto joined_r0x00816b74;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x4d]) {
  case '\0':
    uVar16 = *(undefined1 *)param_2[0x4b];
    uVar21 = *(uint *)param_2[0x4c];
    *(undefined1 *)((int)param_2 + 0x122) = 0;
    uVar7 = param_2[0x4a];
    param_2[0x46] = uVar21;
    *(undefined1 *)(param_2 + 0x48) = uVar16;
    param_2[0x47] = uVar7;
LAB_00816c24:
    *(undefined1 *)((int)param_2 + 0x121) = uVar16;
    puVar8 = (undefined1 *)thunk_FUN_016d4a50(1);
    if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *(undefined1 *)(param_2 + 0x44) = 0;
    *puVar8 = 0;
    param_2[0x42] = uVar7;
    param_2[0x43] = uVar21;
    *(undefined1 *)((int)param_2 + 0x1d) = uVar16;
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[2] = 1;
    param_2[3] = (uint)puVar8;
    param_2[4] = 1;
    param_2[5] = (uint)FUN_007d4260;
    param_2[6] = 1;
LAB_00816c78:
    puVar27 = (uint *)((uint)&local_78 | 4);
    uVar24 = param_2[3];
    uVar14 = param_2[4];
    uVar17 = param_2[5];
    uVar18 = param_2[6];
    uVar20 = param_2[7];
    *puVar27 = *puVar10;
    puVar27[1] = uVar24;
    puVar27[2] = uVar14;
    puVar27[3] = uVar17;
    puVar27[4] = uVar18;
    puVar27[5] = uVar20;
    puVar8 = &DAT_3b9aca00;
    local_110 = (uint *****)local_78;
    ppppuStack_10c = local_74;
    ppppuStack_108 = local_70;
    local_104 = local_6c;
    ppppppuStack_100 = local_68;
    ppppuStack_fc = local_64;
    uStack_f8 = uStack_60;
    param_2[10] = (uint)&DAT_3b9aca00;
    param_2[0xb] = (uint)local_78;
    param_2[0xc] = (uint)local_74;
    param_2[0xd] = (uint)local_70;
    param_2[0xe] = (uint)local_6c;
    param_2[0xf] = (uint)local_68;
    param_2[0x10] = (uint)local_64;
    param_2[0x11] = uStack_60;
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0x16] = uVar7;
    param_2[0x17] = uVar21;
LAB_00816cd8:
    *(undefined1 *)((int)param_2 + 0x69) = 1;
    param_2[0x2b] = param_2[0xc];
    param_2[0x2c] = param_2[0xd];
    param_2[0x2d] = param_2[0xe];
    param_2[0x2e] = param_2[0xf];
    param_2[0x2f] = param_2[0x10];
    param_2[0x30] = param_2[0x11];
    param_2[0x12] = param_2[8];
    param_2[0x13] = param_2[9];
    uVar7 = uVar7 + 4;
    param_2[0x1c] = uVar7;
    param_2[0x18] = uVar21;
    param_2[0x14] = (uint)puVar8;
    *(undefined1 *)(param_2 + 0x2a) = 0;
LAB_00816d1c:
    param_2[0x1d] = uVar7;
    *(undefined1 *)(param_2 + 0x29) = 0;
LAB_00816d34:
    param_2[0x1e] = uVar7;
    *(undefined1 *)(param_2 + 0x20) = 0;
LAB_00816d48:
    param_2[0x1f] = uVar7;
LAB_00816d4c:
    *(undefined1 *)(param_2 + 0x28) = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 1;
    param_2[0x27] = 1;
    param_2[0x21] = uVar7;
    param_2[0x22] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185fa20);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185fa20);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x122)) {
    case 0:
      uVar21 = param_2[0x46];
      uVar7 = param_2[0x47];
      uVar16 = (undefined1)param_2[0x48];
      goto LAB_00816c24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185fa10);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185fa10);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x44]) {
    case '\0':
      uVar7 = param_2[0x42];
      uVar21 = param_2[0x43];
      goto LAB_00816c78;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185f9d0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185f9d0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1a]) {
    case '\0':
      puVar8 = (undefined1 *)param_2[10];
      uVar7 = param_2[0x16];
      uVar21 = param_2[0x17];
      goto LAB_00816cd8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185f9e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185f9e0);
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0xa1)) {
      case 0:
        uVar7 = param_2[0x22];
        uVar21 = param_2[0x23];
        piVar12 = (int *)param_2[0x27];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185fa70);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0185fa70);
      case 3:
        goto switchD_00816f0c_caseD_3;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x2c]) {
        case '\0':
          uVar7 = param_2[0x2a];
          goto LAB_008174b8;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0185fa60);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0185fa60);
        case '\x03':
          goto switchD_00816fe4_caseD_3;
        case '\x04':
          goto switchD_00816fe4_caseD_4;
        }
      }
      goto LAB_00816e2c;
    case '\x05':
      goto switchD_00816e8c_caseD_5;
    case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2c]) {
      case '\0':
        piVar12 = (int *)param_2[0x1c];
        unaff_r5 = (undefined4 ****)param_2[0x1d];
        goto LAB_00817cc4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185fa40);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0185fa40);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x2b]) {
        case '\0':
          uVar21 = param_2[0x1e];
          uVar7 = param_2[0x1f];
          unaff_r5 = (undefined4 ****)param_2[0x20];
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0185f9b0);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0185f9b0);
        case '\x03':
          uVar30 = *(undefined8 *)(param_2 + 0x29);
          goto LAB_008184f8;
        }
      }
      goto LAB_00817cf0;
    case '\a':
switchD_00816e8c_caseD_7:
      unaff_r5 = (undefined4 ****)(param_2 + 0x20);
      iVar13 = FUN_01657fc4(unaff_r5,*param_3);
      if (iVar13 == 0) {
        FUN_00a07b4c(unaff_r5);
        uVar7 = param_2[0x1c];
        ppppuVar25 = (undefined4 ****)param_2[0x1d];
        ppppuVar15 = (undefined4 ****)param_2[0x1e];
        goto LAB_00818798;
      }
      uVar16 = 7;
      goto LAB_0081872c;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2a]) {
    case '\0':
      uVar7 = param_2[0x1c];
      goto LAB_00816d1c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886258);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886258);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      uVar7 = param_2[0x1d];
      goto LAB_00816d34;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886268);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886268);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x20]) {
    case '\0':
      uVar7 = param_2[0x1e];
      goto LAB_00816d48;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886278);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886278);
    case '\x03':
      uVar7 = param_2[0x1f];
      goto LAB_00816d4c;
    }
  }
  local_180 = param_2 + 0x1c;
  unaff_r8 = (uint ******)(param_2 + 0x21);
  bVar5 = FUN_0163c8bc(unaff_r8,param_3);
  if (bVar5 != 2) {
    FUN_0163c790(unaff_r8);
    if (param_2[0x22] != 0) {
      (**(code **)(param_2[0x22] + 0xc))(param_2[0x23]);
    }
    if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
    }
    uVar7 = param_2[0x1d];
    *(undefined1 *)(param_2 + 0x20) = 1;
    *(undefined1 *)(param_2 + 0x2a) = 1;
    *(undefined1 *)(param_2 + 0x29) = 1;
    param_2[0x19] = uVar7;
    *(undefined1 *)((int)param_2 + 0x69) = 0;
    local_78 = (undefined4 ****)param_2[0x2b];
    local_74 = (undefined4 ****)param_2[0x2c];
    local_70 = (undefined4 ****)param_2[0x2d];
    local_6c = (undefined4 ****)param_2[0x2e];
    local_68 = (uint ******)param_2[0x2f];
    local_64 = (undefined4 ****)param_2[0x30];
    FUN_00833640(local_180);
    piVar12 = (int *)(uVar7 + 0x14);
    *(undefined1 *)((int)param_2 + 0xa1) = 0;
    uVar7 = param_2[0x1d];
    uVar21 = param_2[0x1e];
    param_2[0x27] = (uint)piVar12;
    param_2[0x22] = uVar7;
    param_2[0x23] = uVar21;
LAB_00816e2c:
    param_2[0x20] = uVar7;
    param_2[0x21] = uVar21;
    *(undefined1 *)(param_2 + 0x28) = 0;
    param_2[0x24] = (uint)piVar12;
    param_2[0x25] = 0xf;
    do {
      iVar13 = *piVar12;
      uVar24 = piVar12[1];
      *(undefined1 *)((int)param_2 + 0xc9) = 0;
      param_2[0x2d] = uVar7;
      param_2[0x2e] = uVar21;
      param_2[0x2f] = uVar24;
      param_2[0x31] = iVar13 + 8;
switchD_00816f0c_caseD_3:
      uVar29 = FUN_007d6eb8(param_2 + 0x29,param_3);
      uVar7 = (uint)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) {
        uVar16 = 3;
LAB_00817ae4:
        local_180 = (uint *)((int)param_2 + 0xa1);
        *(undefined1 *)local_180 = uVar16;
        uVar16 = 4;
        goto LAB_0081872c;
      }
      param_2[0x26] = uVar7;
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)((int)param_2 + 0xc9) == '\x03') {
        uVar7 = param_2[0x2b];
        puVar22 = (undefined4 *)param_2[0x2c];
        pcVar11 = (code *)*puVar22;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar7);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        uVar7 = param_2[0x26];
        *(undefined1 *)(param_2 + 0x32) = 0;
      }
      if (uVar7 == 0) {
        ppppuVar25 = (undefined4 ****)0x0;
        *(undefined1 *)(param_2 + 0x28) = 0;
        ppppuVar15 = param_3;
        goto LAB_00817b18;
      }
      uVar7 = param_2[0x24];
      param_2[0x2a] = uVar7;
      *(undefined1 *)(param_2 + 0x2c) = 0;
LAB_008174b8:
      param_2[0x2b] = uVar7;
      FUN_01656eb8(&local_78,&DAT_0185fa50,0,0,200000000,&DAT_0185fa50);
      FUN_016dd1aa(&local_c8,&local_78,0x50);
      FUN_016dd1aa(param_2 + 0x2e,&local_c8,0x50);
switchD_00816fe4_caseD_3:
      iVar13 = FUN_01657fc4(param_2 + 0x2e,*param_3);
      if (iVar13 != 0) {
        uVar16 = 3;
LAB_00817574:
        *(undefined1 *)(param_2 + 0x2c) = uVar16;
        uVar16 = 4;
        goto LAB_00817ae4;
      }
      FUN_00a07b4c(param_2 + 0x2e);
      iVar13 = *(int *)param_2[0x2b];
      uVar7 = ((int *)param_2[0x2b])[1];
      *(undefined1 *)((int)param_2 + 0xd9) = 0;
      param_2[0x31] = (uint)&DAT_0056a778;
      param_2[0x32] = 8;
      param_2[0x33] = uVar7;
      param_2[0x35] = iVar13 + 8;
switchD_00816fe4_caseD_4:
      uVar29 = FUN_007d6eb8(param_2 + 0x2d,param_3);
      unaff_r8 = (uint ******)(uVar29 >> 0x20);
      if ((uVar29 & 1) != 0) {
        uVar16 = 4;
        goto LAB_00817574;
      }
      if (*(char *)((int)param_2 + 0xd9) == '\x03') {
        puVar22 = (undefined4 *)param_2[0x30];
        uVar7 = param_2[0x2f];
        pcVar11 = (code *)*puVar22;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar7);
        }
        if (puVar22[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        *(undefined1 *)(param_2 + 0x36) = 0;
      }
      *(undefined1 *)(param_2 + 0x2c) = 1;
      if (unaff_r8 == (uint ******)0x0) {
        uVar7 = param_2[0x25];
        param_2[0x25] = uVar7 - 1;
        if (uVar7 - 1 == 0) {
          ppppuVar25 = (undefined4 ****)param_2[0x26];
          *(undefined1 *)(param_2 + 0x28) = 0;
          ppppuVar15 = param_3;
          goto LAB_00817b18;
        }
      }
      else {
        ppppuVar15 = param_3;
        if ((DAT_018d9130 < 4) && (DAT_018d93f8 != '\0')) {
          ppppuVar15 = (undefined4 ****)&DAT_018daa64;
          if (DAT_018d93f8 == '\x01') {
LAB_008176c4:
            DataMemoryBarrier(0xb);
            pcVar23 = s_SetGloba_00414c05;
            puVar19 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (pcVar23 = DAT_018daa74, puVar19 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar13 = (**(code **)(puVar19 + 0x14))(pcVar23,DAT_018d93f0);
            if (iVar13 == 0) goto LAB_00817838;
          }
          else if (DAT_018d93f8 != '\x02') {
            cVar6 = FUN_0169ac90(&DAT_018d93f0);
            if (cVar6 == '\0') goto LAB_00817838;
            if (cVar6 != '\x02') goto LAB_008176c4;
          }
          ppppuVar15 = DAT_018d93f0;
          if ((undefined4 ****)DAT_018d93f0[8] == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185fa80);
          }
          local_e0 = &local_d8;
          local_e4 = (undefined4 *****)&local_c8;
          local_c0 = (undefined4 ****)DAT_018d93f0[9];
          local_bc = (undefined4 ****)DAT_018d93f0[10];
          local_e8 = DAT_018d93f0 + 7;
          local_c8 = (uint *****)*local_e8;
          local_f0 = (code *****)&local_e4;
          local_b8 = (uint ******)0x0;
          local_d4 = &local_d0;
          local_dc = &DAT_018abb78;
          local_d0 = (undefined *)(param_2[0x24] + 4);
          local_ec = 1;
          local_d8 = &DAT_00578bae;
          local_68 = (uint ******)&local_f0;
          local_cc = &DAT_00f5c97c;
          local_74 = (undefined4 ****)0x0;
          local_78 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar23 = s_SetGloba_00414c05;
          puVar19 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar23 = DAT_018daa74, puVar19 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_c4 = (undefined4 ****)DAT_018d93f0[8];
          local_64 = DAT_018d93f0;
          iVar13 = (**(code **)(puVar19 + 0x28))(pcVar23,&local_78);
          if (iVar13 != 0) {
            (**(code **)(puVar19 + 0x2c))(pcVar23,&local_78);
          }
        }
LAB_00817838:
        uVar7 = param_2[0x25];
        param_2[0x25] = uVar7 - 1;
        if (uVar7 - 1 == 0) goto code_r0x00817854;
      }
      if ((DAT_018d9130 < 4) && (DAT_018d9404 != '\0')) {
        if (DAT_018d9404 == '\x01') {
LAB_008178e8:
          puVar19 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          pcVar23 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar23 = DAT_018daa74, puVar19 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar13 = (**(code **)(puVar19 + 0x14))(pcVar23,DAT_018d93fc);
          if (iVar13 == 0) goto LAB_00817a8c;
        }
        else if (DAT_018d9404 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d93fc);
          if (cVar6 == '\0') goto LAB_00817a8c;
          if (cVar6 != '\x02') goto LAB_008178e8;
        }
        if ((undefined4 ****)DAT_018d93fc[8] == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185fa90);
        }
        local_c0 = (undefined4 ****)DAT_018d93fc[9];
        local_bc = (undefined4 ****)DAT_018d93fc[10];
        local_e8 = DAT_018d93fc + 7;
        local_c8 = (uint *****)*local_e8;
        local_e0 = &local_d8;
        local_d4 = &local_d0;
        local_e4 = (undefined4 *****)&local_c8;
        local_f0 = (code *****)&local_e4;
        local_d0 = (undefined *)(param_2[0x24] + 4);
        local_68 = (uint ******)&local_f0;
        local_b8 = (uint ******)0x0;
        local_dc = &DAT_018abb78;
        local_ec = 1;
        local_d8 = &DAT_0056f1f5;
        local_cc = &DAT_00f5c97c;
        local_74 = (undefined4 ****)0x0;
        local_78 = (undefined4 ****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        puVar19 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar23 = DAT_018daa74, puVar19 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_c4 = (undefined4 ****)DAT_018d93fc[8];
        local_64 = DAT_018d93fc;
        iVar13 = (**(code **)(puVar19 + 0x28))(pcVar23,&local_78);
        if (iVar13 != 0) {
          (**(code **)(puVar19 + 0x2c))(pcVar23,&local_78);
        }
      }
LAB_00817a8c:
      if (unaff_r8 != (uint ******)0x0) {
        (*(code *)**unaff_r8)(unaff_r8);
      }
      if ((undefined4 *)param_2[0x26] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_2[0x26])();
      }
      uVar7 = param_2[0x20];
      uVar21 = param_2[0x21];
      piVar12 = (int *)param_2[0x24];
      *(undefined1 *)(param_2 + 0x28) = 0;
    } while( true );
  }
  uVar16 = 3;
  *(undefined1 *)(param_2 + 0x20) = 4;
  *(undefined1 *)(param_2 + 0x29) = 3;
  *(undefined1 *)(param_2 + 0x2a) = 3;
LAB_0081872c:
  local_17c = param_2 + 0x1a;
  *(undefined1 *)local_17c = uVar16;
LAB_00818734:
  *(undefined1 *)((int)param_2 + 0x122) = 3;
  *(undefined1 *)(param_2 + 0x44) = 3;
  *(undefined1 *)(param_2 + 0x4d) = 3;
  FUN_016dd1aa((undefined1 *)((int)param_1 + 2),local_130,0x16);
  goto LAB_00818770;
code_r0x00817854:
  ppppuVar25 = (undefined4 ****)param_2[0x26];
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (unaff_r8 != (uint ******)0x0) {
    (*(code *)**unaff_r8)(unaff_r8);
  }
LAB_00817b18:
  local_18c = param_2 + 0x20;
  *(undefined2 *)(param_2 + 0x28) = 0x100;
  FUN_007d6a38(local_18c);
  uVar7 = param_2[0x1c];
  if (ppppuVar25 == (undefined4 ****)0x0) {
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(param_2[0x1d]);
    }
    FUN_01656eb8(&local_78,&DAT_0185f9f0,0,0,50000000,&DAT_0185f9f0);
    FUN_016dd1aa(&local_c8,&local_78,0x50);
    FUN_016dd1aa(param_2 + 0x1c,&local_c8,0x50);
switchD_00816e8c_caseD_5:
    iVar13 = FUN_01657fc4(param_2 + 0x1c,*param_3);
    if (iVar13 != 0) {
      uVar16 = 5;
      goto LAB_0081872c;
    }
    FUN_00a07b4c(param_2 + 0x1c);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    unaff_r5 = (undefined4 ****)param_2[0x18];
    piVar12 = (int *)(param_2[0x19] + 0x14);
    param_2[0x1c] = (uint)piVar12;
    param_2[0x1d] = (uint)unaff_r5;
LAB_00817cc4:
    uVar7 = piVar12[1];
    uVar21 = *piVar12 + 8;
    param_2[0x1e] = uVar21;
    param_2[0x1f] = uVar7;
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0x20] = (uint)unaff_r5;
LAB_00817cf0:
    param_2[0x21] = uVar21;
    param_2[0x22] = uVar7;
    param_2[0x23] = (uint)unaff_r5;
    if ((int)unaff_r5 < 0) {
      uVar9 = 0;
LAB_00817d08:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar9,unaff_r5);
    }
    unaff_r6 = (undefined4 ****)0x0;
    if (unaff_r5 == (undefined4 ****)0x0) {
      uVar7 = 1;
      ppppuVar15 = (undefined4 ****)0x0;
    }
    else {
      uVar7 = thunk_FUN_016d4a50(unaff_r5);
      if (uVar7 == 0) {
        uVar9 = 1;
        goto LAB_00817d08;
      }
      ppppuVar15 = unaff_r5;
    }
    param_2[0x24] = (uint)ppppuVar15;
    param_2[0x25] = uVar7;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x28] = (uint)unaff_r5;
    while (unaff_r6 < unaff_r5) {
      param_2[0x27] = (uint)((int)unaff_r6 + 1);
      FUN_007e5ad0(&local_78,0x20,param_2[0x22]);
      if ((char)local_78 != '\0') {
        ppppuVar15 = param_3;
        ppppuVar25 = local_74;
LAB_00818628:
        local_180 = param_2 + 0x2b;
        if (param_2[0x24] != 0) {
          thunk_FUN_016d3fb4(param_2[0x25]);
        }
        uVar7 = 0x80000000;
        *(undefined1 *)local_180 = 1;
        goto LAB_0081864c;
      }
      iVar13 = *(int *)(*(int *)param_2[0x21] + 0xc);
      uVar30 = (**(code **)(iVar13 + 0x10))
                         (*(int *)(*(int *)param_2[0x21] + 8) +
                          (*(int *)(iVar13 + 8) - 1U & 0xfffffff8) + 8,local_78._1_1_,1);
      *(undefined8 *)(param_2 + 0x29) = uVar30;
LAB_008184f8:
      local_180 = param_2 + 0x2b;
      (**(code **)((int)((ulonglong)uVar30 >> 0x20) + 0xc))(&local_78,(int)uVar30,param_3);
      ppppuVar26 = local_70;
      ppppuVar25 = local_74;
      unaff_r6 = local_78;
      if (local_78 == (undefined4 ****)0x80000001) {
        *(undefined1 *)local_180 = 3;
        goto LAB_008185e4;
      }
      puVar22 = (undefined4 *)param_2[0x2a];
      pcVar11 = (code *)*puVar22;
      ppppuVar15 = (undefined4 ****)param_2[0x29];
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(ppppuVar15);
      }
      if (puVar22[1] != 0) {
        thunk_FUN_016d3fb4(ppppuVar15);
      }
      if (unaff_r6 == (undefined4 ****)&DAT_80000000) goto LAB_00818628;
      if (ppppuVar26 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_0185f9c0);
      }
      cVar1 = *(code *)ppppuVar25;
      uVar7 = param_2[0x26];
      if (uVar7 == param_2[0x24]) {
        FUN_006029c0();
      }
      *(code *)(param_2[0x25] + uVar7) = cVar1;
      param_2[0x26] = uVar7 + 1;
      if (unaff_r6 != (undefined4 ****)0x0) {
        thunk_FUN_016d3fb4(ppppuVar25);
      }
      unaff_r5 = (undefined4 ****)param_2[0x28];
      unaff_r6 = (undefined4 ****)param_2[0x27];
    }
    uVar7 = param_2[0x24];
    ppppuVar25 = (undefined4 ****)param_2[0x25];
    ppppuVar15 = (undefined4 ****)param_2[0x26];
    *(undefined1 *)(param_2 + 0x2b) = 1;
    if (uVar7 == 0x80000001) {
LAB_008185e4:
      local_18c = param_2 + 0x2c;
      *(undefined1 *)local_18c = 3;
      uVar16 = 6;
      goto LAB_0081872c;
    }
LAB_0081864c:
    local_18c = param_2 + 0x2c;
    unaff_r8 = (uint ******)(param_2 + 0x1e);
    if ((char)param_2[0x2b] == '\x03') {
      unaff_r6 = (undefined4 ****)param_2[0x29];
      puVar22 = (undefined4 *)param_2[0x2a];
      pcVar11 = (code *)*puVar22;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(unaff_r6);
      }
      if (puVar22[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
      if (param_2[0x24] != 0) {
        thunk_FUN_016d3fb4(param_2[0x25]);
      }
    }
    *(undefined1 *)local_18c = 1;
    if (uVar7 == 0x80000000) goto LAB_00817b58;
    param_2[0x1c] = uVar7;
    param_2[0x1d] = (uint)ppppuVar25;
    param_2[0x1e] = (uint)ppppuVar15;
    if ((undefined1 *)param_2[0x14] != &DAT_3b9aca00) {
      FUN_01656eb8(&local_78,&DAT_0185fa00,param_2[0x12],param_2[0x13],(undefined1 *)param_2[0x14],
                   &DAT_0185fa00);
      FUN_016dd1aa(&local_c8,&local_78,0x50);
      FUN_016dd1aa(param_2 + 0x20,&local_c8,0x50);
      goto switchD_00816e8c_caseD_7;
    }
LAB_00818798:
    FUN_008672e4(param_2[0x19]);
    *(undefined2 *)(param_2 + 0x1a) = 1;
    if (uVar7 == 0x80000001) goto LAB_00818734;
  }
  else {
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(param_2[0x1d]);
    }
LAB_00817b58:
    unaff_r6 = (undefined4 ****)param_2[0x19];
    if (*(code *)unaff_r6 == (code)0x0) {
      bVar28 = (bool)hasExclusiveAccess(unaff_r6);
      if (!bVar28) goto LAB_00817c00;
      *(code *)unaff_r6 = (code)0x1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00817c00:
      FUN_01280da8(unaff_r6);
    }
    FUN_0128236c(unaff_r6);
    unaff_r5 = (undefined4 ****)&DAT_00000001;
    FUN_0163af68(unaff_r6,1,unaff_r6);
    *(undefined2 *)(param_2 + 0x1a) = 1;
    uVar7 = 0x80000000;
  }
  local_184 = param_2 + 0x44;
  local_188 = (undefined1 *)((int)param_2 + 0x122);
  FUN_007d42e4(param_2 + 8);
  *(undefined1 *)local_184 = 1;
  if (uVar7 == 0x80000000) {
    uVar21 = 3;
    local_13c = unaff_r6;
    ppppuVar26 = ppppuVar25;
  }
  else {
    FUN_007dc944(&local_78,ppppuVar25,ppppuVar15,*(undefined1 *)((int)param_2 + 0x121));
    local_13c = local_64;
    ppppppuVar4 = local_68;
    ppppuVar15 = local_6c;
    unaff_r5 = local_70;
    ppppuVar26 = local_74;
    uVar21 = (uint)local_78 & 0xff;
    if (uVar21 == 4) {
      uVar21 = 4;
      local_13c = ppppuVar26;
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(ppppuVar25);
      }
    }
    else {
      local_112 = local_78._3_1_;
      local_114 = local_78._1_2_;
      unaff_r8 = ppppppuVar4;
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(ppppuVar25);
      }
    }
  }
  local_132 = local_112;
  local_134 = local_114;
  *local_188 = 1;
  local_150 = (uint *****)CONCAT13(local_112,CONCAT21(local_114,(char)uVar21));
  pppppuVar2 = local_150;
  local_14c = ppppuVar26;
  local_148 = unaff_r5;
  local_144 = ppppuVar15;
  local_140 = unaff_r8;
  if (uVar21 == 4) {
    local_150._1_1_ = (undefined1)local_114;
    uVar16 = local_150._1_1_;
    local_150 = pppppuVar2;
    FUN_016dd1aa(local_130,(uint)&local_150 | 2,0x16);
    *(undefined1 *)(param_2 + 0x4d) = 1;
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((int)param_1 + 1) = uVar16;
    FUN_016dd1aa((undefined1 *)((int)param_1 + 2),local_130,0x16);
    return;
  }
  local_c8 = local_150;
  local_c4 = ppppuVar26;
  local_c0 = unaff_r5;
  local_bc = ppppuVar15;
  local_b8 = unaff_r8;
  ppppuStack_b4 = local_13c;
  if ((DAT_018d9130 < 5) &&
     (((DAT_018d93ec - 1 < 2 ||
       ((DAT_018d93ec != 0 && (cVar6 = FUN_0169ac90(&DAT_018d93e4), cVar6 != '\0')))) &&
      (iVar13 = FUN_016949d8(DAT_018d93e4), iVar13 != 0)))) {
    if (*(undefined4 *****)(DAT_018d93e4 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185fa30);
    }
    local_e0 = &local_d0;
    ppppuStack_108 = *(undefined4 *****)(DAT_018d93e4 + 0x24);
    local_104 = *(undefined4 *****)(DAT_018d93e4 + 0x28);
    ppppppuStack_100 = (uint ******)0x0;
    local_e4 = &local_110;
    local_78 = (undefined4 ****)param_2[0x4a];
    local_ec = 1;
    local_f0 = (code *****)&local_e4;
    local_70 = (undefined4 ****)param_2[0x4b];
    local_dc = &DAT_018abb78;
    local_cc = &local_78;
    local_d0 = &DAT_003430e5;
    local_64 = (undefined4 ****)0x8e3048;
    local_6c = (undefined4 ****)FUN_00facb58;
    local_74 = (undefined4 ****)&DAT_00f5c97c;
    local_110 = (uint *****)*(undefined4 *****)(DAT_018d93e4 + 0x1c);
    ppppuStack_10c = *(undefined4 *****)(DAT_018d93e4 + 0x20);
    local_e8 = (undefined4 ****)(DAT_018d93e4 + 0x1c);
    local_68 = (uint ******)&local_c8;
    FUN_0081897c(&local_f0);
  }
  pppppuVar2 = local_c8;
  uVar16 = (undefined1)local_c8;
  uVar7 = (uint)local_c8 & 0xff;
  uVar3 = local_c8._1_1_;
  FUN_016dd1aa(local_130,(uint)&local_c8 | 2,0x16);
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (uVar7 == 6) {
    uVar7 = (uint)pppppuVar2 & 0x100;
joined_r0x00816b74:
    if (uVar7 != 0) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    uVar21 = param_2[0x54];
    uVar7 = param_2[0x55];
    uVar24 = param_2[0x56];
    if (*param_2 == 0 && param_2[1] == 0) {
      cVar6 = (char)param_2[0x4d];
      bVar28 = cVar6 == '\x03';
      if (bVar28) {
        cVar6 = *(char *)((int)param_2 + 0x122);
      }
      if (bVar28 && cVar6 == '\x03') {
        if ((char)param_2[0x44] == '\x03') {
          FUN_007d42e4(param_2 + 8);
        }
        else if (((char)param_2[0x44] == '\0') && (*puVar10 != 0)) {
          thunk_FUN_016d3fb4(param_2[3]);
        }
      }
    }
    else {
      FUN_00a07b4c(puVar10);
    }
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 0x4d) = 0;
    param_2[0x4a] = uVar21;
    param_2[0x4b] = uVar7;
    param_2[0x4c] = uVar24;
    FUN_00816b40(param_1,param_2,param_3);
    return;
  }
  *(undefined1 *)((int)param_1 + 1) = uVar3;
  *(undefined1 *)param_1 = uVar16;
  FUN_016dd1aa((undefined1 *)((int)param_1 + 2),local_130,0x16);
  if (uVar7 == 4) {
    return;
  }
  if (uVar7 != 5) {
    local_150 = (uint *****)*param_1;
    local_14c = (undefined4 ****)param_1[1];
    local_148 = (undefined4 ****)param_1[2];
    local_144 = (undefined4 ****)param_1[3];
    local_140 = (uint ******)param_1[4];
    local_13c = (undefined4 ****)param_1[5];
    iVar13 = (*(code *)param_2[0x57])();
    uVar21 = 0;
    if (iVar13 != 0) {
      uVar21 = param_2[0x52];
    }
    if (iVar13 == 0 || uVar21 == 0) {
      return;
    }
    uVar14 = param_2[0x50];
    param_2[0x52] = uVar21 - 1;
    puVar22 = (undefined4 *)param_1[1];
    uVar24 = param_2[0x4e];
    uVar21 = param_2[0x4f];
    FUN_0165a798(&local_c8);
    FUN_01653ca8(&local_c8,extraout_r1,local_c8,local_c4,local_c0);
    FUN_01656d24(&local_78,&DAT_01864d8c,local_c8,local_c4,local_c0,&DAT_01864d8c,uVar24,uVar21,
                 uVar14);
    FUN_00818a48(param_2);
    *param_2 = 1;
    param_2[1] = 0;
    FUN_016dd1aa(puVar10,&local_78,0x50);
    FUN_00816b40(&local_c8,param_2,param_3);
    local_110 = local_c8;
    ppppuStack_10c = local_c4;
    ppppuStack_108 = local_c0;
    local_104 = local_bc;
    ppppppuStack_100 = local_b8;
    ppppuStack_fc = ppppuStack_b4;
    if (uVar7 == 3) {
      (**(code **)*puVar22)(puVar22);
    }
    *param_1 = (uint)local_110;
    param_1[1] = (uint)ppppuStack_10c;
    param_1[2] = (uint)ppppuStack_108;
    param_1[3] = (uint)local_104;
    param_1[4] = (uint)ppppppuStack_100;
    param_1[5] = (uint)ppppuStack_fc;
    return;
  }
LAB_00818770:
  *(undefined1 *)param_1 = 5;
  return;
}

