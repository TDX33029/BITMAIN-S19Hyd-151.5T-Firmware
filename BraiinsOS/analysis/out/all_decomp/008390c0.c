// FUN_008390c0 @ 008390c0 size=4948 calls_out=34 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_008390c0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  code cVar13;
  undefined2 uVar14;
  undefined4 *******pppppppuVar15;
  int iVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  uint *puVar20;
  code *pcVar21;
  double *pdVar22;
  byte *pbVar23;
  int iVar24;
  code *pcVar25;
  code *pcVar26;
  code *pcVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  uint uVar34;
  code *pcVar35;
  char *pcVar36;
  undefined4 uVar37;
  uint uVar38;
  undefined4 *puVar39;
  code *pcVar40;
  bool bVar41;
  uint in_fpscr;
  double dVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  undefined1 *local_bc;
  undefined1 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_9c;
  undefined4 *******local_94;
  uint local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 *******local_80;
  code *pcStack_7c;
  undefined4 *******pppppppuStack_78;
  uint local_74;
  code *local_70;
  code *local_6c;
  code *local_68;
  code *local_64;
  uint *local_60;
  undefined4 local_5c;
  undefined4 *******local_58;
  undefined4 *local_54;
  undefined4 *******local_50;
  code *local_4c;
  undefined4 *******local_48;
  undefined4 *******local_40;
  undefined2 uStack_3c;
  undefined1 local_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x35)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x23) = 0;
    uVar18 = param_2[0x34];
    param_2[5] = uVar18;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860554);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860554);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x23)) {
    case 0:
      uVar18 = param_2[5];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01860894);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01860894);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x17)) {
      case 0:
        uVar18 = param_2[9];
        iVar24 = param_2[0xb];
        pbVar19 = (byte *)param_2[0xc];
        goto LAB_008394c4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864dac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864dac);
      case 3:
        goto switchD_008391f4_caseD_3;
      case 4:
        uVar43 = *(undefined8 *)(param_2 + 0x18);
        goto LAB_00839690;
      }
    case 4:
      goto switchD_008391b8_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0xc1)) {
      case 0:
        uVar30 = param_2[0xc];
        uVar18 = param_2[0x2f];
        goto LAB_0083a4f0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018608a4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018608a4);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2e)) {
      case 0:
        uVar28 = param_2[0x10];
        uVar18 = param_2[0x11];
        iVar24 = param_2[0x12];
        goto LAB_008399dc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864d9c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864d9c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x1e)) {
        case 0:
          uVar28 = param_2[0x13];
          uVar33 = param_2[0x17];
          uVar18 = param_2[0x14];
          iVar24 = param_2[0x15];
          uVar37 = param_2[0x16];
          goto LAB_00839a04;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018713e8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018713e8);
        case 3:
          goto switchD_008392b0_caseD_3;
        case 4:
          uVar43 = *(undefined8 *)(param_2 + 0x1f);
          goto LAB_00839ae0;
        case 5:
          uVar43 = *(undefined8 *)(param_2 + 0x22);
          goto LAB_00839b7c;
        }
      }
    }
  }
  param_2[4] = uVar18;
  pbVar19 = (byte *)thunk_FUN_016d4a50(0x2c);
  if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,0x2c);
  }
  pbVar19[4] = 0;
  pbVar19[5] = 1;
  pbVar19[0] = 0;
  pbVar19[1] = 1;
  pbVar19[2] = 0;
  pbVar19[3] = 0;
  pbVar19[0xc] = 1;
  pbVar19[0xd] = 1;
  pbVar19[0xe] = 0;
  pbVar19[0xf] = 0;
  pbVar19[6] = 0;
  pbVar19[7] = 0;
  pbVar19[8] = 0;
  pbVar19[9] = 0;
  pbVar19[10] = 0;
  pbVar19[0xb] = 0;
  pbVar19[0x11] = 0;
  pbVar19[0x12] = 0;
  pbVar19[0x13] = 0;
  pbVar19[0x14] = 0;
  pbVar19[0x10] = 1;
  pbVar19[0x15] = 0;
  pbVar19[0x16] = 0;
  pbVar19[0x1b] = 1;
  pbVar19[0x26] = 1;
  pbVar19[0x20] = 0;
  pbVar19[0x21] = 0;
  pbVar19[0x1c] = 0;
  pbVar19[0x1d] = 0;
  pbVar19[0x1e] = 0;
  pbVar19[0x1f] = 0;
  pbVar19[0x27] = 0;
  pbVar19[0x28] = 0;
  pbVar19[0x29] = 0;
  pbVar19[0x2a] = 0;
  pbVar19[0x2b] = 0;
  pbVar23 = pbVar19 + 0x2c;
  pbVar19[0x22] = 1;
  pbVar19[0x23] = 1;
  pbVar19[0x24] = 1;
  pbVar19[0x25] = 0;
  pbVar19[0x17] = 1;
  pbVar19[0x18] = 1;
  pbVar19[0x19] = 0;
  pbVar19[0x1a] = 1;
  *param_2 = pbVar19;
  param_2[1] = pbVar19;
  param_2[2] = 4;
  param_2[3] = pbVar23;
  do {
    bVar41 = pbVar19 == pbVar23;
    if (!bVar41) {
      pbVar23 = (byte *)(uint)*pbVar19;
      uVar14 = *(undefined2 *)(pbVar19 + 9);
      local_6c = *(code **)(pbVar19 + 5);
      local_70 = *(code **)(pbVar19 + 1);
      param_2[1] = pbVar19 + 0xb;
      local_68 = (code *)CONCAT22(local_68._2_2_,uVar14);
    }
    if (bVar41 || pbVar23 == &SUB_00000002) {
      if (param_2[2] != 0) {
        thunk_FUN_016d3fb4(*param_2);
      }
      uVar30 = 0;
      param_2[9] = 0;
      param_2[10] = 8;
      param_2[0xb] = 0;
      iVar24 = *(int *)(param_2[4] + 0xf0);
      param_2[0x31] = 0;
      param_2[0x32] = iVar24;
      if (iVar24 == 0) goto LAB_0083a154;
      break;
    }
    *(code **)((int)param_2 + 0x19) = local_70;
    *(code **)((int)param_2 + 0x1d) = local_6c;
    *(undefined2 *)((int)param_2 + 0x21) = local_68._0_2_;
    pbVar19 = (byte *)(param_2 + 6);
    *pbVar19 = (byte)pbVar23;
    iVar24 = *(int *)(param_2[4] + 0x148);
    uVar18 = 0;
    param_2[9] = 0;
    iVar24 = iVar24 + 8;
    param_2[0xb] = iVar24;
    param_2[0xc] = pbVar19;
    *(undefined1 *)(param_2 + 0x17) = 0;
LAB_008394c4:
    param_2[0xe] = uVar18;
    param_2[0xf] = param_2[10];
    param_2[0x10] = pbVar19;
    param_2[0xd] = iVar24;
    puVar20 = (uint *)FUN_016d38c8(4,1);
    if (puVar20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    bVar1 = *pbVar19;
    bVar2 = pbVar19[4];
    bVar3 = pbVar19[1];
    bVar4 = pbVar19[2];
    bVar5 = pbVar19[3];
    param_2[0x14] = 0xb2;
    bVar6 = pbVar19[5];
    bVar7 = pbVar19[7];
    bVar8 = pbVar19[6];
    bVar9 = pbVar19[8];
    bVar10 = pbVar19[10];
    bVar11 = pbVar19[9];
    param_2[0x18] = iVar24 + 0xc;
    param_2[0x15] = 4;
    param_2[0x13] = 4;
    param_2[0x12] = puVar20;
    *(undefined1 *)(param_2 + 0x26) = 0;
    param_2[0x11] = 4;
    *puVar20 = (uint)bVar10 << 0x18 | (uint)bVar11 << 0x10 |
               (((uint)bVar6 << 1 | (uint)bVar9 << 2) & 0xff | (uint)bVar8) << 8 |
               ((uint)bVar3 << 6 | (uint)bVar1 << 7 | (uint)bVar4 << 5 | (uint)bVar5 << 4) & 0xff |
               (bVar7 & 7) << 1 | (uint)bVar2;
switchD_008391f4_caseD_3:
    local_94 = (undefined4 *******)(param_2 + 0x17);
    iVar24 = FUN_007d67b8(param_2 + 0x18,param_3);
    if (iVar24 == 0) {
      *(undefined1 *)local_94 = 3;
LAB_008397d0:
      uVar17 = 3;
      goto LAB_0083a580;
    }
    param_2[0x16] = iVar24;
    if (*(char *)(param_2 + 0x26) == '\x03') {
      cVar12 = *(char *)(param_2 + 0x25);
      bVar41 = cVar12 == '\x03';
      if (bVar41) {
        cVar12 = *(char *)(param_2 + 0x1c);
      }
      if (bVar41 && cVar12 == '\x04') {
        FUN_0163c790(param_2 + 0x1d);
        if (param_2[0x1e] != 0) {
          (**(code **)(param_2[0x1e] + 0xc))(param_2[0x1f]);
        }
      }
    }
    if (param_2[0xe] == 1) {
      uVar30 = *(int *)param_2[0xd] * param_2[0xf];
      if (0xff < uVar30) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_40,&DAT_0186b108,&DAT_0186afe8);
      }
    }
    else {
      uVar30 = (uint)*(byte *)((int *)param_2[0xd] + 1);
    }
    uVar43 = (**(code **)(*(int *)(param_2[0x16] + 0x20) + 0x14))
                       (*(undefined4 *)(param_2[0x16] + 0x1c),param_2[0xe],uVar30,param_2[0x14],
                        param_2[0x15],param_2[0x12],param_2[0x13]);
    *(undefined8 *)(param_2 + 0x18) = uVar43;
LAB_00839690:
    local_94 = (undefined4 *******)(param_2 + 0x17);
    local_bc = (undefined1 *)((int)param_2 + 0x23);
    uVar44 = (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0xc))((int)uVar43,param_3);
    if ((uVar44 & 1) != 0) {
      *(undefined1 *)local_94 = 4;
      goto LAB_008397d0;
    }
    uVar18 = param_2[0x18];
    puVar39 = (undefined4 *)param_2[0x19];
    pcVar25 = (code *)*puVar39;
    if (pcVar25 != (code *)0x0) {
      (*pcVar25)(uVar18);
    }
    if (puVar39[1] != 0) {
      thunk_FUN_016d3fb4(uVar18);
    }
    pcVar36 = (char *)param_2[0x16];
    if (*pcVar36 == '\0') {
      bVar41 = (bool)hasExclusiveAccess(pcVar36);
      if (!bVar41) goto LAB_00839788;
      *pcVar36 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00839788:
      FUN_01280da8(pcVar36);
    }
    FUN_0128236c(pcVar36);
    FUN_0163af68(pcVar36,1,pcVar36);
    if (param_2[0x11] != 0) {
      thunk_FUN_016d3fb4(param_2[0x12]);
    }
    *(undefined1 *)local_94 = 1;
    if ((uVar44 & 1) != 0) goto LAB_008397d0;
    FUN_0081b77c(param_2 + 9);
    if ((int)(uVar44 >> 0x20) != 0) {
      if (param_2[2] != 0) {
        thunk_FUN_016d3fb4(*param_2);
      }
      iVar24 = -0x80000000;
      *local_bc = 1;
      goto LAB_00839868;
    }
    iVar24 = *(int *)(param_2[4] + 0x148);
    *(undefined1 *)(param_2 + 0x27) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = &LAB_00989680;
    param_2[0x26] = iVar24 + 8;
switchD_008391b8_caseD_4:
    iVar24 = FUN_0081c170(param_2 + 10,param_3);
    if (iVar24 != 0) goto LAB_00839888;
    if (*(char *)(param_2 + 0x27) == '\x03') {
      FUN_0081c020(param_2 + 0x12);
    }
    pbVar19 = (byte *)param_2[1];
    pbVar23 = (byte *)param_2[3];
  } while( true );
LAB_0083a4cc:
  *(undefined1 *)((int)param_2 + 0xc1) = 0;
  uVar18 = param_2[4];
  param_2[0x31] = uVar30 + 1;
  param_2[0xc] = uVar30;
  param_2[0x2f] = uVar18;
LAB_0083a4f0:
  uVar31 = 0;
  param_2[0xd] = uVar18;
  *(undefined1 *)(param_2 + 0x30) = 0;
  param_2[0xe] = uVar30;
  param_2[0xf] = 0;
LAB_0083a50c:
  param_2[0xf] = uVar31 + 1;
  iVar24 = *(int *)(param_2[0xd] + 0x148);
  *(undefined1 *)(param_2 + 0x2e) = 0;
  uVar28 = 1;
  iVar24 = iVar24 + 8;
  uVar18 = param_2[0xe];
  param_2[0x10] = 1;
  param_2[0x11] = uVar18;
  param_2[0x12] = iVar24;
LAB_008399dc:
  uVar33 = 4;
  param_2[0x13] = uVar28;
  uVar37 = 0xb3;
  param_2[0x14] = uVar18;
  param_2[0x15] = iVar24;
  param_2[0x16] = 0xb3;
  param_2[0x17] = 4;
  *(undefined1 *)(param_2 + 0x1e) = 0;
LAB_00839a04:
  *(undefined1 *)(param_2 + 0x2d) = 0;
  param_2[0x1f] = iVar24 + 0xc;
  param_2[0x18] = iVar24;
  param_2[0x19] = uVar28;
  param_2[0x1a] = uVar18;
  param_2[0x1b] = uVar37;
  param_2[0x1c] = uVar33;
  *(undefined1 *)((int)param_2 + 0x79) = 0;
switchD_008392b0_caseD_3:
  iVar24 = FUN_007d67b8(param_2 + 0x1f,param_3);
  if (iVar24 == 0) {
    uVar17 = 3;
LAB_0083a55c:
    local_94 = (undefined4 *******)(param_2 + 0x1e);
    *(undefined1 *)local_94 = uVar17;
LAB_0083a564:
    local_a8 = param_2 + 0x2e;
    *(undefined1 *)local_a8 = 3;
    goto LAB_0083a570;
  }
  param_2[0x1d] = iVar24;
  if (*(char *)(param_2 + 0x2d) == '\x03') {
    cVar12 = *(char *)(param_2 + 0x2c);
    bVar41 = cVar12 == '\x03';
    if (bVar41) {
      cVar12 = *(char *)(param_2 + 0x23);
    }
    if (bVar41 && cVar12 == '\x04') {
      FUN_0163c790(param_2 + 0x24);
      if (param_2[0x25] != 0) {
        (**(code **)(param_2[0x25] + 0xc))(param_2[0x26]);
      }
    }
  }
  if (param_2[0x19] == 1) {
    uVar30 = *(int *)param_2[0x18] * param_2[0x1a];
    if (0xff < uVar30) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_40,&DAT_0186b108,&DAT_0186afe8);
    }
  }
  else {
    uVar30 = (uint)*(byte *)((int *)param_2[0x18] + 1);
  }
  uVar43 = (**(code **)(*(int *)(param_2[0x1d] + 0x20) + 0xc))
                     (*(undefined4 *)(param_2[0x1d] + 0x1c),param_2[0x19],uVar30,param_2[0x1b],
                      param_2[0x1c]);
  *(undefined8 *)(param_2 + 0x1f) = uVar43;
LAB_00839ae0:
  uVar44 = (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0xc))((int)uVar43,param_3);
  pcVar25 = (code *)(uVar44 >> 0x20);
  if ((uVar44 & 1) != 0) {
    uVar17 = 4;
    goto LAB_0083a55c;
  }
  uVar18 = param_2[0x1f];
  puVar39 = (undefined4 *)param_2[0x20];
  pcVar26 = (code *)*puVar39;
  if (pcVar26 != (code *)0x0) {
    (*pcVar26)(uVar18);
  }
  if (puVar39[1] != 0) {
    thunk_FUN_016d3fb4(uVar18);
  }
  if (pcVar25 == (code *)0x0) {
    param_2[0x1f] = 0;
    param_2[0x21] = 0;
    iVar24 = param_2[0x1d];
    param_2[0x20] = 4;
    *(undefined1 *)((int)param_2 + 0x79) = 1;
    do {
      uVar43 = (**(code **)(*(int *)(iVar24 + 0x20) + 0x10))(*(undefined4 *)(iVar24 + 0x1c));
      *(undefined8 *)(param_2 + 0x22) = uVar43;
LAB_00839b7c:
      local_94 = (undefined4 *******)(param_2 + 0x1e);
      (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0xc))(&local_70,(int)uVar43,param_3);
      puVar29 = local_5c;
      puVar20 = local_60;
      pcVar40 = local_64;
      pcVar35 = local_68;
      pcVar25 = local_6c;
      pcVar26 = local_70;
      if (local_70 == (code *)&DAT_00000004) {
        uVar17 = 5;
        goto LAB_0083a55c;
      }
      uVar18 = param_2[0x22];
      puVar39 = (undefined4 *)param_2[0x23];
      uVar17 = local_5c._1_1_;
      pcVar27 = (code *)*puVar39;
      uVar30 = (uint)local_5c & 0xff;
      if (pcVar27 != (code *)0x0) {
        (*pcVar27)(uVar18);
      }
      if (puVar39[1] != 0) {
        thunk_FUN_016d3fb4(uVar18);
      }
      if (pcVar26 == (code *)&SUB_00000002) {
        if (param_2[0x19] != 0) {
          if (param_2[0x21] == 1) goto LAB_00839e0c;
LAB_00839cc8:
          local_68 = (code *)(param_2 + 0x19);
          local_70 = (code *)(param_2 + 0x1b);
          local_64 = FUN_00813248;
          local_6c = FUN_00facd88;
          FUN_00600d2c(&local_40,&DAT_0034ffa6,&local_70);
          local_4c = (code *)CONCAT13(uStack_39,CONCAT12(local_3a,uStack_3c));
          local_48 = (undefined4 *******)CONCAT22(uStack_36,CONCAT11(uStack_37,uStack_38));
          local_50 = local_40;
          pcVar25 = (code *)FUN_00808de4(&local_50);
          goto LAB_00839d1c;
        }
        iVar24 = param_2[0x1d];
        if (*(int *)(iVar24 + 0x14) != 1) goto LAB_00839e0c;
        break;
      }
      if (pcVar26 == (code *)0x3) goto LAB_00839d1c;
      if (uVar30 != 2) {
        if (((uint)puVar29 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034b2c5,0x6d,&DAT_0186afc8);
        }
        if (*(int *)param_2[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_0186afd8);
        }
        pcVar26 = (code *)FUN_018462e8(uVar17);
      }
      pcVar25 = (code *)param_2[0x21];
      if (uVar30 == 2) {
        pcVar26 = pcVar25;
      }
      if (pcVar25 == (code *)param_2[0x1f]) {
        FUN_008cfc58(param_2 + 0x1f);
      }
      puVar39 = (undefined4 *)(param_2[0x20] + (int)pcVar25 * 0x10);
      *puVar39 = pcVar35;
      puVar39[2] = puVar20;
      pcVar25 = pcVar25 + 1;
      puVar39[1] = pcVar40;
      puVar39[3] = pcVar26;
      param_2[0x21] = pcVar25;
      if (param_2[0x19] != 0) {
        if (pcVar25 != (code *)&DAT_00000001) goto LAB_00839cc8;
        goto LAB_00839e0c;
      }
      iVar24 = param_2[0x1d];
    } while ((*(int *)(iVar24 + 0x14) != 1) || (pcVar25 != *(code **)(iVar24 + 0x18)));
    uVar31 = *(uint *)(iVar24 + 0x18);
    uVar30 = param_2[0x21];
    local_90 = uVar31;
    if (uVar31 != uVar30) {
      uVar18 = 0;
      local_84 = 0;
      local_88 = (undefined4 *)&DAT_00000004;
      local_8c = 0;
      uVar34 = 0;
      do {
        uVar38 = uVar34;
        if (uVar31 == uVar38) goto LAB_0083a33c;
        if (uVar30 == uVar38) goto LAB_0083a2dc;
        uVar34 = uVar38 + 1;
      } while (uVar38 == *(uint *)(param_2[0x20] + uVar38 * 0x10 + 0xc));
      uVar30 = uVar38;
LAB_0083a2dc:
      local_50 = (undefined4 *******)(uVar30 << 1);
      local_40 = &local_50;
      uStack_3c = 0xcd88;
      local_3a = 0xfa;
      uStack_39 = 0;
      FUN_00600d2c(&local_70,&DAT_0034ffe8,&local_40);
      pcVar35 = local_68;
      pcVar26 = local_6c;
      pcVar25 = local_70;
      FUN_015f37b0(&local_8c);
      uVar18 = 1;
      *local_88 = pcVar25;
      local_88[1] = pcVar26;
      local_88[2] = pcVar35;
      uVar30 = param_2[0x21];
      local_84 = 1;
LAB_0083a33c:
      puVar39 = local_88;
      local_74 = uVar30;
      FUN_008670f8(&local_40,local_88,uVar18,&DAT_0041950f);
      local_60 = &local_90;
      local_68 = (code *)(param_2 + 0x1b);
      local_70 = (code *)&local_74;
      local_54 = &DAT_006043a8;
      local_64 = FUN_00facd88;
      local_5c = &LAB_00fac484;
      local_6c = (code *)&LAB_00fac484;
      local_58 = &local_40;
      FUN_00600d2c(&local_50,&DAT_00350000,&local_70);
      if (local_40 != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(CONCAT13(uStack_39,CONCAT12(local_3a,uStack_3c)));
      }
      local_80 = local_50;
      pcStack_7c = local_4c;
      pppppppuStack_78 = local_48;
      pcVar25 = (code *)FUN_00808de4(&local_80);
      pcVar26 = pcVar25;
      if (uVar31 != uVar38) {
        pcVar26 = (code *)*puVar39;
      }
      if (uVar31 != uVar38 && pcVar26 != (code *)0x0) {
        thunk_FUN_016d3fb4(puVar39[1]);
      }
      if (local_8c != 0) {
        thunk_FUN_016d3fb4(puVar39);
      }
LAB_00839d1c:
      puVar39 = (undefined4 *)(param_2[0x20] + 4);
      for (iVar24 = param_2[0x21]; iVar24 != 0; iVar24 = iVar24 + -1) {
        if (puVar39[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar39);
        }
        puVar39 = puVar39 + 4;
      }
      if (param_2[0x1f] != 0) {
        thunk_FUN_016d3fb4(param_2[0x20]);
      }
      *(undefined1 *)((int)param_2 + 0x79) = 0;
      pcVar26 = (code *)param_2[0x1d];
      cVar13 = *pcVar26;
      goto joined_r0x00839d78;
    }
LAB_00839e0c:
    pcVar26 = (code *)param_2[0x21];
    pcVar25 = (code *)param_2[0x20];
    local_70 = (code *)param_2[0x1f];
    *(undefined1 *)((int)param_2 + 0x79) = 0;
    local_6c = pcVar25;
    local_68 = pcVar26;
    if (&DAT_00000001 < pcVar26) {
      if (&DAT_00000014 < pcVar26) {
        FUN_008b97d0(pcVar25,pcVar26);
      }
      else {
        FUN_008c4190(pcVar25,pcVar26);
      }
    }
    pcVar35 = local_70;
    pcVar36 = (char *)param_2[0x1d];
    *(undefined1 *)((int)param_2 + 0x79) = 0;
    if (*pcVar36 == '\0') {
      bVar41 = (bool)hasExclusiveAccess(pcVar36);
      if (!bVar41) goto LAB_00839e64;
      *pcVar36 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00839e64:
      FUN_01280da8(pcVar36);
    }
    FUN_0128236c(pcVar36);
    FUN_0163af68(pcVar36,1,pcVar36);
    *(undefined1 *)local_94 = 1;
    if (pcVar35 != (code *)0x80000001) goto LAB_00839e98;
    goto LAB_0083a564;
  }
  pcVar26 = (code *)param_2[0x1d];
  cVar13 = *pcVar26;
joined_r0x00839d78:
  if (cVar13 == (code)0x0) {
    bVar41 = (bool)hasExclusiveAccess(pcVar26);
    if (!bVar41) goto LAB_00839d8c;
    *pcVar26 = (code)0x1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00839d8c:
    FUN_01280da8(pcVar26);
  }
  local_94 = (undefined4 *******)(param_2 + 0x1e);
  FUN_0128236c(pcVar26);
  FUN_0163af68(pcVar26,1,pcVar26);
  pcVar35 = (code *)&DAT_80000000;
  *(undefined1 *)local_94 = 1;
LAB_00839e98:
  local_9c = param_2 + 0x13;
  local_a8 = param_2 + 0x2e;
  FUN_00812744(local_9c);
  pcVar40 = pcVar25;
  if (pcVar35 != (code *)&DAT_80000000) {
    local_94 = (undefined4 *******)0x0;
    pcVar40 = (code *)&DAT_00000004;
    pcVar27 = pcVar25 + (int)pcVar26 * 0x10;
    local_48 = (undefined4 *******)0x0;
    local_4c = (code *)&DAT_00000004;
    local_50 = (undefined4 *******)0x0;
    local_70 = pcVar25;
    local_6c = pcVar25;
    local_68 = pcVar35;
    local_64 = pcVar27;
    if (pcVar26 != (code *)0x0) {
      uVar30 = (int)pcVar26 << 4;
      iVar24 = 0;
      local_94 = (undefined4 *******)0x0;
      pcVar26 = pcVar25;
LAB_00839f30:
      uVar30 = uVar30 - 0x10;
      pcVar21 = pcVar26 + 0x10;
      uVar31 = *(uint *)pcVar26;
      if (uVar31 != 0x80000000) {
        uVar34 = *(uint *)(pcVar26 + 8);
        puVar20 = *(uint **)(pcVar26 + 4);
        if (uVar34 == 4) goto code_r0x00839f54;
        uStack_38 = (undefined1)uVar34;
        uStack_37 = (undefined1)(uVar34 >> 8);
        uStack_36 = (undefined2)(uVar34 >> 0x10);
        uStack_3c = 4;
        local_3a = 0;
        uStack_39 = 0;
        local_40 = (undefined4 *******)&DAT_00000006;
        local_6c = pcVar21;
        pcVar40 = (code *)FUN_00832248(uVar34,&local_40);
        if (uVar31 != 0) {
          thunk_FUN_016d3fb4(puVar20);
        }
        for (uVar31 = 0; uVar30 >> 4 != uVar31; uVar31 = uVar31 + 1) {
          if (*(int *)(pcVar21 + uVar31 * 0x10) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(pcVar21 + (uVar31 * 4 + 1) * 4));
          }
        }
        if (pcVar35 != (code *)0x0) {
          thunk_FUN_016d3fb4(pcVar25);
        }
        if (local_50 != (undefined4 *******)0x0) {
          thunk_FUN_016d3fb4(local_4c);
        }
        goto LAB_00839ea8;
      }
      goto LAB_00839fe8;
    }
    goto LAB_00839ffc;
  }
LAB_00839ea8:
  *(undefined1 *)local_a8 = 1;
  goto LAB_0083a170;
code_r0x00839f54:
  uVar38 = *puVar20;
  uVar34 = *(uint *)(pcVar26 + 0xc);
  uStack_38 = (undefined1)((uVar38 & 0x3f) >> 5);
  uStack_39 = (undefined1)((uVar38 & 0x7f) >> 6);
  local_3a = (undefined1)((uVar38 & 0xff) >> 7);
  uVar18 = CONCAT13(uStack_37,CONCAT12(uStack_38,CONCAT11(uStack_39,local_3a)));
  if (local_94 == local_50) {
    FUN_007f57b0(&local_50);
    pcVar40 = local_4c;
  }
  pcVar26 = pcVar40 + iVar24;
  *(uint *)pcVar26 = uVar34;
  *(ushort *)(pcVar26 + 4) = (ushort)(uVar38 >> 8) & 0xff00 | (ushort)(byte)(uVar38 >> 0x18);
  *(undefined4 *)(pcVar26 + 6) = uVar18;
  local_94 = (undefined4 *******)((int)local_94 + 1);
  local_48 = local_94;
  if (uVar31 != 0) {
    thunk_FUN_016d3fb4(puVar20);
  }
  iVar24 = iVar24 + 0xc;
  pcVar26 = pcVar21;
  if (pcVar21 == pcVar27) goto LAB_00839fe8;
  goto LAB_00839f30;
LAB_00839fe8:
  local_6c = pcVar21;
LAB_00839ffc:
  pcVar26 = local_6c + 4;
  for (uVar30 = (uint)((int)pcVar27 - (int)local_6c) >> 4; uVar30 != 0; uVar30 = uVar30 - 1) {
    if (*(uint *)(pcVar26 + -4) != 0) {
      thunk_FUN_016d3fb4(*(uint *)pcVar26);
    }
    pcVar26 = pcVar26 + 0x10;
  }
  if (pcVar35 != (code *)0x0) {
    thunk_FUN_016d3fb4(pcVar25);
    local_94 = local_48;
  }
  pcVar40 = local_4c;
  pppppppuVar15 = local_50;
  if (&DAT_00000001 < local_94) {
    if (&DAT_00000014 < local_94) {
      FUN_0083213c(local_4c,local_94);
    }
    else {
      pcVar25 = local_4c + 0xc;
      iVar24 = 0;
      do {
        uVar30 = *(uint *)pcVar25;
        if (uVar30 < *(uint *)(pcVar25 + -0xc)) {
          uVar31 = *(uint *)(pcVar25 + 4);
          uVar34 = *(uint *)(pcVar25 + 8);
          iVar16 = iVar24;
          do {
            iVar32 = iVar16;
            pcVar26 = local_4c + iVar32;
            *(undefined4 *)(pcVar26 + 0xc) = *(undefined4 *)pcVar26;
            *(undefined4 *)(pcVar26 + 0x10) = *(undefined4 *)(pcVar26 + 4);
            *(undefined4 *)(pcVar26 + 0x14) = *(undefined4 *)(pcVar26 + 8);
            if (iVar32 == 0) {
              pcVar26 = local_4c;
              goto LAB_0083a5f0;
            }
            iVar16 = iVar32 + -0xc;
          } while (uVar30 < *(uint *)(local_4c + iVar32 + -0xc));
          pcVar26 = local_4c + iVar32;
LAB_0083a5f0:
          *(uint *)pcVar26 = uVar30;
          *(uint *)(pcVar26 + 4) = uVar31;
          *(uint *)(pcVar26 + 8) = uVar34;
        }
        pcVar25 = pcVar25 + 0xc;
        iVar24 = iVar24 + 0xc;
      } while (pcVar25 != local_4c + (int)local_94 * 0xc);
    }
  }
  *(undefined1 *)local_a8 = 1;
  if (pppppppuVar15 == (undefined4 *******)&DAT_80000000) {
LAB_0083a170:
    (*(code *)**(undefined4 **)pcVar40)(pcVar40);
  }
  else {
    if (pppppppuVar15 == (undefined4 *******)0x80000001) {
LAB_0083a570:
      local_ac = (undefined1 *)((int)param_2 + 0xc1);
      *local_ac = 3;
      uVar17 = 5;
      goto LAB_0083a580;
    }
    if (local_94 == (undefined4 *******)0x0) {
      puVar29 = (undefined1 *)0x0;
LAB_0083a6a4:
                    /* WARNING: Subroutine does not return */
      FUN_00602938(0,puVar29,&DAT_01863e48);
    }
    uVar30 = *(uint *)(pcVar40 + 4);
    cVar13 = pcVar40[8];
    FUN_016dd52c(pcVar40,pcVar40 + 0xc,(int)local_94 * 0xc + -0xc);
    if (cVar13 == (code)0x2) {
      puVar29 = (undefined1 *)((int)local_94 + -1);
      goto LAB_0083a6a4;
    }
    if (pppppppuVar15 != (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(pcVar40);
    }
    dVar42 = (double)VectorUnsignedToFloat(uVar30 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    dVar42 = dVar42 * 0.16681005859375 + -289.18;
    uVar30 = in_fpscr & 0xfffffff;
    uVar31 = uVar30 | (uint)(dVar42 < 0.0) << 0x1f;
    in_fpscr = uVar31 | (uint)NAN(dVar42) << 0x1c;
    if (((byte)(uVar31 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (uVar31 = uVar30 | (uint)(dVar42 == 200.0) << 0x1e,
       in_fpscr = uVar31 | (uint)(200.0 <= dVar42) << 0x1d,
       !(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar31 >> 0x1e,0))) {
      uVar30 = uVar30 | (uint)(dVar42 < *(double *)(param_2[0xd] + 0x28)) << 0x1f;
      in_fpscr = uVar30 | (uint)(NAN(dVar42) || NAN(*(double *)(param_2[0xd] + 0x28))) << 0x1c;
      if (((byte)(uVar30 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) ||
         (*(char *)(param_2 + 0x30) != '\0')) {
        iVar24 = param_2[0xb];
        uVar18 = param_2[0xe];
        *(undefined1 *)((int)param_2 + 0xc1) = 1;
        if (iVar24 == param_2[9]) {
          FUN_007f5810();
        }
        pdVar22 = (double *)(param_2[10] + iVar24 * 0x10);
        *(undefined4 *)(pdVar22 + 1) = uVar18;
        *pdVar22 = dVar42;
        param_2[0xb] = iVar24 + 1;
        uVar30 = param_2[0x31];
        if (uVar30 < (uint)param_2[0x32]) goto LAB_0083a4cc;
        goto LAB_0083a154;
      }
      *(undefined1 *)(param_2 + 0x30) = 1;
      param_2[0xf] = param_2[0xf] + -1;
      uVar31 = param_2[0xf];
      goto joined_r0x0083a44c;
    }
  }
  uVar31 = param_2[0xf];
joined_r0x0083a44c:
  if (2 < uVar31) goto LAB_0083a450;
  goto LAB_0083a50c;
LAB_0083a450:
  local_ac = (undefined1 *)((int)param_2 + 0xc1);
  local_70 = (code *)(param_2[0xd] + 0x14c);
  local_6c = (code *)&DAT_00f5c97c;
  local_64 = (code *)&LAB_00fac484;
  local_68 = (code *)(param_2 + 0xe);
  FUN_00600d2c(&local_40,&DAT_0057f786,&local_70);
  local_4c = (code *)CONCAT13(uStack_39,CONCAT12(local_3a,uStack_3c));
  local_48 = (undefined4 *******)CONCAT22(uStack_36,CONCAT11(uStack_37,uStack_38));
  local_50 = local_40;
  puVar39 = (undefined4 *)FUN_00808de4(&local_50);
  *local_ac = 1;
  (**(code **)*puVar39)();
  uVar30 = param_2[0x31];
  if ((uint)param_2[0x32] <= uVar30) goto LAB_0083a154;
  goto LAB_0083a4cc;
LAB_0083a154:
  *(undefined1 *)((int)param_2 + 0x23) = 1;
  iVar24 = param_2[9];
  uVar44 = CONCAT44(param_2[10],param_2[0xb]);
  if (iVar24 != -0x7fffffff) {
LAB_00839868:
    FUN_0083a9ec(param_2);
    if (iVar24 < -0x7ffffffe) {
      iVar24 = -0x7fffffff;
    }
    *param_1 = iVar24;
    param_1[1] = (int)(uVar44 >> 0x20);
    param_1[2] = (int)uVar44;
    uVar17 = 1;
    goto LAB_0083a598;
  }
  goto LAB_0083a588;
LAB_00839888:
  uVar17 = 4;
LAB_0083a580:
  local_bc = (undefined1 *)((int)param_2 + 0x23);
  *local_bc = uVar17;
LAB_0083a588:
  *param_1 = -0x7ffffffe;
  uVar17 = 3;
LAB_0083a598:
  *(undefined1 *)(param_2 + 0x35) = uVar17;
  return;
}

