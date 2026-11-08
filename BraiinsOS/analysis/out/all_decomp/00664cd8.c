// FUN_00664cd8 @ 00664cd8 size=8012 calls_out=62 calls_in=1
// strings: 0000000000000000000ce42cebccbafe38380349f00115366d339e9e20a8 | BUG: parse hex | all branches are disabled and there is no else branch | BUG: accepted snapshot time | all branches are disabled and there is no else branch

/* WARNING: Removing unreachable block (ram,0x0066552c) */
/* WARNING: Removing unreachable block (ram,0x0066531c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00664cd8(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  uint *puVar23;
  code *pcVar24;
  int iVar25;
  int *piVar26;
  byte *pbVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined4 *puVar33;
  char cVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined2 *puVar40;
  int *piVar41;
  undefined4 uVar42;
  char *pcVar43;
  byte *pbVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  byte *pbVar47;
  uint uVar48;
  byte *pbVar49;
  int iVar50;
  int *piVar51;
  undefined2 *puVar52;
  undefined2 *puVar53;
  bool bVar54;
  uint in_fpscr;
  uint uVar55;
  undefined4 extraout_s1;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined8 uVar59;
  ulonglong uVar60;
  int local_3f0;
  int local_3ec;
  undefined4 *local_3e0;
  char local_310 [208];
  uint local_240;
  int local_23c;
  undefined4 *puStack_238;
  int iStack_234;
  undefined2 *local_230;
  undefined4 *puStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  undefined4 *local_21c;
  int iStack_218;
  int iStack_214;
  undefined1 *puStack_210;
  int iStack_20c;
  byte local_208 [6];
  undefined2 uStack_202;
  undefined4 *local_200;
  undefined4 local_1fc;
  undefined2 *local_1f8;
  undefined4 *local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined4 *local_1e4;
  int iStack_1e0;
  int iStack_1dc;
  undefined1 *local_1d8;
  int local_1d4;
  undefined2 *local_130;
  undefined2 *puStack_12c;
  undefined4 *puStack_128;
  int iStack_124;
  undefined2 *puStack_120;
  undefined4 *puStack_11c;
  int local_118;
  undefined4 *puStack_114;
  int iStack_110;
  int iStack_10c;
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined2 *local_f0;
  undefined2 *local_ec;
  undefined4 *local_e8;
  int local_e4;
  undefined2 *local_e0;
  undefined4 *local_dc;
  undefined2 *local_d8;
  undefined4 *puStack_d4;
  undefined2 *puStack_d0;
  int local_cc;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_74;
  undefined1 local_72;
  int local_70;
  undefined4 *local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar9 = (&switchD_00664d00::switchdataD_00664d04)[*(byte *)(param_1 + 2)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 2)) {
  case 0:
    piVar10 = (int *)*param_1;
    param_1[1] = piVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185853c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185853c);
  case 3:
    pbVar44 = (byte *)param_1[0x1f6];
    piVar11 = (int *)param_1[0x1f7];
    goto LAB_00664e20;
  case 4:
    goto switchD_00664d00_caseD_4;
  case 5:
    goto switchD_00664d00_caseD_5;
  }
LAB_00664dd0:
  pbVar44 = (byte *)(param_1 + 3);
  *pbVar44 = 0;
  do {
    iVar25 = *piVar10;
    bVar54 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar54);
  *piVar10 = iVar25 + 1;
  if (iVar25 < 0) {
LAB_00666db4:
                    /* WARNING: Does not return */
    pcVar24 = (code *)software_udf(0xfdee,0x666db4);
    (*pcVar24)();
  }
  piVar11 = param_1 + 4;
  *piVar11 = (int)piVar10;
  *(undefined1 *)(param_1 + 500) = 0;
  uVar9 = param_1[1] + 0x280;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x1ee] = uVar9;
  param_1[0x1f6] = pbVar44;
  param_1[0x1f7] = piVar11;
LAB_00664e20:
  uVar59 = thunk_FUN_016de0ee(uVar9,0x40);
  iVar25 = (int)uVar59 + (int)((ulonglong)uVar59 >> 0x20);
  if (*(char *)(iVar25 + 0x38) != '\x01') {
    if (*(char *)(iVar25 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar25,FUN_009948a0);
    *(undefined1 *)(iVar25 + 0x38) = 1;
  }
  cVar34 = *(char *)(iVar25 + 0x30);
  bVar54 = cVar34 == '\x01';
  if (bVar54) {
    cVar34 = *(char *)(iVar25 + 0x31);
  }
  if (!bVar54 || cVar34 != '\0') {
    if ((*(uint *)(iVar25 + 0x24) & 1) == 0) {
      uVar59 = FUN_0164e918();
      if ((uint)uVar59 < 2) {
        uVar59 = CONCAT44((int)((ulonglong)uVar59 >> 0x20),1);
      }
    }
    else {
      uVar59 = CONCAT44(*(undefined4 *)(iVar25 + 0x28),*(undefined4 *)(iVar25 + 0x2c));
    }
    uVar9 = (uint)((ulonglong)uVar59 >> 0x20);
    uVar35 = (uint)uVar59;
    uVar9 = uVar9 ^ uVar9 << 0x11;
    *(undefined4 *)(iVar25 + 0x24) = 1;
    uVar9 = uVar35 >> 0x10 ^ uVar9 >> 7 ^ uVar35 ^ uVar9;
    *(uint *)(iVar25 + 0x2c) = uVar9;
    piVar26 = piVar11 + 0x1a2;
    pbVar27 = (byte *)(piVar11 + 0x135);
    piVar28 = piVar11 + 0x136;
    puVar45 = (undefined4 *)((uint)local_208 | 5);
    bVar7 = false;
    puVar12 = (undefined4 *)*param_2;
    piVar10 = piVar11 + 0xfa;
    piVar13 = piVar11 + 0x1b4;
    piVar14 = piVar11 + 0x20;
    piVar15 = piVar11 + 0x138;
    piVar16 = piVar11 + 4;
    iVar17 = 0;
    *(uint *)(iVar25 + 0x28) = uVar35;
    bVar54 = true;
    do {
      bVar32 = bVar54;
      if ((iVar17 - ((int)(uVar9 + uVar35) >> 0x1f) & 1U) == 0) {
        if ((*pbVar44 & 1) != 0) goto LAB_00665064;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar11[2]) {
        case '\0':
          iVar30 = *piVar11;
          piVar11[1] = iVar30;
          iVar17 = FUN_00793854(iVar30 + 0x10);
          piVar11[4] = iVar17;
          *(undefined1 *)(piVar11 + 0x12) = 0;
          piVar11[3] = iVar30 + 0x280;
          piVar11[5] = (int)&DAT_0185c804;
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0185a19c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0185a19c);
        case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)piVar11 + 0x4d6)) {
          case 0:
            piVar18 = (int *)piVar11[0x134];
            goto LAB_006651f8;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0185a1ac);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0185a1ac);
          case 3:
            goto switchD_00665184_caseD_3;
          case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar11[0x13e]) {
            case '\0':
              piVar29 = (int *)piVar11[0x136];
              piVar18 = (int *)piVar11[0x137];
              goto LAB_006652c0;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_0185a0d4);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_0185a0d4);
            }
            break;
          case 5:
            cVar34 = *(char *)(iVar25 + 0x38);
            piVar18 = (int *)piVar11[0x137];
            pbVar2 = (byte *)piVar11[0x136];
            goto joined_r0x00665510;
          case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar11[0x1e8]) {
            case '\0':
              iVar17 = piVar11[0x1e6];
              goto LAB_00665f4c;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_0185a0f4);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_0185a0f4);
            case '\x03':
              goto switchD_006654dc_caseD_3;
            }
          case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar11[0x13c]) {
            case '\0':
              piVar18 = (int *)*piVar28;
              goto LAB_00666544;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_0185a0b4);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_0185a0b4);
            case '\x03':
              goto switchD_00665480_caseD_3;
            }
          }
          goto switchD_006654ac_caseD_3;
        }
        bVar6 = FUN_007031a8(piVar11 + 3,param_2);
        uVar8 = 3;
        if (bVar6 != 2) {
          if ((char)piVar11[0x12] == '\x03') {
            FUN_00703698(piVar11 + 6);
          }
          else if ((char)piVar11[0x12] == '\0') {
            puVar46 = (undefined4 *)piVar11[5];
            iVar17 = piVar11[4];
            pcVar24 = (code *)*puVar46;
            if (pcVar24 != (code *)0x0) {
              (*pcVar24)(iVar17);
            }
            if (puVar46[1] != 0) {
              thunk_FUN_016d3fb4(iVar17);
            }
          }
          if ((bVar6 & 1) == 0) goto LAB_0066692c;
          piVar18 = (int *)piVar11[1];
          do {
            iVar17 = *piVar18;
            bVar54 = (bool)hasExclusiveAccess(piVar18);
          } while (!bVar54);
          *piVar18 = iVar17 + 1;
          if (iVar17 < 0) goto LAB_00666db4;
          piVar11[0x134] = (int)piVar18;
          *(undefined1 *)((int)piVar11 + 0x4d6) = 0;
LAB_006651f8:
          piVar11[0x136] = (int)(piVar18 + 0xb8);
          piVar11[0x130] = (int)piVar18;
          piVar11[0x137] = -1;
          *(undefined1 *)((int)piVar11 + 0x4d5) = 0;
switchD_00665184_caseD_3:
          iVar17 = FUN_006f59b4(piVar28,param_2);
          if (iVar17 == 0) {
            uVar8 = 3;
          }
          else {
            piVar11[0x131] = iVar17;
            if (piVar11[0x136] != 0) {
              FUN_006f5fbc(piVar11[0x136],piVar11[0x137],1);
            }
            puVar46 = (undefined4 *)thunk_FUN_016d4a50(0xc);
            if (puVar46 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            *puVar46 = 1;
            puVar46[1] = 1;
            puVar46[2] = 4;
            piVar29 = (int *)piVar11[0x130];
            piVar11[0x132] = (int)puVar46;
            do {
              iVar17 = *piVar29;
              bVar54 = (bool)hasExclusiveAccess(piVar29);
            } while (!bVar54);
            *piVar29 = iVar17 + 1;
            if (iVar17 < 0) goto LAB_00666db4;
            piVar18 = (int *)piVar11[0x132];
            do {
              iVar17 = *piVar18;
              bVar54 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar54);
            *piVar18 = iVar17 + 1;
            if (iVar17 < 0) goto LAB_00666db4;
            piVar11[0x136] = (int)piVar29;
            *(undefined1 *)(piVar11 + 0x13e) = 0;
            piVar11[0x137] = (int)piVar18;
LAB_006652c0:
            *(undefined1 *)(piVar11 + 0x13d) = 0;
            piVar11[0x138] = (int)piVar29;
            piVar11[0x139] = (int)piVar18;
            piVar11[0x13a] = (int)(piVar29 + 0x20);
switchD_006654ac_caseD_3:
            FUN_00703c2c(local_208,piVar11 + 0x13a,puVar12);
            iVar50 = local_1d4;
            puVar20 = local_1d8;
            iVar30 = local_1ec;
            iVar17 = local_1f0;
            if (local_1d8 == &DAT_3b9aca00) {
              *(undefined1 *)((int)piVar11 + 0x4d6) = 4;
              *(undefined1 *)(piVar11 + 0x13e) = 3;
              uVar8 = 4;
              goto LAB_0066505c;
            }
            local_f0 = (undefined2 *)
                       CONCAT13(local_208[3],
                                CONCAT12(local_208[2],CONCAT11(local_208[1],local_208[0])));
            local_ec = (undefined2 *)CONCAT22(uStack_202,CONCAT11(local_208[5],local_208[4]));
            local_e8 = local_200;
            local_e4 = local_1fc;
            local_e0 = local_1f8;
            local_dc = local_1f4;
            local_70 = local_1e8;
            local_6c = local_1e4;
            local_68 = iStack_1e0;
            local_64 = iStack_1dc;
            if (((char)piVar11[0x13d] == '\x03') && (piVar11[0x13b] != 0)) {
              FUN_006f5d1c(piVar11[0x13b],piVar11[0x13c],1);
            }
            piVar11[4] = 0;
            piVar11[5] = 0x405e0000;
            *(undefined1 *)(piVar11 + 0x13e) = 1;
            piVar11[6] = 0;
            piVar11[7] = 0;
            piVar11[8] = 0;
            piVar11[9] = 0;
            piVar11[0xc] = (int)&DAT_3b9aca00;
            piVar11[0xe] = (int)local_f0;
            piVar11[0xf] = (int)local_ec;
            piVar11[0x10] = (int)local_e8;
            piVar11[0x11] = local_e4;
            piVar11[0x12] = (int)local_e0;
            piVar11[0x13] = (int)local_dc;
            piVar11[0x14] = iVar17;
            piVar11[0x15] = iVar30;
            piVar11[0x1a] = (int)puVar20;
            piVar11[0x1b] = iVar50;
            piVar11[0x1c] = piVar11[0x138];
            piVar11[0x1d] = piVar11[0x139];
            piVar11[0x16] = local_70;
            piVar11[0x17] = (int)local_6c;
            piVar11[0x18] = local_68;
            piVar11[0x19] = local_64;
            FUN_00703a78(piVar28);
            piVar11[0x1e] = 0;
            piVar11[0x1f] = 0;
            piVar11[0x56] = piVar11[0x131] + 0x20;
            piVar11[0x133] = (int)piVar14;
            *(undefined1 *)(piVar11 + 0xf8) = 0;
            *(undefined1 *)(piVar11 + 0x58) = 0;
LAB_00665530:
            piVar18 = (int *)piVar11[0x130];
            if (*(byte *)(piVar18[0xa0] + 8) - 4 < 3) {
              FUN_00703e6c(piVar14);
              FUN_0064a1f4(piVar16);
              piVar10 = (int *)piVar11[0x132];
              DataMemoryBarrier(0xb);
              do {
                iVar25 = *piVar10;
                bVar54 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar54);
              *piVar10 = iVar25 + -1;
              if (iVar25 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aaaeec(piVar11[0x132]);
              }
              FUN_006f625c(piVar11[0x131]);
              piVar10 = (int *)piVar11[0x130];
              DataMemoryBarrier(0xb);
              do {
                iVar25 = *piVar10;
                bVar54 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar54);
              *piVar10 = iVar25 + -1;
              puVar45 = (undefined4 *)0x0;
              if (iVar25 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00791350(piVar11[0x130]);
              }
              goto LAB_006655c4;
            }
            *pbVar27 = 0;
            do {
              iVar17 = *piVar18;
              bVar54 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar54);
            *piVar18 = iVar17 + 1;
            if (iVar17 < 0) goto LAB_00666db4;
            piVar29 = (int *)piVar11[0x132];
            do {
              iVar17 = *piVar29;
              bVar54 = (bool)hasExclusiveAccess(piVar29);
            } while (!bVar54);
            *piVar29 = iVar17 + 1;
            if (iVar17 < 0) goto LAB_00666db4;
            piVar11[0x13a] = (int)piVar18;
            piVar11[0x152] = (int)(piVar11 + 0x133);
            piVar11[0x13c] = (int)(piVar11 + 0x1e);
            *(undefined1 *)((int)piVar11 + 0x4f6) = 0;
            piVar11[0x13b] = (int)piVar29;
            piVar11[0x136] = (int)pbVar27;
            piVar11[0x137] = (int)piVar15;
            cVar34 = *(char *)(iVar25 + 0x38);
            piVar18 = piVar15;
            pbVar2 = pbVar27;
joined_r0x00665510:
            if (cVar34 != '\x01') {
              if (cVar34 == '\x02') {
                    /* WARNING: Subroutine does not return */
                FUN_015f853c(&DAT_018ae900);
              }
              FUN_015e8e6c(iVar25,FUN_009948a0);
              *(undefined1 *)(iVar25 + 0x38) = 1;
            }
            cVar34 = *(char *)(iVar25 + 0x30);
            bVar54 = cVar34 == '\x01';
            if (bVar54) {
              cVar34 = *(char *)(iVar25 + 0x31);
            }
            if (!bVar54 || cVar34 != '\0') {
              if ((*(uint *)(iVar25 + 0x24) & 1) == 0) {
                uVar59 = FUN_0164e918();
                if ((uint)uVar59 < 2) {
                  uVar59 = CONCAT44((int)((ulonglong)uVar59 >> 0x20),1);
                }
              }
              else {
                uVar59 = CONCAT44(*(undefined4 *)(iVar25 + 0x28),*(undefined4 *)(iVar25 + 0x2c));
              }
              uVar19 = (uint)((ulonglong)uVar59 >> 0x20);
              uVar55 = (uint)uVar59;
              uVar19 = uVar19 ^ uVar19 << 0x11;
              *(uint *)(iVar25 + 0x28) = uVar55;
              *(undefined4 *)(iVar25 + 0x24) = 1;
              uVar19 = uVar55 >> 0x10 ^ uVar19 >> 7 ^ uVar55 ^ uVar19;
              *(uint *)(iVar25 + 0x2c) = uVar19;
              iVar17 = 0;
              piVar29 = piVar18 + 6;
              bVar7 = false;
              bVar54 = true;
LAB_00665748:
              if ((iVar17 - ((int)(uVar19 + uVar55) >> 0x1f) & 1U) == 0) {
                if ((*pbVar2 & 1) != 0) goto LAB_00665738;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*(undefined1 *)((int)piVar18 + 0x16)) {
                case 0:
                  piVar51 = (int *)piVar18[2];
                  iVar17 = piVar18[3];
                  puVar23 = (uint *)piVar18[4];
                  *(undefined2 *)(piVar18 + 5) = 0x100;
                  *piVar18 = (int)piVar51;
                  do {
                    iVar30 = *piVar51;
                    bVar7 = (bool)hasExclusiveAccess(piVar51);
                  } while (!bVar7);
                  *piVar51 = iVar30 + 1;
                  if (-1 < iVar30) {
                    piVar41 = piVar51 + 1;
                    *(undefined1 *)((int)piVar18 + 0x15) = 0;
                    uVar36 = *puVar23;
                    uVar38 = puVar23[1];
                    local_dc = (undefined4 *)0x0;
                    local_e0 = (undefined2 *)0x0;
                    local_e4 = 0;
                    local_e8 = (undefined4 *)0x0;
                    local_ec = (undefined2 *)0x0;
                    local_f0 = (undefined2 *)0x0;
                    do {
                      iVar30 = *piVar41;
                      while (iVar30 != -1) {
                        if (iVar30 < 0) {
                          local_208[4] = 0x60;
                          local_208[5] = 0xd3;
                          uStack_202 = 0x157;
                          local_208[0] = 0x70;
                          local_208[1] = 0xe2;
                          local_208[2] = 0x8a;
                          local_208[3] = 1;
                    /* WARNING: Subroutine does not return */
                          FUN_00faa478(&DAT_00590e71,local_208,&DAT_018ae278);
                        }
                        iVar50 = *piVar41;
                        if (iVar50 == iVar30) {
                          bVar1 = (bool)hasExclusiveAccess(piVar41);
                          if (bVar1) {
                            *piVar41 = iVar30 + 1;
                          }
                          bVar7 = false;
                          if (bVar1) {
                            DataMemoryBarrier(0xb);
                            bVar7 = true;
                          }
                        }
                        else {
                          bVar7 = false;
                          ClearExclusiveLocal();
                        }
                        iVar30 = iVar50;
                        if (bVar7) {
                          iVar30 = -0x40;
                          local_1ec = 0;
                          local_1f0 = 0;
                          local_1f4 = (undefined4 *)0x0;
                          local_1f8 = (undefined2 *)0x0;
                          local_1fc = 0;
                          local_200 = (undefined4 *)0x0;
                          local_208[4] = 0;
                          local_208[5] = 0;
                          uStack_202 = 0;
                          local_208[0] = 0;
                          local_208[1] = 0;
                          local_208[2] = 0;
                          local_208[3] = 0;
                          pcVar43 = "BUG: parse hex";
                          pbVar49 = local_208;
                          goto LAB_00665908;
                        }
                      }
                      HintYield();
                    } while( true );
                  }
                  break;
                case 1:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7ca0(&DAT_0185a104);
                case 2:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7cc0(&DAT_0185a104);
                case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                  switch(*(undefined1 *)((int)piVar18 + 0x2d)) {
                  case 0:
                    iVar17 = piVar18[9];
                    piVar51 = (int *)piVar18[10];
                    goto LAB_00665b5c;
                  case 1:
                    /* WARNING: Subroutine does not return */
                    FUN_00fb7ca0(&DAT_0185a0e4);
                  case 2:
                    /* WARNING: Subroutine does not return */
                    FUN_00fb7cc0(&DAT_0185a0e4);
                  }
                  goto switchD_006658a4_caseD_3;
                case 4:
                  goto switchD_006657bc_caseD_4;
                case 5:
                  goto switchD_006657bc_caseD_5;
                }
                goto LAB_00666db4;
              }
              if ((*pbVar2 & 2) != 0) goto LAB_00665738;
              FUN_0067eb58(local_208,*(undefined4 *)piVar18[0x1a],puVar12);
              puVar46 = local_200;
              if (local_200 != (undefined4 *)0x3b9aca01) {
                local_3ec = CONCAT13(local_208[3],
                                     CONCAT12(local_208[2],CONCAT11(local_208[1],local_208[0])));
                local_3f0 = CONCAT22(uStack_202,CONCAT11(local_208[5],local_208[4]));
                FUN_016dd1aa(local_310,&local_1fc,0xcc);
                bVar6 = 2;
                goto LAB_00665de4;
              }
              bVar7 = true;
              goto LAB_00665738;
            }
            FUN_016455a4(*puVar12,puVar12[1]);
LAB_00665d3c:
            uVar8 = 5;
          }
LAB_00665518:
          *(undefined1 *)((int)piVar11 + 0x4d6) = uVar8;
LAB_0066551c:
          uVar8 = 4;
        }
LAB_0066505c:
        *(undefined1 *)(piVar11 + 2) = uVar8;
        bVar7 = true;
      }
      else if ((*pbVar44 & 2) == 0) {
        iVar17 = FUN_00704430(piVar11 + 0x1ea,puVar12);
        bVar7 = true;
        if (iVar17 == 0) {
          bVar6 = 2;
          goto LAB_00666964;
        }
      }
LAB_00665064:
      iVar17 = 1;
      bVar54 = false;
    } while (bVar32);
    bVar54 = false;
    if (bVar7) goto LAB_00666ac4;
    goto LAB_00666974;
  }
  FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00666ac4:
  uVar42 = 1;
  uVar8 = 3;
  goto LAB_00666ac8;
  while( true ) {
    bVar6 = *pbVar47;
    uVar39 = (uint)bVar6;
    uVar48 = uVar39 - 0x30;
    if (0x39 < uVar39) {
      uVar48 = (uVar39 - 0x41 & 0xffffffdf) + 10;
    }
    if (0xf < uVar48) goto LAB_00666ba0;
    *pbVar49 = (byte)uVar48 | (byte)(uVar37 << 4);
    bVar3 = local_208[4];
    bVar6 = local_208[3];
    iVar30 = iVar30 + 2;
    pbVar49 = pbVar49 + 1;
    if (iVar30 == 0) break;
LAB_00665908:
    pbVar47 = (byte *)(pcVar43 + -1);
    if (pbVar47 == (byte *)"0000000000000000000ce42cebccbafe38380349f00115366d339e9e20a8") {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01857b38);
    }
    pcVar43 = pcVar43 + -2;
    bVar6 = *pcVar43;
    uVar39 = (uint)bVar6;
    uVar37 = uVar39 - 0x30;
    if (0x39 < uVar39) {
      uVar37 = (uVar39 - 0x41 & 0xffffffdf) + 10;
    }
    if (0xf < uVar37) {
LAB_00666ba0:
      local_98 = local_78;
      local_a0 = local_80;
      local_208[2] = (byte)local_80;
      local_208[3] = (byte)((uint)local_80 >> 8);
      local_208[4] = (byte)((uint)local_80 >> 0x10);
      local_208[5] = (byte)((uint)local_80 >> 0x18);
      local_9c = local_7c;
      local_208[0] = 0;
      uStack_202 = (undefined2)local_7c;
      local_200 = (undefined4 *)CONCAT22(local_78,(short)((uint)local_7c >> 0x10));
      local_208[1] = bVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: parse hex",0xe,local_208,&DAT_0185c0dc,&DAT_0185d28c);
    }
  }
  local_74 = CONCAT11(local_208[1],local_208[0]);
  local_80 = *puVar45;
  local_7c = puVar45[1];
  local_78 = *(undefined2 *)(puVar45 + 2);
  local_72 = local_208[2];
  FUN_016dd1aa(&local_70,(int)&local_1fc + 3,0x11);
  local_f4 = local_74;
  local_f2 = local_72;
  local_90 = local_80;
  local_8c = local_7c;
  local_88 = local_78;
  local_118 = local_70;
  puStack_114 = local_6c;
  iStack_110 = local_68;
  iStack_10c = local_64;
  local_108 = (undefined1)local_60;
  local_a0 = local_80;
  local_100 = local_80;
  local_fc = local_7c;
  local_f8 = local_78;
  local_130 = local_f0;
  puStack_12c = local_ec;
  puStack_128 = local_e8;
  iStack_124 = local_e4;
  puStack_120 = local_e0;
  puStack_11c = local_dc;
  DataMemoryBarrier(0xb);
  do {
    iVar30 = *piVar51;
    bVar7 = (bool)hasExclusiveAccess(piVar51);
  } while (!bVar7);
  *piVar51 = iVar30 + -1;
  if (iVar30 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(piVar51);
  }
  puVar46 = (undefined4 *)thunk_FUN_016d4a50(0x50);
  if (puVar46 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  *(undefined1 *)((int)puVar46 + 0x12) = local_f2;
  *(byte *)(puVar46 + 5) = bVar3;
  *(byte *)((int)puVar46 + 0x13) = bVar6;
  *(undefined4 *)((int)puVar46 + 0x15) = local_100;
  *(undefined4 *)((int)puVar46 + 0x19) = local_fc;
  *puVar46 = 1;
  puVar46[1] = 1;
  puVar46[2] = piVar51;
  puVar46[3] = iVar17;
  *(undefined2 *)(puVar46 + 4) = local_f4;
  *(undefined2 *)((int)puVar46 + 0x1d) = local_f8;
  FUN_016dd1aa((int)puVar46 + 0x1f,&local_118,0x11);
  puVar46[0xc] = uVar36;
  puVar46[0xd] = uVar38;
  puVar46[0xe] = local_130;
  puVar46[0xf] = puStack_12c;
  puVar46[0x10] = puStack_128;
  puVar46[0x11] = iStack_124;
  puVar46[0x12] = puStack_120;
  puVar46[0x13] = puStack_11c;
  *(undefined1 *)(piVar18 + 5) = 1;
  piVar18[1] = (int)puVar46;
  uVar36 = *puVar23;
  *puVar23 = uVar36 + 1;
  puVar23[1] = puVar23[1] + (uint)(0xfffffffe < uVar36);
  iVar17 = *piVar18;
  piVar51 = (int *)piVar18[1];
  do {
    iVar30 = *piVar51;
    bVar7 = (bool)hasExclusiveAccess(piVar51);
  } while (!bVar7);
  *piVar51 = iVar30 + 1;
  if (iVar30 < 0) goto LAB_00666db4;
  iVar17 = iVar17 + 0x10;
  *(undefined1 *)((int)piVar18 + 0x2d) = 0;
  piVar18[9] = iVar17;
  piVar18[10] = (int)piVar51;
LAB_00665b5c:
  piVar18[6] = iVar17 + 0x30c;
  *(undefined1 *)(piVar18 + 0xb) = 1;
  piVar18[7] = -1;
  piVar18[8] = (int)piVar51;
switchD_006658a4_caseD_3:
  iVar17 = FUN_006f5654(piVar29,puVar12);
  if (iVar17 == 0) {
    uVar8 = 3;
    *(undefined1 *)((int)piVar18 + 0x2d) = 3;
LAB_0066572c:
    *(undefined1 *)((int)piVar18 + 0x16) = uVar8;
    bVar7 = true;
LAB_00665738:
    iVar17 = 1;
    bVar1 = !bVar54;
    bVar54 = false;
    if (bVar1) goto LAB_00665d0c;
    goto LAB_00665748;
  }
  if (*piVar29 != 0) {
    FUN_006f5fbc(*piVar29,piVar18[7],1);
  }
  *(undefined1 *)(piVar18 + 0xb) = 0;
  piVar51 = *(int **)(iVar17 + 0x20);
  *(int *)(iVar17 + 0x20) = piVar18[8];
  if (piVar51 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar30 = *piVar51;
      bVar7 = (bool)hasExclusiveAccess(piVar51);
    } while (!bVar7);
    *piVar51 = iVar30 + -1;
    if (iVar30 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00791880(piVar51);
    }
  }
  FUN_006f625c(iVar17);
  *(undefined2 *)(piVar18 + 0xb) = 0x100;
  FUN_007040c8(piVar29);
  piVar18[6] = *piVar18 + 0x340;
  piVar18[7] = -1;
switchD_006657bc_caseD_4:
  iVar17 = FUN_006f5654(piVar29,puVar12);
  if (iVar17 == 0) {
    uVar8 = 4;
    goto LAB_0066572c;
  }
  if (*piVar29 != 0) {
    FUN_006f5fbc(*piVar29,piVar18[7],1);
  }
  *(undefined1 *)(piVar18 + 5) = 0;
  FUN_006e67f4(iVar17 + 0x20,piVar18[1],&DAT_0185a134);
  FUN_006f625c(iVar17);
  FUN_01656eb8(local_208,&DAT_0185a18c,10,0,0,&DAT_0185a18c);
  FUN_016dd1aa(&local_f0,local_208,0x50);
  FUN_016dd1aa(piVar29,&local_f0,0x50);
switchD_006657bc_caseD_5:
  iVar17 = FUN_01657fc4(piVar29,puVar12);
  if (iVar17 != 0) {
    uVar8 = 5;
    goto LAB_0066572c;
  }
  FUN_00a07b4c(piVar29);
  *(undefined2 *)(piVar18 + 5) = 0;
  piVar29 = (int *)*piVar18;
  DataMemoryBarrier(0xb);
  do {
    iVar17 = *piVar29;
    bVar54 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar54);
  *piVar29 = iVar17 + -1;
  if (iVar17 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*piVar18);
  }
  bVar6 = 1;
  *(undefined1 *)((int)piVar18 + 0x16) = 1;
  puVar46 = (undefined4 *)0x3b9aca01;
LAB_00665de4:
  *pbVar2 = *pbVar2 | bVar6;
  goto LAB_00665df0;
LAB_00665d0c:
  puVar46 = (undefined4 *)0x3b9aca03;
  if (bVar7) goto LAB_00665d3c;
LAB_00665df0:
  *piVar10 = local_3ec;
  piVar11[0xfb] = local_3f0;
  piVar11[0xfc] = (int)puVar46;
  FUN_016dd1aa(piVar11 + 0xfd,local_310,0xcc);
  FUN_007041b4(piVar15);
  puVar20 = (undefined1 *)0x1;
  if (&DAT_3b9aca00 < (undefined1 *)piVar11[0xfc]) {
    puVar20 = (undefined1 *)piVar11[0xfc] + -0x3b9aca01;
  }
  if (puVar20 != (undefined1 *)0x0) {
    if (puVar20 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0185a1bc);
    }
    FUN_016dd1aa(piVar28,piVar10,0xd8);
    if ((undefined1 *)*piVar15 == &DAT_3b9aca00) {
      puVar45 = (undefined4 *)FUN_0072f9b8(&DAT_003400cc,0x1d);
      FUN_00703e6c(piVar14);
      FUN_0064a1f4(piVar16);
      piVar10 = (int *)piVar11[0x132];
      DataMemoryBarrier(0xb);
      do {
        iVar25 = *piVar10;
        bVar54 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar54);
      *piVar10 = iVar25 + -1;
      if (iVar25 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(piVar11[0x132]);
      }
      FUN_006f625c(piVar11[0x131]);
      piVar10 = (int *)piVar11[0x130];
      DataMemoryBarrier(0xb);
      do {
        iVar25 = *piVar10;
        bVar54 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar54);
      *piVar10 = iVar25 + -1;
      if (iVar25 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(piVar11[0x130]);
      }
LAB_006655c4:
      *(undefined1 *)((int)piVar11 + 0x4d6) = 1;
      FUN_00703808(piVar16);
      if (puVar45 != (undefined4 *)0x0) {
        (**(code **)*puVar45)(puVar45);
        iVar25 = piVar11[1];
        local_310[0] = *(char *)(*(int *)(iVar25 + 0x280) + 8);
LAB_00666888:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_310[0]) {
        case '\0':
        case '\t':
        case '\n':
          local_208[4] = 0x34;
          local_208[5] = 0x2a;
          uStack_202 = 0x70;
          local_208[0] = (byte)local_310;
          local_208[1] = (byte)((uint)local_310 >> 8);
          local_208[2] = (byte)((uint)local_310 >> 0x10);
          local_208[3] = (byte)((uint)local_310 >> 0x18);
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00575309,local_208,&DAT_01859cd4);
        case '\x01':
        case '\x02':
          pcVar43 = (char *)(*(int *)(iVar25 + 0x280) + 8);
          do {
            cVar34 = *pcVar43;
            if (cVar34 != local_310[0]) goto LAB_00666918;
            bVar54 = (bool)hasExclusiveAccess(pcVar43);
          } while (!bVar54);
          *pcVar43 = '\x06';
          break;
        case '\x03':
        case '\x04':
          pcVar43 = (char *)(*(int *)(iVar25 + 0x280) + 8);
          do {
            cVar34 = *pcVar43;
            if (cVar34 != local_310[0]) goto LAB_00666918;
            bVar54 = (bool)hasExclusiveAccess(pcVar43);
          } while (!bVar54);
          *pcVar43 = '\x05';
          break;
        default:
          goto switchD_00666894_caseD_5;
        }
        bVar54 = true;
        local_310[0] = cVar34;
        goto LAB_00666920;
      }
LAB_0066692c:
      piVar10 = (int *)piVar11[1];
      DataMemoryBarrier(0xb);
      do {
        iVar25 = *piVar10;
        bVar54 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar54);
      *piVar10 = iVar25 + -1;
      if (iVar25 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00791350(piVar11[1]);
      }
      bVar6 = 1;
      *(undefined1 *)(piVar11 + 2) = 1;
LAB_00666964:
      bVar54 = true;
      *pbVar44 = *pbVar44 | bVar6;
LAB_00666974:
      FUN_00655990(param_1 + 4);
      if (*(char *)(param_1 + 500) == '\x03') {
        if (*(char *)(param_1 + 0x1f1) == '\x04') {
          FUN_006f625c(param_1[0x1f0]);
        }
        else if ((*(char *)(param_1 + 0x1f1) == '\x03') && (param_1[0x1f2] != 0)) {
          FUN_006f5fbc(param_1[0x1f2],param_1[499],1);
        }
      }
      if (!bVar54) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_0185854c);
      }
      param_1[3] = param_1[1] + 0x340;
      param_1[4] = 0xffffffff;
switchD_00664d00_caseD_4:
      iVar25 = FUN_006f5654(param_1 + 3,*param_2);
      if (iVar25 == 0) {
        uVar42 = 1;
        uVar8 = 4;
        goto LAB_00666ac8;
      }
      iVar17 = param_1[3];
      if (iVar17 != 0) {
        FUN_006f5fbc(iVar17,param_1[4],1);
      }
      uVar60 = FUN_00714ecc(*(int *)(iVar25 + 0x20) + 8);
      piVar11 = (int *)uVar60;
      FUN_007150a8(piVar11 + 2);
      if ((((uVar60 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar17 = FUN_015bf3f8(), iVar17 == 0)) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar11;
        bVar54 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar54);
      *piVar11 = 0;
      if (iVar17 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      FUN_006f625c(iVar25);
      iVar25 = param_1[1];
      uVar42 = FUN_00793854(iVar25 + 0x10);
      param_1[4] = uVar42;
      *(undefined1 *)(param_1 + 0x12) = 0;
      param_1[3] = iVar25 + 0x280;
      param_1[5] = &DAT_0185c804;
switchD_00664d00_caseD_5:
      bVar6 = FUN_006618cc(param_1 + 3,param_2);
      if (bVar6 == 2) {
        uVar42 = 1;
        uVar8 = 5;
        goto LAB_00666ac8;
      }
      if (*(char *)(param_1 + 0x12) == '\x03') {
        FUN_00656120(param_1 + 6);
      }
      else if (*(char *)(param_1 + 0x12) == '\0') {
        uVar42 = param_1[4];
        puVar45 = (undefined4 *)param_1[5];
        pcVar24 = (code *)*puVar45;
        if (pcVar24 != (code *)0x0) {
          (*pcVar24)(uVar42);
        }
        if (puVar45[1] != 0) {
          thunk_FUN_016d3fb4(uVar42);
        }
      }
      if ((bVar6 & 1) != 0) {
        piVar11 = (int *)param_1[1];
        DataMemoryBarrier(0xb);
        do {
          iVar25 = *piVar11;
          bVar54 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar54);
        *piVar11 = iVar25 + -1;
        uVar42 = 0;
        uVar8 = 1;
        if (iVar25 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00791350(param_1[1]);
          uVar42 = 0;
        }
LAB_00666ac8:
        *(undefined1 *)(param_1 + 2) = uVar8;
        return uVar42;
      }
      piVar10 = (int *)param_1[1];
      goto LAB_00664dd0;
    }
    FUN_016dd1aa(local_208,piVar10,0xd8);
    iVar17 = piVar11[0x130];
    *(undefined1 *)((int)piVar11 + 0x4d5) = 0;
    FUN_016dd1aa(piVar11 + 0x16c,piVar10,0xd8);
    iVar17 = iVar17 + 0x10;
    *(undefined1 *)(piVar11 + 0x1e8) = 0;
    piVar11[0x1e6] = iVar17;
LAB_00665f4c:
    piVar11[0x1e7] = iVar17;
    FUN_016dd1aa(piVar26,piVar11 + 0x16c,0xd8);
    FUN_015f3b0c(&local_f0,1);
    puVar46 = local_e8;
    puVar5 = local_ec;
    puVar4 = local_f0;
    iVar17 = piVar11[0x1e7];
    DataMemoryBarrier(0xb);
    if (piVar11[0x1bc] != 0) {
      FUN_007003e4(piVar13,piVar26);
    }
    piVar11[0x1da] = (int)puVar46;
    *(undefined1 *)(piVar11 + 0x1e5) = 0;
    piVar11[0x1e2] = iVar17 + 0x70;
    piVar11[0x1e3] = (int)piVar13;
    piVar11[0x1d8] = (int)puVar4;
    piVar11[0x1d9] = (int)puVar5;
switchD_006654dc_caseD_3:
    iVar17 = FUN_006c7b88(piVar11 + 0x1d8,puVar12);
    if (iVar17 != 0) {
      *(undefined1 *)(piVar11 + 0x1e8) = 3;
      uVar8 = 6;
      goto LAB_00665518;
    }
    if (((char)piVar11[0x1e5] == '\x03') && (piVar11[0x1e0] != 0)) {
      FUN_006f5d1c(piVar11[0x1e0],piVar11[0x1e1],1);
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d7c7c == 0) {
      DataMemoryBarrier(0xb);
      if (piVar11[0x1bc] != 0) {
        FUN_007003e4(piVar13,piVar26);
      }
      local_5c = 0;
      local_58 = 0xffff0000;
      uStack_54 = 0;
      local_60 = 0;
      local_64 = 0;
      local_68 = 0;
      local_6c = (undefined4 *)0x0;
      local_70 = 0;
      FUN_01289fbc(&local_f0,&local_70,piVar13);
      puVar5 = local_ec;
      puVar4 = local_f0;
      iVar17 = piVar11[0x1e7];
      piVar18 = *(int **)(iVar17 + 0x304);
      do {
        iVar30 = *piVar18;
        bVar54 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar54);
      *piVar18 = iVar30 + 1;
      if (iVar30 < 0) goto LAB_00666db4;
      iVar50 = *(int *)(iVar17 + 0x304);
      iVar30 = -0x80000000;
      puVar46 = param_1;
      if (*(int *)(iVar17 + 0x2f8) != -0x80000000) {
        iVar30 = *(int *)(iVar17 + 0x300);
        puVar46 = (undefined4 *)&DAT_00000001;
        uVar42 = *(undefined4 *)(iVar17 + 0x2fc);
        if ((iVar30 != 0) &&
           (puVar46 = (undefined4 *)thunk_FUN_016d4a50(iVar30,uVar42), puVar46 == (undefined4 *)0x0)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar30);
        }
        FUN_016dd1aa(puVar46,uVar42,iVar30);
      }
      piVar18 = *(int **)(iVar17 + 0x308);
      do {
        iVar31 = *piVar18;
        bVar54 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar54);
      *piVar18 = iVar31 + 1;
      if (iVar31 < 0) goto LAB_00666db4;
      iVar17 = *(int *)(iVar17 + 0x308);
      puVar40 = *(undefined2 **)(iVar17 + 0x10);
      puVar52 = (undefined2 *)&DAT_00000001;
      local_70 = iVar30;
      local_6c = puVar46;
      local_68 = iVar30;
      local_64 = iVar50;
      local_60 = iVar17;
      if (puVar40 != (undefined2 *)0x0) {
        uVar42 = *(undefined4 *)(iVar17 + 0xc);
        puVar52 = (undefined2 *)thunk_FUN_016d4a50(puVar40);
        if (puVar52 == (undefined2 *)0x0) goto LAB_00666d50;
        FUN_016dd1aa(puVar52,uVar42,puVar40);
        if (puVar40 == (undefined2 *)&DAT_80000000) {
          puVar40 = (undefined2 *)0x3;
          puVar52 = (undefined2 *)thunk_FUN_016d4a50(3);
          if (puVar52 == (undefined2 *)0x0) goto LAB_00666d50;
          *(undefined1 *)(puVar52 + 1) = 0x41;
          puVar40 = (undefined2 *)0x3;
          *puVar52 = 0x2f4e;
        }
      }
      puVar46 = (undefined4 *)thunk_FUN_016d4a50(5);
      if (puVar46 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,5);
      }
      *(undefined1 *)(puVar46 + 1) = 0x6e;
      *puVar46 = 0x69617264;
      FUN_00793ff8(&local_f0,&local_70);
      if (local_f0 == (undefined2 *)&DAT_80000000) {
        puVar21 = (undefined2 *)thunk_FUN_016d4a50(3);
        if (puVar21 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,3);
        }
        *(undefined1 *)(puVar21 + 1) = 0x41;
        *puVar21 = 0x2f4e;
        local_3e0 = (undefined4 *)0x3;
        bVar54 = false;
      }
      else {
        local_3e0 = local_e8;
        bVar54 = local_f0 == (undefined2 *)0x0;
        puVar21 = local_ec;
      }
      FUN_00794130(&local_f0,&local_70);
      if (local_f0 == (undefined2 *)&DAT_80000000) {
        puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
        if (puVar22 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,3);
        }
        *(undefined1 *)(puVar22 + 1) = 0x41;
        *puVar22 = 0x2f4e;
        bVar7 = false;
        puVar33 = (undefined4 *)0x3;
      }
      else {
        bVar7 = local_f0 == (undefined2 *)0x0;
        puVar22 = local_ec;
        puVar33 = local_e8;
      }
      puVar53 = (undefined2 *)&DAT_00000001;
      iVar30 = *(int *)(iVar50 + 0x10);
      if (iVar30 != 0) {
        uVar42 = *(undefined4 *)(iVar50 + 0xc);
        puVar53 = (undefined2 *)thunk_FUN_016d4a50(iVar30);
        if (puVar53 == (undefined2 *)0x0) {
LAB_00666d38:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar30);
        }
        FUN_016dd1aa(puVar53,uVar42,iVar30);
        if (iVar30 == -0x80000000) {
          iVar30 = 3;
          puVar53 = (undefined2 *)thunk_FUN_016d4a50(3);
          if (puVar53 == (undefined2 *)0x0) goto LAB_00666d38;
          *(undefined1 *)(puVar53 + 1) = 0x41;
          iVar30 = 3;
          *puVar53 = 0x2f4e;
        }
      }
      local_dc = local_3e0;
      local_e4 = 5;
      local_f0 = puVar52;
      local_ec = puVar40;
      local_e8 = puVar46;
      local_e0 = puVar21;
      local_d8 = puVar22;
      puStack_d4 = puVar33;
      puStack_d0 = puVar53;
      local_cc = iVar30;
      piVar18 = (int *)FUN_00749fd0(DAT_018d7cec,&local_f0,5);
      puVar23 = (uint *)(piVar18 + 2);
      do {
        uVar19 = *puVar23;
        bVar1 = (bool)hasExclusiveAccess(puVar23);
      } while (!bVar1);
      *puVar23 = (uint)(uVar19 + (int)puVar4);
      piVar18[3] = (int)((int)puVar5 + (uint)CARRY4(uVar19,(uint)puVar4) + piVar18[3]);
      DataMemoryBarrier(0xb);
      do {
        iVar50 = *piVar18;
        bVar1 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar1);
      *piVar18 = iVar50 + -1;
      if (iVar50 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0df4();
      }
      if (iVar30 != 0) {
        thunk_FUN_016d3fb4(puVar53);
      }
      if (!bVar7) {
        thunk_FUN_016d3fb4(puVar22);
      }
      if (!bVar54) {
        thunk_FUN_016d3fb4(puVar21);
      }
      thunk_FUN_016d3fb4(puVar46);
      if (puVar40 != (undefined2 *)0x0) {
        thunk_FUN_016d3fb4(puVar52);
      }
      puVar52 = (undefined2 *)&DAT_00000001;
      puVar40 = *(undefined2 **)(iVar17 + 0x10);
      if (puVar40 != (undefined2 *)0x0) {
        uVar42 = *(undefined4 *)(iVar17 + 0xc);
        puVar52 = (undefined2 *)thunk_FUN_016d4a50(puVar40);
        if (puVar52 == (undefined2 *)0x0) {
LAB_00666d50:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,puVar40);
        }
        FUN_016dd1aa(puVar52,uVar42,puVar40);
        if (puVar40 == (undefined2 *)&DAT_80000000) {
          puVar40 = (undefined2 *)0x3;
          puVar52 = (undefined2 *)thunk_FUN_016d4a50(3);
          if (puVar52 == (undefined2 *)0x0) goto LAB_00666d50;
          *(undefined1 *)(puVar52 + 1) = 0x41;
          puVar40 = (undefined2 *)0x3;
          *puVar52 = 0x2f4e;
        }
      }
      local_f0 = puVar52;
      local_ec = puVar40;
      piVar18 = (int *)FUN_00749fd0(DAT_018d7d00,&local_f0,1);
      puVar23 = (uint *)(piVar18 + 2);
      do {
        uVar19 = *puVar23;
        bVar54 = (bool)hasExclusiveAccess(puVar23);
      } while (!bVar54);
      *puVar23 = (uint)(uVar19 + (int)puVar4);
      piVar18[3] = (int)((int)puVar5 + (uint)CARRY4(uVar19,(uint)puVar4) + piVar18[3]);
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar18;
        bVar54 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar54);
      *piVar18 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0df4();
      }
      if (puVar40 != (undefined2 *)0x0) {
        thunk_FUN_016d3fb4(puVar52);
      }
      FUN_00777d58(&local_70);
    }
    FUN_006ff914(piVar26);
    *(undefined1 *)((int)piVar11 + 0x4d5) = 0;
    *(undefined1 *)(piVar11 + 0x1e8) = 1;
  }
  *(undefined1 *)(piVar11 + 0x13c) = 0;
  piVar11[0x136] = (int)piVar16;
  piVar18 = piVar16;
LAB_00666544:
  piVar11[0x137] = (int)piVar18;
  iVar17 = *(int *)(piVar18[0x18] + 0x70);
  iVar30 = *(int *)(piVar18[0x18] + 0x74);
  ClearExclusiveLocal();
  FUN_015f3b0c(local_208,1);
  if (iVar17 != 0 || iVar30 != 0) {
    iVar17 = *(int *)(piVar11[0x137] + 0x60);
    *(undefined1 *)(piVar11 + 0x13b) = 0;
    piVar11[0x138] = iVar17 + 0x80;
switchD_00665480_caseD_3:
    FUN_00703c2c(local_208,piVar15,puVar12);
    if (local_1d8 == &DAT_3b9aca00) {
      *(undefined1 *)((int)piVar11 + 0x4d6) = 7;
      *(undefined1 *)(piVar11 + 0x13c) = 3;
      goto LAB_0066551c;
    }
    local_240 = CONCAT13(local_208[3],CONCAT12(local_208[2],CONCAT11(local_208[1],local_208[0])));
    local_23c = CONCAT22(uStack_202,CONCAT11(local_208[5],local_208[4]));
    puStack_238 = local_200;
    iStack_234 = local_1fc;
    local_230 = local_1f8;
    puStack_22c = local_1f4;
    iStack_228 = local_1f0;
    iStack_224 = local_1ec;
    iStack_220 = local_1e8;
    local_21c = local_1e4;
    iStack_218 = iStack_1e0;
    iStack_214 = iStack_1dc;
    puStack_210 = local_1d8;
    iStack_20c = local_1d4;
    if (((char)piVar11[0x13b] == '\x03') && (piVar11[0x139] != 0)) {
      FUN_006f5d1c(piVar11[0x139],piVar11[0x13a],1);
    }
    iVar17 = piVar11[0x137];
    local_f0 = *(undefined2 **)(iVar17 + 0x50);
    local_ec = *(undefined2 **)(iVar17 + 0x54);
    local_e8 = *(undefined4 **)(iVar17 + 0x58);
    FUN_015f3c24(local_208,&iStack_218,&local_f0);
    iVar17 = local_1fc;
    puVar46 = local_200;
    if ((local_208[0] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: accepted snapshot time",0x1b,&DAT_0185a0c4);
    }
    iVar30 = piVar11[0x137];
    dVar56 = (double)VectorUnsignedToFloat(local_1f8,(byte)(in_fpscr >> 0x16) & 3);
    dVar58 = (double)FUN_01845f30(local_240 - *(uint *)(iVar30 + 0x28),
                                  local_23c -
                                  (*(int *)(iVar30 + 0x2c) +
                                  (uint)(local_240 < *(uint *)(iVar30 + 0x28))));
    dVar57 = (double)FUN_01845f30(puVar46,iVar17);
    dVar58 = dVar58 / (dVar56 / 1000000000.0 + dVar57);
    FUN_01111870(SUB84(dVar58,0),iVar30);
    uVar42 = FUN_011119a8(piVar11[0x137]);
    dVar56 = (double)CONCAT44(extraout_s1,uVar42);
    in_fpscr = in_fpscr & 0xfffffff;
    uVar19 = in_fpscr | (uint)(dVar56 < 10.0) << 0x1f | (uint)(dVar56 == 10.0) << 0x1e;
    uVar55 = uVar19 | (uint)NAN(dVar56) << 0x1c;
    bVar6 = (byte)(uVar19 >> 0x18);
    if ((bool)(bVar6 >> 6 & 1) || bVar6 >> 7 != ((byte)(uVar55 >> 0x1c) & 1)) {
      if (dVar58 < 3.0) {
        uVar19 = *(uint *)(*(int *)(piVar11[0x137] + 100) + 8);
        puVar23 = (uint *)(*(int *)(piVar11[0x137] + 100) + 8);
        if (0.1 <= dVar58) {
          do {
            uVar55 = 0;
            if (uVar19 != 1) {
              if (uVar19 == 0) goto LAB_006667b8;
              uVar55 = uVar19 - 1;
            }
            while (*puVar23 == uVar19) {
              bVar54 = (bool)hasExclusiveAccess(puVar23);
              if (bVar54) {
                *puVar23 = uVar55;
                goto LAB_006667b8;
              }
            }
            ClearExclusiveLocal();
            uVar19 = *puVar23;
          } while( true );
        }
        do {
          uVar55 = 0;
          if (uVar19 != 1) {
            if (uVar19 == 0) break;
            uVar55 = uVar19 >> 1;
          }
          while (*puVar23 == uVar19) {
            bVar54 = (bool)hasExclusiveAccess(puVar23);
            if (bVar54) {
              *puVar23 = uVar55;
              goto LAB_006667b8;
            }
          }
          ClearExclusiveLocal();
          uVar19 = *puVar23;
        } while( true );
      }
    }
    else {
      piVar18 = (int *)(*(int *)(piVar11[0x137] + 100) + 8);
      do {
        bVar54 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar54);
      *piVar18 = *piVar18 + 1;
      in_fpscr = uVar55;
    }
LAB_006667b8:
    iVar17 = piVar11[0x137];
    if (*(int *)(iVar17 + 0x40) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar17 + 0x44));
      iVar17 = piVar11[0x137];
    }
    *(uint *)(iVar17 + 0x28) = local_240;
    *(int *)(iVar17 + 0x2c) = local_23c;
    *(undefined4 **)(iVar17 + 0x30) = puStack_238;
    *(int *)(iVar17 + 0x34) = iStack_234;
    *(undefined2 **)(iVar17 + 0x38) = local_230;
    *(undefined4 **)(iVar17 + 0x3c) = puStack_22c;
    *(int *)(iVar17 + 0x40) = iStack_228;
    *(int *)(iVar17 + 0x44) = iStack_224;
    *(int *)(iVar17 + 0x48) = iStack_220;
    *(undefined4 **)(iVar17 + 0x4c) = local_21c;
    *(int *)(iVar17 + 0x50) = iStack_218;
    *(int *)(iVar17 + 0x54) = iStack_214;
    *(undefined1 **)(iVar17 + 0x58) = puStack_210;
    *(int *)(iVar17 + 0x5c) = iStack_20c;
  }
  *(undefined1 *)(piVar11 + 0x13c) = 1;
  goto LAB_00665530;
LAB_00666918:
  bVar54 = false;
  ClearExclusiveLocal();
  local_310[0] = cVar34;
LAB_00666920:
  if (bVar54) goto switchD_00666894_caseD_5;
  goto LAB_00666888;
switchD_00666894_caseD_5:
  goto LAB_0066692c;
}

