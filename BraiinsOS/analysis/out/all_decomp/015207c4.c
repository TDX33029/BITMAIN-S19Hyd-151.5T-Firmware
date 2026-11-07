// FUN_015207c4 @ 015207c4 size=6700 calls_out=19 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01521900) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015207c4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  byte *****pppppbVar2;
  byte *****pppppbVar3;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  byte *****pppppbVar6;
  byte *****pppppbVar7;
  byte *****pppppbVar8;
  byte *****pppppbVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  byte *****pppppbVar13;
  undefined4 uVar14;
  int iVar15;
  byte *****pppppbVar16;
  int iVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  int iVar20;
  uint uVar21;
  byte ****ppppbVar22;
  byte *****pppppbVar23;
  int iVar24;
  byte *****pppppbVar25;
  byte *****extraout_r3;
  byte *****extraout_r3_00;
  byte *****extraout_r3_01;
  byte *****extraout_r3_02;
  byte *****pppppbVar26;
  uint *puVar27;
  byte ****ppppbVar28;
  byte ****ppppbVar29;
  undefined4 uVar30;
  byte *****pppppbVar31;
  undefined4 *puVar32;
  int iVar33;
  uint uVar34;
  byte *****unaff_r7;
  byte *****pppppbVar35;
  int iVar36;
  byte *****pppppbVar37;
  uint *puVar38;
  byte ****ppppbVar39;
  int iVar40;
  byte *****pppppbVar41;
  byte ****ppppbVar42;
  byte ****ppppbVar43;
  bool bVar44;
  byte ****local_1e8;
  byte ****local_1e4;
  byte *****local_1e0;
  byte *****local_1dc;
  byte ****local_1d0;
  byte *****local_1cc;
  byte ****local_1c8;
  byte ****local_1c4;
  byte *****local_1c0;
  uint *local_1b8;
  byte *****local_194;
  byte *****local_190;
  byte *****local_18c;
  byte *****local_184;
  int local_150;
  uint local_14c;
  int local_148;
  byte *****local_140;
  byte *****local_13c;
  byte *****local_138;
  byte *****local_134;
  byte *****local_130;
  byte *****local_12c;
  byte *****local_128;
  byte *****local_124;
  byte *****local_120;
  byte *****local_11c;
  byte *****local_118;
  byte *****local_114;
  byte *****local_10c;
  uint *local_108;
  byte *****local_104;
  byte *****local_100;
  byte *****local_fc;
  byte *****local_f8;
  byte *****local_f4;
  byte *****local_f0;
  byte *****pppppbStack_ec;
  byte *****pppppbStack_e8;
  byte *****pppppbStack_e4;
  byte *****local_e0;
  byte *****local_dc;
  byte *****local_d8;
  byte *****local_d4;
  byte *****local_d0;
  byte *****local_cc;
  byte *****local_c8;
  byte *****local_c4;
  byte *****local_c0;
  byte *****local_bc;
  byte *****local_b8;
  byte *****local_b4;
  byte *****local_b0;
  byte *****local_ac;
  byte *****local_a8;
  int local_a4;
  byte *****local_a0;
  byte *****local_9c;
  byte *****local_98;
  byte *****local_94;
  byte *****local_90;
  byte *****local_8c;
  byte *****local_88;
  byte *****local_84;
  byte *****local_80;
  byte *****local_7c;
  byte *****local_78;
  byte *****local_74;
  byte *****local_70;
  byte *****local_6c;
  byte *****local_68;
  byte *****local_64;
  byte *****local_60;
  byte *****local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte *****local_50;
  byte *****local_4c;
  byte *****local_48;
  byte *****local_44;
  byte *****local_40;
  byte *****local_3c;
  byte *****pppppbStack_38;
  byte *****pppppbStack_34;
  byte *****pppppbStack_30;
  byte *****pppppbStack_2c;
  
  iVar24 = *param_2;
  pppppbVar41 = (byte *****)0x80000001;
  if (iVar24 == param_2[1]) goto LAB_015209f0;
  pppppbVar31 = *(byte ******)(iVar24 + 8);
  pbVar11 = *(byte **)(iVar24 + 4);
  puVar38 = (uint *)param_2[2];
  *param_2 = iVar24 + 0xc;
  local_140 = (byte *****)&DAT_8000001d;
  local_13c = (byte *****)CONCAT31(local_13c._1_3_,5);
  local_78 = (byte *****)&DAT_8000001d;
  local_74 = (byte *****)CONCAT31(local_74._1_3_,5);
  pppppbVar16 = local_74;
  if ((pppppbVar31 == (byte *****)0x0) ||
     ((~*pbVar11 & 0x1f) == 0 || pppppbVar31 == (byte *****)&DAT_00000001)) goto LAB_0152082c;
  pppppbVar35 = (byte *****)(uint)pbVar11[1];
  if (-1 < (char)pbVar11[1]) {
    uVar12 = 2;
    goto LAB_0152091c;
  }
  if ((byte *)0x3 < (byte *)((int)pppppbVar35 + -0x81)) goto LAB_0152082c;
  uVar21 = (&switchD_01520a60::switchdataD_01520a64)[(int)pppppbVar35 + -0x81];
  switch(pppppbVar35) {
  case (byte *****)0x81:
    if ((pppppbVar31 < (byte *****)0x3) || ((uint)(int)(char)pbVar11[2] < 0x80000000)) break;
    pppppbVar35 = (byte *****)(uint)pbVar11[2];
    uVar12 = 3;
LAB_0152091c:
    pppppbVar37 = (byte *****)((int)pppppbVar35 + uVar12);
    if (((CARRY4(uVar12,(uint)pppppbVar35)) || (pppppbVar31 < pppppbVar37)) || (*pbVar11 != 0x30))
    break;
    local_100 = (byte *****)(pbVar11 + uVar12);
    local_f8 = (byte *****)0x0;
    local_fc = pppppbVar35;
    local_4c = local_100;
    local_48 = pppppbVar35;
    FUN_016cb694(&local_d0,&local_100,0xffffffff);
    pppppbVar9 = local_b0;
    pppppbVar8 = local_b4;
    pppppbVar7 = local_b8;
    pppppbVar6 = local_bc;
    pppppbVar4 = local_c0;
    pppppbVar16 = local_c4;
    pppppbVar2 = local_c8;
    pppppbVar35 = local_cc;
    if (local_d0 == (byte *****)&DAT_00000001) {
      local_184 = local_c8;
      local_190 = local_c0;
      local_18c = local_bc;
      local_194 = local_ac;
      FUN_016c3a1c(&local_78);
      pppppbVar31 = pppppbVar7;
      unaff_r7 = pppppbVar8;
      pppppbVar41 = pppppbVar9;
      goto LAB_01520848;
    }
    if (local_f8 != local_fc) {
      local_184 = (byte *****)&DAT_8000001d;
      pppppbVar16 = local_74;
      goto LAB_01520848;
    }
    FUN_016c3a1c(&local_78);
    local_100 = (byte *****)&DAT_80000000;
    local_d8 = (byte *****)0x0;
    local_dc = pppppbVar2;
    local_e0 = pppppbVar35;
    FUN_016c607c(&local_d0,&local_e0,2);
    unaff_r7 = local_c8;
    pppppbVar35 = local_cc;
    if (local_d0 != (byte *****)0x8000002d) {
      local_190 = local_c8;
      local_18c = local_c4;
      local_194 = local_b4;
      puVar27 = (uint *)local_c0;
      local_184 = local_d0;
      unaff_r7 = local_bc;
      pppppbVar16 = local_b8;
LAB_01520d98:
      uVar12 = (uint)pppppbVar35 & 0xffffff00;
      pppppbVar41 = pppppbVar16;
LAB_01520d9c:
      FUN_016c3a1c(&local_100);
      pppppbVar31 = (byte *****)puVar27;
      pppppbVar16 = (byte *****)(uVar12 | (uint)pppppbVar35 & 0xff);
      goto LAB_01520848;
    }
    if (local_c8 == (byte *****)0x0) {
      puVar27 = (uint *)extraout_r3;
      local_184 = (byte *****)&DAT_80000000;
      goto LAB_01520d98;
    }
    local_d0 = (byte *****)&DAT_80000000;
    FUN_016c3a1c(&local_d0);
    bVar10 = *(byte *)pppppbVar35;
    local_184 = (byte *****)&DAT_80000000;
    pppppbVar41 = pppppbVar16;
    if (bVar10 == 0) {
      unaff_r7 = (byte *****)((int)unaff_r7 + -1);
      if (unaff_r7 == (byte *****)0x0) {
LAB_01520db8:
        local_184 = (byte *****)0x80000023;
        puVar27 = (uint *)extraout_r3_00;
LAB_01520dbc:
        pppppbVar35 = (byte *****)0x0;
LAB_01520dc0:
        uVar12 = 0;
        goto LAB_01520d9c;
      }
      bVar10 = *(byte *)((int)pppppbVar35 + 1);
      puVar27 = (uint *)extraout_r3_00;
      if ((char)bVar10 < '\0') goto LAB_01520b48;
      goto LAB_01520d98;
    }
    puVar27 = (uint *)extraout_r3_00;
    if ((char)bVar10 < '\0') goto LAB_01520d98;
LAB_01520b48:
    puVar27 = (uint *)extraout_r3_00;
    if (unaff_r7 != (byte *****)&DAT_00000001) goto LAB_01520d98;
    pppppbVar35 = (byte *****)0x0;
    if (bVar10 != 1) goto LAB_01520db8;
    FUN_016c607c(&local_d0,&local_e0,0x30);
    if (local_d0 != (byte *****)0x8000002d) {
      local_184 = local_d0;
      uVar12 = (uint)local_cc & 0xffffff00;
      local_18c = local_c4;
      local_190 = local_c8;
      local_194 = local_b4;
      puVar27 = (uint *)local_c0;
      unaff_r7 = local_bc;
      pppppbVar35 = local_cc;
      pppppbVar41 = local_b8;
      goto LAB_01520d9c;
    }
    if (local_c8 != pppppbVar7) {
      local_184 = (byte *****)&DAT_8000001c;
      puVar27 = (uint *)extraout_r3_01;
      goto LAB_01520dbc;
    }
    local_184 = (byte *****)&DAT_8000001c;
    iVar24 = thunk_FUN_016dd50a(local_cc,pppppbVar6,pppppbVar7);
    uVar12 = 0;
    puVar27 = (uint *)extraout_r3_02;
    if (iVar24 != 0) goto LAB_01520d9c;
    FUN_016c607c(&local_d0,&local_e0,0x30);
    pppppbVar23 = local_c8;
    pppppbVar2 = local_cc;
    local_190 = local_c8;
    local_184 = local_d0;
    if (local_d0 != (byte *****)0x8000002d) {
      local_18c = local_c4;
      uVar12 = (uint)local_cc & 0xffffff00;
      local_194 = local_b4;
      puVar27 = (uint *)local_c0;
      unaff_r7 = local_bc;
      pppppbVar35 = local_cc;
      pppppbVar41 = local_b8;
      goto LAB_01520d9c;
    }
    FUN_016d0414(&local_d0,&local_e0);
    if (local_d0 != (byte *****)0x8000002d) {
LAB_01520e20:
      local_190 = local_c8;
      uVar12 = (uint)local_cc & 0xffffff00;
      local_18c = local_c4;
      local_194 = local_b4;
      puVar27 = (uint *)local_c0;
      unaff_r7 = local_bc;
      pppppbVar35 = local_cc;
      pppppbVar41 = local_b8;
      local_184 = local_d0;
      goto LAB_01520d9c;
    }
    FUN_016d0414(&local_d0,&local_e0);
    pppppbVar5 = local_c4;
    pppppbVar3 = local_c8;
    if (local_d0 != (byte *****)0x8000002d) goto LAB_01520e20;
    pppppbVar26 = (byte *****)&DAT_00000001;
    if (local_d8 < local_dc) {
      pppppbVar25 = (byte *****)0x0;
      if (*(byte *)((int)local_e0 + (int)local_d8) == 0x30) {
        puVar27 = (uint *)&DAT_80000000;
        local_184 = (byte *****)&DAT_80000000;
        unaff_r7 = local_dc;
        if ((byte *****)((int)local_d8 + 1) < local_dc) {
          pppppbVar26 = (byte *****)((int)local_d8 + 2);
          bVar10 = *(byte *)((int)local_e0 + (int)local_d8 + 1);
          puVar27 = (uint *)(int)(char)bVar10;
          pppppbVar25 = (byte *****)(uint)bVar10;
          if ((int)puVar27 < 0) {
            if ((byte *)((int)pppppbVar25 + -0x81) < &DAT_00000004) {
              puVar27 = &switchD_015210c4::switchdataD_015210c8;
              pppppbVar13 = (byte *****)
                            (&switchD_015210c4::switchdataD_015210c8)[(int)pppppbVar25 + -0x81];
              switch(pppppbVar25) {
              case (byte *****)0x81:
                if ((pppppbVar26 < local_dc) &&
                   (0x7fffffff < (uint)(int)(char)*(byte *)((int)local_e0 + (int)pppppbVar26))) {
                  pppppbVar25 = (byte *****)(uint)*(byte *)((int)local_e0 + (int)pppppbVar26);
                  puVar27 = (uint *)((int)local_d8 + 3);
LAB_015214d4:
                  bVar44 = CARRY4((uint)pppppbVar25,(uint)puVar27);
                  pppppbVar13 = (byte *****)((int)pppppbVar25 + (int)puVar27);
                  goto joined_r0x015214e0;
                }
                break;
              case (byte *****)0x82:
                if (pppppbVar26 < local_dc) {
                  pppppbVar13 = (byte *****)((int)local_d8 + 3);
                }
                if (pppppbVar26 < local_dc && pppppbVar13 < local_dc) {
                  puVar27 = (uint *)0x0;
                  if (*(byte *)((int)local_e0 + (int)pppppbVar26) != 0) {
                    pppppbVar25 = (byte *****)
                                  (uint)CONCAT11(*(byte *)((int)local_e0 + (int)pppppbVar26),
                                                 *(byte *)((int)local_e0 + (int)pppppbVar13));
                    puVar27 = (uint *)(local_d8 + 1);
                    goto LAB_015214d4;
                  }
                }
                break;
              case (byte *****)0x83:
                if (pppppbVar26 < local_dc) {
                  pppppbVar35 = (byte *****)((int)local_d8 + 3);
                  if (pppppbVar35 < local_dc) {
                    puVar27 = (uint *)(local_d8 + 1);
                  }
                  if ((pppppbVar35 < local_dc && puVar27 < local_dc) &&
                     (*(byte *)((int)local_e0 + (int)pppppbVar26) != 0)) {
                    pppppbVar25 = (byte *****)
                                  ((uint)*(byte *)((int)local_e0 + (int)pppppbVar35) << 8 |
                                   (uint)*(byte *)((int)local_e0 + (int)pppppbVar26) << 0x10 |
                                  (uint)*(byte *)((int)local_e0 + (int)puVar27));
                    puVar27 = (uint *)((int)local_d8 + 5);
                    goto LAB_015214d4;
                  }
                }
                break;
              case (byte *****)0x84:
                if (pppppbVar26 < local_dc) {
                  pppppbVar13 = (byte *****)((int)local_d8 + 3);
                }
                if (pppppbVar26 < local_dc && pppppbVar13 < local_dc) {
                  puVar27 = (uint *)(local_d8 + 1);
                  if (puVar27 < local_dc) {
                    pppppbVar35 = (byte *****)((int)local_d8 + 5);
                  }
                  if (puVar27 < local_dc && pppppbVar35 < local_dc) {
                    pppppbVar41 = (byte *****)(uint)*(byte *)((int)local_e0 + (int)pppppbVar26);
                    if (pppppbVar41 != (byte *****)0x0) {
                      puVar27 = (uint *)(uint)*(byte *)((int)local_e0 + (int)puVar27);
                      pppppbVar25 = (byte *****)
                                    ((uint)*(byte *)((int)local_e0 + (int)pppppbVar13) << 0x10 |
                                     (int)pppppbVar41 << 0x18 | (int)puVar27 << 8 |
                                    (uint)*(byte *)((int)local_e0 + (int)pppppbVar35));
                      if (pppppbVar25 != (byte *****)0xffffffff) {
                        puVar27 = (uint *)((int)local_d8 + 6);
                        goto LAB_015214d4;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            bVar44 = CARRY4((uint)pppppbVar25,(uint)pppppbVar26);
            pppppbVar13 = (byte *****)((int)pppppbVar25 + (int)pppppbVar26);
            puVar27 = (uint *)pppppbVar26;
joined_r0x015214e0:
            if (!bVar44) {
              uVar12 = 0;
              pppppbVar35 = (byte *****)&DAT_00000030;
              if (local_dc < pppppbVar13) goto LAB_01520d9c;
              pppppbVar26 = (byte *****)((int)local_e0 + (int)puVar27);
              local_d8 = pppppbVar13;
              goto LAB_01520e54;
            }
          }
        }
        pppppbVar35 = (byte *****)&DAT_00000030;
        goto LAB_01520dc0;
      }
    }
    else {
      pppppbVar25 = (byte *****)0x0;
    }
LAB_01520e54:
    local_a8 = (byte *****)0x0;
    local_b4 = pppppbVar23;
    local_bc = pppppbVar9;
    local_c0 = pppppbVar8;
    local_c4 = pppppbVar7;
    local_c8 = pppppbVar6;
    local_cc = pppppbVar4;
    local_d0 = pppppbVar16;
    local_a0 = pppppbVar3;
    local_9c = pppppbVar5;
    local_b8 = pppppbVar2;
    local_50 = (byte *****)0x80000012;
    local_b0 = pppppbVar26;
    local_ac = pppppbVar25;
    FUN_016c7010(&local_78,&local_e0,&local_50,&local_d0);
    pppppbVar26 = local_9c;
    pppppbVar5 = local_a0;
    pppppbVar3 = local_a8;
    pppppbVar23 = local_ac;
    pppppbVar41 = local_b0;
    pppppbVar35 = local_b4;
    pppppbVar9 = local_b8;
    pppppbVar8 = local_bc;
    pppppbVar7 = local_c0;
    pppppbVar6 = local_c4;
    pppppbVar4 = local_c8;
    pppppbVar2 = local_cc;
    pppppbVar16 = local_d0;
    local_184 = local_78;
    if (local_78 != (byte *****)0x8000002d) {
      local_190 = local_70;
      uVar12 = (uint)local_74 & 0xffffff00;
      local_18c = local_6c;
      local_194 = local_5c;
      puVar27 = (uint *)local_68;
      unaff_r7 = local_64;
      pppppbVar35 = local_74;
      pppppbVar41 = local_60;
      goto LAB_01520d9c;
    }
    local_194 = local_ac;
    local_190 = local_c0;
    local_18c = local_bc;
    local_184 = local_c8;
    unaff_r7 = local_b4;
    if (local_d0 == (byte *****)0x0) {
      puVar27 = (uint *)local_b8;
      pppppbVar35 = local_c4;
      pppppbVar16 = local_b0;
      goto LAB_01520d98;
    }
    if (local_d8 != local_dc) {
      local_184 = (byte *****)&DAT_80000000;
      local_18c = (byte *****)0x0;
      pppppbVar16 = pppppbVar37;
      goto LAB_01520848;
    }
    FUN_016c3a1c(&local_100);
    if ((pppppbVar3 != (byte *****)0x0) &&
       (FUN_016c9b60(&local_d0,pppppbVar3,local_a4), local_d0 != (byte *****)0x8000002d)) {
      uVar12 = (uint)local_bc >> 0x10 & 0xff;
      uVar21 = (uint)local_bc >> 8 & 0xff;
      unaff_r7 = (byte *****)((uint)local_bc & 0xff);
      local_190 = local_c8;
      local_18c = local_c4;
      local_194 = local_b4;
      local_184 = local_d0;
      pppppbVar31 = local_c0;
      pppppbVar16 = local_cc;
      pppppbVar41 = local_b8;
      pppppbVar35 = local_bc;
      goto LAB_01520854;
    }
    if (pppppbVar37 == pppppbVar31) {
      FUN_016c3a1c(&local_140);
      local_140 = (byte *****)0x8000002d;
      local_118 = (byte *****)0x0;
      local_11c = pppppbVar23;
      local_120 = pppppbVar41;
      local_114 = (byte *****)&local_140;
      if (pppppbVar23 == (byte *****)0x0) {
LAB_0152102c:
        if (local_140 != (byte *****)0x8000002d) {
          bVar44 = true;
          local_1b8 = (uint *)&DAT_00000008;
LAB_0152115c:
          pppppbVar41 = local_128;
          pppppbVar35 = local_12c;
          pppppbVar31 = local_130;
          pppppbVar16 = local_13c;
          local_184 = local_140;
          local_190 = local_138;
          local_18c = local_134;
          local_194 = local_124;
          if (!bVar44) {
            thunk_FUN_016d3fb4(local_1b8);
          }
          goto LAB_01520878;
        }
        local_148 = 0;
        local_150 = 0;
      }
      else {
        local_50 = (byte *****)&DAT_8000001d;
        local_4c = (byte *****)CONCAT31(local_4c._1_3_,0x18);
        FUN_016c64c0(&local_d0,&local_120,&local_50);
        pppppbVar31 = local_cc;
        pppppbVar41 = local_d0;
        if (local_d0 == (byte *****)0x3 && local_cc == (byte *****)0x0) goto LAB_0152102c;
        if (local_d0 == (byte *****)&SUB_00000002 && local_cc == (byte *****)0x0) {
          if (local_140 != (byte *****)0x8000002d) {
            FUN_016c3a1c(&local_140);
          }
          local_140 = local_c8;
          local_13c = local_c4;
          local_138 = local_c0;
          local_134 = local_bc;
          local_130 = local_b8;
          local_12c = local_b4;
          local_128 = local_b0;
          local_124 = local_ac;
          goto LAB_0152102c;
        }
        local_100 = local_c8;
        local_fc = local_c4;
        local_f8 = local_c0;
        local_f4 = local_bc;
        local_f0 = local_b8;
        pppppbStack_ec = local_b4;
        pppppbStack_e8 = local_b0;
        pppppbStack_e4 = local_ac;
        puVar27 = (uint *)thunk_FUN_016d4a50(0xa0);
        if (puVar27 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0xa0);
        }
        *puVar27 = (uint)pppppbVar41;
        puVar27[1] = (uint)pppppbVar31;
        iVar24 = 0x30;
        puVar27[2] = (uint)local_100;
        puVar27[3] = (uint)local_fc;
        puVar27[4] = (uint)local_f8;
        puVar27[5] = (uint)local_f4;
        puVar27[6] = (uint)local_f0;
        puVar27[7] = (uint)pppppbStack_ec;
        puVar27[8] = (uint)pppppbStack_e8;
        puVar27[9] = (uint)pppppbStack_e4;
        local_104 = (byte *****)&DAT_00000001;
        local_10c = (byte *****)&DAT_00000004;
        local_e0 = local_120;
        local_dc = local_11c;
        local_d8 = local_118;
        local_d4 = local_114;
        local_108 = puVar27;
        while( true ) {
          pppppbVar31 = local_d4;
          pppppbVar41 = local_104;
          if (local_d8 == local_dc) break;
          local_50 = (byte *****)&DAT_8000001d;
          local_4c = (byte *****)CONCAT31(local_4c._1_3_,0x18);
          FUN_016c64c0(&local_d0,&local_e0,&local_50);
          pppppbVar23 = local_cc;
          pppppbVar37 = local_d0;
          if (local_d0 == (byte *****)0x3 && local_cc == (byte *****)0x0) break;
          if (local_d0 == (byte *****)&SUB_00000002 && local_cc == (byte *****)0x0) {
            if (*pppppbVar31 != (byte ****)0x8000002d) {
              FUN_016c3a1c(pppppbVar31);
            }
            pppppbVar25 = local_bc;
            pppppbVar23 = local_c0;
            pppppbVar37 = local_c4;
            *pppppbVar31 = (byte ****)local_c8;
            pppppbVar31[1] = (byte ****)pppppbVar37;
            pppppbVar31[2] = (byte ****)pppppbVar23;
            pppppbVar31[3] = (byte ****)pppppbVar25;
            pppppbVar25 = local_ac;
            pppppbVar23 = local_b0;
            pppppbVar37 = local_b4;
            pppppbVar31[4] = (byte ****)local_b8;
            pppppbVar31[5] = (byte ****)pppppbVar37;
            pppppbVar31[6] = (byte ****)pppppbVar23;
            pppppbVar31[7] = (byte ****)pppppbVar25;
            break;
          }
          local_78 = local_c8;
          local_74 = local_c4;
          local_70 = local_c0;
          local_6c = local_bc;
          local_68 = local_b8;
          local_64 = local_b4;
          local_60 = local_b0;
          local_5c = local_ac;
          if (pppppbVar41 == local_10c) {
            FUN_016ca96c(&local_10c,pppppbVar41,1,8,0x28);
            puVar27 = local_108;
          }
          puVar32 = (undefined4 *)((int)puVar27 + iVar24);
          iVar24 = iVar24 + 0x28;
          puVar32[-2] = pppppbVar37;
          puVar32[-1] = pppppbVar23;
          *puVar32 = local_78;
          puVar32[1] = local_74;
          puVar32[2] = local_70;
          puVar32[3] = local_6c;
          puVar32[4] = local_68;
          puVar32[5] = local_64;
          puVar32[6] = local_60;
          puVar32[7] = local_5c;
          local_104 = (byte *****)((int)pppppbVar41 + 1);
        }
        puVar27 = local_108;
        pppppbVar31 = local_10c;
        local_1b8 = local_108;
        if (local_140 != (byte *****)0x8000002d) {
          bVar44 = local_10c == (byte *****)0x0;
          goto LAB_0152115c;
        }
        uVar14 = 0;
        if ((byte *****)0x2492492 < pppppbVar41) {
LAB_0152146c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar14,(int)pppppbVar41 * 0x38);
        }
        local_1c0 = (byte *****)thunk_FUN_016d4a50((int)pppppbVar41 * 0x38);
        if (local_1c0 == (byte *****)0x0) {
          uVar14 = 8;
          goto LAB_0152146c;
        }
        pppppbVar37 = (byte *****)0x0;
        pppppbVar23 = local_1c0 + 0xd;
        local_1cc = (byte *****)0x0;
        puVar38 = puVar27;
        do {
          ppppbVar18 = (byte ****)puVar38[5];
          if ((int)ppppbVar18 < 0) {
LAB_015218bc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_1cc,ppppbVar18);
          }
          uVar12 = puVar38[4];
          if (ppppbVar18 == (byte ****)0x0) {
            ppppbVar19 = (byte ****)0x1;
          }
          else {
            ppppbVar19 = (byte ****)thunk_FUN_016d4a50(ppppbVar18);
            if (ppppbVar19 == (byte ****)0x0) {
              local_1cc = (byte *****)0x1;
              goto LAB_015218bc;
            }
          }
          FUN_016dd1aa(ppppbVar19,uVar12,ppppbVar18);
          ppppbVar39 = (byte ****)puVar38[5];
          if ((int)ppppbVar39 < 0) {
            uVar14 = 0;
LAB_015218dc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar14,local_1c4);
          }
          uVar12 = puVar38[4];
          if (ppppbVar39 == (byte ****)0x0) {
            local_1c4 = (byte ****)0x1;
            local_1d0 = (byte ****)0x0;
          }
          else {
            local_1c4 = (byte ****)thunk_FUN_016d4a50(ppppbVar39);
            if (local_1c4 == (byte ****)0x0) {
              uVar14 = 1;
              local_1c4 = ppppbVar39;
              goto LAB_015218dc;
            }
            local_1d0 = ppppbVar39;
          }
          FUN_016dd1aa(local_1c4,uVar12,ppppbVar39);
          pppppbVar37 = (byte *****)((int)pppppbVar37 + 1);
          ppppbVar22 = (byte ****)*puVar38;
          ppppbVar43 = (byte ****)puVar38[1];
          uVar12 = puVar38[8];
          ppppbVar28 = (byte ****)puVar38[2];
          ppppbVar29 = (byte ****)puVar38[3];
          ppppbVar42 = (byte ****)puVar38[6];
          pppppbVar23[-4] = (byte ****)puVar38[7];
          pppppbVar23[-3] = local_1d0;
          pppppbVar23[-2] = local_1c4;
          pppppbVar23[-9] = ppppbVar22;
          pppppbVar23[-7] = ppppbVar28;
          pppppbVar23[-6] = ppppbVar29;
          pppppbVar23[-5] = ppppbVar42;
          puVar38 = puVar38 + 10;
          pppppbVar23[-0xd] = ppppbVar18;
          pppppbVar23[-0xc] = ppppbVar19;
          pppppbVar23[-0xb] = ppppbVar18;
          pppppbVar23[-1] = ppppbVar39;
          *(byte *)pppppbVar23 = (byte)uVar12;
          pppppbVar23[-8] = ppppbVar43;
          pppppbVar23 = pppppbVar23 + 0xe;
        } while (pppppbVar41 != pppppbVar37);
        local_138 = pppppbVar41;
        local_140 = pppppbVar41;
        local_13c = local_1c0;
        if (pppppbVar41 == (byte *****)&DAT_00000001) {
LAB_01521918:
          iVar24 = thunk_FUN_016d4a50(0x248);
          if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x248);
          }
          pppppbVar37 = (byte *****)0x3;
          *(undefined2 *)(iVar24 + 0x242) = 0;
          *(undefined4 *)(iVar24 + 0x1b8) = 0;
          local_1e0 = local_1c0 + (int)pppppbVar41 * 0xe;
          local_8c = local_1e0;
          local_94 = local_1c0;
          local_98 = local_1c0;
          local_90 = pppppbVar41;
          local_148 = 0;
          local_1c8 = (byte ****)0x0;
          local_194 = (byte *****)0x0;
          local_1c4 = (byte ****)iVar24;
          do {
            pppppbVar41 = local_1c0;
LAB_0152198c:
            local_c0 = (byte *****)0x3;
            local_bc = (byte *****)0x0;
            if (pppppbVar37 == (byte *****)0x3 && local_1c8 == (byte ****)0x0) {
              if (pppppbVar41 != local_1e0) {
                local_1cc = (byte *****)pppppbVar41[1];
                local_1dc = (byte *****)pppppbVar41[2];
                local_1e4 = pppppbVar41[5];
                local_1c0 = pppppbVar41 + 0xe;
                local_94 = local_1c0;
                pppppbVar23 = pppppbVar41 + 6;
                pppppbVar25 = local_1c0;
                pppppbVar13 = pppppbVar41;
                local_1e8 = pppppbVar41[4];
                goto LAB_01521a18;
              }
LAB_01521e04:
              pppppbVar41 = local_1c0 + 0xb;
              for (iVar24 = ((uint)((int)local_1e0 - (int)local_1c0) >> 3) * -0x49249249;
                  iVar24 != 0; iVar24 = iVar24 + -1) {
                if (pppppbVar41[-0xb] != (byte ****)0x0) {
                  thunk_FUN_016d3fb4(pppppbVar41[-10]);
                }
                if (pppppbVar41[-1] != (byte ****)0x0) {
                  thunk_FUN_016d3fb4(*pppppbVar41);
                }
                pppppbVar41 = pppppbVar41 + 0xe;
              }
              if (local_90 != (byte *****)0x0) {
                thunk_FUN_016d3fb4(local_98);
              }
              if (local_194 != (byte *****)0x0) {
                local_1cc = (byte *****)&DAT_018af418;
                local_1c8 = (byte ****)&DAT_004194a6;
                local_1c0 = (byte *****)local_1c4;
                local_1d0 = (byte ****)local_194;
                do {
                  if (*(ushort *)((int)local_1c0 + 0x242) == 0) {
                    uVar14 = 0x19;
                    goto LAB_01522240;
                  }
                  iVar24 = *(ushort *)((int)local_1c0 + 0x242) - 1;
                  iVar15 = (int)local_1c0 + iVar24 * 4;
                  iVar17 = *(int *)(iVar15 + 0x24c);
                  uVar12 = (uint)*(ushort *)(iVar17 + 0x242);
                  if (uVar12 < 5) {
                    iVar15 = *(int *)(iVar15 + 0x248);
                    uVar34 = (uint)*(ushort *)(iVar15 + 0x242);
                    uVar21 = -uVar12 + 5;
                    if (uVar34 < uVar21) {
                      uVar14 = 0x27;
                      local_1c8 = (byte ****)&DAT_004194e7;
                      local_1cc = (byte *****)&DAT_018af458;
LAB_01522240:
                    /* WARNING: Subroutine does not return */
                      FUN_00faa464(local_1c8,uVar14,local_1cc);
                    }
                    iVar40 = iVar17 + 0x1bc;
                    iVar36 = uVar34 - uVar21;
                    *(ushort *)(iVar15 + 0x242) = (ushort)iVar36;
                    *(ushort *)(iVar17 + 0x242) = 5;
                    FUN_016dd52c(iVar40 + uVar21 * 0xc,iVar40,uVar12 * 0xc);
                    FUN_016dd52c(iVar17 + uVar21 * 0x28,iVar17,uVar12 * 0x28);
                    iVar20 = iVar36 + 1;
                    iVar33 = uVar34 - iVar20;
                    if (iVar33 != -uVar12 + 4) {
                      uVar14 = 0x28;
                      local_1c8 = (byte ****)&DAT_004194bf;
                      local_1cc = (byte *****)&DAT_018af448;
                      goto LAB_01522240;
                    }
                    FUN_016dd1aa(iVar40,iVar15 + 0x1bc + iVar20 * 0xc,iVar33 * 0xc);
                    FUN_016dd1aa(iVar17,iVar15 + iVar20 * 0x28,iVar33 * 0x28);
                    puVar32 = (undefined4 *)(iVar15 + iVar36 * 0x28);
                    local_78 = (byte *****)*puVar32;
                    local_74 = (byte *****)puVar32[1];
                    local_70 = (byte *****)puVar32[2];
                    local_6c = (byte *****)puVar32[3];
                    local_68 = (byte *****)puVar32[4];
                    local_64 = (byte *****)puVar32[5];
                    local_60 = (byte *****)puVar32[6];
                    local_5c = (byte *****)puVar32[7];
                    uStack_58 = puVar32[8];
                    uStack_54 = puVar32[9];
                    puVar32 = (undefined4 *)(iVar15 + 0x1bc + iVar36 * 0xc);
                    iVar36 = (int)local_1c0 + iVar24 * 0xc;
                    local_100 = *(byte ******)(iVar36 + 0x1bc);
                    local_fc = *(byte ******)(iVar36 + 0x1c0);
                    local_f8 = *(byte ******)(iVar36 + 0x1c4);
                    uVar30 = puVar32[1];
                    uVar14 = puVar32[2];
                    *(undefined4 *)(iVar36 + 0x1bc) = *puVar32;
                    puVar32 = (undefined4 *)((int)local_1c0 + iVar24 * 0x28);
                    *(undefined4 *)(iVar36 + 0x1c0) = uVar30;
                    *(undefined4 *)(iVar36 + 0x1c4) = uVar14;
                    local_c0 = (byte *****)*puVar32;
                    local_bc = (byte *****)puVar32[1];
                    local_b8 = (byte *****)puVar32[2];
                    local_b4 = (byte *****)puVar32[3];
                    local_b0 = (byte *****)puVar32[4];
                    local_ac = (byte *****)puVar32[5];
                    local_a8 = (byte *****)puVar32[6];
                    pppppbStack_34 = (byte *****)puVar32[7];
                    local_a0 = (byte *****)puVar32[8];
                    local_9c = (byte *****)puVar32[9];
                    *puVar32 = local_78;
                    puVar32[1] = local_74;
                    puVar32[2] = local_70;
                    puVar32[3] = local_6c;
                    puVar32[4] = local_68;
                    puVar32[5] = local_64;
                    puVar32[6] = local_60;
                    puVar32[7] = local_5c;
                    puVar32[8] = uStack_58;
                    puVar32[9] = uStack_54;
                    puVar32 = (undefined4 *)(iVar40 + iVar33 * 0xc);
                    *puVar32 = local_100;
                    puVar32[1] = local_fc;
                    puVar32[2] = local_f8;
                    puVar32 = (undefined4 *)(iVar17 + iVar33 * 0x28);
                    *puVar32 = local_c0;
                    puVar32[1] = local_bc;
                    puVar32[2] = local_b8;
                    puVar32[3] = local_b4;
                    puVar32[4] = local_b0;
                    puVar32[5] = local_ac;
                    puVar32[6] = local_a8;
                    puVar32[7] = pppppbStack_34;
                    puVar32[8] = local_a0;
                    puVar32[9] = local_9c;
                    local_d0 = local_100;
                    local_cc = local_fc;
                    local_c8 = local_f8;
                    local_50 = local_c0;
                    local_4c = local_bc;
                    local_48 = local_b8;
                    local_44 = local_b4;
                    local_40 = local_b0;
                    local_3c = local_ac;
                    pppppbStack_38 = local_a8;
                    pppppbStack_30 = local_a0;
                    pppppbStack_2c = local_9c;
                    if (local_1d0 != (byte ****)0x1) {
                      iVar24 = iVar17 + 0x248;
                      FUN_016dd52c(iVar24 + uVar21 * 4,iVar24,uVar12 * 4 + 4);
                      FUN_016dd1aa(iVar24,iVar15 + iVar20 * 4 + 0x248,uVar21 * 4);
                      iVar24 = *(int *)(iVar17 + 0x248);
                      *(undefined2 *)(iVar24 + 0x240) = 0;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                      iVar24 = *(int *)(iVar17 + 0x24c);
                      *(undefined2 *)(iVar24 + 0x240) = 1;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                      iVar24 = *(int *)(iVar17 + 0x250);
                      *(undefined2 *)(iVar24 + 0x240) = 2;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                      iVar24 = *(int *)(iVar17 + 0x254);
                      *(undefined2 *)(iVar24 + 0x240) = 3;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                      iVar24 = *(int *)(iVar17 + 600);
                      *(undefined2 *)(iVar24 + 0x240) = 4;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                      iVar24 = *(int *)(iVar17 + 0x25c);
                      *(undefined2 *)(iVar24 + 0x240) = 5;
                      *(int *)(iVar24 + 0x1b8) = iVar17;
                    }
                  }
                  local_1d0 = (byte ****)((int)local_1d0 - 1);
                  local_1c0 = (byte *****)iVar17;
                } while (local_1d0 != (byte ****)0x0);
              }
              local_14c = (uint)local_194;
              local_150 = (int)local_1c4;
              goto LAB_0152218c;
            }
            pppppbVar13 = (byte *****)&local_d0;
            local_1cc = local_cc;
            local_1dc = local_c8;
            local_1e4 = local_1c8;
            pppppbVar23 = (byte *****)&local_b8;
            pppppbVar25 = pppppbVar41;
            local_1e8 = (byte ****)pppppbVar37;
LAB_01521a18:
            pppppbVar41 = pppppbVar25;
            if (local_1e8 == (byte ****)0x2 && local_1e4 == (byte ****)0x0) goto LAB_01521e04;
            ppppbVar39 = pppppbVar23[4];
            ppppbVar22 = pppppbVar23[5];
            ppppbVar28 = pppppbVar23[6];
            ppppbVar18 = pppppbVar23[7];
            ppppbVar19 = *pppppbVar13;
            local_f4 = (byte *****)pppppbVar23[3];
            local_100 = (byte *****)*pppppbVar23;
            local_fc = (byte *****)pppppbVar23[1];
            local_f8 = (byte *****)pppppbVar23[2];
            if (pppppbVar41 == local_1e0) {
              pppppbVar37 = (byte *****)0x2;
              local_1c8 = (byte ****)0x0;
            }
            else {
              pppppbVar37 = (byte *****)pppppbVar41[4];
              local_1c8 = pppppbVar41[5];
              local_78 = (byte *****)*pppppbVar41;
              local_74 = (byte *****)pppppbVar41[1];
              local_70 = (byte *****)pppppbVar41[2];
              local_6c = (byte *****)pppppbVar41[3];
              local_1c0 = pppppbVar41 + 0xe;
              local_94 = local_1c0;
              local_50 = (byte *****)pppppbVar41[6];
              local_4c = (byte *****)pppppbVar41[7];
              local_48 = (byte *****)pppppbVar41[8];
              local_44 = (byte *****)pppppbVar41[9];
              local_40 = (byte *****)pppppbVar41[10];
              local_3c = (byte *****)pppppbVar41[0xb];
              pppppbStack_38 = (byte *****)pppppbVar41[0xc];
              pppppbStack_34 = (byte *****)pppppbVar41[0xd];
              pppppbVar41 = local_1c0;
            }
            local_bc = (byte *****)local_1c8;
            local_d0 = local_78;
            local_cc = local_74;
            local_c8 = local_70;
            local_c4 = local_6c;
            local_b8 = local_50;
            local_b4 = local_4c;
            local_b0 = local_48;
            local_ac = local_44;
            local_a8 = local_40;
            local_a0 = pppppbStack_38;
            local_9c = pppppbStack_34;
            local_c0 = pppppbVar37;
            if (((pppppbVar37 != (byte *****)0x2 || local_1c8 != (byte ****)0x0) &&
                (local_1dc == local_70)) &&
               (iVar15 = thunk_FUN_016dd50a(local_1cc,local_74,local_1dc), iVar15 == 0))
            goto code_r0x01521b28;
            local_88 = local_100;
            local_84 = local_fc;
            local_80 = local_f8;
            local_7c = local_f4;
            uVar1 = *(ushort *)(iVar24 + 0x242);
            uVar12 = (uint)uVar1;
            if (uVar12 < 0xb) {
              *(ushort *)(iVar24 + 0x242) = uVar1 + 1;
              local_50 = local_100;
              local_4c = local_fc;
              local_48 = local_f8;
              iVar15 = iVar24 + uVar12 * 0xc;
              local_44 = local_f4;
              *(byte *****)(iVar15 + 0x1bc) = ppppbVar19;
              *(byte ******)(iVar15 + 0x1c0) = local_1cc;
              *(byte ******)(iVar15 + 0x1c4) = local_1dc;
              puVar38 = (uint *)(iVar24 + uVar12 * 0x28);
              *puVar38 = (uint)local_1e8;
              puVar38[1] = (uint)local_1e4;
              puVar38[2] = (uint)local_100;
              puVar38[4] = (uint)local_f8;
              puVar38[3] = (uint)local_fc;
              puVar38[9] = (uint)ppppbVar18;
              puVar38[7] = (uint)ppppbVar22;
              puVar38[8] = (uint)ppppbVar28;
              puVar38[5] = (uint)local_f4;
              puVar38[6] = (uint)ppppbVar39;
              local_1c0 = local_94;
              local_1e0 = local_8c;
              local_1c8 = (byte ****)local_bc;
              pppppbVar37 = local_c0;
            }
            else {
              uVar12 = 0;
              do {
                iVar24 = *(int *)(iVar24 + 0x1b8);
                if (iVar24 == 0) {
                  iVar24 = thunk_FUN_016d4a50(0x278);
                  if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(8,0x278);
                  }
                  *(undefined2 *)(iVar24 + 0x242) = 0;
                  *(byte *****)(iVar24 + 0x248) = local_1c4;
                  *(undefined4 *)(iVar24 + 0x1b8) = 0;
                  uVar12 = (int)local_194 + 1;
                  if (0xfffffffe < local_194) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_018af438);
                  }
                  *(undefined2 *)((int)local_1c4 + 0x240) = 0;
                  *(int *)((int)local_1c4 + 0x1b8) = iVar24;
                  local_1c4 = (byte ****)iVar24;
                  local_194 = (byte *****)uVar12;
                  goto LAB_01521cb8;
                }
                uVar12 = uVar12 + 1;
              } while (10 < *(ushort *)(iVar24 + 0x242));
LAB_01521cb8:
              iVar15 = thunk_FUN_016d4a50(0x248);
              if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x248);
              }
              *(undefined2 *)(iVar15 + 0x242) = 0;
              *(undefined4 *)(iVar15 + 0x1b8) = 0;
              uVar21 = uVar12;
              while (uVar21 = uVar21 - 1, uVar21 != 0) {
                iVar17 = thunk_FUN_016d4a50(0x278);
                if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x278);
                }
                *(undefined2 *)(iVar17 + 0x242) = 0;
                *(int *)(iVar17 + 0x248) = iVar15;
                *(undefined4 *)(iVar17 + 0x1b8) = 0;
                *(undefined2 *)(iVar15 + 0x240) = 0;
                *(int *)(iVar15 + 0x1b8) = iVar17;
                iVar15 = iVar17;
              }
              uVar21 = (uint)*(ushort *)(iVar24 + 0x242);
              if (10 < uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
              }
              uVar1 = (ushort)(uVar21 + 1);
              *(ushort *)(iVar24 + 0x242) = uVar1;
              iVar17 = iVar24 + uVar21 * 0xc;
              *(byte *****)(iVar17 + 0x1bc) = ppppbVar19;
              *(byte ******)(iVar17 + 0x1c0) = local_1cc;
              *(byte ******)(iVar17 + 0x1c4) = local_1dc;
              puVar38 = (uint *)(iVar24 + uVar21 * 0x28);
              *puVar38 = (uint)local_1e8;
              puVar38[9] = (uint)ppppbVar18;
              puVar38[1] = (uint)local_1e4;
              puVar38[2] = (uint)local_88;
              puVar38[6] = (uint)ppppbVar39;
              puVar38[7] = (uint)ppppbVar22;
              puVar38[8] = (uint)ppppbVar28;
              puVar38[3] = (uint)local_84;
              puVar38[4] = (uint)local_80;
              puVar38[5] = (uint)local_7c;
              *(int *)(iVar24 + (uVar21 + 1) * 4 + 0x248) = iVar15;
              *(ushort *)(iVar15 + 0x240) = uVar1;
              *(int *)(iVar15 + 0x1b8) = iVar24;
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                iVar24 = *(int *)(iVar24 + (uint)*(ushort *)(iVar24 + 0x242) * 4 + 0x248);
              }
            }
            local_148 = local_148 + 1;
          } while( true );
        }
        if (pppppbVar41 != (byte *****)0x0) {
          if (&DAT_00000014 < pppppbVar41) {
            FUN_016ca61c(local_1c0,pppppbVar41);
          }
          else {
            FUN_016c8a24(local_1c0,pppppbVar41);
          }
          goto LAB_01521918;
        }
        local_148 = 0;
        local_150 = 0;
LAB_0152218c:
        if (pppppbVar31 != (byte *****)0x0) {
          thunk_FUN_016d3fb4(puVar27);
        }
      }
      uVar14 = 0;
      if ((int)pppppbVar2 < 0) {
LAB_01521054:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar14,pppppbVar2);
      }
      uVar14 = 0;
      if (pppppbVar2 == (byte *****)0x0) {
        iVar24 = 1;
        pppppbVar41 = (byte *****)0x0;
      }
      else {
        iVar24 = thunk_FUN_016d4a50(pppppbVar2);
        pppppbVar41 = pppppbVar2;
        if (iVar24 == 0) {
          uVar14 = 1;
          goto LAB_01521054;
        }
      }
      FUN_016dd1aa(iVar24,pppppbVar16,pppppbVar2);
      if ((int)pppppbVar6 < 0) {
LAB_015213d8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar14,pppppbVar6);
      }
      uVar14 = 0;
      if (pppppbVar6 == (byte *****)0x0) {
        iVar15 = 1;
        pppppbVar16 = (byte *****)0x0;
      }
      else {
        iVar15 = thunk_FUN_016d4a50(pppppbVar6);
        if (iVar15 == 0) {
          uVar14 = 1;
          goto LAB_015213d8;
        }
        pppppbVar16 = pppppbVar6;
      }
      FUN_016dd1aa(iVar15,pppppbVar4,pppppbVar6);
      if ((int)pppppbVar8 < 0) {
LAB_01521510:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar14,pppppbVar8);
      }
      uVar14 = 0;
      if (pppppbVar8 == (byte *****)0x0) {
        iVar17 = 1;
        pppppbVar31 = (byte *****)0x0;
      }
      else {
        iVar17 = thunk_FUN_016d4a50(pppppbVar8);
        pppppbVar31 = pppppbVar8;
        if (iVar17 == 0) {
          uVar14 = 1;
          goto LAB_01521510;
        }
      }
      FUN_016dd1aa(iVar17,pppppbVar7,pppppbVar8);
      local_bc = pppppbVar6;
      local_b0 = pppppbVar8;
      local_c8 = pppppbVar2;
      local_d0 = pppppbVar41;
      local_cc = (byte *****)iVar24;
      local_c4 = pppppbVar16;
      local_c0 = (byte *****)iVar15;
      local_b8 = pppppbVar31;
      local_b4 = (byte *****)iVar17;
      if ((int)pppppbVar35 < 0) {
LAB_0152159c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar14,pppppbVar35);
      }
      if (pppppbVar35 == (byte *****)0x0) {
        iVar17 = 1;
        local_184 = (byte *****)0x0;
      }
      else {
        iVar17 = thunk_FUN_016d4a50(pppppbVar35);
        local_184 = pppppbVar35;
        if (iVar17 == 0) {
          uVar14 = 1;
          goto LAB_0152159c;
        }
      }
      FUN_016dd1aa(iVar17,pppppbVar9,pppppbVar35);
      if (pppppbVar3 == (byte *****)0x0) {
        local_18c = (byte *****)0x80000000;
      }
      else {
        uVar14 = 0;
        if (local_a4 < 0) {
LAB_01521608:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar14,local_a4);
        }
        if (local_a4 == 0) {
          local_190 = (byte *****)&DAT_00000001;
          local_18c = (byte *****)0x0;
        }
        else {
          local_190 = (byte *****)thunk_FUN_016d4a50(local_a4);
          if (local_190 == (byte *****)0x0) {
            uVar14 = 1;
            goto LAB_01521608;
          }
          local_18c = (byte *****)local_a4;
        }
        FUN_016dd1aa(local_190,pppppbVar3,local_a4);
      }
      param_1[0xc] = local_b4;
      param_1[0xd] = local_b0;
      param_1[0xf] = local_190;
      param_1[0x10] = local_a4;
      param_1[7] = pppppbVar2;
      param_1[8] = pppppbVar16;
      param_1[10] = pppppbVar6;
      param_1[0xe] = local_18c;
      param_1[0x11] = local_150;
      param_1[0x12] = local_14c;
      param_1[0x13] = local_148;
      param_1[9] = iVar15;
      param_1[0xb] = pppppbVar31;
      param_1[3] = iVar17;
      param_1[4] = pppppbVar35;
      param_1[5] = pppppbVar41;
      param_1[6] = iVar24;
      *param_1 = pppppbVar5;
      param_1[1] = pppppbVar26;
      param_1[2] = local_184;
      return;
    }
    local_184 = (byte *****)&DAT_8000001d;
    pppppbVar16 = local_13c;
    goto LAB_01520878;
  case (byte *****)0x82:
    if (((byte *****)0x3 < pppppbVar31) && (pbVar11[2] != 0)) {
      pppppbVar35 = (byte *****)(uint)CONCAT11(pbVar11[2],pbVar11[3]);
      uVar12 = 4;
      goto LAB_0152091c;
    }
    break;
  case (byte *****)0x83:
    if (((&SUB_00000002 < pppppbVar31) && (&DAT_00000004 < pppppbVar31)) && (pbVar11[2] != 0)) {
      unaff_r7 = (byte *****)(uint)pbVar11[4];
      pppppbVar35 = (byte *****)((uint)pbVar11[3] << 8 | (uint)pbVar11[2] << 0x10 | (uint)unaff_r7);
      uVar12 = 5;
      goto LAB_0152091c;
    }
    break;
  case (byte *****)0x84:
    if (&SUB_00000002 < pppppbVar31) {
      if (pppppbVar31 != (byte *****)0x3) {
        uVar21 = (uint)pbVar11[2];
      }
      if ((pppppbVar31 != (byte *****)0x3 && uVar21 != 0) && (&DAT_00000005 < pppppbVar31)) {
        unaff_r7 = (byte *****)(uint)pbVar11[4];
        uVar12 = 6;
        pppppbVar35 = (byte *****)
                      ((uint)pbVar11[3] << 0x10 | uVar21 << 0x18 | (int)unaff_r7 << 8 |
                      (uint)pbVar11[5]);
        if (pppppbVar35 != (byte *****)0xffffffff) goto LAB_0152091c;
      }
    }
  }
LAB_0152082c:
  local_184 = (byte *****)&DAT_8000001d;
  local_50 = (byte *****)&DAT_80000000;
  FUN_016c3a1c(&local_50);
LAB_01520848:
  uVar12 = (uint)unaff_r7 >> 0x10;
  uVar21 = (uint)unaff_r7 >> 8;
  pppppbVar35 = unaff_r7;
LAB_01520854:
  FUN_016c3a1c(&local_140);
  pppppbVar35 = (byte *****)
                ((uint)pppppbVar35 & 0xff000000 | (uVar12 & 0xff) << 0x10 | (uVar21 & 0xff) << 8 |
                (uint)unaff_r7 & 0xff);
LAB_01520878:
  uVar12 = *puVar38;
  if (uVar12 != 0x8000002d) {
    uVar21 = 4;
    if ((int)uVar12 < 0) {
      uVar21 = uVar12 ^ 0x80000000;
    }
    if (uVar21 == 0x1b) {
      uVar12 = puVar38[5];
      puVar32 = (undefined4 *)(uVar12 + 4);
      for (uVar21 = puVar38[6]; uVar21 != 0; uVar21 = uVar21 - 1) {
        if (puVar32[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar32);
        }
        puVar32 = puVar32 + 3;
      }
      uVar21 = puVar38[4];
    }
    else {
      if (uVar21 != 4) goto LAB_015209c0;
      if (((char)puVar38[3] == '\0') && ((puVar38[4] & 0x7fffffff) != 0)) {
        thunk_FUN_016d3fb4(puVar38[5]);
      }
      uVar12 = puVar38[1];
      puVar32 = (undefined4 *)(uVar12 + 4);
      for (uVar21 = puVar38[2]; uVar21 != 0; uVar21 = uVar21 - 1) {
        if (puVar32[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar32);
        }
        puVar32 = puVar32 + 3;
      }
      uVar21 = *puVar38;
    }
    if (uVar21 != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
  }
LAB_015209c0:
  puVar38[4] = (uint)pppppbVar31;
  *puVar38 = (uint)local_184;
  puVar38[1] = (uint)pppppbVar16;
  puVar38[2] = (uint)local_190;
  puVar38[3] = (uint)local_18c;
  puVar38[5] = (uint)pppppbVar35;
  puVar38[6] = (uint)pppppbVar41;
  puVar38[7] = (uint)local_194;
LAB_015209f0:
  param_1[2] = 0x80000001;
  return;
code_r0x01521b28:
  if (ppppbVar19 != (byte ****)0x0) {
    thunk_FUN_016d3fb4(local_1cc);
  }
  if (ppppbVar39 != (byte ****)0x0) {
    thunk_FUN_016d3fb4(ppppbVar22);
  }
  goto LAB_0152198c;
}

