// FUN_01656528 @ 01656528 size=1788 calls_out=18 calls_in=6
// strings: 

/* WARNING: Removing unreachable block (ram,0x01656818) */
/* WARNING: Removing unreachable block (ram,0x01656824) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01656528(int *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  short *psVar21;
  uint uVar22;
  char cVar23;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  bool bVar29;
  undefined4 *puVar30;
  int unaff_r10;
  uint uVar31;
  char local_114;
  uint local_10c;
  uint local_108;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  undefined3 uStack_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  ushort local_b0;
  undefined1 uStack_ae;
  undefined4 uStack_ad;
  ushort local_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  byte bStack_a1;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined2 uStack_98;
  undefined4 local_96;
  undefined2 local_92;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined1 *local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined1 *local_34;
  uint local_30;
  undefined4 uStack_2c;
  
  local_c8 = 0;
  local_d0 = 0;
  local_cc = 4;
  iVar12 = FUN_01be7a8c(&local_c0);
  uVar6 = uStack_98;
  uVar5 = local_9c;
  uVar14 = uStack_a0;
  if (iVar12 == 0) {
    if (local_c0 != (undefined4 *)0x0) {
      local_f4 = 0;
      local_ec = 0;
      local_f0 = 0;
      puVar30 = local_c0;
LAB_016565c4:
      uStack_98 = uVar6;
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar11 = uStack_98._1_1_;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      uVar27 = puVar30[1];
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar7;
      uStack_a0._3_1_ = uVar8;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      uVar6 = uStack_98;
      uStack_98._1_1_ = uVar11;
      iVar12 = FUN_01bedbda(uVar27);
      uVar6 = uStack_98;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      if (iVar12 < 0) {
        uVar25 = 0;
LAB_01656bd0:
        local_9c = uVar5;
        uStack_a0 = uVar14;
        uVar10 = local_9c._3_1_;
        uVar9 = local_9c._2_1_;
        uVar8 = uStack_a0._3_1_;
        uVar7 = uStack_a0._2_1_;
        uVar14 = uStack_a0;
        uStack_a0._2_1_ = uVar7;
        uStack_a0._3_1_ = uVar8;
        uVar5 = local_9c;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar25,unaff_r10);
      }
      if (iVar12 == 0) {
        iVar13 = 1;
        local_e8 = 0;
      }
      else {
        uVar25 = 1;
        uVar7 = uStack_a0._3_1_;
        uVar8 = uStack_a0._2_1_;
        uStack_a0 = uVar14;
        uVar9 = local_9c._2_1_;
        uVar10 = local_9c._3_1_;
        local_9c = uVar5;
        uVar14 = uStack_a0;
        uStack_a0._2_1_ = uVar8;
        uStack_a0._3_1_ = uVar7;
        uVar5 = local_9c;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        iVar13 = FUN_01298504(iVar12,1);
        uStack_98 = uVar6;
        uVar6 = uStack_98;
        uVar5 = local_9c;
        uVar14 = uStack_a0;
        unaff_r10 = iVar12;
        if (iVar13 == 0) goto LAB_01656bd0;
        local_e8 = iVar12;
      }
      uStack_98 = uVar6;
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar11 = uStack_98._1_1_;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar7;
      uStack_a0._3_1_ = uVar8;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      uVar6 = uStack_98;
      uStack_98._1_1_ = uVar11;
      FUN_01bed4e2(iVar13,uVar27,iVar12);
      uVar6 = uStack_98;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      uVar7 = uStack_a0._3_1_;
      uVar8 = uStack_a0._2_1_;
      uStack_a0 = uVar14;
      uVar9 = local_9c._2_1_;
      uVar10 = local_9c._3_1_;
      local_9c = uVar5;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar8;
      uStack_a0._3_1_ = uVar7;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      FUN_016575a0(&local_a8,puVar30[3]);
      uStack_98 = uVar6;
      uVar2 = local_96;
      uVar6 = uStack_98;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      bVar1 = bStack_a1;
      uStack_bc = CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8));
      uStack_b8 = (undefined3)
                  (CONCAT13(uStack_a2,CONCAT12(uStack_a3,CONCAT11(uStack_a4,uStack_a5))) >> 8);
      local_b4 = CONCAT21(uVar6,local_9c._3_1_);
      local_b2 = uStack_98._1_1_;
      cVar3 = (char)local_92;
      uVar31 = (uint)local_92._1_1_;
      uStack_ad = CONCAT13(local_9c._2_1_,CONCAT41(uVar5,uStack_a0._3_1_));
      local_b0 = (ushort)uVar14;
      uStack_ae = (undefined1)(uVar14 >> 0x10);
      uVar7 = uStack_a0._3_1_;
      uVar8 = uStack_a0._2_1_;
      uStack_a0 = uVar14;
      uVar9 = local_9c._2_1_;
      uVar10 = local_9c._3_1_;
      local_9c = uVar5;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar8;
      uStack_a0._3_1_ = uVar7;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      FUN_016575a0(&local_a8,puVar30[4]);
      uStack_98 = uVar6;
      uVar6 = uStack_98;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      local_108 = 0;
      if (bStack_a1 != 2) {
        if ((bStack_a1 & 1) == 0) {
          uVar20 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                   uVar14 >> 0x18;
          uVar22 = LZCOUNT(~uVar20);
          uVar28 = 0xffffffff >> uVar22;
          if (-1 < (int)(uVar22 - 0x20)) {
            uVar28 = 0;
          }
          if ((uVar28 & uVar20) == 0) {
            local_108 = uVar22;
LAB_016567c8:
            local_9c = uVar5;
            uStack_a0 = uVar14;
            uVar10 = local_9c._3_1_;
            uVar9 = local_9c._2_1_;
            uVar8 = uStack_a0._3_1_;
            uVar7 = uStack_a0._2_1_;
            uVar14 = uStack_a0;
            uVar5 = local_9c;
            uStack_a0._2_1_ = uVar7;
            uStack_a0._3_1_ = uVar8;
            local_9c._2_1_ = uVar9;
            local_9c._3_1_ = uVar10;
          }
        }
        else {
          uVar27 = CONCAT22(local_92 << 8 | local_92 >> 8,local_96._2_2_ << 8 | local_96._2_2_ >> 8)
          ;
          local_9c._2_1_ = (undefined1)(local_92 >> 8);
          local_9c._3_1_ = (undefined1)local_92;
          uVar28 = CONCAT22((ushort)local_96 << 8 | (ushort)local_96 >> 8,uVar6 << 8 | uVar6 >> 8);
          uStack_a0._2_1_ = (undefined1)(local_96 >> 8);
          uStack_a0._3_1_ = (undefined1)local_96;
          uStack_a2 = (undefined1)((uint)uVar5 >> 0x18);
          bStack_a1 = (byte)((uint)uVar5 >> 0x10);
          uStack_a4 = (undefined1)((uint)uVar5 >> 8);
          uStack_a3 = (undefined1)uVar5;
          uStack_a6 = (char)(uVar14 >> 0x18);
          uStack_a5 = (undefined1)(uVar14 >> 0x10);
          local_a8 = (ushort)((uVar14 & 0xff) << 8) | (ushort)(uVar14 >> 8) & 0xff;
          uVar14 = 0;
          iVar18 = 0;
          do {
            puVar19 = (ushort *)((int)&local_a8 + iVar18);
            iVar18 = iVar18 + 2;
            uVar20 = (uint)*puVar19;
            if (uVar20 != 0xffff) {
              if (uVar20 == 0) goto LAB_01656798;
              if ((uVar20 << LZCOUNT(~(uVar20 << 0x10)) & 0xffff) != 0) goto LAB_016567b4;
              uVar14 = uVar14 + LZCOUNT(~(uVar20 << 0x10));
              goto LAB_01656798;
            }
            uVar14 = uVar14 + 0x10;
          } while (iVar18 != 0x10);
          uVar14 = 0x80;
          iVar18 = 0x10;
LAB_01656798:
          do {
            if (iVar18 == 0x10) {
              local_108 = uVar14 & 0xff;
              uVar14 = uVar28;
              uVar5 = uVar27;
              goto LAB_016567c8;
            }
            psVar21 = (short *)((int)&local_a8 + iVar18);
            iVar18 = iVar18 + 2;
          } while (*psVar21 == 0);
LAB_016567b4:
          local_108 = 0;
          uVar14 = uVar28;
          uVar5 = uVar27;
        }
      }
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar5 = local_9c;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      uVar14 = uStack_a0;
      cVar23 = '\x02';
      if (bVar1 != 2) {
        uStack_a0._2_1_ = uVar7;
        uStack_a0._3_1_ = uVar8;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        if ((bVar1 & 1) == 0) {
          if (0x20 < local_108) {
            local_10c = local_10c & 0xffffff00 | local_108;
            uStack_98._1_1_ = SUB21(uVar6,1);
            local_108 = local_ec;
            goto LAB_0165682c;
          }
          cVar23 = '\0';
          uStack_a4 = (undefined1)local_108;
          uStack_a5 = (undefined1)uStack_ad;
          local_f8 = local_10c;
LAB_01656888:
          uStack_a6 = uStack_ae;
          local_a8 = local_b0;
          local_90 = CONCAT13(uStack_a5,CONCAT12(uStack_ae,local_b0));
          uStack_8c = CONCAT13(bStack_a1,CONCAT12(uStack_a2,CONCAT11(uStack_a3,uStack_a4)));
          local_88 = (undefined2)uStack_a0;
          local_108 = local_ec;
          local_10c = local_f8;
          local_f0 = local_ec;
        }
        else {
          if (local_108 < 0x81) {
            uStack_a4 = (undefined1)((uint)uStack_ad >> 8);
            uStack_a3 = (undefined1)((uint)uStack_ad >> 0x10);
            uStack_a2 = (undefined1)((uint)uStack_ad >> 0x18);
            *(undefined2 *)((uint)&local_a8 | 7) = local_b4;
            *(undefined1 *)((undefined2 *)((uint)&local_a8 | 7) + 1) = local_b2;
            cVar23 = '\x01';
            local_f8 = uVar2;
            local_ec = uVar31;
            local_f4 = local_108;
            uStack_a5 = (undefined1)uStack_ad;
            local_114 = cVar3;
            goto LAB_01656888;
          }
LAB_0165682c:
          uStack_a3 = 0;
          uStack_a4 = 0;
          uStack_a5 = 0;
          uStack_a6 = 1;
        }
        local_ec = local_108;
        uVar7 = uStack_a0._2_1_;
        uVar8 = uStack_a0._3_1_;
        uVar9 = local_9c._2_1_;
        uVar10 = local_9c._3_1_;
      }
      local_9c._3_1_ = uVar10;
      local_9c._2_1_ = uVar9;
      uStack_a0._3_1_ = uVar8;
      uStack_a0._2_1_ = uVar7;
      uVar7 = uStack_a0._3_1_;
      uVar8 = uStack_a0._2_1_;
      uStack_a0 = uVar14;
      uVar9 = local_9c._2_1_;
      uVar10 = local_9c._3_1_;
      local_9c = uVar5;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar8;
      uStack_a0._3_1_ = uVar7;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      FUN_006666fc(&local_48,iVar13,iVar12);
      uStack_98 = uVar6;
      uVar6 = uStack_98;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      if (cVar23 == '\x02') {
        uStack_a0 = 0;
        uStack_a4 = 1;
        uStack_a3 = 0;
        uStack_a2 = 0;
        bStack_a1 = 0;
        local_a8 = 0;
        uStack_a6 = 0;
        uStack_a5 = 0;
      }
      else {
        uVar7 = uStack_a0._3_1_;
        uVar8 = uStack_a0._2_1_;
        uStack_a0 = uVar14;
        uVar9 = local_9c._2_1_;
        uVar10 = local_9c._3_1_;
        local_9c = uVar5;
        uVar14 = uStack_a0;
        uStack_a0._2_1_ = uVar8;
        uStack_a0._3_1_ = uVar7;
        uVar5 = local_9c;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        pcVar15 = (char *)FUN_01298504(0x12,1);
        uStack_98 = uVar6;
        uVar6 = uStack_98;
        uVar5 = local_9c;
        uVar14 = uStack_a0;
        local_9c = uVar5;
        if (pcVar15 == (char *)0x0) {
          uVar7 = uStack_a0._3_1_;
          uVar8 = uStack_a0._2_1_;
          uStack_a0 = uVar14;
          uVar9 = local_9c._2_1_;
          uVar10 = local_9c._3_1_;
          uVar14 = uStack_a0;
          uStack_a0._2_1_ = uVar8;
          uStack_a0._3_1_ = uVar7;
          uVar5 = local_9c;
          local_9c._2_1_ = uVar9;
          local_9c._3_1_ = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x12);
        }
        *pcVar15 = cVar23;
        uStack_a0 = 0;
        uStack_a0._2_1_ = 0;
        uStack_a0._3_1_ = 0;
        uStack_a4 = SUB41(pcVar15,0);
        uStack_a3 = (undefined1)((uint)pcVar15 >> 8);
        uStack_a2 = (undefined1)((uint)pcVar15 >> 0x10);
        bStack_a1 = (byte)((uint)pcVar15 >> 0x18);
        local_a8 = 1;
        uStack_a6 = 0;
        uStack_a5 = 0;
        uVar7 = local_9c._2_1_;
        uVar8 = local_9c._3_1_;
        uVar5 = local_9c;
        local_9c._2_1_ = uVar7;
        local_9c._3_1_ = uVar8;
        FUN_01bed4e2(pcVar15 + 1,&local_90,10);
        uStack_98 = uVar6;
        uVar6 = uStack_98;
        uVar5 = local_9c;
        pcVar15[0x11] = (char)local_f4;
        pcVar15[0x10] = (char)local_f0;
        pcVar15[0xf] = local_114;
        *(uint *)(pcVar15 + 0xb) = local_f8;
        uStack_a0 = 1;
      }
      uStack_98 = uVar6;
      local_9c = uVar5;
      uVar11 = uStack_98._1_1_;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      local_68 = CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8));
      local_64 = (undefined1 *)CONCAT13(bStack_a1,CONCAT12(uStack_a2,CONCAT11(uStack_a3,uStack_a4)))
      ;
      local_58 = puVar30[2];
      local_80 = local_48;
      uStack_7c = uStack_44;
      uStack_78 = uStack_40;
      local_54 = uStack_bc;
      uStack_50 = CONCAT13(uStack_50._3_1_,uStack_b8);
      local_5c = 0;
      local_6c = 0;
      local_70 = 1;
      local_74 = 0;
      iVar18 = 0;
      local_60 = uStack_a0;
      local_38 = local_68;
      local_34 = local_64;
      local_30 = uStack_a0;
      uVar7 = 0;
      uVar8 = 0;
      if (local_c8 != 0) {
        bVar29 = false;
        iVar26 = local_c8 * 0x34 + local_cc;
        iVar18 = local_cc;
        uVar14 = uStack_a0;
        uVar5 = local_9c;
        uVar6 = uStack_98;
        uStack_a0._2_1_ = 0;
        uStack_a0._3_1_ = 0;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        uStack_98._1_1_ = uVar11;
LAB_016569e4:
        uStack_98 = uVar6;
        local_9c = uVar5;
        uStack_a0 = uVar14;
        uVar11 = uStack_98._1_1_;
        uVar10 = local_9c._3_1_;
        uVar9 = local_9c._2_1_;
        uVar8 = uStack_a0._3_1_;
        uVar7 = uStack_a0._2_1_;
        iVar24 = iVar18;
        do {
          uStack_98._1_1_ = uVar11;
          local_9c._3_1_ = uVar10;
          local_9c._2_1_ = uVar9;
          uStack_a0._3_1_ = uVar8;
          uStack_a0._2_1_ = uVar7;
          uVar11 = uStack_98._1_1_;
          uVar10 = local_9c._3_1_;
          uVar9 = local_9c._2_1_;
          uVar8 = uStack_a0._3_1_;
          uVar7 = uStack_a0._2_1_;
          iVar18 = iVar24 + 0x34;
          uVar14 = uStack_a0;
          uVar5 = local_9c;
          uVar6 = uStack_98;
          if (iVar12 == *(int *)(iVar24 + 8)) {
            uStack_a0._2_1_ = uVar7;
            uStack_a0._3_1_ = uVar8;
            local_9c._2_1_ = uVar9;
            local_9c._3_1_ = uVar10;
            uStack_98._1_1_ = uVar11;
            iVar16 = thunk_FUN_01bed842(iVar13,*(undefined4 *)(iVar24 + 4),iVar12);
            uVar6 = uStack_98;
            uVar5 = local_9c;
            uVar14 = uStack_a0;
            uVar7 = uStack_a0._2_1_;
            uVar8 = uStack_a0._3_1_;
            uVar9 = local_9c._2_1_;
            uVar10 = local_9c._3_1_;
            uVar11 = uStack_98._1_1_;
            if (iVar16 == 0) goto LAB_01656a20;
          }
          uStack_98._1_1_ = uVar11;
          local_9c._3_1_ = uVar10;
          local_9c._2_1_ = uVar9;
          uStack_a0._3_1_ = uVar8;
          uStack_a0._2_1_ = uVar7;
          uStack_98 = uVar6;
          local_9c = uVar5;
          uStack_a0 = uVar14;
          uVar11 = uStack_98._1_1_;
          uVar10 = local_9c._3_1_;
          uVar9 = local_9c._2_1_;
          uVar8 = uStack_a0._3_1_;
          uVar7 = uStack_a0._2_1_;
          iVar24 = iVar18;
          if (iVar18 == iVar26) {
            uVar14 = uStack_a0;
            uVar5 = local_9c;
            uVar6 = uStack_98;
            if (bVar29) goto LAB_01656ad4;
            iVar18 = local_c8;
            break;
          }
        } while( true );
      }
      uStack_98._1_1_ = uVar11;
      local_9c._3_1_ = uVar10;
      local_9c._2_1_ = uVar9;
      uStack_a0._3_1_ = uVar8;
      uStack_a0._2_1_ = uVar7;
      uVar11 = uStack_98._1_1_;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      uVar14 = uStack_a0;
      uVar5 = local_9c;
      uVar6 = uStack_98;
      if (iVar18 == local_d0) {
        uStack_a0._2_1_ = uVar7;
        uStack_a0._3_1_ = uVar8;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        uStack_98._1_1_ = uVar11;
        FUN_007166d4(&local_d0);
        uVar6 = uStack_98;
        uVar5 = local_9c;
        uVar14 = uStack_a0;
        uVar7 = uStack_a0._2_1_;
        uVar8 = uStack_a0._3_1_;
        uVar9 = local_9c._2_1_;
        uVar10 = local_9c._3_1_;
        uVar11 = uStack_98._1_1_;
      }
      uStack_98._1_1_ = uVar11;
      local_9c._3_1_ = uVar10;
      local_9c._2_1_ = uVar9;
      uStack_a0._3_1_ = uVar8;
      uStack_a0._2_1_ = uVar7;
      uStack_98 = uVar6;
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar11 = uStack_98._1_1_;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      puVar17 = (undefined4 *)(iVar18 * 0x34 + local_cc);
      *puVar17 = local_80;
      puVar17[1] = uStack_7c;
      puVar17[2] = uStack_78;
      puVar17[3] = local_74;
      puVar17[4] = local_70;
      puVar17[5] = local_6c;
      puVar17[6] = local_68;
      puVar17[7] = local_64;
      puVar17[8] = local_60;
      puVar17[9] = local_5c;
      puVar17[10] = local_58;
      puVar17[0xb] = local_54;
      puVar17[0xc] = uStack_50;
      local_c8 = iVar18 + 1;
      puVar30 = (undefined4 *)*puVar30;
      uVar14 = uStack_a0;
      uVar5 = local_9c;
      uVar6 = uStack_98;
      uStack_a0._2_1_ = uVar7;
      uStack_a0._3_1_ = uVar8;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      uStack_98._1_1_ = uVar11;
      goto LAB_01656b2c;
    }
    FUN_01be7a78();
  }
LAB_01656558:
  *param_1 = local_d0;
  param_1[1] = local_cc;
  param_1[2] = local_c8;
  return;
LAB_01656a20:
  puVar17 = (undefined4 *)(iVar24 + 0x2c);
  if ((char)local_54 != '\0') {
    puVar17 = &local_54;
  }
  uVar7 = uStack_a0._3_1_;
  uVar8 = uStack_a0._2_1_;
  uStack_a0 = uVar14;
  local_9c = uVar5;
  uVar14 = uStack_a0;
  uStack_a0._2_1_ = uVar8;
  uStack_a0._3_1_ = uVar7;
  uVar5 = local_9c;
  local_9c._2_1_ = uVar9;
  local_9c._3_1_ = uVar10;
  FUN_01bed864((undefined4 *)(iVar24 + 0x2c),puVar17,7);
  uStack_98 = uVar6;
  uVar2 = local_60;
  puVar4 = local_64;
  uVar6 = uStack_98;
  uVar5 = local_9c;
  uVar14 = uStack_a0;
  iVar16 = *(int *)(iVar24 + 0x20);
  if ((uint)(*(int *)(iVar24 + 0x18) - iVar16) < local_60) {
    uVar7 = uStack_a0._3_1_;
    uVar8 = uStack_a0._2_1_;
    uStack_a0 = uVar14;
    uVar9 = local_9c._2_1_;
    uVar10 = local_9c._3_1_;
    local_9c = uVar5;
    uVar14 = uStack_a0;
    uStack_a0._2_1_ = uVar8;
    uStack_a0._3_1_ = uVar7;
    uVar5 = local_9c;
    local_9c._2_1_ = uVar9;
    local_9c._3_1_ = uVar10;
    FUN_006520b4((int *)(iVar24 + 0x18),iVar16,local_60,1,0x12);
    uStack_98 = uVar6;
    uVar6 = uStack_98;
    uVar5 = local_9c;
    uVar14 = uStack_a0;
    iVar16 = *(int *)(iVar24 + 0x20);
  }
  uStack_98 = uVar6;
  local_9c = uVar5;
  uStack_a0 = uVar14;
  uVar11 = uStack_98._1_1_;
  uVar10 = local_9c._3_1_;
  uVar9 = local_9c._2_1_;
  uVar8 = uStack_a0._3_1_;
  uVar7 = uStack_a0._2_1_;
  uVar14 = uStack_a0;
  uStack_a0._2_1_ = uVar7;
  uStack_a0._3_1_ = uVar8;
  uVar5 = local_9c;
  local_9c._2_1_ = uVar9;
  local_9c._3_1_ = uVar10;
  uVar6 = uStack_98;
  uStack_98._1_1_ = uVar11;
  FUN_01bed4e2(*(int *)(iVar24 + 0x1c) + iVar16 * 0x12,puVar4,uVar2 * 0x12);
  uVar6 = uStack_98;
  uVar5 = local_9c;
  uVar14 = uStack_a0;
  *(uint *)(iVar24 + 0x20) = iVar16 + uVar2;
  bVar29 = true;
  *(uint *)(iVar24 + 0x28) = local_58 | *(uint *)(iVar24 + 0x28);
  uVar7 = uStack_a0._2_1_;
  uVar8 = uStack_a0._3_1_;
  uVar9 = local_9c._2_1_;
  uVar10 = local_9c._3_1_;
  uVar11 = uStack_98._1_1_;
  if (iVar18 == iVar26) goto LAB_01656ad4;
  goto LAB_016569e4;
LAB_01656ad4:
  uStack_98._1_1_ = uVar11;
  local_9c._3_1_ = uVar10;
  local_9c._2_1_ = uVar9;
  uStack_a0._3_1_ = uVar8;
  uStack_a0._2_1_ = uVar7;
  uStack_98 = uVar6;
  local_9c = uVar5;
  uStack_a0 = uVar14;
  uVar11 = uStack_98._1_1_;
  uVar10 = local_9c._3_1_;
  uVar9 = local_9c._2_1_;
  uVar8 = uStack_a0._3_1_;
  uVar7 = uStack_a0._2_1_;
  puVar30 = (undefined4 *)*puVar30;
  uVar14 = uStack_a0;
  uStack_a0._2_1_ = uVar7;
  uStack_a0._3_1_ = uVar8;
  uVar5 = local_9c;
  local_9c._2_1_ = uVar9;
  local_9c._3_1_ = uVar10;
  uVar6 = uStack_98;
  uStack_98._1_1_ = uVar11;
  FUN_01657124(&local_80);
  uVar6 = uStack_98;
  uVar5 = local_9c;
  uVar14 = uStack_a0;
LAB_01656b2c:
  uStack_98 = uVar6;
  local_9c = uVar5;
  uStack_a0 = uVar14;
  uVar11 = uStack_98._1_1_;
  uVar10 = local_9c._3_1_;
  uVar9 = local_9c._2_1_;
  uVar8 = uStack_a0._3_1_;
  uVar7 = uStack_a0._2_1_;
  uVar14 = uStack_a0;
  uStack_a0._2_1_ = uVar7;
  uStack_a0._3_1_ = uVar8;
  uVar5 = local_9c;
  local_9c._2_1_ = uVar9;
  local_9c._3_1_ = uVar10;
  uVar6 = uStack_98;
  uStack_98._1_1_ = uVar11;
  FUN_0134bd64(local_e8,iVar13);
  uVar6 = uStack_98;
  uVar5 = local_9c;
  uVar14 = uStack_a0;
  iVar18 = local_c8;
  iVar12 = local_cc;
  unaff_r10 = iVar13;
  if (puVar30 == (undefined4 *)0x0) goto code_r0x01656b40;
  goto LAB_016565c4;
code_r0x01656b40:
  uVar7 = uStack_a0._3_1_;
  uVar8 = uStack_a0._2_1_;
  uStack_a0 = uVar14;
  uVar9 = local_9c._2_1_;
  uVar10 = local_9c._3_1_;
  local_9c = uVar5;
  uVar14 = uStack_a0;
  uStack_a0._2_1_ = uVar8;
  uStack_a0._3_1_ = uVar7;
  uVar5 = local_9c;
  local_9c._2_1_ = uVar9;
  local_9c._3_1_ = uVar10;
  FUN_01be7a78(local_c0);
  uVar5 = local_9c;
  uVar14 = uStack_a0;
  if (iVar18 != 0) {
    puVar30 = (undefined4 *)(iVar12 + 0x24);
    iVar18 = iVar18 * 0x34;
    do {
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar7;
      uStack_a0._3_1_ = uVar8;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      FUN_00666814(&local_38,puVar30[-8],puVar30[-7]);
      uVar2 = local_30;
      puVar4 = local_34;
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      if (local_38 != -0x80000000) {
        local_a8 = (ushort)local_38;
        uStack_a6 = (undefined1)((uint)local_38 >> 0x10);
        uStack_a5 = (undefined1)((uint)local_38 >> 0x18);
        uStack_a4 = SUB41(local_34,0);
        uStack_a3 = (undefined1)((uint)local_34 >> 8);
        uStack_a2 = (undefined1)((uint)local_34 >> 0x10);
        bStack_a1 = (byte)((uint)local_34 >> 0x18);
        uStack_a0._2_1_ = (undefined1)(local_30 >> 0x10);
        uStack_a0._3_1_ = (undefined1)(local_30 >> 0x18);
        local_9c._2_1_ = (undefined1)((uint)uStack_2c >> 0x10);
        local_9c._3_1_ = (undefined1)((uint)uStack_2c >> 0x18);
        uVar7 = uStack_a0._3_1_;
        uVar8 = uStack_a0._2_1_;
        uStack_a0 = local_30;
        uVar14 = uStack_a0;
        uStack_a0._2_1_ = uVar8;
        uStack_a0._3_1_ = uVar7;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_a8,&DAT_01d06c60,&DAT_01d06c50);
      }
      uVar7 = uStack_a0._3_1_;
      uVar8 = uStack_a0._2_1_;
      uStack_a0 = uVar14;
      uVar9 = local_9c._2_1_;
      uVar10 = local_9c._3_1_;
      local_9c = uVar5;
      uVar14 = uStack_a0;
      uStack_a0._2_1_ = uVar8;
      uStack_a0._3_1_ = uVar7;
      uVar5 = local_9c;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
      uVar27 = FUN_01be7ba0(local_34);
      uVar5 = local_9c;
      uVar14 = uStack_a0;
      *puVar30 = uVar27;
      *puVar4 = 0;
      if (uVar2 != 0) {
        uVar7 = uStack_a0._3_1_;
        uVar8 = uStack_a0._2_1_;
        uStack_a0 = uVar14;
        uVar9 = local_9c._2_1_;
        uVar10 = local_9c._3_1_;
        local_9c = uVar5;
        uVar14 = uStack_a0;
        uStack_a0._2_1_ = uVar8;
        uStack_a0._3_1_ = uVar7;
        uVar5 = local_9c;
        local_9c._2_1_ = uVar9;
        local_9c._3_1_ = uVar10;
        thunk_FUN_01be4678(puVar4);
        uVar5 = local_9c;
        uVar14 = uStack_a0;
      }
      local_9c = uVar5;
      uStack_a0 = uVar14;
      uVar10 = local_9c._3_1_;
      uVar9 = local_9c._2_1_;
      uVar8 = uStack_a0._3_1_;
      uVar7 = uStack_a0._2_1_;
      puVar30 = puVar30 + 0xd;
      iVar18 = iVar18 + -0x34;
      uVar14 = uStack_a0;
      uVar5 = local_9c;
      uStack_a0._2_1_ = uVar7;
      uStack_a0._3_1_ = uVar8;
      local_9c._2_1_ = uVar9;
      local_9c._3_1_ = uVar10;
    } while (iVar18 != 0);
  }
  goto LAB_01656558;
}

