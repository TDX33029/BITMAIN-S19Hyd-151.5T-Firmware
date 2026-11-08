// FUN_00ccfb04 @ 00ccfb04 size=3292 calls_out=20 calls_in=1
// strings: power_limit | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U | power_limit | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U | power_limit

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ccfb04(uint *param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char ******ppppppcVar10;
  char ******ppppppcVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  char ******ppppppcVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  char ******ppppppcVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  char *pcVar29;
  char ******unaff_r9;
  char ******ppppppcVar30;
  char ******ppppppcVar31;
  char *****pppppcVar32;
  bool bVar33;
  undefined8 unaff_d8;
  ulonglong uVar34;
  undefined8 uVar35;
  char ******local_16c;
  char ******local_168;
  char ******local_148;
  char ******local_144;
  char ******local_140;
  char ******local_13c;
  char ******local_130;
  byte *local_104;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  byte local_e8 [4];
  char ******local_e4;
  char ******local_e0;
  int local_dc;
  char ******local_d0 [2];
  char ******local_c8 [2];
  undefined8 local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  char *****local_a0;
  undefined4 local_9c;
  char ******local_98;
  char ******local_94;
  char *****local_90;
  undefined4 local_8c;
  char ******local_88;
  char ******local_84;
  int local_80;
  char ******local_78;
  char ******local_74;
  char ******local_70;
  char ******local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c [2];
  int local_54;
  char ******local_50;
  char ******local_4c;
  char ******local_48;
  char ******ppppppcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  if (*param_2 != '\x04') {
    uVar24 = FUN_00f36124(param_2,&uStack_31,&DAT_01873d78);
    *param_1 = 0x80000000;
    param_1[1] = uVar24;
    FUN_00c01f94(param_2);
    return;
  }
  iVar7 = *(int *)(param_2 + 4);
  pbVar13 = *(byte **)(param_2 + 8);
  uVar19 = *(uint *)(param_2 + 0xc);
  uVar24 = uVar19;
  if (0x7fff < uVar19) {
    uVar24 = 0x8000;
  }
  pbVar8 = pbVar13 + uVar19 * 0x18;
  if (uVar19 == 0) {
    local_f4 = 8;
    uVar24 = 0;
  }
  else {
    local_f4 = thunk_FUN_016d4a50(uVar24 << 5);
    if (local_f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar24 << 5);
    }
  }
  uVar14 = (uint)&local_b8 | 1;
  uVar15 = (uint)&local_50 | 1;
  local_f0 = 0;
  puVar16 = (uint *)((uint)&local_78 | 4);
  puVar17 = (undefined4 *)((uint)&local_50 | 4);
  local_104 = pbVar13;
  local_f8 = uVar24;
LAB_00ccfc30:
  if (local_104 == pbVar8) {
    pbVar18 = pbVar8;
  }
  else {
    pbVar18 = local_104 + 0x18;
    bVar2 = *local_104;
    if (bVar2 != 6) {
      local_e8[0] = bVar2;
      FUN_016dd1aa((uint)local_e8 | 1,local_104 + 1,0x17);
      iVar12 = local_dc;
      ppppppcVar31 = local_e0;
      ppppppcVar22 = local_e4;
      if (bVar2 == 4) {
        local_70 = local_e4;
        local_74 = local_e0;
        ppppppcVar30 = local_e0 + local_dc * 6;
        local_78 = local_e0;
        ppppppcVar26 = local_e0;
        local_6c = ppppppcVar30;
        if (local_dc == 0) {
LAB_00cd0054:
          ppppppcVar10 = (char ******)FUN_00f2c2f0(0,&DAT_0187804c,&DAT_018ab990);
LAB_00cd006c:
LAB_00cd0070:
          local_c0 = CONCAT44(local_c0._4_4_,ppppppcVar10);
LAB_00cd0074:
          pppppcVar32 = (char *****)0x80000000;
          ppppppcVar11 = (char ******)local_c8;
        }
        else {
          ppppppcVar26 = local_e0 + 6;
          local_74 = ppppppcVar26;
          if (*(char *)local_e0 == '\x06') goto LAB_00cd0054;
          local_b8 = CONCAT31(local_b8._1_3_,*(char *)local_e0);
          FUN_016dd1aa(uVar14,(char *)((int)local_e0 + 1),0x17);
          uVar35 = FUN_00c64c8c(&local_b8);
          ppppppcVar10 = (char ******)((ulonglong)uVar35 >> 0x20);
          uVar24 = (int)uVar35 + 1;
          if (uVar24 == 2) {
            local_c0 = CONCAT44(local_c0._4_4_,ppppppcVar10);
            goto LAB_00cd0074;
          }
          if ((uVar24 & 1) == 0) goto LAB_00cd0054;
          if (iVar12 == 1) {
LAB_00cd0230:
            ppppppcVar10 = (char ******)FUN_00f2c2f0(1,&DAT_0187804c,&DAT_018ab990);
            goto LAB_00cd006c;
          }
          ppppppcVar26 = ppppppcVar31 + 0xc;
          local_74 = ppppppcVar26;
          if (*(char *)(ppppppcVar31 + 6) == '\x06') goto LAB_00cd0230;
          local_b8 = CONCAT31(local_b8._1_3_,*(char *)(ppppppcVar31 + 6));
          FUN_016dd1aa(uVar14,(char *)((int)ppppppcVar31 + 0x19),0x17);
          uVar35 = FUN_00c64c8c(&local_b8);
          pppppcVar32 = (char *****)((ulonglong)uVar35 >> 0x20);
          uVar24 = (int)uVar35 + 1;
          if (uVar24 == 2) {
            local_c0 = CONCAT44(local_c0._4_4_,pppppcVar32);
            goto LAB_00cd0074;
          }
          if ((uVar24 & 1) == 0) goto LAB_00cd0230;
          if (iVar12 == 2) {
LAB_00cd0480:
            ppppppcVar10 = (char ******)FUN_00f2c2f0(2,&DAT_0187804c,&DAT_018ab990);
            goto LAB_00cd006c;
          }
          ppppppcVar26 = ppppppcVar31 + 0x12;
          local_74 = ppppppcVar26;
          if (*(char *)(ppppppcVar31 + 0xc) == '\x06') goto LAB_00cd0480;
          local_b8 = CONCAT31(local_b8._1_3_,*(char *)(ppppppcVar31 + 0xc));
          FUN_016dd1aa(uVar14,(char *)((int)ppppppcVar31 + 0x31),0x17);
          FUN_00c64ac4(&local_50,&local_b8);
          if (local_50 != (char ******)0x0) {
            ppppppcVar10 = local_4c;
            goto LAB_00cd0070;
          }
          if (iVar12 == 3) {
LAB_00cd04f4:
            ppppppcVar10 = (char ******)FUN_00f2c2f0(3,&DAT_0187804c,&DAT_018ab990);
            goto LAB_00cd006c;
          }
          ppppppcVar26 = ppppppcVar31 + 0x18;
          unaff_d8 = CONCAT44(ppppppcStack_44,local_48);
          local_74 = ppppppcVar26;
          if (*(char *)(ppppppcVar31 + 0x12) == '\x06') goto LAB_00cd04f4;
          local_b8 = CONCAT31(local_b8._1_3_,*(char *)(ppppppcVar31 + 0x12));
          FUN_016dd1aa(uVar14,(char *)((int)ppppppcVar31 + 0x49),0x17);
          FUN_00cce710(&local_50,&local_b8);
          if (local_50 == (char ******)&DAT_80000000) {
            local_c0 = CONCAT44(local_c0._4_4_,local_4c);
            goto LAB_00cd0074;
          }
          local_c8[0] = local_50;
          ppppppcVar11 = (char ******)local_d0;
          local_144 = local_48;
          local_140 = local_4c;
          local_148 = ppppppcVar10;
          local_c0 = unaff_d8;
        }
        *ppppppcVar11 = pppppcVar32;
        ppppppcVar10 = local_c8[0];
        if (local_c8[0] != (char ******)&DAT_80000000 && ppppppcVar30 != ppppppcVar26) {
          uVar21 = FUN_00f2c2f0(iVar12,&DAT_0188738c,&DAT_018ab990);
          local_c8[0] = (char ******)&DAT_80000000;
          local_c0 = CONCAT44(local_c0._4_4_,uVar21);
          if (ppppppcVar10 != (char ******)0x0) {
            thunk_FUN_016d3fb4(local_140);
          }
        }
        FUN_00ce0380(ppppppcVar26,((uint)((int)ppppppcVar30 - (int)ppppppcVar26) >> 3) * -0x55555555
                    );
        if (ppppppcVar22 != (char ******)0x0) {
          thunk_FUN_016d3fb4(ppppppcVar31);
        }
        goto LAB_00cd0310;
      }
      if (bVar2 == 5) {
        local_84 = local_e0;
        local_94 = local_e0;
        bVar5 = false;
        local_b8 = CONCAT31(local_b8._1_3_,6);
        local_88 = local_e4;
        local_80 = 0;
        if (local_e4 != (char ******)0x0) {
          local_80 = local_dc;
        }
        local_98 = local_e4;
        local_a0 = (char *****)(uint)(local_e4 != (char ******)0x0);
        local_8c = 0;
        local_9c = 0;
        bVar4 = false;
        bVar3 = false;
        ppppppcVar22 = (char ******)&DAT_80000000;
        ppppppcVar31 = local_130;
        local_90 = local_a0;
LAB_00ccfce4:
        local_130 = ppppppcVar31;
LAB_00ccfcec:
        FUN_00c3b8fc(local_5c,&local_a0);
        pcVar29 = param_2;
        ppppppcVar31 = local_130;
        if (local_5c[0] != 0) {
          puVar20 = (undefined4 *)(local_5c[0] + local_54 * 0x18);
          iVar9 = local_5c[0] + local_54 * 0xc;
          ppppppcVar31 = *(char *******)(iVar9 + 0x10c);
          pcVar29 = *(char **)(iVar9 + 0x110);
          unaff_r9 = *(char *******)(iVar9 + 0x114);
          uVar21 = puVar20[1];
          uVar23 = puVar20[2];
          uVar25 = puVar20[3];
          uVar27 = puVar20[4];
          uVar28 = puVar20[5];
          *puVar17 = *puVar20;
          puVar17[1] = uVar21;
          puVar17[2] = uVar23;
          puVar17[3] = uVar25;
          puVar17[4] = uVar27;
          puVar17[5] = uVar28;
          local_78 = local_50;
          local_74 = local_4c;
          local_70 = local_48;
          local_6c = ppppppcStack_44;
          uStack_68 = uStack_40;
          uStack_64 = uStack_3c;
          uStack_60 = uStack_38;
        }
        if (local_5c[0] == 0 || ppppppcVar31 == (char ******)&DAT_80000000) {
switchD_00ccfe7c_caseD_5:
          if (!bVar3) {
            local_74 = (char ******)&DAT_00000009;
            local_78 = (char ******)&DAT_00354573;
            local_4c = (char ******)&DAT_0157d360;
            local_50 = (char ******)&local_78;
            local_13c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_50);
            goto LAB_00cd028c;
          }
          if (!bVar4) {
            local_74 = (char ******)&DAT_0000001f;
            local_78 = (char ******)&DAT_0035457c;
            local_4c = (char ******)&DAT_0157d360;
            local_50 = (char ******)&local_78;
            local_13c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_50);
            goto LAB_00cd028c;
          }
          if (!bVar5) {
            local_74 = (char ******)&DAT_0000000b;
            local_78 = (char ******)0x359ed6;
            local_4c = (char ******)&DAT_0157d360;
            local_50 = (char ******)&local_78;
            local_13c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_50);
            goto LAB_00cd028c;
          }
          if (ppppppcVar22 != (char ******)&DAT_80000000) {
            local_d0[0] = local_13c;
            local_c8[0] = ppppppcVar22;
            local_c0 = unaff_d8;
            if (local_80 != 0) {
              uVar21 = FUN_00f2c2f0(iVar12,&DAT_01887430,&DAT_018ab990);
              local_c8[0] = (char ******)&DAT_80000000;
              local_c0 = CONCAT44(local_c0._4_4_,uVar21);
              if (ppppppcVar22 != (char ******)0x0) {
                thunk_FUN_016d3fb4(local_130);
              }
            }
            while( true ) {
              FUN_00c3b8fc(&local_50,&local_a0);
              ppppppcVar31 = local_48;
              ppppppcVar22 = local_50;
              if (local_50 == (char ******)0x0) break;
              local_78 = &local_a0;
              if (local_50[(int)local_48 * 3 + 0x43] != (char *****)0x0) {
                thunk_FUN_016d3fb4(local_50[(int)local_48 * 3 + 0x44]);
              }
              FUN_00c436d0(ppppppcVar22 + (int)ppppppcVar31 * 6);
            }
            local_140 = local_130;
            local_148 = local_168;
            local_144 = local_16c;
            goto joined_r0x00cd03fc;
          }
          local_74 = (char ******)&DAT_0000000b;
          local_78 = (char ******)0x38530a;
          local_4c = (char ******)&DAT_0157d360;
          local_50 = (char ******)&local_78;
          ppppppcVar31 = (char ******)FUN_00f56780(&DAT_0057a25d,&local_50);
          goto LAB_00cd013c;
        }
        if ((char)local_b8 != '\x06') {
          FUN_00d4fc54(&local_b8);
        }
        local_b8 = *puVar16;
        uStack_b4 = puVar16[1];
        uStack_b0 = puVar16[2];
        uStack_ac = puVar16[3];
        uStack_a8 = puVar16[4];
        uStack_a4 = puVar16[5];
        if (unaff_r9 == (char ******)&DAT_0000001f) {
          iVar9 = thunk_FUN_016dd50a(pcVar29,&DAT_0035457c,0x1f);
          if (iVar9 == 0) {
            uVar21 = 1;
          }
          else {
LAB_00ccfe08:
            uVar21 = 4;
          }
        }
        else if (unaff_r9 == (char ******)&DAT_0000000b) {
          iVar9 = thunk_FUN_016dd50a(pcVar29,"power_limit",0xb);
          if (iVar9 == 0) {
            uVar21 = 2;
          }
          else {
            iVar9 = thunk_FUN_016dd50a(pcVar29,"fingerprintIssueIssueWildIodefLLQULDAUDHUN3U",0xb);
            if (iVar9 != 0) goto LAB_00ccfe08;
            uVar21 = 3;
          }
        }
        else {
          if ((unaff_r9 != (char ******)&DAT_00000009) ||
             (iVar9 = thunk_FUN_016dd50a(pcVar29,&DAT_00354573,9), iVar9 != 0)) goto LAB_00ccfe08;
          uVar21 = 0;
        }
        if (ppppppcVar31 != (char ******)0x0) {
          thunk_FUN_016d3fb4(pcVar29);
        }
        cVar6 = (char)local_b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar21) {
        case 0:
          if (bVar3) {
            local_74 = (char ******)&DAT_00000009;
            local_78 = (char ******)&DAT_00354573;
            goto LAB_00cd0610;
          }
          local_b8 = CONCAT31(local_b8._1_3_,6);
          if (cVar6 == '\x06') {
            uVar21 = FUN_00c4c3ec(&DAT_00565810,0x10);
            uVar34 = CONCAT44(uVar21,1);
          }
          else {
            local_50 = (char ******)CONCAT31(local_50._1_3_,cVar6);
            FUN_016dd1aa(uVar15,uVar14,0x17);
            uVar34 = FUN_00c64c8c(&local_50);
          }
          local_168 = (char ******)(uVar34 >> 0x20);
          if ((uVar34 & 1) != 0) {
            local_13c = local_168;
            goto LAB_00cd028c;
          }
          bVar3 = true;
          goto LAB_00ccfcec;
        case 1:
          if (bVar4) {
            local_74 = (char ******)&DAT_0000001f;
            local_78 = (char ******)&DAT_0035457c;
            goto LAB_00cd0610;
          }
          local_b8 = CONCAT31(local_b8._1_3_,6);
          if (cVar6 == '\x06') {
            uVar21 = FUN_00c4c3ec(&DAT_00565810,0x10);
            uVar34 = CONCAT44(uVar21,1);
          }
          else {
            local_50 = (char ******)CONCAT31(local_50._1_3_,cVar6);
            FUN_016dd1aa(uVar15,uVar14,0x17);
            uVar34 = FUN_00c64c8c(&local_50);
          }
          local_13c = (char ******)(uVar34 >> 0x20);
          if ((uVar34 & 1) != 0) goto LAB_00cd028c;
          bVar4 = true;
          goto LAB_00ccfcec;
        case 2:
          if (bVar5) {
            local_74 = (char ******)&DAT_0000000b;
            local_78 = (char ******)0x359ed6;
            goto LAB_00cd0610;
          }
          FUN_00d65650(&local_50,&local_b8);
          if (local_50 == (char ******)&DAT_00000001) {
            local_13c = local_4c;
            goto LAB_00cd028c;
          }
          unaff_d8 = CONCAT44(ppppppcStack_44,local_48);
          bVar5 = true;
          goto LAB_00ccfcec;
        case 3:
          goto switchD_00ccfe7c_caseD_3;
        case 4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xccfb98);
          (*pcVar1)();
        case 5:
          goto switchD_00ccfe7c_caseD_5;
        default:
          bVar33 = (char)local_b8 != '\x06';
          local_b8 = CONCAT31(local_b8._1_3_,6);
          if (bVar33) goto code_r0x00ccfe4c;
          local_13c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
          goto LAB_00cd028c;
        }
      }
      uVar21 = FUN_00f36124(local_e8,&uStack_31,&DAT_01873e48);
      local_c0 = CONCAT44(local_c0._4_4_,uVar21);
      local_c8[0] = (char ******)&DAT_80000000;
      if ((bVar2 & 6) != 4) {
        FUN_00c01f94(local_e8);
      }
      goto LAB_00cd0718;
    }
  }
  *param_1 = local_f8;
  param_1[1] = local_f4;
  param_1[2] = local_f0;
  if (local_f8 != 0x80000000) {
    local_b8 = *param_1;
    uStack_b4 = param_1[1];
    uStack_b0 = param_1[2];
    if (pbVar8 != pbVar18) {
      uVar24 = FUN_00f2c2f0(uVar19,&DAT_0188738c,&DAT_018ab990);
      *param_1 = 0x80000000;
      param_1[1] = uVar24;
      FUN_00d4c544(&local_b8);
    }
  }
  goto LAB_00cd0778;
code_r0x00ccfe4c:
  local_50 = (char ******)CONCAT31(local_50._1_3_,cVar6);
  FUN_016dd1aa(uVar15,uVar14,0x17);
  FUN_00c01f94(&local_50);
  goto LAB_00ccfcec;
switchD_00ccfe7c_caseD_3:
  if (ppppppcVar22 != (char ******)&DAT_80000000) {
    local_74 = (char ******)&DAT_0000000b;
    local_78 = (char ******)0x38530a;
LAB_00cd0610:
    local_4c = (char ******)&DAT_0157d360;
    local_50 = (char ******)&local_78;
    local_13c = (char ******)FUN_00f56780(&DAT_00582dbd,&local_50);
LAB_00cd028c:
    local_c8[0] = (char ******)&DAT_80000000;
    local_c0 = CONCAT44(local_c0._4_4_,local_13c);
    if (((uint)ppppppcVar22 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_130);
    }
    goto LAB_00cd02bc;
  }
  uVar24 = local_b8 & 0xff;
  local_b8 = CONCAT31(local_b8._1_3_,6);
  if (uVar24 == 6) {
    ppppppcVar31 = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00cd013c:
    goto LAB_00cd0140;
  }
  local_50 = (char ******)CONCAT31(local_50._1_3_,cVar6);
  FUN_016dd1aa(uVar15,uVar14,0x17);
  if (uVar24 != 3) {
    ppppppcVar31 = (char ******)FUN_00f36124(&local_50,&uStack_31,&DAT_01873de8);
    FUN_00c01f94(&local_50);
    goto LAB_00cd0140;
  }
  local_16c = ppppppcStack_44;
  ppppppcVar22 = local_4c;
  ppppppcVar31 = local_48;
  if (local_4c == (char ******)&DAT_80000000) goto LAB_00cd0140;
  goto LAB_00ccfce4;
LAB_00cd0140:
  local_c0 = CONCAT44(local_c0._4_4_,ppppppcVar31);
  local_c8[0] = (char ******)&DAT_80000000;
LAB_00cd02bc:
  while( true ) {
    FUN_00c3b8fc(&local_50,&local_a0);
    ppppppcVar31 = local_48;
    ppppppcVar22 = local_50;
    if (local_50 == (char ******)0x0) break;
    local_78 = &local_a0;
    if (local_50[(int)local_48 * 3 + 0x43] != (char *****)0x0) {
      thunk_FUN_016d3fb4(local_50[(int)local_48 * 3 + 0x44]);
    }
    FUN_00c436d0(ppppppcVar22 + (int)ppppppcVar31 * 6);
  }
joined_r0x00cd03fc:
  if ((char)local_b8 != '\x06') {
    FUN_00c01f94(&local_b8);
  }
LAB_00cd0310:
  ppppppcVar22 = local_c8[0];
  unaff_r9 = local_d0[0];
  uVar24 = local_f0;
  if (local_c8[0] != (char ******)&DAT_80000000) {
    uVar21 = (uint)local_c0;
    uVar23 = local_c0._4_4_;
    if (local_f0 == local_f8) {
      FUN_00d64b10(&local_f8);
    }
    puVar20 = (undefined4 *)(local_f4 + uVar24 * 0x20);
    *puVar20 = uVar21;
    puVar20[3] = local_140;
    puVar20[4] = local_144;
    puVar20[1] = uVar23;
    puVar20[2] = ppppppcVar22;
    puVar20[5] = local_148;
    puVar20[6] = unaff_r9;
    local_f0 = uVar24 + 1;
    local_104 = pbVar18;
    goto LAB_00ccfc30;
  }
LAB_00cd0718:
  uVar19 = local_f0;
  uVar24 = local_f4;
  *param_1 = 0x80000000;
  param_1[1] = (uint)local_c0;
  for (uVar14 = 0; uVar19 != uVar14; uVar14 = uVar14 + 1) {
    iVar12 = uVar24 + uVar14 * 0x20;
    if (*(int *)(iVar12 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar12 + 0xc));
    }
  }
  if (local_f8 != 0) {
    thunk_FUN_016d3fb4(uVar24);
  }
LAB_00cd0778:
  FUN_00ce0380(pbVar18,((uint)((int)pbVar8 - (int)pbVar18) >> 3) * -0x55555555);
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(pbVar13);
  }
  return;
}

