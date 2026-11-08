// FUN_009772b0 @ 009772b0 size=4444 calls_out=42 calls_in=0
// strings: max receivers | SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffd0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_009772b0(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  int local_f0;
  char *local_ec;
  int local_e8;
  uint local_e4;
  undefined1 ****local_e0;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  char *local_a0;
  undefined2 local_9c;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined1 ****local_90;
  char *local_8c;
  char ***local_84;
  code *local_80;
  int *local_7c;
  char **local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined1 ****local_6c;
  char *local_68;
  undefined4 ****local_64;
  int *local_60;
  int iStack_5c;
  undefined1 ****local_58;
  char **local_50;
  undefined1 ***local_4c;
  undefined4 *local_48;
  int iStack_44;
  char local_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  int *local_38;
  int local_34;
  undefined1 ****local_30;
  char *local_2c;
  
  piVar7 = param_1 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x3e]) {
  case '\0':
    param_1[4] = *param_1;
    iVar22 = param_1[0x3c];
    iVar14 = param_1[0x3d];
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    param_1[0xc] = iVar22;
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0xd] = iVar14;
LAB_0097732c:
    local_50 = (char **)param_1[4];
    local_4c = (undefined1 ***)param_1[5];
    local_48 = (undefined4 *)param_1[6];
    iStack_44 = param_1[7];
    param_1[0xe] = iVar22;
    param_1[0xf] = iVar14;
    *(undefined1 *)((int)param_1 + 0x9e) = 0;
    iVar14 = thunk_FUN_016d4a50(0x2000);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    local_40 = (char)iVar14;
    uStack_3f = (undefined1)((uint)iVar14 >> 8);
    uStack_3e = (undefined2)((uint)iVar14 >> 0x10);
    local_3c = 0;
    uStack_3b = 0;
    uStack_3a = 0;
    local_38 = (int *)0x2000;
    local_34 = 0x11;
    local_30 = (undefined1 ****)((uint)local_30 & 0xff000000);
    iVar14 = thunk_FUN_016d4a50(0x2000);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    local_68 = (char *)CONCAT22(uStack_3e,CONCAT11(uStack_3f,local_40));
    local_64 = (undefined4 ****)CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c));
    local_60 = local_38;
    iStack_5c = local_34;
    local_58 = local_30;
    param_1[0x1d] = iVar14;
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
    param_1[0x22] = (int)local_68;
    param_1[0x23] = (int)local_64;
    param_1[0x24] = (int)local_38;
    param_1[0x25] = local_34;
    param_1[0x26] = (int)local_30;
    iVar22 = iVar22 + 8;
    param_1[0x28] = iVar22;
    *(undefined1 *)(param_1 + 0x36) = 0;
LAB_0097742c:
    iVar14 = iVar22 + 8;
    param_1[0x2a] = iVar14;
    param_1[0x29] = iVar22;
    *(undefined1 *)(param_1 + 0x35) = 0;
LAB_00977448:
    param_1[0x2b] = iVar14;
    *(undefined1 *)(param_1 + 0x34) = 0;
LAB_0097745c:
    *(undefined1 *)(param_1 + 0x33) = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 1;
    param_1[0x32] = 1;
    param_1[0x2c] = iVar14 + 4;
    param_1[0x2d] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018760e0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018760e0);
  case '\x03':
    piVar6 = (int *)(&switchD_009774ec::switchdataD_009774f0)[*(byte *)(param_1 + 0x27)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x27)) {
    case 0:
      iVar22 = param_1[0xc];
      iVar14 = param_1[0xd];
      goto LAB_0097732c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875fe8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875fe8);
    case 4:
      goto switchD_009774ec_caseD_4;
    case 5:
      pbVar12 = (byte *)param_1[0x39];
      piVar13 = (int *)param_1[0x3a];
      goto LAB_00977ffc;
    case 6:
      goto switchD_009774ec_caseD_6;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x36]) {
    case '\0':
      iVar22 = param_1[0x28];
      goto LAB_0097742c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875fd8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875fd8);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x35]) {
    case '\0':
      iVar14 = param_1[0x2a];
      goto LAB_00977448;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876160);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876160);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x34]) {
    case '\0':
      iVar14 = param_1[0x2b];
      goto LAB_0097745c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876170);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876170);
    }
  }
  local_d8 = param_1 + 0x36;
  local_e0 = (undefined1 ****)(param_1 + 0x28);
  bVar2 = FUN_0163c8bc(param_1 + 0x2c,param_2);
  if (bVar2 == 2) {
    uVar3 = 3;
    *(undefined1 *)(param_1 + 0x34) = 3;
    *(undefined1 *)(param_1 + 0x35) = 3;
    *(undefined1 *)local_d8 = 3;
LAB_009774b0:
    local_d4 = param_1 + 0x27;
    uVar10 = 3;
    *(undefined1 *)local_d4 = uVar3;
    uVar5 = 1;
    goto LAB_009774c0;
  }
  FUN_0163c790(param_1 + 0x2c);
  if (param_1[0x2d] != 0) {
    (**(code **)(param_1[0x2d] + 0xc))(param_1[0x2e]);
  }
  if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01876180);
  }
  iVar14 = param_1[0x2b];
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  pcVar17 = (char *)(iVar14 + 4);
  piVar6 = *(int **)param_1[0x29];
  do {
    iVar22 = *piVar6;
    bVar23 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar23);
  *piVar6 = iVar22 + 1;
  if (iVar22 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x977e58);
    (*pcVar1)();
  }
  piVar13 = piVar6 + 4;
  if ((char)*piVar13 == '\0') {
    bVar23 = (bool)hasExclusiveAccess(piVar13);
    if (!bVar23) goto LAB_009775a4;
    *(char *)piVar13 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009775a4:
    FUN_01280da8(piVar13);
  }
  FUN_0128236c(piVar13);
  iVar22 = piVar6[10];
  if (iVar22 == 0) {
    *(undefined1 *)(piVar6 + 0xb) = 0;
  }
  else {
    if (iVar22 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("max receivers",0x1b,&DAT_0187ab30);
    }
    if (iVar22 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187ab40);
    }
  }
  iVar21 = piVar6[6];
  iVar11 = piVar6[7];
  piVar6[10] = iVar22 + 1;
  FUN_01282570(piVar13);
  if ((char)*piVar13 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(piVar13);
      if (bVar23) {
        *(char *)piVar13 = '\0';
        goto LAB_00977644;
      }
    } while ((char)*piVar13 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar13);
LAB_00977644:
  uVar8 = *(uint *)(iVar14 + 0x20);
  puVar15 = *(undefined2 **)(iVar14 + 0x1c);
  uVar5 = 0;
  local_40 = (char)iVar21;
  uStack_3f = (undefined1)((uint)iVar21 >> 8);
  uStack_3e = (undefined2)((uint)iVar21 >> 0x10);
  local_3c = (undefined1)iVar11;
  uStack_3b = (undefined1)((uint)iVar11 >> 8);
  uStack_3a = (undefined2)((uint)iVar11 >> 0x10);
  iVar14 = uVar8 * 0x14;
  local_38 = piVar6;
  if (0x6666666 < uVar8) {
LAB_00977674:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,iVar14);
  }
  if (iVar14 == 0) {
    local_e4 = 0;
    local_e8 = 2;
    if (*pcVar17 != '\0') goto LAB_00977704;
LAB_00977770:
    bVar23 = (bool)hasExclusiveAccess(pcVar17);
    if (!bVar23) goto LAB_00977780;
    *pcVar17 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    local_e8 = thunk_FUN_016d4a50(iVar14);
    if (local_e8 == 0) {
      uVar5 = 2;
      goto LAB_00977674;
    }
    if (uVar8 != 0) {
      puVar18 = (undefined1 *)(local_e8 + 0x13);
      uVar19 = uVar8;
      do {
        local_f0 = iVar11;
        local_ec = pcVar17;
        if (iVar14 == 0) break;
        uVar3 = *(undefined1 *)((int)puVar15 + 0x13);
        *(undefined2 *)(puVar18 + -0x13) = *puVar15;
        FUN_016dd1aa(puVar18 + -0x11,puVar15 + 1,0x11);
        *puVar18 = uVar3;
        puVar18 = puVar18 + 0x14;
        iVar14 = iVar14 + -0x14;
        puVar15 = puVar15 + 10;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    local_e4 = uVar8;
    if (*pcVar17 == '\0') goto LAB_00977770;
LAB_00977704:
    ClearExclusiveLocal();
LAB_00977780:
    FUN_01280da8(pcVar17);
  }
  FUN_0128236c(pcVar17);
  FUN_0163af68(pcVar17,1,pcVar17);
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[10] = (int)piVar6;
  *piVar7 = iVar21;
  param_1[9] = iVar11;
  iVar14 = local_e8 + uVar8 * 0x14;
  param_1[0x2e] = local_e8;
  param_1[0x2f] = local_e8;
  param_1[0x30] = local_e4;
  param_1[0x31] = iVar14;
  while( true ) {
    if (local_e8 != iVar14) {
      piVar6 = (int *)(uint)*(byte *)(local_e8 + 0x13);
      param_1[0x2f] = local_e8 + 0x14;
    }
    if (local_e8 == iVar14 || piVar6 == (int *)&SUB_00000002) {
      if (param_1[0x30] != 0) {
        thunk_FUN_016d3fb4(param_1[0x2e]);
      }
      goto LAB_00977fa4;
    }
    FUN_016dd1aa(&local_c0,local_e8,0x13);
    iVar14 = FUN_0166463c(param_1[0xf]);
    if (iVar14 != 0) goto LAB_00977c8c;
    param_1[0x28] = (int)(param_1 + 0x10);
    param_1[0x29] = local_c0;
    param_1[0x2a] = iStack_bc;
    param_1[0x2b] = iStack_b8;
    param_1[0x2c] = iStack_b4;
    *(char *)((int)param_1 + 0xb7) = (char)piVar6;
    *(undefined2 *)(param_1 + 0x2d) = local_b0;
    *(undefined1 *)((int)param_1 + 0xb6) = local_ae;
switchD_009774ec_caseD_4:
    FUN_00993a28(&local_40,param_1 + 0x28,param_2);
    if (local_40 == '\a') {
      uVar3 = 4;
      goto LAB_009774b0;
    }
    uStack_a8 = CONCAT13(local_3c,CONCAT21(uStack_3e,uStack_3f));
    uStack_a4 = (undefined3)(CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)) >> 8);
    if (local_40 != '\x06') break;
    local_e8 = param_1[0x2f];
    iVar14 = param_1[0x31];
    piVar6 = param_1;
  }
  local_74 = (undefined4 ****)CONCAT31(uStack_a4,local_3c);
  local_78 = (char **)CONCAT31(CONCAT21(uStack_3e,uStack_3f),local_40);
  if ((DAT_018d9130 < 4) &&
     (((DAT_018da3e8 - 1 < 2 ||
       ((DAT_018da3e8 != 0 && (cVar4 = FUN_0169ac90(&DAT_018da3e0), cVar4 != '\0')))) &&
      (iVar14 = FUN_016949d8(DAT_018da3e0), iVar14 != 0)))) {
    uVar5 = *(undefined4 *)(DAT_018da3e0 + 0x1c);
    iVar14 = *(int *)(DAT_018da3e0 + 0x20);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875ff8);
    }
    local_38 = *(int **)(DAT_018da3e0 + 0x24);
    local_50 = &local_68;
    local_34 = *(int *)(DAT_018da3e0 + 0x28);
    local_64 = &local_70;
    local_4c = (undefined1 ***)&DAT_00000001;
    local_6c = &local_84;
    local_84 = &local_78;
    local_30 = (undefined1 ****)0x0;
    local_40 = (char)uVar5;
    uStack_3f = (undefined1)((uint)uVar5 >> 8);
    uStack_3e = (undefined2)((uint)uVar5 >> 0x10);
    local_3c = (undefined1)iVar14;
    uStack_3b = (undefined1)((uint)iVar14 >> 8);
    uStack_3a = (undefined2)((uint)iVar14 >> 0x10);
    local_60 = (int *)&DAT_018abb78;
    local_70 = (undefined4 ****)&DAT_005891dd;
    local_80 = FUN_016b17f4;
    local_68 = &local_40;
    local_48 = (undefined4 *)(DAT_018da3e0 + 0x1c);
    FUN_00978b60(&local_50);
  }
  FUN_00cc6fbc((uint)local_78 & 0xff,local_74);
LAB_00977c8c:
  if (param_1[0x30] != 0) {
    thunk_FUN_016d3fb4(param_1[0x2e]);
  }
  FUN_00994e1c(piVar7);
  piVar7 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[10]);
  }
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  FUN_005c178c(param_1 + 0x10);
  piVar6 = param_1 + 0xf;
  FUN_01663cc4(*piVar6);
  piVar7 = (int *)*piVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar6);
  }
  piVar7 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
  goto LAB_009786f8;
  while( true ) {
    *(undefined2 *)(param_1 + 0x2a) = local_9c;
    *(short *)((int)param_1 + 0xb6) = (short)local_ec;
    *(int **)((int)param_1 + 0xaa) = local_d8;
    param_1[0x28] = (int)(param_1 + 0x10);
    *(undefined1 *****)((int)param_1 + 0xb2) = local_e0;
    param_1[0x29] = (int)local_a0;
    *(int *)((int)param_1 + 0xae) = local_f0;
switchD_009774ec_caseD_6:
    FUN_00993a28(&local_40,param_1 + 0x28,param_2);
    if (local_40 == '\a') {
      uVar3 = 6;
      goto LAB_009774b0;
    }
    uStack_98 = CONCAT13(local_3c,CONCAT21(uStack_3e,uStack_3f));
    uStack_94 = (undefined3)(CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)) >> 8);
    if (local_40 != '\x06') break;
LAB_00977fa4:
    piVar6 = param_1 + 0xf;
    pbVar12 = (byte *)((int)param_1 + 0x9d);
    *pbVar12 = 0;
    uVar8 = *(uint *)(*piVar6 + 8);
    DataMemoryBarrier(0xb);
    piVar13 = param_1 + 0x28;
    *piVar13 = (int)piVar7;
    param_1[0x39] = (int)pbVar12;
    *(undefined1 *)(param_1 + 0x38) = 0;
    param_1[0x37] = 0;
    param_1[0x30] = (int)piVar6;
    param_1[0x31] = *piVar6 + 8;
    param_1[0x32] = uVar8 >> 2;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
    param_1[0x3a] = (int)piVar13;
LAB_00977ffc:
    uVar24 = thunk_FUN_016de0ee(piVar6,0x40);
    iVar14 = (int)uVar24 + (int)((ulonglong)uVar24 >> 0x20);
    puVar20 = (undefined4 *)*param_2;
    if (*(char *)(iVar14 + 0x38) != '\x01') {
      if (*(char *)(iVar14 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar14,FUN_009948a0);
      *(undefined1 *)(iVar14 + 0x38) = 1;
    }
    cVar4 = *(char *)(iVar14 + 0x30);
    bVar23 = cVar4 == '\x01';
    if (bVar23) {
      cVar4 = *(char *)(iVar14 + 0x31);
    }
    if (bVar23 && cVar4 == '\0') {
      FUN_016455a4(*puVar20,puVar20[1]);
LAB_00978638:
      uVar3 = 5;
      goto LAB_009774b0;
    }
    if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
      uVar24 = FUN_0164e918();
      if ((uint)uVar24 < 2) {
        uVar24 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),1);
      }
    }
    else {
      uVar24 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
    }
    uVar8 = (uint)((ulonglong)uVar24 >> 0x20);
    uVar9 = (uint)uVar24;
    uVar8 = uVar8 ^ uVar8 << 0x11;
    *(uint *)(iVar14 + 0x28) = uVar9;
    *(undefined4 *)(iVar14 + 0x24) = 1;
    uVar8 = uVar9 >> 0x10 ^ uVar8 >> 7 ^ uVar9 ^ uVar8;
    *(uint *)(iVar14 + 0x2c) = uVar8;
    piVar6 = piVar13 + 1;
    bVar2 = *pbVar12;
    uVar19 = (uint)bVar2;
    if ((int)(uVar8 + uVar9) < 0) {
      uVar8 = (uVar19 & 2) >> 1;
      if ((bVar2 & 2) == 0) {
        iVar14 = FUN_016638c8(piVar13 + 8,puVar20);
        if (iVar14 != 0) {
          uVar19 = (uint)*pbVar12;
          goto LAB_00978274;
        }
LAB_00978370:
        uVar19 = 2;
        *pbVar12 = *pbVar12 | 2;
      }
      else {
LAB_00978274:
        if ((uVar19 & 1) != 0) goto LAB_00978384;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar13[7]) {
        case '\0':
          *(undefined1 *)(piVar13 + 6) = 0;
          piVar13[4] = 0;
          piVar13[5] = 0;
          piVar13[1] = *piVar13;
          piVar13[2] = 0;
          break;
        case '\x01':
switchD_00978288_caseD_1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187c364);
        case '\x02':
switchD_00978288_caseD_2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187c364);
        }
        FUN_009899f8(&local_40,piVar6,puVar20);
        if (CONCAT11(uStack_3f,local_40) == 2) {
          *(undefined1 *)(piVar13 + 7) = 3;
          uVar3 = 5;
          goto LAB_009774b0;
        }
LAB_0097839c:
        FUN_00e7c67c(piVar6);
        if (piVar13[2] != 0) {
          (**(code **)(piVar13[2] + 0xc))(piVar13[3]);
        }
        local_d8 = local_38;
        local_f0 = local_34;
        local_e0 = local_30;
        local_ec = local_2c;
        uVar19 = (uint)CONCAT11(uStack_3f,local_40);
        local_68 = (char *)CONCAT13(uStack_3b,CONCAT12(local_3c,uStack_3e));
        *(undefined1 *)(piVar13 + 7) = 1;
        local_64 = (undefined4 ****)CONCAT22(local_64._2_2_,uStack_3a);
        *pbVar12 = *pbVar12 | 1;
        if (uVar19 == 4) goto LAB_00978638;
      }
    }
    else {
      uVar8 = uVar19 & 1;
      if ((bVar2 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar13[7]) {
        case '\0':
          *(undefined1 *)(piVar13 + 6) = 0;
          piVar13[4] = 0;
          piVar13[5] = 0;
          piVar13[1] = *piVar13;
          piVar13[2] = 0;
          break;
        case '\x01':
          goto switchD_00978288_caseD_1;
        case '\x02':
          goto switchD_00978288_caseD_2;
        }
        FUN_009899f8(&local_40,piVar6,puVar20);
        if (CONCAT11(uStack_3f,local_40) == 2) {
          *(undefined1 *)(piVar13 + 7) = 3;
          uVar19 = (uint)*pbVar12;
          goto LAB_00978354;
        }
        goto LAB_0097839c;
      }
LAB_00978354:
      if ((uVar19 & 2) == 0) {
        iVar14 = FUN_016638c8(piVar13 + 8,puVar20);
        if (iVar14 == 0) goto LAB_00978370;
        goto LAB_00978638;
      }
LAB_00978384:
      uVar19 = 3;
      if (uVar8 != 1) goto LAB_00978638;
    }
    local_9c = local_64._0_2_;
    local_a0 = local_68;
    FUN_00972a48(param_1 + 0x28);
    iVar14 = uVar19 - 1;
    if (uVar19 == 0 || iVar14 == 0) {
      iVar14 = 0;
    }
    if (iVar14 != 0) {
      if (iVar14 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01876028);
      }
      goto LAB_00978654;
    }
    if ((uVar19 & 1) != 0) {
      if (((uint)local_d8 & 1) == 0) goto LAB_00978654;
      local_90 = local_e0;
      local_8c = local_ec;
      if ((3 < DAT_018d9130) || (DAT_018da3dc == '\0')) goto LAB_00977fa4;
      if (DAT_018da3dc == '\x01') {
LAB_009784bc:
        puVar16 = &DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar17 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar17 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar14 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018da3d4);
        if (iVar14 == 0) goto LAB_00977fa4;
      }
      else if (DAT_018da3dc != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018da3d4);
        if (cVar4 == '\0') goto LAB_00977fa4;
        if (cVar4 != '\x02') goto LAB_009784bc;
      }
      if (*(undefined4 *****)(DAT_018da3d4 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876018);
      }
      local_4c = &local_78;
      local_60 = *(int **)(DAT_018da3d4 + 0x24);
      iStack_5c = *(int *)(DAT_018da3d4 + 0x28);
      local_7c = (int *)(DAT_018da3d4 + 0x1c);
      local_68 = (char *)*local_7c;
      local_50 = &local_68;
      local_84 = &local_50;
      local_74 = &local_70;
      local_70 = &local_90;
      local_58 = (undefined1 ****)0x0;
      puVar16 = &DAT_018ae394;
      local_3c = 0;
      uStack_3b = 0;
      uStack_3a = 0;
      local_30 = &local_84;
      local_80 = (code *)0x1;
      local_48 = (undefined4 *)&DAT_018abb78;
      local_78 = (char **)&DAT_00592dd4;
      local_6c = (undefined1 ****)FUN_00fac4cc;
      local_40 = '\x01';
      uStack_3f = 0;
      uStack_3e = 0;
      DataMemoryBarrier(0xb);
      pcVar17 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_64 = *(undefined4 *****)(DAT_018da3d4 + 0x20);
      local_2c = DAT_018da3d4;
      iVar14 = (**(code **)(puVar16 + 0x28))(pcVar17,&local_40);
      if (iVar14 != 0) {
        (**(code **)(puVar16 + 0x2c))(pcVar17,&local_40);
      }
      goto LAB_00977fa4;
    }
  }
  local_74 = (undefined4 ****)CONCAT31(uStack_94,local_3c);
  local_78 = (char **)CONCAT31(CONCAT21(uStack_3e,uStack_3f),local_40);
  if ((DAT_018d9130 < 4) && (DAT_018da3f4 != '\0')) {
    if (DAT_018da3f4 == '\x01') {
LAB_009780a8:
      DataMemoryBarrier(0xb);
      puVar16 = &DAT_018ae394;
      pcVar17 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar14 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018da3ec);
      if (iVar14 == 0) goto LAB_009781b4;
    }
    else if (DAT_018da3f4 != '\x02') {
      cVar4 = FUN_0169ac90(&DAT_018da3ec);
      if (cVar4 == '\0') goto LAB_009781b4;
      if (cVar4 != '\x02') goto LAB_009780a8;
    }
    uVar5 = *(undefined4 *)(DAT_018da3ec + 0x1c);
    iVar14 = *(int *)(DAT_018da3ec + 0x20);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01876008);
    }
    local_38 = *(int **)(DAT_018da3ec + 0x24);
    local_50 = &local_68;
    local_34 = *(int *)(DAT_018da3ec + 0x28);
    local_64 = &local_70;
    local_4c = (undefined1 ***)&DAT_00000001;
    local_6c = &local_84;
    local_84 = &local_78;
    local_30 = (undefined1 ****)0x0;
    local_40 = (char)uVar5;
    uStack_3f = (undefined1)((uint)uVar5 >> 8);
    uStack_3e = (undefined2)((uint)uVar5 >> 0x10);
    local_3c = (undefined1)iVar14;
    uStack_3b = (undefined1)((uint)iVar14 >> 8);
    uStack_3a = (undefined2)((uint)iVar14 >> 0x10);
    local_60 = (int *)&DAT_018abb78;
    local_70 = (undefined4 ****)&DAT_005891dd;
    local_80 = FUN_016b17f4;
    local_68 = &local_40;
    local_48 = (undefined4 *)(DAT_018da3ec + 0x1c);
    FUN_00978c30(&local_50);
  }
LAB_009781b4:
  FUN_00cc6fbc((uint)local_78 & 0xff,local_74);
LAB_00978654:
  FUN_00994e1c(piVar7);
  piVar7 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(param_1[10]);
  }
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  FUN_005c178c(param_1 + 0x10);
  piVar6 = param_1 + 0xf;
  FUN_01663cc4(*piVar6);
  piVar7 = (int *)*piVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar6);
  }
  piVar7 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar14 + -1;
LAB_009786f8:
  local_d0 = param_1 + 4;
  local_d4 = param_1 + 0x27;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(param_1[0xe]);
  }
  uVar10 = 1;
  *(undefined1 *)local_d4 = 1;
  FUN_009726a8(local_d0);
  uVar5 = 0;
LAB_009774c0:
  *(undefined1 *)(param_1 + 0x3e) = uVar10;
  return uVar5;
}

