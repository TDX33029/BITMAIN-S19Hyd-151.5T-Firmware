// FUN_01a20054 @ 01a20054 size=3092 calls_out=15 calls_in=4
// strings: 

void FUN_01a20054(uint *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  uint local_19c;
  uint *local_198;
  uint *local_194;
  uint *local_190;
  uint local_18c;
  uint local_188;
  int local_154;
  uint local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined2 local_130;
  undefined1 local_12e;
  uint local_128;
  uint local_124;
  uint uStack_120;
  uint local_118;
  undefined1 local_114;
  undefined1 auStack_113 [11];
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint local_fc;
  ushort local_dc;
  uint local_d8;
  uint local_d4;
  uint uStack_d0;
  uint local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint uStack_b0;
  uint local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  short local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined1 uStack_96;
  uint uStack_95;
  undefined1 uStack_91;
  undefined4 local_90;
  uint local_8c;
  uint *puStack_88;
  uint *puStack_84;
  uint *puStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint *puStack_54;
  uint *puStack_50;
  undefined4 local_4c;
  uint local_48 [7];
  ushort local_2c;
  
  if (0x2a2fe < *(int *)(param_3 + 0x18) + *(int *)(param_3 + 0x14) + 0x1517fU) {
LAB_01a20b50:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce21ec);
  }
  FUN_0128ec84(&local_68,param_3);
  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00529c62,0x2b,&DAT_01d2a938);
  }
  uVar15 = false;
  local_128 = local_68;
  local_124 = local_64;
  uStack_120 = local_60;
  uVar8 = *(ushort *)(param_2 + 0x1c);
  uVar1 = *(undefined2 *)(param_3 + 0x1c);
  bVar23 = false;
  bVar22 = uVar8 == 1;
  if (bVar22) {
    uVar8 = (ushort)*(byte *)(param_2 + 0x20);
  }
  if (bVar22 && (uVar8 & 1) == 0) {
    FUN_013161d8(&local_68,param_2 + 0xc);
    uVar9 = local_60;
    FUN_0134aee0(local_68,local_64,2,2);
    uVar15 = uVar9 == 1;
  }
  uVar8 = *(ushort *)(param_2 + 0x34);
  bVar22 = uVar8 == 1;
  if (bVar22) {
    uVar8 = (ushort)*(byte *)(param_2 + 0x38);
  }
  if (bVar22 && (uVar8 & 1) == 0) {
    FUN_013161d8(&local_68,param_2 + 0x24);
    uVar9 = local_60;
    FUN_0134aee0(local_68,local_64,2,2);
    bVar23 = uVar9 == 1;
  }
  uVar8 = *(ushort *)(param_2 + 0x4c);
  bVar14 = 1;
  bVar22 = uVar8 == 1;
  if (bVar22) {
    uVar8 = (ushort)*(byte *)(param_2 + 0x50);
  }
  if (bVar22 && (uVar8 & 1) == 0) {
    FUN_013161d8(&local_68,param_2 + 0x3c);
    uVar9 = local_60;
    FUN_0134aee0(local_68,local_64,2,2);
    bVar14 = uVar15 & bVar23 ^ 1 | uVar9 != 1;
  }
  puVar18 = &local_68;
  local_140 = 1;
  FUN_0128f70c(puVar18,&local_128,1,0,0);
  if (local_68 != 0) {
    puVar19 = &local_78;
LAB_01a20234:
    uVar9 = local_140;
    local_128 = local_68;
    local_124 = local_64;
    uStack_120 = local_60;
    uVar21 = 0x1e28500;
    if (0x1e28500 < local_140) {
      uVar21 = local_140;
    }
    do {
      FUN_0131888c(puVar18,param_2,&local_128,6);
      uVar15 = (undefined1)local_64;
      if (local_68 != 7) {
LAB_01a20a48:
        uVar13 = local_68;
LAB_01a20a50:
        FUN_01bed4e2(&local_138,(int)&local_64 + 1,0xb);
        goto LAB_01a20a5c;
      }
      if ((local_64 & 1) == 0) {
        FUN_0131888c(puVar18,param_2,&local_128,5);
        uVar15 = (undefined1)local_64;
        if (local_68 != 7) goto LAB_01a20a48;
        if ((local_64 & 1) != 0) goto LAB_01a202a4;
        FUN_0131888c(puVar18,param_2,&local_128,4);
        uVar15 = (undefined1)local_64;
        if (local_68 != 7) goto LAB_01a20a48;
        if ((local_64 & 1) != 0) {
          local_124 = 0;
        }
      }
      else {
LAB_01a202a4:
        local_124 = 0;
      }
      FUN_01318c5c(puVar18,param_2,&local_128,3);
      uVar16 = local_64 & 0xff;
      uVar15 = (undefined1)local_64;
      if (local_68 != 7) goto LAB_01a20a48;
      if ((local_64 & 1) == 0) {
        FUN_01318c5c(puVar18,param_2,&local_128,2);
        uVar16 = local_64 & 0xff;
        uVar15 = (undefined1)local_64;
        if (local_68 == 7) {
          if (((local_64 & 1) != 0) || (FUN_01318c5c(puVar18,param_2,&local_128,1), local_68 == 7))
          goto LAB_01a20350;
          uVar15 = (undefined1)local_64;
        }
        goto LAB_01a20a48;
      }
LAB_01a20350:
      FUN_012922a4(&local_118,uVar1,&local_128);
      sVar11 = 1;
      if (0x254 < local_dc) {
        sVar11 = local_dc - 0x255;
      }
      if (sVar11 != 2) {
        if (sVar11 == 0) {
          FUN_01a1fd14(puVar18,param_2,&local_118);
          uVar16 = local_64 & 0xff;
          uVar15 = (undefined1)local_64;
          uVar13 = local_68;
          if (local_68 != 7) goto LAB_01a20a50;
          if ((local_64 & 1) != 0) {
            FUN_01bed4e2(&local_138,auStack_113,0xb);
            local_68 = local_118;
            puVar17 = local_100;
            puVar18 = local_104;
            puVar19 = local_108;
            uVar15 = local_114;
            goto LAB_01a209dc;
          }
          FUN_0128f70c(puVar18,&local_128,1,0,0);
          if (local_68 != 0) goto LAB_01a209a4;
          goto LAB_01a20ab0;
        }
        FUN_012922a4(puVar18,uVar1,&local_128);
        if (0x256 < local_2c) {
LAB_01a20c50:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2a948);
        }
        local_b8 = local_68;
        local_b4 = local_64;
        uStack_b0 = local_60;
        local_ac = local_5c;
        local_a8 = local_58;
        local_a4 = puStack_54;
        local_a0 = puStack_50;
        uVar21 = local_4c & 0xffff;
        local_98 = local_4c._2_2_;
        if (uVar21 == 0x255) goto LAB_01a20c50;
        local_d8 = local_68;
        local_d4 = local_64;
        uStack_d0 = local_60;
        local_cc = local_5c;
        local_c8 = local_58;
        local_c4 = puStack_54;
        local_c0 = puStack_50;
        local_bc = local_4c;
        FUN_012922a4(puVar18,uVar1,&local_128);
        sVar11 = 1;
        if (0x254 < local_2c) {
          sVar11 = local_2c - 0x255;
        }
        puVar17 = puVar18;
        if ((sVar11 != 0) && (puVar17 = local_48, sVar11 != 1)) {
LAB_01a20c5c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2a958);
        }
        uVar16 = *puVar17;
        uVar13 = puVar17[1];
        local_90 = puVar17[2];
        local_98 = (undefined2)uVar16;
        uStack_96 = (undefined1)(uVar16 >> 0x10);
        uStack_95._1_3_ = (undefined3)uVar13;
        uStack_95 = CONCAT31(uStack_95._1_3_,(char)(uVar16 >> 0x18));
        uStack_91 = (undefined1)(uVar13 >> 0x18);
        local_8c = puVar17[3];
        puStack_88 = (uint *)puVar17[4];
        puStack_84 = (uint *)puVar17[5];
        puStack_80 = (uint *)puVar17[6];
        sVar11 = (short)puVar17[7];
        uVar2 = *(undefined2 *)((int)puVar17 + 0x1e);
        local_138 = CONCAT22(local_138._2_2_,uVar2);
        if (sVar11 == 0x255) goto LAB_01a20c5c;
        puVar17 = &local_b8;
        local_b8 = uVar16;
        local_b4 = uVar13;
        uStack_b0 = local_90;
        local_ac = local_8c;
        local_a8 = puStack_88;
        local_a4 = puStack_84;
        local_a0 = puStack_80;
        local_9c = sVar11;
        local_9a = uVar2;
        if (bVar14 == 0) {
          FUN_01a1fd14(puVar18,param_2,&local_d8);
          uVar13 = local_d8;
          uVar15 = (char)local_64;
          if (local_68 != 7) {
LAB_01a20b00:
            FUN_01bed4e2(&local_138,(int)&local_64 + 1,0xb);
            local_fc = 0x255;
            goto LAB_01a209dc;
          }
          if ((local_64 & 1) == 0) {
            FUN_0128f70c(puVar18,&local_128,1,0,0);
            if (local_68 != 0) goto LAB_01a209a4;
            uVar13 = 2;
            local_bc = 0x255;
          }
          else {
            uVar15 = (undefined1)local_d4;
            FUN_01bed4e2(&local_138,(uint)&local_d8 | 5,0xb);
            puVar17 = local_c0;
            puVar18 = local_c4;
            puVar19 = local_c8;
          }
        }
        else {
          FUN_01a1fd14(puVar18,param_2,&local_d8);
          if (local_68 != 7) goto LAB_01a20a20;
          uVar16 = 0x255;
          if ((local_64 & 1) != 0) {
            local_188 = local_d4 & 0xff;
            local_18c = local_d8;
            FUN_01bed4e2(&local_98,(uint)&local_d8 | 5,0xb);
            local_198 = local_c8;
            local_194 = local_c4;
            local_190 = local_c0;
            local_19c = local_bc >> 0x10;
            uVar16 = uVar21;
          }
          FUN_01a1fd14(puVar18,param_2,puVar17);
          uVar2 = local_9a;
          uVar21 = local_b8;
          uVar15 = (char)local_64;
          if (local_68 != 7) goto LAB_01a20b00;
          uVar15 = (undefined1)local_188;
          if ((local_64 & 1) == 0) {
            if (uVar16 != 0x255) goto LAB_01a20bec;
            FUN_0128f70c(puVar18,&local_128,1,0,0);
            uVar16 = local_188;
            if (local_68 != 0) goto LAB_01a209a4;
LAB_01a209cc:
            local_68 = 2;
LAB_01a209d8:
            local_fc = 0x255;
            uVar15 = (char)uVar16;
          }
          else {
            if (uVar16 != 0x255) {
LAB_01a20bec:
              local_138 = CONCAT13((undefined1)uStack_95,CONCAT12(uStack_96,local_98));
              uStack_134 = CONCAT13(uStack_91,uStack_95._1_3_);
              local_130 = (undefined2)local_90;
              local_12e = local_90._2_1_;
              uVar13 = local_18c;
              local_bc = uVar16 | local_19c << 0x10;
              puVar17 = local_190;
              puVar18 = local_194;
              puVar19 = local_198;
              goto LAB_01a209e0;
            }
            uVar15 = (undefined1)local_b4;
            FUN_01bed4e2(&local_138,(uint)puVar17 | 5,0xb);
            local_fc = CONCAT22(uVar2,sVar11);
            local_68 = uVar21;
            puVar17 = local_a0;
            puVar18 = local_a4;
            puVar19 = local_a8;
          }
LAB_01a209dc:
          uVar13 = local_68;
          local_bc = local_fc;
        }
LAB_01a209e0:
        FUN_01bed4e2((int)param_1 + 5,&local_138,0xb);
        if ((local_bc & 0xffff) == 0x255) goto LAB_01a20a6c;
        param_1[4] = (uint)puVar19;
        param_1[5] = (uint)puVar18;
        param_1[6] = (uint)puVar17;
        param_1[7] = local_bc;
        goto LAB_01a20a74;
      }
      if (bVar14 != 0) goto LAB_01a20900;
      iVar12 = 0x1c21;
      puVar17 = (uint *)0x256;
      local_78 = local_128;
      uStack_74 = local_124;
      uStack_70 = uStack_120;
      uVar16 = uStack_120;
      while( true ) {
        local_154 = (int)&local_64 + 1;
        FUN_0128f70c(puVar18,puVar19,1,0,0);
        uVar3 = local_60;
        if (local_68 == 0) goto LAB_01a209cc;
        local_78 = local_68;
        uStack_74 = local_64;
        uStack_70 = local_60;
        FUN_012922a4(puVar18,uVar1,puVar19);
        uVar13 = local_68;
        if (local_2c < 599) break;
        iVar12 = iVar12 + -1;
        uVar16 = uVar3;
        if (iVar12 == 0) {
          local_68 = 3;
          goto LAB_01a209d8;
        }
      }
      uVar4 = (char)local_64;
      FUN_01bed4e2(&local_98,local_154,0xb);
      uVar16 = local_4c;
      puVar7 = puStack_50;
      puVar6 = puStack_54;
      puVar5 = local_58;
      puVar17 = (uint *)((int)puStack_50 + (int)puStack_54);
      uStack_b0 = uStack_95;
      local_b4 = CONCAT31(local_b4._1_3_,uVar4);
      local_b8 = uVar13;
      if (0x2a2fe < (int)puVar17 + 0x1517fU) goto LAB_01a20b50;
      FUN_0128fca4(&local_d8,&local_b8,puVar17);
      uVar3 = local_d8;
      uStack_b0 = uStack_95;
      local_b4._0_1_ = uVar4;
      local_b8 = uVar13;
      FUN_0128fca4(&local_d8,&local_b8,puVar17);
      uVar20 = (local_d8 & 0x1fff) >> 3;
      if (0x2dc < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar20,0x2dd,&DAT_01d2a928);
      }
      uStack_b0 = uStack_95;
      local_b4 = CONCAT31(local_b4._1_3_,uVar4);
      local_b8 = uVar13;
      FUN_0128fca4(&local_d8,&local_b8,puVar17);
      uVar10 = (local_d8 & 0x1fff) >> 3;
      if (0x2dc < uVar10) {
LAB_01a20c2c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,0x2dd,&DAT_01d2a928);
      }
      FUN_01318fe0(puVar18,param_2,(int)uVar3 >> 0xd,uVar20 + (byte)""[uVar20] >> 6,
                   ((local_d8 >> 3) + (uint)(byte)""[uVar10] & 0x3f) >> 1);
      if (local_68 != 7) {
LAB_01a20a20:
        FUN_01bed4e2(&local_138,(int)&local_64 + 1,0xb);
        local_fc = 0x255;
        uVar15 = (char)local_64;
        goto LAB_01a209dc;
      }
      if ((local_64 & 1) == 0) goto LAB_01a20670;
      local_b4 = CONCAT31(local_b4._1_3_,uVar4);
      local_b8 = uVar13;
      uStack_b0 = uStack_95;
      FUN_0128fca4(&local_d8,&local_b8,puVar17);
      uVar10 = (local_d8 & 0x1fff) >> 3;
      if (0x2dc < uVar10) goto LAB_01a20c2c;
      if (0xb < (uVar10 + (byte)""[uVar10] >> 6) - 1) {
        local_68 = 1;
LAB_01a20a88:
        uVar15 = (char)local_64;
LAB_01a20a8c:
        FUN_01bed4e2(&local_138,(int)&local_64 + 1,0xb);
        uVar13 = local_68;
        local_bc = 0x255;
        goto LAB_01a209e0;
      }
      FUN_013160c4(puVar18,param_2 + 0x6c,uVar10 + (byte)""[uVar10] >> 6,1);
      if (local_68 != 7) goto LAB_01a20a88;
      if ((char)local_64 == '\x01') {
        local_b4 = CONCAT31(local_b4._1_3_,uVar4);
        local_b8 = uVar13;
        uStack_b0 = uStack_95;
        FUN_0128fca4(&local_d8,&local_b8,puVar17);
        if (4999 < ((int)local_d8 >> 0xd) - 1U) goto LAB_01a20670;
        FUN_013160c4(puVar18,param_2 + 0x9c,(int)local_d8 >> 0xd,1);
        uVar15 = (char)local_64;
        if (local_68 == 7) {
          if ((local_64 & 1) != 0) {
            local_138 = CONCAT13((undefined1)uStack_95,CONCAT12(uStack_96,local_98));
            uStack_134 = CONCAT13(uStack_91,uStack_95._1_3_);
            local_130 = (undefined2)local_90;
            local_12e = local_90._2_1_;
            local_bc = uVar16;
            puVar17 = puVar7;
            puVar18 = puVar6;
            puVar19 = puVar5;
            uVar15 = uVar4;
            goto LAB_01a209e0;
          }
          goto LAB_01a20670;
        }
        goto LAB_01a20a8c;
      }
LAB_01a20670:
      local_128 = local_78;
      local_124 = uStack_74;
      uStack_120 = uStack_70;
      bVar23 = uVar9 == uVar21;
      uVar9 = uVar9 + 1;
      if (bVar23) goto LAB_01a209bc;
    } while( true );
  }
  uVar13 = 2;
LAB_01a20a5c:
  FUN_01bed4e2((int)param_1 + 5,&local_138,0xb);
LAB_01a20a6c:
  *(undefined2 *)(param_1 + 7) = 0x255;
LAB_01a20a74:
  *(undefined1 *)(param_1 + 1) = uVar15;
  *param_1 = uVar13;
  return;
LAB_01a20900:
  FUN_0128f70c(puVar18,&local_128,1,0,0);
  if (local_68 == 0) {
LAB_01a20ab0:
    uVar13 = 2;
    goto LAB_01a209c0;
  }
  uVar9 = local_140;
LAB_01a209a4:
  local_140 = uVar9 + 1;
  local_128 = local_68;
  local_124 = local_64;
  uStack_120 = local_60;
  if (0x1e28500 < local_140) goto LAB_01a209bc;
  goto LAB_01a20234;
LAB_01a209bc:
  uVar13 = 3;
  uVar16 = uStack_120;
LAB_01a209c0:
  uVar15 = (undefined1)uVar16;
  goto LAB_01a20a5c;
}

