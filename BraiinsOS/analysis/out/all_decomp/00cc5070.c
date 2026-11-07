// FUN_00cc5070 @ 00cc5070 size=5880 calls_out=44 calls_in=0
// strings: ii-sysfs/src/sysfs.rs | max receivers | failed to write frame to transport | SetGloba | SetGloba | lDefaultError

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00cc5070(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  char **ppcVar3;
  byte bVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint extraout_r2;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint unaff_r4;
  undefined2 *puVar14;
  byte *pbVar15;
  undefined4 uVar16;
  int *piVar17;
  byte *pbVar18;
  int ***pppiVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined *puVar22;
  char *pcVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  undefined4 *puVar27;
  char cVar28;
  bool bVar29;
  bool bVar30;
  undefined1 uVar31;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr15;
  undefined8 uVar32;
  undefined4 local_e4;
  undefined2 local_e0;
  char *local_dc;
  int ***local_d8;
  int *local_d4;
  int local_cc;
  uint local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_98;
  undefined3 uStack_94;
  int *local_90;
  int ***local_8c;
  char ***local_84;
  code *local_80;
  int *local_7c;
  char **local_78;
  int ***local_74;
  int **local_70;
  char ****local_6c;
  char *local_68;
  int ***pppiStack_64;
  int *local_60;
  int ***local_5c;
  char ****local_58;
  char **ppcStack_50;
  char ***pppcStack_4c;
  undefined4 *local_48;
  undefined4 uStack_44;
  char local_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  int ***local_3c;
  int *local_38;
  int ***local_34;
  char ****local_30;
  int local_2c;
  
  puVar8 = param_1 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    param_1[4] = *param_1;
    iVar24 = param_1[0x3c];
    uVar16 = param_1[0x3d];
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    param_1[0xc] = iVar24;
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0xd] = uVar16;
LAB_00cc50dc:
    ppcStack_50 = (char **)param_1[4];
    pppcStack_4c = (char ***)param_1[5];
    local_48 = (undefined4 *)param_1[6];
    uStack_44 = param_1[7];
    param_1[0xe] = iVar24;
    param_1[0xf] = uVar16;
    *(undefined1 *)((int)param_1 + 0x9e) = 0;
    iVar9 = thunk_FUN_016d4a50(0x2000);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    local_40 = (char)iVar9;
    uStack_3f = (undefined2)((uint)iVar9 >> 8);
    uStack_3d = (undefined1)((uint)iVar9 >> 0x18);
    local_3c = (int ***)0x0;
    local_38 = (int *)0x2000;
    local_34 = (int ***)&DAT_00000011;
    local_30 = (char ****)((uint)local_30 & 0xff000000);
    iVar9 = thunk_FUN_016d4a50(0x2000);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    local_68 = (char *)CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40));
    pppiStack_64 = local_3c;
    local_60 = local_38;
    local_5c = local_34;
    local_58 = local_30;
    param_1[0x1d] = iVar9;
    *(undefined1 *)(param_1 + 0x1a) = 1;
    param_1[0x1f] = 0x2000;
    param_1[0x21] = 0x2000;
    param_1[0x17] = 4;
    param_1[0x1e] = 0;
    param_1[0x20] = 0x11;
    param_1[0x1b] = 0;
    param_1[0x16] = 0x800000;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x14] = 0;
    param_1[0x10] = param_1[4];
    param_1[0x11] = param_1[5];
    param_1[0x12] = param_1[6];
    param_1[0x13] = param_1[7];
    param_1[0x22] = local_68;
    param_1[0x23] = local_3c;
    param_1[0x24] = local_38;
    param_1[0x25] = local_34;
    param_1[0x26] = local_30;
    iVar24 = iVar24 + 8;
    param_1[0x28] = iVar24;
    *(undefined1 *)(param_1 + 0x36) = 0;
LAB_00cc51c4:
    iVar9 = iVar24 + 8;
    param_1[0x2a] = iVar9;
    param_1[0x29] = iVar24;
    *(undefined1 *)(param_1 + 0x35) = 0;
LAB_00cc51e0:
    param_1[0x2b] = iVar9;
    *(undefined1 *)(param_1 + 0x34) = 0;
LAB_00cc51f4:
    *(undefined1 *)(param_1 + 0x33) = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 1;
    param_1[0x32] = 1;
    param_1[0x2c] = iVar9 + 4;
    param_1[0x2d] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018760e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018760e0);
  case 3:
    piVar10 = (int *)(&switchD_00cc5280::switchdataD_00cc5284)[*(byte *)(param_1 + 0x27)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x27)) {
    case 0:
      iVar24 = param_1[0xc];
      uVar16 = param_1[0xd];
      goto LAB_00cc50dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875fe8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875fe8);
    case 4:
      if (*(char *)((int)param_1 + 0xb7) != '\x02') goto LAB_00cc58c4;
      goto LAB_00cc58e0;
    case 5:
      pbVar18 = (byte *)param_1[0x39];
      puVar21 = (undefined4 *)param_1[0x3a];
      goto LAB_00cc60fc;
    case 6:
      if (*(char *)((int)param_1 + 0xb7) == '\x02') goto LAB_00cc5df4;
      goto LAB_00cc5dd8;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x36)) {
    case 0:
      iVar24 = param_1[0x28];
      goto LAB_00cc51c4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875fd8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875fd8);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x35)) {
    case 0:
      iVar9 = param_1[0x2a];
      goto LAB_00cc51e0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876160);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876160);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x34)) {
    case 0:
      iVar9 = param_1[0x2b];
      goto LAB_00cc51f4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876170);
    }
  }
  local_c0 = param_1 + 0x36;
  local_c4 = param_1 + 0x28;
  bVar4 = FUN_0163c8bc(param_1 + 0x2c,param_2);
  if (bVar4 == 2) {
    uVar31 = 3;
    *(undefined1 *)(param_1 + 0x34) = 3;
    *(undefined1 *)(param_1 + 0x35) = 3;
    *(undefined1 *)local_c0 = 3;
    goto LAB_00cc5248;
  }
  FUN_0163c790(param_1 + 0x2c);
  if (param_1[0x2d] != 0) {
    (**(code **)(param_1[0x2d] + 0xc))(param_1[0x2e]);
  }
  if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01876180);
  }
  iVar9 = param_1[0x2b];
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  pcVar23 = (char *)(iVar9 + 4);
  piVar10 = *(int **)param_1[0x29];
  do {
    iVar24 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar24 + 1;
  if (iVar24 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xcc5d10);
    (*pcVar1)();
  }
  piVar17 = piVar10 + 4;
  if ((char)*piVar17 == '\0') {
    bVar29 = (bool)hasExclusiveAccess(piVar17);
    if (!bVar29) goto LAB_00cc5338;
    *(char *)piVar17 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00cc5338:
    FUN_01280da8(piVar17);
  }
  FUN_0128236c(piVar17);
  iVar24 = piVar10[10];
  if (iVar24 == 0) {
    *(char *)(piVar10 + 0xb) = '\0';
  }
  else {
    if (iVar24 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("max receivers",0x1b,&DAT_0187ab30);
    }
    if (iVar24 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187ab40);
    }
  }
  piVar25 = (int *)piVar10[6];
  pppiVar19 = (int ***)piVar10[7];
  piVar10[10] = iVar24 + 1;
  FUN_01282570(piVar17);
  if ((char)*piVar17 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar29 = (bool)hasExclusiveAccess(piVar17);
      if (bVar29) {
        *(char *)piVar17 = '\0';
        goto LAB_00cc53d8;
      }
    } while ((char)*piVar17 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar17);
LAB_00cc53d8:
  uVar11 = *(uint *)(iVar9 + 0x20);
  puVar14 = *(undefined2 **)(iVar9 + 0x1c);
  uVar16 = 0;
  local_40 = (char)piVar25;
  uStack_3f = (undefined2)((uint)piVar25 >> 8);
  uStack_3d = (undefined1)((uint)piVar25 >> 0x18);
  iVar9 = uVar11 * 0x14;
  local_3c = pppiVar19;
  local_38 = piVar10;
  if (0x6666666 < uVar11) {
LAB_00cc5408:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar16,iVar9);
  }
  if (iVar9 == 0) {
    local_c8 = 0;
    local_cc = 2;
    if (*pcVar23 != '\0') goto LAB_00cc54b0;
LAB_00cc5540:
    bVar29 = (bool)hasExclusiveAccess(pcVar23);
    if (bVar29) {
      *pcVar23 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00cc5558;
    }
  }
  else {
    local_cc = thunk_FUN_016d4a50(iVar9);
    if (local_cc == 0) {
      uVar16 = 2;
      goto LAB_00cc5408;
    }
    if (uVar11 != 0) {
      puVar20 = (undefined1 *)(local_cc + 0x13);
      uVar26 = uVar11;
      do {
        local_dc = pcVar23;
        if (iVar9 == 0) break;
        uVar31 = *(undefined1 *)((int)puVar14 + 0x13);
        *(undefined2 *)(puVar20 + -0x13) = *puVar14;
        FUN_016dd1aa(puVar20 + -0x11,puVar14 + 1,0x11);
        *puVar20 = uVar31;
        puVar20 = puVar20 + 0x14;
        iVar9 = iVar9 + -0x14;
        puVar14 = puVar14 + 10;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    local_d8 = pppiVar19;
    local_d4 = piVar25;
    local_c8 = uVar11;
    if (*pcVar23 == '\0') goto LAB_00cc5540;
LAB_00cc54b0:
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar23);
LAB_00cc5558:
  FUN_0128236c(pcVar23);
  unaff_r4 = 1;
  FUN_0163af68(pcVar23,1,pcVar23);
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  param_1[0x30] = local_c8;
  *puVar8 = piVar25;
  param_1[9] = pppiVar19;
  iVar9 = local_cc + uVar11 * 0x14;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[10] = piVar10;
  param_1[0x2e] = local_cc;
  param_1[0x2f] = local_cc;
  param_1[0x31] = iVar9;
  do {
    if (local_cc != iVar9) {
      unaff_r4 = (uint)*(byte *)(local_cc + 0x13);
      param_1[0x2f] = local_cc + 0x14;
    }
    if (local_cc == iVar9 || unaff_r4 == 2) {
      if (param_1[0x30] != 0) {
        thunk_FUN_016d3fb4(param_1[0x2e]);
      }
      break;
    }
    FUN_016dd1aa(&local_b0,local_cc,0x13);
    iVar9 = FUN_0166463c(param_1[0xf]);
    if (iVar9 != 0) goto LAB_00cc5b70;
    param_1[0x28] = param_1 + 0x10;
    param_1[0x29] = local_b0;
    param_1[0x2a] = uStack_ac;
    param_1[0x2b] = uStack_a8;
    param_1[0x2c] = uStack_a4;
    *(char *)((int)param_1 + 0xb7) = (char)unaff_r4;
    *(undefined2 *)(param_1 + 0x2d) = local_a0;
    *(undefined1 *)((int)param_1 + 0xb6) = local_9e;
LAB_00cc58c4:
    FUN_00ce6618(&local_40,param_1 + 0x28,param_2);
    if (local_40 != '\x06') {
      cVar28 = local_40;
      if (local_40 == '\a') goto LAB_00cc59c8;
      ppcStack_50 = (char **)CONCAT13(local_3c._0_1_,CONCAT12(uStack_3d,uStack_3f));
      pppiVar19 = local_3c;
      goto LAB_00cc59c0;
    }
LAB_00cc58e0:
    iVar9 = param_1[0x28];
    do {
      if (*(int *)(iVar9 + 0x38) == 0) goto LAB_00cc5974;
      FUN_00c0b6f8(&local_40,iVar9,param_2,iVar9 + 0x34);
      if (local_40 == '\x05') {
        cVar28 = '\a';
        goto LAB_00cc596c;
      }
      if (local_40 != '\x04') {
        pppiStack_64 = local_3c;
        local_68 = (char *)CONCAT31(CONCAT12(uStack_3d,uStack_3f),local_40);
        cVar28 = local_40;
        goto LAB_00cc596c;
      }
    } while (local_3c != (int ***)0x0);
    FUN_015e79d4(&local_68,0x17,"failed to write frame to transport",0x22);
    cVar28 = (char)local_68;
LAB_00cc596c:
    if (cVar28 != '\x06') goto LAB_00cc59b0;
LAB_00cc5974:
    local_98 = ppcStack_50;
    uStack_94 = pppcStack_4c._0_3_;
    local_cc = param_1[0x2f];
    iVar9 = param_1[0x31];
  } while( true );
LAB_00cc60a4:
  do {
    piVar10 = param_1 + 0xf;
    pbVar18 = (byte *)((int)param_1 + 0x9d);
    *pbVar18 = 0;
    uVar11 = *(uint *)(*piVar10 + 8);
    DataMemoryBarrier(0xb);
    puVar21 = param_1 + 0x28;
    *puVar21 = puVar8;
    param_1[0x39] = pbVar18;
    *(undefined1 *)(param_1 + 0x38) = 0;
    param_1[0x37] = 0;
    param_1[0x30] = piVar10;
    param_1[0x31] = *piVar10 + 8;
    param_1[0x32] = uVar11 >> 2;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
    param_1[0x3a] = puVar21;
LAB_00cc60fc:
    uVar32 = thunk_FUN_016de0ee(piVar10,0x40);
    iVar9 = (int)uVar32 + (int)((ulonglong)uVar32 >> 0x20);
    puVar27 = (undefined4 *)*param_2;
    if (*(char *)(iVar9 + 0x38) != '\x01') {
      if (*(char *)(iVar9 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar9,FUN_00bacf28);
      *(undefined1 *)(iVar9 + 0x38) = 1;
    }
    cVar28 = *(char *)(iVar9 + 0x30);
    bVar29 = cVar28 == '\x01';
    if (bVar29) {
      cVar28 = *(char *)(iVar9 + 0x31);
    }
    if (bVar29 && cVar28 == '\0') {
      uVar31 = 5;
      FUN_016455a4(*puVar27,puVar27[1]);
      goto LAB_00cc5248;
    }
    if ((*(uint *)(iVar9 + 0x24) & 1) == 0) {
      uVar32 = FUN_0164e918();
      if ((uint)uVar32 < 2) {
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),1);
      }
    }
    else {
      uVar32 = CONCAT44(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c));
    }
    uVar11 = (uint)((ulonglong)uVar32 >> 0x20);
    uVar13 = (uint)uVar32;
    uVar11 = uVar11 ^ uVar11 << 0x11;
    *(uint *)(iVar9 + 0x28) = uVar13;
    *(undefined4 *)(iVar9 + 0x24) = 1;
    uVar11 = uVar13 >> 0x10 ^ uVar11 >> 7 ^ uVar13 ^ uVar11;
    *(uint *)(iVar9 + 0x2c) = uVar11;
    bVar29 = CARRY4(uVar11,uVar13);
    uVar31 = SCARRY4(uVar11,uVar13);
    puVar12 = puVar21 + 1;
    piVar10 = puVar21 + 2;
    bVar4 = *pbVar18;
    uVar26 = (uint)bVar4;
    if ((int)(uVar11 + uVar13) < 0) {
      pbVar15 = (byte *)((uVar26 & 2) >> 1 ^ 1);
      if ((bVar4 & 2) == 0) {
        iVar24 = FUN_016638c8(puVar21 + 8,puVar27);
        bVar4 = 2;
        bVar29 = true;
        uVar31 = false;
        if (iVar24 != 0) {
          uVar26 = (uint)*pbVar18;
          goto LAB_00cc61f0;
        }
        uVar11 = 2;
        goto LAB_00cc66c0;
      }
LAB_00cc61f0:
      bVar30 = (uVar26 & 1) == 0;
      cVar28 = '\0';
      if (bVar30) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(puVar21 + 7)) {
        case 0:
          *(undefined1 *)(puVar21 + 6) = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
          puVar21[1] = *puVar21;
          puVar21[2] = 0;
          break;
        case 1:
switchD_00cc6208_caseD_1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187c364);
        case 2:
switchD_00cc6208_caseD_2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187c364);
        case 4:
          uVar32 = FUN_00587d18();
          iVar9 = (int)((ulonglong)uVar32 >> 0x20);
          puVar6 = (uint *)uVar32;
          if ((bool)uVar31) {
            pbVar15 = pbVar15 + -0x361;
            uVar11 = (uint)*pbVar15;
          }
          else {
            uVar11 = 0x630000 - iVar9;
          }
          uVar26 = extraout_r2;
          if (!bVar30 && cVar28 == uVar31) {
            uVar26 = (extraout_r2 >> ((uint)puVar6 & 0x1f) |
                     extraout_r2 << 0x20 - ((uint)puVar6 & 0x1f)) - (int)puVar6;
          }
          puVar7 = puVar6;
          if (!bVar30) {
            puVar7 = (uint *)((int)puVar6 - iVar9);
            *puVar6 = uVar11;
          }
          if ((bool)uVar31) {
            DAT_0056a9f8 = SUB41(puVar21,0);
            pbVar15 = pbVar15 + -0x72;
            uVar26 = (uint)*pbVar15;
          }
          if (bVar29) {
            uVar31 = SBORROW4((uint)pbVar15 >> (uVar26 & 0x1f) |
                              (int)pbVar15 << 0x20 - (uVar26 & 0x1f),(int)param_2);
          }
          if ((bool)uVar31) {
            func_0x02243544(puVar7);
          }
          if ((bool)uVar31) {
            coprocessor_function(0,6,3,in_cr7,in_cr5,in_cr15);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_00cc627c:
          cVar28 = *(char *)(iVar9 + 0x31);
          cVar2 = *(char *)(iVar9 + 0x30);
          cVar5 = cVar28;
          if (cVar2 != '\x01') {
LAB_00cc62a0:
            *(char *)(iVar9 + 0x31) = cVar5;
            goto LAB_00cc62a8;
          }
          if (cVar28 != '\0') {
            cVar5 = cVar28 + -1;
            goto LAB_00cc62a0;
          }
          FUN_016455a4(*puVar27,puVar27[1]);
          goto LAB_00cc6ad8;
        }
        cVar2 = '\0';
        cVar28 = '\0';
        if (*(char *)(iVar9 + 0x38) != '\x02') {
          FUN_015e8e6c(iVar9,FUN_00bacf28);
          *(undefined1 *)(iVar9 + 0x38) = 1;
          goto LAB_00cc627c;
        }
LAB_00cc62a8:
        FUN_00c0b178(&local_40,*puVar12,piVar10,puVar27);
        piVar17 = local_38;
        iVar24 = CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40));
        if (iVar24 == 3 && local_3c == (int ***)0x0) {
          local_c4 = (undefined4 *)0x0;
          cVar28 = *(char *)((int)local_38 + 0x27);
          local_dc = (char *)0x0;
          if (cVar28 != '\x02') {
            local_c4 = *(undefined4 **)((int)local_38 + 0x1a);
            local_dc = *(char **)((int)local_38 + 0x1e);
            local_d4 = *(int **)((int)local_38 + 0x22);
            local_e0 = (undefined2)local_38[5];
            local_d8 = (int ***)(uint)CONCAT11(cVar28,*(char *)((int)local_38 + 0x26));
            local_e4 = *(undefined4 *)((int)local_38 + 0x16);
          }
          uVar11 = (uint)(cVar28 == '\x02');
          piVar25 = local_38 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar25;
            bVar29 = (bool)hasExclusiveAccess(piVar25);
          } while (!bVar29);
          *piVar25 = iVar9 + -1;
          DataMemoryBarrier(0xb);
          if (iVar9 == 1) {
            *(char *)((int)local_38 + 0x27) = '\x02';
          }
          FUN_01282570(local_38);
          if ((char)*piVar17 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar29 = (bool)hasExclusiveAccess(piVar17);
              if (bVar29) {
                *(char *)piVar17 = '\0';
                goto LAB_00cc65b0;
              }
            } while ((char)*piVar17 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar17);
        }
        else {
          local_dc = (char *)0x0;
          if (iVar24 == 1) {
            local_c4 = (undefined4 *)0x0;
          }
          else {
            if (iVar24 != 2) {
              if (cVar2 != '\0') {
                if (*(char *)(iVar9 + 0x38) != '\x01') {
                  if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_00cc6ad8;
                  FUN_015e8e6c(iVar9,FUN_01655ec4);
                  *(undefined1 *)(iVar9 + 0x38) = 1;
                }
                *(char *)(iVar9 + 0x31) = cVar28;
                *(undefined1 *)(iVar9 + 0x30) = 1;
              }
LAB_00cc6ad8:
              uVar31 = 5;
              *(undefined1 *)(puVar21 + 7) = 3;
              goto LAB_00cc5248;
            }
            local_d4 = local_38;
            local_d8 = local_34;
            local_c4 = (undefined4 *)&DAT_00000001;
          }
          uVar11 = 1;
        }
LAB_00cc65b0:
        FUN_00e7c67c(puVar12);
        goto LAB_00cc6634;
      }
LAB_00cc66e4:
      uVar11 = 3;
      if (pbVar15 != (byte *)0x0) goto LAB_00cc6a78;
    }
    else {
      pbVar15 = (byte *)(uVar26 & 1 ^ 1);
      if ((bVar4 & 1) != 0) {
LAB_00cc669c:
        if ((uVar26 & 2) != 0) goto LAB_00cc66e4;
        iVar9 = FUN_016638c8(puVar21 + 8,puVar27);
        bVar4 = 2;
        uVar11 = 2;
        if (iVar9 == 0) goto LAB_00cc66c0;
LAB_00cc6a78:
        uVar31 = 5;
        goto LAB_00cc5248;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(puVar21 + 7)) {
      case 0:
        *(undefined1 *)(puVar21 + 6) = 0;
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[1] = *puVar21;
        puVar21[2] = 0;
        break;
      case 1:
        goto switchD_00cc6208_caseD_1;
      case 2:
        goto switchD_00cc6208_caseD_2;
      }
      if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_00cc6428:
        cVar28 = *(char *)(iVar9 + 0x31);
        cVar2 = *(char *)(iVar9 + 0x30);
        cVar5 = cVar28;
        if (cVar2 != '\x01') {
LAB_00cc644c:
          *(char *)(iVar9 + 0x31) = cVar5;
          goto LAB_00cc6454;
        }
        if (cVar28 != '\0') {
          cVar5 = cVar28 + -1;
          goto LAB_00cc644c;
        }
        FUN_016455a4(*puVar27,puVar27[1]);
        goto LAB_00cc6690;
      }
      cVar2 = '\0';
      cVar28 = '\0';
      if (*(char *)(iVar9 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar9,FUN_00bacf28);
        *(undefined1 *)(iVar9 + 0x38) = 1;
        goto LAB_00cc6428;
      }
LAB_00cc6454:
      FUN_00c0b178(&local_40,*puVar12,piVar10,puVar27);
      piVar17 = local_38;
      iVar24 = CONCAT13(uStack_3d,CONCAT21(uStack_3f,local_40));
      if (iVar24 == 3 && local_3c == (int ***)0x0) {
        local_c4 = (undefined4 *)0x0;
        cVar28 = *(char *)((int)local_38 + 0x27);
        local_dc = (char *)0x0;
        if (cVar28 != '\x02') {
          local_c4 = *(undefined4 **)((int)local_38 + 0x1a);
          local_dc = *(char **)((int)local_38 + 0x1e);
          local_d4 = *(int **)((int)local_38 + 0x22);
          local_e0 = (undefined2)local_38[5];
          local_d8 = (int ***)(uint)CONCAT11(cVar28,*(char *)((int)local_38 + 0x26));
          local_e4 = *(undefined4 *)((int)local_38 + 0x16);
        }
        uVar11 = (uint)(cVar28 == '\x02');
        piVar25 = local_38 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar25;
          bVar29 = (bool)hasExclusiveAccess(piVar25);
        } while (!bVar29);
        *piVar25 = iVar9 + -1;
        DataMemoryBarrier(0xb);
        if (iVar9 == 1) {
          *(char *)((int)local_38 + 0x27) = '\x02';
        }
        FUN_01282570(local_38);
        if ((char)*piVar17 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar29 = (bool)hasExclusiveAccess(piVar17);
            if (bVar29) {
              *(char *)piVar17 = '\0';
              goto LAB_00cc662c;
            }
          } while ((char)*piVar17 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(piVar17);
      }
      else {
        if (iVar24 == 0) {
          if (cVar2 != '\0') {
            if (*(char *)(iVar9 + 0x38) != '\x01') {
              if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_00cc6690;
              FUN_015e8e6c(iVar9,FUN_01655ec4);
              *(undefined1 *)(iVar9 + 0x38) = 1;
            }
            *(char *)(iVar9 + 0x31) = cVar28;
            *(undefined1 *)(iVar9 + 0x30) = 1;
          }
LAB_00cc6690:
          *(undefined1 *)(puVar21 + 7) = 3;
          uVar26 = (uint)*pbVar18;
          goto LAB_00cc669c;
        }
        local_dc = (char *)0x0;
        if (iVar24 != 1) {
          local_d4 = local_38;
          local_d8 = local_34;
        }
        local_c4 = (undefined4 *)(uint)(iVar24 != 1);
        uVar11 = 1;
      }
LAB_00cc662c:
      FUN_00e7c67c(puVar12);
LAB_00cc6634:
      if (*piVar10 != 0) {
        (**(code **)(*piVar10 + 0xc))(puVar21[3]);
      }
      bVar4 = 1;
      *(undefined1 *)(puVar21 + 7) = 1;
LAB_00cc66c0:
      *pbVar18 = *pbVar18 | bVar4;
    }
    FUN_00972a48(param_1 + 0x28);
    iVar9 = uVar11 - 1;
    if (uVar11 == 0 || iVar9 == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      if (iVar9 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01876028);
      }
      goto LAB_00cc69a0;
    }
    if ((uVar11 & 1) == 0) {
      *(int **)((int)param_1 + 0xb2) = local_d4;
      *(undefined4 **)((int)param_1 + 0xaa) = local_c4;
      *(undefined4 *)((int)param_1 + 0xa6) = local_e4;
      *(undefined2 *)(param_1 + 0x29) = local_e0;
      param_1[0x28] = param_1 + 0x10;
      *(short *)((int)param_1 + 0xb6) = (short)local_d8;
      *(char **)((int)param_1 + 0xae) = local_dc;
      if (((uint)local_d8 & 0xffff) >> 8 != 2) {
LAB_00cc5dd8:
        FUN_00ce6618(&local_40,param_1 + 0x28,param_2);
        if (local_40 != '\x06') {
          cVar28 = local_40;
          if (local_40 == '\a') goto LAB_00cc5ec4;
          ppcStack_50 = (char **)CONCAT13(local_3c._0_1_,CONCAT12(uStack_3d,uStack_3f));
          pppiVar19 = local_3c;
          goto LAB_00cc5ebc;
        }
      }
LAB_00cc5df4:
      iVar9 = param_1[0x28];
      do {
        if (*(int *)(iVar9 + 0x38) == 0) goto LAB_00cc60a4;
        FUN_00c0b6f8(&local_40,iVar9,param_2,iVar9 + 0x34);
        if (local_40 == '\x05') {
          cVar28 = '\a';
          goto LAB_00cc5e98;
        }
        if (local_40 != '\x04') {
          pppiStack_64 = local_3c;
          local_68 = (char *)CONCAT31(CONCAT12(uStack_3d,uStack_3f),local_40);
          cVar28 = local_40;
          if (local_40 == '\x06') goto LAB_00cc60a4;
          goto LAB_00cc5e98;
        }
      } while (local_3c != (int ***)0x0);
      FUN_015e79d4(&local_68,0x17,"failed to write frame to transport",0x22);
      cVar28 = (char)local_68;
      if ((char)local_68 != '\x06') goto LAB_00cc5e98;
      goto LAB_00cc60a4;
    }
    if (((uint)local_c4 & 1) == 0) goto LAB_00cc69a0;
    local_90 = local_d4;
    local_8c = local_d8;
  } while ((3 < DAT_018d9130) || (DAT_018da3dc == '\0'));
  if (DAT_018da3dc == '\x01') {
LAB_00cc6784:
    puVar22 = &DAT_018ae394;
    DataMemoryBarrier(0xb);
    pcVar23 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0))
    {
      pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar9 = (**(code **)(puVar22 + 0x14))(pcVar23,DAT_018da3d4);
    if (iVar9 == 0) goto LAB_00cc60a4;
  }
  else if (DAT_018da3dc != '\x02') {
    cVar28 = FUN_0169ac90(&DAT_018da3d4);
    if (cVar28 == '\0') goto LAB_00cc60a4;
    if (cVar28 != '\x02') goto LAB_00cc6784;
  }
  if (*(int ****)(DAT_018da3d4 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876018);
  }
  pppcStack_4c = &local_78;
  local_60 = *(int **)(DAT_018da3d4 + 0x24);
  local_5c = *(int ****)(DAT_018da3d4 + 0x28);
  local_7c = (int *)(DAT_018da3d4 + 0x1c);
  local_68 = (char *)*local_7c;
  ppcStack_50 = &local_68;
  local_84 = &ppcStack_50;
  local_74 = &local_70;
  local_70 = &local_90;
  local_58 = (char ****)0x0;
  local_3c = (int ***)0x0;
  local_30 = &local_84;
  local_80 = (code *)0x1;
  local_48 = (undefined4 *)&DAT_018abb78;
  local_78 = (char **)&DAT_00592dd4;
  local_6c = (char ****)FUN_00fac4cc;
  local_40 = '\x01';
  uStack_3f = 0;
  uStack_3d = 0;
  DataMemoryBarrier(0xb);
  pcVar23 = s_SetGloba_00414c05;
  puVar22 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  pppiStack_64 = *(int ****)(DAT_018da3d4 + 0x20);
  local_2c = DAT_018da3d4;
  iVar9 = (**(code **)(puVar22 + 0x28))(pcVar23,&local_40);
  if (iVar9 != 0) {
    (**(code **)(puVar22 + 0x2c))(pcVar23,&local_40);
  }
  goto LAB_00cc60a4;
LAB_00cc59b0:
  if (cVar28 != '\a') {
    ppcStack_50 = (char **)CONCAT13(pppiStack_64._0_1_,local_68._1_3_);
    pppiVar19 = pppiStack_64;
LAB_00cc59c0:
    pppcStack_4c._0_3_ = (undefined3)((uint)pppiVar19 >> 8);
  }
LAB_00cc59c8:
  if (cVar28 == '\a') {
    uVar31 = 4;
LAB_00cc5248:
    local_bc = param_1 + 0x27;
    *(undefined1 *)local_bc = uVar31;
    uVar31 = 3;
    uVar16 = 1;
    goto LAB_00cc5258;
  }
  uStack_94 = SUB43(pppcStack_4c,0);
  local_98 = ppcStack_50;
  ppcVar3 = local_98;
  local_98._3_1_ = (undefined1)((uint)ppcStack_50 >> 0x18);
  local_74 = (int ***)CONCAT31(uStack_94,local_98._3_1_);
  local_78 = (char **)CONCAT31((int3)ppcStack_50,cVar28);
  local_98 = ppcVar3;
  if ((DAT_018d9130 < 4) && (DAT_018da3e8 != '\0')) {
    if (DAT_018da3e8 == '\x01') {
LAB_00cc5a50:
      puVar22 = &DAT_018ae394;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar9 = (**(code **)(puVar22 + 0x14))(pcVar23,DAT_018da3e0);
      if (iVar9 == 0) goto LAB_00cc5b54;
    }
    else if (DAT_018da3e8 != '\x02') {
      cVar28 = FUN_0169ac90(&DAT_018da3e0);
      if (cVar28 == '\0') goto LAB_00cc5b54;
      if (cVar28 != '\x02') goto LAB_00cc5a50;
    }
    uVar16 = *(undefined4 *)(DAT_018da3e0 + 0x1c);
    if (*(int ****)(DAT_018da3e0 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875ff8);
    }
    local_38 = *(int **)(DAT_018da3e0 + 0x24);
    local_34 = *(int ****)(DAT_018da3e0 + 0x28);
    pppiStack_64 = &local_70;
    pppcStack_4c = (char ***)&DAT_00000001;
    local_6c = &local_84;
    local_68 = &local_40;
    local_84 = &local_78;
    ppcStack_50 = &local_68;
    local_40 = (char)uVar16;
    uStack_3f = (undefined2)((uint)uVar16 >> 8);
    uStack_3d = (undefined1)((uint)uVar16 >> 0x18);
    local_30 = (char ****)0x0;
    local_60 = (int *)&DAT_018abb78;
    local_70 = (int **)&DAT_005891dd;
    local_80 = FUN_016b17f4;
    local_48 = (undefined4 *)(DAT_018da3e0 + 0x1c);
    local_3c = *(int ****)(DAT_018da3e0 + 0x20);
    FUN_00978b60(&ppcStack_50);
  }
LAB_00cc5b54:
  FUN_00cc6fbc((uint)local_78 & 0xff,local_74);
LAB_00cc5b70:
  if (param_1[0x30] != 0) {
    thunk_FUN_016d3fb4(param_1[0x2e]);
  }
  FUN_00994e1c(puVar8);
  piVar10 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[10]);
  }
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  FUN_005c178c(param_1 + 0x10);
  puVar8 = param_1 + 0xf;
  FUN_01663cc4(*puVar8);
  piVar10 = (int *)*puVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar8);
  }
  piVar10 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
  goto LAB_00cc6a44;
LAB_00cc5e98:
  if (cVar28 != '\a') {
    ppcStack_50 = (char **)CONCAT13(pppiStack_64._0_1_,local_68._1_3_);
    pppiVar19 = pppiStack_64;
LAB_00cc5ebc:
    pppcStack_4c._0_3_ = (undefined3)((uint)pppiVar19 >> 8);
  }
LAB_00cc5ec4:
  if (cVar28 == '\a') {
    uVar31 = 6;
    goto LAB_00cc5248;
  }
  local_74._0_1_ = (undefined1)((uint)ppcStack_50 >> 0x18);
  local_74 = (int ***)CONCAT31((int3)pppcStack_4c,local_74._0_1_);
  local_78 = (char **)CONCAT31((int3)ppcStack_50,cVar28);
  if ((DAT_018d9130 < 4) && (DAT_018da3f4 != '\0')) {
    if (DAT_018da3f4 == '\x01') {
LAB_00cc5f3c:
      puVar22 = &DAT_018ae394;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar22 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar9 = (**(code **)(puVar22 + 0x14))(pcVar23,DAT_018da3ec);
      if (iVar9 == 0) goto LAB_00cc6038;
    }
    else if (DAT_018da3f4 != '\x02') {
      cVar28 = FUN_0169ac90(&DAT_018da3ec);
      if (cVar28 == '\0') goto LAB_00cc6038;
      if (cVar28 != '\x02') goto LAB_00cc5f3c;
    }
    if (*(int ****)(DAT_018da3ec + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876008);
    }
    pppiStack_64 = &local_70;
    local_38 = *(int **)(DAT_018da3ec + 0x24);
    local_34 = *(int ****)(DAT_018da3ec + 0x28);
    local_48 = (undefined4 *)(DAT_018da3ec + 0x1c);
    uVar16 = *local_48;
    local_68 = &local_40;
    ppcStack_50 = &local_68;
    local_30 = (char ****)0x0;
    pppcStack_4c = (char ***)&DAT_00000001;
    local_6c = &local_84;
    local_84 = &local_78;
    local_40 = (char)uVar16;
    uStack_3f = (undefined2)((uint)uVar16 >> 8);
    uStack_3d = (undefined1)((uint)uVar16 >> 0x18);
    local_60 = (int *)&DAT_018abb78;
    local_70 = (int **)&DAT_005891dd;
    local_80 = FUN_016b17f4;
    local_3c = *(int ****)(DAT_018da3ec + 0x20);
    FUN_0169bb88(DAT_018da3ec,&ppcStack_50);
  }
LAB_00cc6038:
  FUN_00cc6fbc((uint)local_78 & 0xff,local_74);
LAB_00cc69a0:
  FUN_00994e1c(puVar8);
  piVar10 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[10]);
  }
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  FUN_005c178c(param_1 + 0x10);
  puVar8 = param_1 + 0xf;
  FUN_01663cc4(*puVar8);
  piVar10 = (int *)*puVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar8);
  }
  piVar10 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar10;
    bVar29 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar29);
  *piVar10 = iVar9 + -1;
LAB_00cc6a44:
  local_b8 = param_1 + 4;
  local_bc = param_1 + 0x27;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0xe]);
  }
  uVar31 = 1;
  *(undefined1 *)local_bc = 1;
  FUN_009726a8(local_b8);
  uVar16 = 0;
LAB_00cc5258:
  *(undefined1 *)(param_1 + 0x3e) = uVar31;
  return uVar16;
}

