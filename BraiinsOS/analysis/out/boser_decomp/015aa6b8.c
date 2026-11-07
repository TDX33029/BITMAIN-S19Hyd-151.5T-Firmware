// FUN_015aa6b8 @ 015aa6b8 size=2104 calls_out=15 calls_in=2
// strings: 

void FUN_015aa6b8(int *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  uint *puVar15;
  short *psVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  undefined4 *puVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint *puVar29;
  undefined4 uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  uint *puVar33;
  undefined4 *puVar34;
  bool bVar35;
  uint *local_f0;
  undefined4 local_ec;
  uint *local_e8;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 *local_94;
  uint local_90;
  uint local_8c;
  byte local_88;
  undefined4 *local_80;
  char local_7a;
  char local_79;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  undefined1 local_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  char *local_68;
  char *local_64;
  int local_60;
  undefined4 *local_5c;
  int local_58;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined1 local_38;
  undefined *local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  
  local_7a = '\x01';
  local_80 = (undefined4 *)&SUB_00000004;
  local_58 = 0;
  local_5c = (undefined4 *)&SUB_00000004;
  local_60 = 0;
  local_79 = param_2;
  iVar5 = FUN_01be7a8c(&local_78);
  puVar4 = local_78;
  if (iVar5 != -1) {
    iVar5 = 0;
    puVar33 = local_78;
LAB_015aa728:
    do {
      puVar17 = puVar33;
      puVar25 = local_5c;
      iVar23 = local_60;
      if (puVar17 == (uint *)0x0) goto LAB_015aabf4;
      puVar33 = (uint *)*puVar17;
      psVar16 = (short *)puVar17[3];
      if (psVar16 != (short *)0x0) {
        if (*psVar16 == 2) {
          uVar24 = puVar17[1];
          local_b0 = 0;
          local_90 = puVar17[2];
          psVar12 = (short *)puVar17[4];
          psVar13 = (short *)puVar17[5];
          local_ac = *(undefined4 *)(psVar16 + 2);
          local_88 = 0;
          if ((psVar12 != (short *)0x0) && (*psVar12 == 2)) {
            local_b0 = *(uint *)(psVar12 + 2);
          }
          if ((local_90 & 2) == 0) {
            local_b4 = local_d8;
          }
          else {
            local_88 = 1;
            if ((psVar13 != (short *)0x0) && (*psVar13 == 2)) {
              local_d8 = *(undefined4 *)(psVar13 + 2);
              local_88 = 0;
            }
            local_88 = local_88 ^ 1;
            local_b4 = local_d8;
          }
          uVar6 = local_b0 - (local_b0 >> 1 & 0x55555555);
          uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
          local_8c._0_1_ = (undefined1)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
          local_a8 = 2;
          local_d8 = local_b4;
        }
        else {
          if (*psVar16 != 10) goto LAB_015aa728;
          local_c8 = *(undefined4 *)(psVar16 + 6);
          local_c0 = *(undefined4 *)(psVar16 + 4);
          local_bc = *(undefined4 *)(psVar16 + 8);
          local_c4 = *(undefined4 *)(psVar16 + 10);
          uVar24 = puVar17[1];
          local_90 = puVar17[2];
          psVar16 = (short *)puVar17[4];
          psVar12 = (short *)puVar17[5];
          if ((psVar16 == (short *)0x0) || (*psVar16 != 10)) {
            local_a4 = 0;
            local_94 = (undefined4 *)0x0;
            local_9c = 0;
            local_a0 = 0;
          }
          else {
            local_94 = *(undefined4 **)(psVar16 + 4);
            local_9c = *(uint *)(psVar16 + 6);
            local_a0 = *(uint *)(psVar16 + 8);
            local_a4 = *(uint *)(psVar16 + 10);
          }
          if ((local_90 & 2) == 0) {
            local_8c = local_dc;
            local_a8 = 0;
            local_ac = local_e4;
            local_b0 = local_e0;
          }
          else {
            if (psVar12 == (short *)0x0) {
LAB_015aa8a4:
              local_a8 = 0;
            }
            else {
              if (*psVar12 != 10) {
                if (*psVar12 == 2) {
                  local_78 = *(uint **)(psVar12 + 2);
                }
                goto LAB_015aa8a4;
              }
              local_e8 = *(uint **)(psVar12 + 4);
              puVar28 = *(uint **)(psVar12 + 6);
              puVar17 = *(uint **)(psVar12 + 8);
              uVar6 = *(uint *)(psVar12 + 10);
              local_6c = (undefined1)uVar6;
              local_d4 = uVar6 >> 0x10;
              local_dc = uVar6 >> 8 & 0xff;
              local_70._1_3_ = (undefined3)((uint)puVar17 >> 8);
              local_e0 = CONCAT13(local_6c,local_70._1_3_);
              local_74._1_3_ = (undefined3)((uint)puVar28 >> 8);
              local_70._0_1_ = SUB41(puVar17,0);
              local_e4 = CONCAT13(local_70._0_1_,local_74._1_3_);
              local_78._1_3_ = (undefined3)((uint)local_e8 >> 8);
              local_74._0_1_ = SUB41(puVar28,0);
              local_ec = CONCAT13(local_74._0_1_,local_78._1_3_);
              local_a8 = 1;
              local_78 = local_e8;
              local_74 = puVar28;
              local_70 = puVar17;
            }
            local_b0 = local_e0;
            local_ac = local_e4;
            local_8c = local_dc;
          }
          uVar6 = (int)local_94 - ((uint)local_94 >> 1 & 0x55555555);
          uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
          uVar14 = local_a0 - (local_a0 >> 1 & 0x55555555);
          uVar14 = (uVar14 & 0x33333333) + (uVar14 >> 2 & 0x33333333);
          uVar18 = local_9c - (local_9c >> 1 & 0x55555555);
          uVar18 = (uVar18 & 0x33333333) + (uVar18 >> 2 & 0x33333333);
          uVar20 = local_a4 - (local_a4 >> 1 & 0x55555555);
          uVar20 = (uVar20 & 0x33333333) + (uVar20 >> 2 & 0x33333333);
          local_cc = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                     ((uVar18 + (uVar18 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                     ((uVar14 + (uVar14 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                     ((uVar20 + (uVar20 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
          local_b4 = local_ec;
          local_88 = (byte)local_e8;
          local_e4 = local_ac;
          local_e0 = local_b0;
          local_dc = local_8c;
        }
        uVar7 = FUN_01bedbda(uVar24);
        FUN_006643f0(&local_78,uVar24,uVar7);
        puVar28 = local_70;
        puVar17 = local_74;
        if (local_78 == (uint *)&DAT_80000000) {
          puVar29 = (uint *)0x0;
          if ((int)local_70 < 0) {
LAB_015aaee4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(puVar29,local_f0);
          }
          if (local_70 == (uint *)0x0) {
            local_f0 = (uint *)&DAT_00000001;
          }
          else {
            puVar29 = (uint *)&DAT_00000001;
            local_f0 = (uint *)FUN_01298504(local_70,1);
            if (local_f0 == (uint *)0x0) {
              local_f0 = puVar28;
              goto LAB_015aaee4;
            }
            puVar29 = puVar28;
          }
          FUN_01bed4e2(local_f0,puVar17,puVar28);
          puVar17 = local_f0;
        }
        else {
          puVar29 = local_78;
        }
        uVar22 = 1;
        if ((local_90 & 0x40) == 0) {
          uVar22 = 4;
        }
        uVar24 = FUN_01be7ba0(uVar24);
        if (iVar5 == local_60) {
          FUN_01a54ba8(&local_60);
          local_80 = local_5c;
        }
        local_58 = iVar5 + 1;
        puVar15 = local_80 + iVar5 * 0x12;
        *puVar15 = (uint)(uVar24 != 0);
        *(uint *)((int)puVar15 + 0x41) = local_a4;
        *(uint *)((int)puVar15 + 0x3d) = local_a0;
        *(uint *)((int)puVar15 + 0x39) = local_9c;
        *(undefined4 **)((int)puVar15 + 0x35) = local_94;
        *(undefined4 *)((int)puVar15 + 0x31) = local_c4;
        *(undefined4 *)((int)puVar15 + 0x2d) = local_bc;
        *(undefined4 *)((int)puVar15 + 0x29) = local_c8;
        *(undefined4 *)((int)puVar15 + 0x25) = local_c0;
        *(char *)((int)puVar15 + 0x45) = (char)local_cc;
        *(short *)((int)puVar15 + 0x23) = (short)local_d4;
        *(undefined1 *)((int)puVar15 + 0x22) = (undefined1)local_8c;
        *(uint *)((int)puVar15 + 0x1e) = local_b0;
        *(undefined4 *)((int)puVar15 + 0x1a) = local_ac;
        *(undefined4 *)((int)puVar15 + 0x16) = local_b4;
        *(byte *)((int)puVar15 + 0x15) = local_88;
        *(undefined1 *)(puVar15 + 5) = local_a8;
        puVar15[1] = uVar24;
        puVar15[2] = (uint)puVar29;
        puVar15[3] = (uint)puVar17;
        *(undefined1 *)((int)puVar15 + 0x47) = uVar22;
        *(char *)((int)puVar15 + 0x46) = (char)((local_90 & 0x1f) >> 4);
        puVar15[4] = (uint)puVar28;
        iVar5 = local_58;
      }
    } while( true );
  }
  piVar11 = (int *)FUN_01be3244();
  iVar5 = *piVar11;
  FUN_015abb4c(&local_60);
  puVar25 = (undefined4 *)0x0;
LAB_015aae24:
  FUN_0069d8a4(puVar25,iVar5);
  local_64 = &local_79;
  local_68 = &local_7a;
  iVar23 = 0;
  puVar34 = (undefined4 *)&SUB_00000004;
  local_94 = (undefined4 *)&SUB_00000004;
  puVar32 = (undefined4 *)&SUB_00000004;
  puVar25 = (undefined4 *)&SUB_00000004;
LAB_015aae64:
  puVar31 = puVar32 + 2;
  local_6c = 4;
  uStack_6b = 0;
  uStack_6a = 0;
  local_74 = (uint *)0x4;
  local_78 = (uint *)0x4;
  local_70 = (uint *)0x0;
  for (iVar5 = ((uint)((int)puVar34 - (int)puVar32) >> 3) * 0x38e38e39; iVar5 != 0;
      iVar5 = iVar5 + -1) {
    FUN_0134bd64(*puVar31,puVar31[1]);
    puVar31 = puVar31 + 0x12;
  }
  *param_1 = iVar23;
  param_1[1] = (int)local_94;
  param_1[2] = ((uint)((int)puVar25 - (int)local_94) >> 3) * 0x38e38e39;
  FUN_01453e8c(&local_78);
  return;
LAB_015aabf4:
  FUN_01be7a78(puVar4);
  if (iVar23 != -0x80000000) {
    local_64 = &local_79;
    local_68 = &local_7a;
    puVar34 = puVar25 + iVar5 * 0x12;
    local_94 = puVar25;
    puVar32 = puVar25;
    if (iVar5 != 0) {
      do {
        local_38 = *(undefined1 *)((int)puVar32 + 0x19);
        local_3c = *(undefined4 *)((int)puVar32 + 0x15);
        cVar1 = *(char *)((int)puVar32 + 0x1a);
        uVar30 = puVar32[2];
        uVar7 = puVar32[3];
        uVar24 = puVar32[4];
        cVar2 = *(char *)(puVar32 + 5);
        FUN_01bed4e2(auStack_48,(undefined1 *)((int)puVar32 + 0x1b),10);
        iVar5 = *(int *)((int)puVar32 + 0x29);
        iVar8 = *(int *)((int)puVar32 + 0x2d);
        iVar9 = *(int *)((int)puVar32 + 0x31);
        iVar26 = *(int *)((int)puVar32 + 0x25);
        FUN_01bed4e2(&local_60,(undefined1 *)((int)puVar32 + 0x35),0x11);
        bVar3 = *(byte *)((int)puVar32 + 0x47);
        bVar35 = bVar3 == 1;
        if (bVar35) {
          bVar3 = *(byte *)((int)puVar32 + 0x46);
        }
        if (bVar35 && (bVar3 & 1) == 0) {
          if (cVar2 == '\x02') {
            if (cVar1 == '\x7f') goto LAB_015aacfc;
          }
          else if ((iVar26 == 0 && iVar8 == 0) && (iVar5 == 0 && iVar9 == 0x1000000)) {
LAB_015aacfc:
            if (local_7a == '\0') goto LAB_015aacb4;
          }
          if (local_79 == '\0') {
            local_28 = 3;
            local_30 = 4;
            local_2c = "llw";
            local_34 = &DAT_0056d69c;
            for (iVar27 = 0; iVar27 != 0x10; iVar27 = iVar27 + 8) {
              if ((*(uint *)((int)&local_30 + iVar27) <= uVar24) &&
                 (iVar10 = thunk_FUN_01bed842(*(undefined4 *)((int)&local_34 + iVar27),uVar7),
                 iVar10 == 0)) goto LAB_015aacb4;
            }
          }
          uVar19 = *puVar32;
          uVar21 = puVar32[1];
          *(undefined1 *)((int)puVar25 + 0x19) = local_38;
          *(undefined4 *)((int)puVar25 + 0x15) = local_3c;
          *(char *)((int)puVar25 + 0x1a) = cVar1;
          *puVar25 = uVar19;
          puVar25[1] = uVar21;
          puVar25[2] = uVar30;
          *(char *)(puVar25 + 5) = cVar2;
          puVar25[3] = uVar7;
          puVar25[4] = uVar24;
          FUN_01bed4e2((undefined1 *)((int)puVar25 + 0x1b),auStack_48,10);
          *(int *)((int)puVar25 + 0x31) = iVar9;
          *(int *)((int)puVar25 + 0x2d) = iVar8;
          *(int *)((int)puVar25 + 0x29) = iVar5;
          *(int *)((int)puVar25 + 0x25) = iVar26;
          FUN_01bed4e2((undefined1 *)((int)puVar25 + 0x35),&local_60,0x11);
          *(undefined2 *)((int)puVar25 + 0x46) = 0x100;
          puVar25 = puVar25 + 0x12;
        }
        else {
LAB_015aacb4:
          FUN_0134bd64(uVar30,uVar7);
        }
        puVar32 = puVar32 + 0x12;
      } while (puVar32 != puVar34);
    }
    goto LAB_015aae64;
  }
  goto LAB_015aae24;
}

