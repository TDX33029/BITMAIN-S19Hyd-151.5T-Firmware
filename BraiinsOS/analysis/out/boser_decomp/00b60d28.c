// FUN_00b60d28 @ 00b60d28 size=4168 calls_out=28 calls_in=2
// strings: Antminer S19 Pro+ Hyd. | Antminer S19 Pro  | /etc/stock_model_id | boser_bosminer::modelopen/boser/boser-bosminer/src/model.rsevent open/boser/boser-bosminer/src/model.rs:171event open/boser/boser-bosminer/src/model.rs:183 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b60d28(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  uint ***pppuVar7;
  uint ****ppppuVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint ***pppuVar12;
  uint uVar13;
  int iVar14;
  uint ****ppppuVar15;
  code *pcVar16;
  uint ****ppppuVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  uint uVar21;
  undefined4 uVar22;
  uint **ppuVar23;
  undefined4 *puVar24;
  uint ****ppppuVar25;
  uint *puVar26;
  uint uVar27;
  uint **ppuVar28;
  undefined4 *puVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  longlong lVar32;
  uint local_150;
  int local_14c;
  uint ****local_130;
  uint ****ppppuStack_12c;
  uint ****ppppuStack_128;
  uint **local_124;
  uint ****local_120;
  uint ****local_11c;
  undefined1 *puStack_118;
  int local_114;
  uint local_110;
  uint uStack_10c;
  uint ***local_108;
  uint ***local_104;
  uint ****local_fc;
  uint ****local_f8;
  undefined4 *local_f4;
  uint ***local_f0;
  uint ****local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint ****local_c8;
  uint ****local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint ****local_b0;
  uint ****local_ac;
  undefined1 *local_a8;
  int local_a4;
  uint local_a0;
  uint uStack_9c;
  uint ***local_98;
  uint ***local_94;
  uint ****local_90;
  uint ****local_8c;
  uint ****local_88;
  uint ***pppuStack_84;
  uint ***local_80;
  uint ***pppuStack_7c;
  uint ***local_78;
  uint ***local_74;
  uint ****local_70;
  uint ****local_6c;
  uint ****local_68;
  uint ***local_64;
  uint ***local_60;
  uint ***pppuStack_5c;
  uint ***pppuStack_58;
  uint ***pppuStack_54;
  uint ****local_50;
  uint ***local_4c;
  uint ***local_48;
  uint ***local_44;
  uint ****local_40;
  uint ***local_3c;
  uint ***pppuStack_38;
  uint ***pppuStack_34;
  
  if (*param_3 == 2 && param_3[1] == 0) {
    local_50 = (uint ****)((int)param_2 + 0x1d);
    local_4c = (uint ***)FUN_007b3150;
    FUN_00664898(&local_130,&DAT_005bdd25,&local_50);
  }
  else {
    local_124 = (uint **)(param_3 + 0x37);
    if (*(char *)local_124 != '\x01') {
      uVar31 = thunk_FUN_01bee35a(local_124,0x2c0);
      puVar26 = (uint *)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
      if ((char)puVar26[4] == '\0') {
        FUN_019ae6ac(&local_50);
        *puVar26 = (uint)local_50;
        puVar26[1] = (uint)local_4c;
        puVar26[2] = (uint)local_48;
        puVar26[3] = (uint)local_44;
        *(undefined1 *)(puVar26 + 4) = 1;
      }
      local_98 = (uint ***)puVar26[2];
      local_a0 = *puVar26;
      uStack_9c = puVar26[1];
      local_80 = (uint ***)(local_a0 + 1);
      pppuStack_7c = (uint ***)(uStack_9c + (0xfffffffe < local_a0));
      local_94 = (uint ***)puVar26[3];
      *puVar26 = (uint)local_80;
      puVar26[1] = (uint)pppuStack_7c;
      local_b0 = (uint ****)&DAT_0056d238;
      local_ac = (uint ****)0x0;
      local_a8 = (undefined1 *)0x0;
      local_a4 = 0;
      *puVar26 = local_a0 + 2;
      puVar26[1] = uStack_9c + (0xfffffffd < local_a0);
      local_90 = (uint ****)&DAT_0056d238;
      local_8c = (uint ****)0x0;
      local_88 = (uint ****)0x0;
      pppuStack_84 = (uint ***)0x0;
      uVar19 = 0x16;
      local_78 = local_98;
      local_74 = local_94;
      uVar11 = thunk_FUN_01be5118(0x16);
      if (uVar11 != 0) {
        FUN_01bed4e2(uVar11,"Antminer S19 Pro+ Hyd.",0x16);
        local_48 = (uint ***)&DAT_00000016;
        local_50 = (uint ****)0x16;
        local_4c = (uint ***)uVar11;
        FUN_006e65a8(&local_90,&local_50);
        uVar19 = 0x15;
        pppuVar12 = (uint ***)thunk_FUN_01be5118(0x15);
        if (pppuVar12 != (uint ***)0x0) {
          FUN_01bed4e2(pppuVar12,"Antminer S19 Pro ",0x15);
          local_48 = (uint ***)&DAT_00000015;
          local_50 = (uint ****)&DAT_00000015;
          local_4c = pppuVar12;
          FUN_006e65a8(&local_90,&local_50);
          pppuVar7 = local_94;
          pppuVar12 = local_98;
          uVar21 = uStack_9c;
          uVar11 = local_a0;
          local_70 = local_90;
          local_6c = local_8c;
          local_68 = local_88;
          local_64 = pppuStack_84;
          local_60 = local_80;
          pppuStack_5c = pppuStack_7c;
          pppuStack_58 = local_78;
          pppuStack_54 = local_74;
          uVar31 = FUN_00b597f0(local_a0,uStack_9c,local_98,local_94,5);
          uVar18 = (uint)uVar31;
          if (local_a8 == (undefined1 *)0x0) {
            FUN_00b5f2d0(&local_b0,(int)((ulonglong)uVar31 >> 0x20),uVar11,uVar21,pppuVar12,pppuVar7
                        );
          }
          ppppuVar15 = local_ac;
          ppppuVar25 = local_b0;
          uVar11 = uVar18 >> 0x19;
          bVar5 = false;
          local_14c = 0;
          do {
            uVar18 = (uint)local_ac & uVar18;
            uVar21 = *(uint *)((int)local_b0 + uVar18);
            uVar27 = uVar21 ^ uVar11 * 0x1010101;
            uVar27 = ~uVar27 & 0x80808080 & uVar27 + 0xfefefeff;
            while (uVar27 != 0) {
              uVar13 = uVar27 >> 8;
              uVar1 = uVar27 >> 0x10;
              uVar2 = uVar27 >> 0x18;
              uVar3 = uVar27 << 0x18;
              uVar27 = uVar27 - 1 & uVar27;
              uVar13 = uVar18 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8
                                               | uVar2) >> 3) & (uint)local_ac;
              if (*(char *)(local_b0 + uVar13 * -10 + -10) == '\x05') {
                local_50 = (uint ****)local_b0[uVar13 * -10 + -8];
                local_4c = local_b0[uVar13 * -10 + -7];
                local_48 = local_b0[uVar13 * -10 + -6];
                local_44 = local_b0[uVar13 * -10 + -5];
                local_40 = (uint ****)local_b0[uVar13 * -10 + -4];
                local_3c = local_b0[uVar13 * -10 + -3];
                pppuStack_38 = local_b0[uVar13 * -10 + -2];
                pppuStack_34 = local_b0[uVar13 * -10 + -1];
                local_b0[uVar13 * -10 + -8] = (uint ***)local_70;
                local_b0[uVar13 * -10 + -7] = (uint ***)local_6c;
                local_b0[uVar13 * -10 + -6] = (uint ***)local_68;
                local_b0[uVar13 * -10 + -5] = local_64;
                local_b0[uVar13 * -10 + -4] = local_60;
                local_b0[uVar13 * -10 + -3] = pppuStack_5c;
                local_b0[uVar13 * -10 + -2] = pppuStack_58;
                local_b0[uVar13 * -10 + -1] = pppuStack_54;
                if (local_50 != (uint ****)0x0) {
                  FUN_0141fb8c(&local_50);
                }
                goto LAB_00b610c8;
              }
            }
            uVar27 = uVar21 & 0x80808080;
            if (bVar5) {
LAB_00b6103c:
              if ((uVar27 & uVar21 << 1) != 0) goto LAB_00b61734;
              bVar5 = true;
            }
            else {
              if (uVar27 != 0) {
                local_150 = uVar18 + ((uint)LZCOUNT((uVar21 & 0x80) << 0x18 |
                                                    (uVar27 >> 8 & 0xff) << 0x10 |
                                                    (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18)
                                     >> 3) & (uint)local_ac;
                goto LAB_00b6103c;
              }
              bVar5 = false;
            }
            local_14c = local_14c + 4;
            uVar18 = local_14c + uVar18;
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar19);
    }
    local_50 = (uint ****)&local_70;
    local_68 = (uint ****)0x0;
    local_70 = (uint ****)0x0;
    local_44 = (uint ***)0x0;
    local_6c = (uint ****)&DAT_00000001;
    local_48 = (uint ***)0x60000020;
    local_4c = (uint ***)&DAT_01c24ef0;
    iVar10 = FUN_01259514(*(undefined1 *)((int)param_3 + 0xdd),&local_50);
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_90,&DAT_01c24f08,&DAT_01d30334);
    }
    local_130 = local_70;
    ppppuStack_12c = local_6c;
    ppppuStack_128 = local_68;
  }
  goto LAB_00b61c18;
LAB_00b61440:
  uVar21 = (uint)ppppuVar15 & uVar21;
  uVar27 = *(uint *)((int)ppppuVar25 + uVar21);
  uVar18 = uVar27 ^ uVar11 * 0x1010101;
  uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
  while (uVar18 != 0) {
    uVar13 = uVar21 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                     (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
             (uint)ppppuVar15;
    uVar18 = uVar18 - 1 & uVar18;
    if (cVar9 == *(char *)(ppppuVar25 + uVar13 * -10 + -10)) {
      iVar10 = FUN_006e5bc0(ppppuVar25 + uVar13 * -10 + -8,(int)lVar32,ppppuVar17);
      if (iVar10 == 0) goto LAB_00b61970;
      if (DAT_01d50f88 < 3) {
        if (1 < DAT_01d4c2f0 - 1) {
          if (DAT_01d4c2f0 != 0) {
            cVar9 = FUN_01aaafa8(&DAT_01d4c2e8);
            if (cVar9 != '\0') goto LAB_00b61510;
          }
          goto LAB_00b617bc;
        }
LAB_00b61510:
        iVar10 = FUN_01aaa278(DAT_01d4c2e8);
        if (iVar10 == 0) goto LAB_00b617bc;
        if (*(uint ****)(DAT_01d4c2e8 + 0x20) == (uint ***)0x0) {
LAB_00b61d70:
          puVar20 = &DAT_01c12ff4;
          goto LAB_00b61d78;
        }
        local_48 = *(uint ****)(DAT_01d4c2e8 + 0x24);
        local_44 = *(uint ****)(DAT_01d4c2e8 + 0x28);
        local_6c = (uint ****)&local_c8;
        local_8c = (uint ****)&DAT_00000001;
        local_c4 = (uint ****)&local_b0;
        local_70 = (uint ****)&local_50;
        local_b0 = (uint ****)&local_dc;
        local_90 = (uint ****)&local_70;
        local_40 = (uint ****)0x0;
        local_68 = (uint ****)&DAT_01d2ea4c;
        local_c8 = (uint ****)&DAT_00592c42;
        local_ac = (uint ****)&DAT_0132b6a0;
        local_88 = (uint ****)(DAT_01d4c2e8 + 0x1c);
        local_50 = *(uint *****)(DAT_01d4c2e8 + 0x1c);
        local_4c = *(uint ****)(DAT_01d4c2e8 + 0x20);
        FUN_00b620d0(&local_90);
      }
      else {
LAB_00b617bc:
        iVar10 = DAT_01d4c2e8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_b8 = *(undefined4 *)(DAT_01d4c2e8 + 0x14);
          local_b4 = *(undefined4 *)(DAT_01d4c2e8 + 0x18);
          local_bc = 3;
          DataMemoryBarrier(0xb);
          puVar24 = DAT_01d4edc8;
          pcVar6 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
            pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar14 = (*(code *)puVar24[3])(pcVar6,&local_bc);
          if (iVar14 != 0) {
            if (*(uint ****)(DAT_01d4c2e8 + 0x20) == (uint ***)0x0) goto LAB_00b61d70;
            local_6c = (uint ****)&local_c8;
            local_48 = *(uint ****)(DAT_01d4c2e8 + 0x24);
            local_44 = *(uint ****)(DAT_01d4c2e8 + 0x28);
            local_70 = (uint ****)&local_50;
            local_90 = (uint ****)&local_70;
            local_8c = (uint ****)&DAT_00000001;
            local_c4 = (uint ****)&local_b0;
            local_b0 = (uint ****)&local_dc;
            local_40 = (uint ****)0x0;
            local_68 = (uint ****)&DAT_01d2ea4c;
            local_c8 = (uint ****)&DAT_00592c42;
            local_ac = (uint ****)&DAT_0132b6a0;
            local_88 = (uint ****)(DAT_01d4c2e8 + 0x1c);
            local_50 = *(uint *****)(DAT_01d4c2e8 + 0x1c);
            local_4c = *(uint ****)(DAT_01d4c2e8 + 0x20);
            FUN_01aaa328(iVar10,pcVar6,puVar24[4],&local_bc,&local_90);
          }
        }
      }
      if (lVar32 < 0) {
        uVar19 = 0;
LAB_00b61908:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar19,ppppuVar17);
      }
      if (ppppuVar17 == (uint ****)0x0) {
        ppppuVar15 = (uint ****)&DAT_00000001;
        ppppuVar25 = (uint ****)0x0;
      }
      else {
        uVar19 = 1;
        ppppuVar15 = (uint ****)FUN_01298504(ppppuVar17,1);
        if (ppppuVar15 == (uint ****)0x0) goto LAB_00b61908;
        ppppuVar25 = ppppuVar17;
      }
      FUN_01bed4e2(ppppuVar15,(int)lVar32,ppppuVar17);
      local_130 = ppppuVar25;
      ppppuStack_12c = ppppuVar15;
      ppppuStack_128 = ppppuVar17;
      goto LAB_00b61bf8;
    }
  }
  if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) goto LAB_00b61970;
  iVar10 = iVar10 + 4;
  uVar21 = uVar21 + iVar10;
  goto LAB_00b61440;
LAB_00b61970:
  if (DAT_01d50f88 < 4) {
    if (1 < DAT_01d4c2fc - 1) {
      if (DAT_01d4c2fc != 0) {
        cVar9 = FUN_01aaafa8(&DAT_01d4c2f4);
        if (cVar9 != '\0') goto LAB_00b61990;
      }
      goto LAB_00b61a70;
    }
LAB_00b61990:
    iVar10 = FUN_01aaa278(DAT_01d4c2f4);
    if (iVar10 == 0) goto LAB_00b61a70;
    puVar24 = (undefined4 *)(DAT_01d4c2f4 + 0x1c);
    if (*(uint *****)(DAT_01d4c2f4 + 0x20) == (uint ****)0x0) goto LAB_00b61d64;
    local_68 = *(uint *****)(DAT_01d4c2f4 + 0x24);
    local_64 = *(uint ****)(DAT_01d4c2f4 + 0x28);
    local_60 = (uint ***)0x0;
    local_70 = (uint ****)*puVar24;
    local_6c = *(uint *****)(DAT_01d4c2f4 + 0x20);
    FUN_0125b7e4(&local_90,*(undefined1 *)((int)param_3 + 0xdd));
    local_f8 = (uint ****)&local_50;
    local_ac = (uint ****)&local_fc;
    local_b0 = (uint ****)&local_70;
    local_c8 = (uint ****)&local_b0;
    local_48 = &local_124;
    local_50 = (uint ****)&local_dc;
    local_c4 = (uint ****)&DAT_00000001;
    local_3c = (uint ***)&LAB_00632348;
    local_44 = (uint ***)&LAB_00b68818;
    local_4c = (uint ***)&DAT_0132b6a0;
    local_fc = (uint ****)&DAT_005b737f;
    local_a8 = &DAT_01d2ea4c;
    local_c0 = puVar24;
    local_40 = (uint ****)&local_90;
    FUN_00b61fd8(&local_c8);
LAB_00b61bdc:
    FUN_019bb7e0(local_90,local_8c);
  }
  else {
LAB_00b61a70:
    iVar10 = DAT_01d4c2f4;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_d0 = *(undefined4 *)(DAT_01d4c2f4 + 0x14);
      local_cc = *(undefined4 *)(DAT_01d4c2f4 + 0x18);
      local_d4 = 2;
      DataMemoryBarrier(0xb);
      puVar24 = DAT_01d4edc8;
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar14 = (*(code *)puVar24[3])(pcVar6,&local_d4);
      if (iVar14 != 0) {
        puVar29 = (undefined4 *)(DAT_01d4c2f4 + 0x1c);
        if (*(uint *****)(DAT_01d4c2f4 + 0x20) == (uint ****)0x0) {
LAB_00b61d64:
          puVar20 = &DAT_01c12fe4;
LAB_00b61d78:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar20);
        }
        local_68 = *(uint *****)(DAT_01d4c2f4 + 0x24);
        local_64 = *(uint ****)(DAT_01d4c2f4 + 0x28);
        local_60 = (uint ***)0x0;
        local_70 = (uint ****)*puVar29;
        local_6c = *(uint *****)(DAT_01d4c2f4 + 0x20);
        FUN_0125b7e4(&local_90,*(undefined1 *)((int)param_3 + 0xdd));
        local_f8 = (uint ****)&local_50;
        local_ac = (uint ****)&local_fc;
        local_b0 = (uint ****)&local_70;
        local_c8 = (uint ****)&local_b0;
        local_48 = &local_124;
        local_50 = (uint ****)&local_dc;
        local_c4 = (uint ****)&DAT_00000001;
        local_3c = (uint ***)&LAB_00632348;
        local_44 = (uint ***)&LAB_00b68818;
        local_4c = (uint ***)&DAT_0132b6a0;
        local_fc = (uint ****)&DAT_005b737f;
        local_a8 = &DAT_01d2ea4c;
        local_c0 = puVar29;
        local_40 = (uint ****)&local_90;
        FUN_01aaa328(iVar10,pcVar6,puVar24[4],&local_d4,&local_c8);
        goto LAB_00b61bdc;
      }
    }
  }
  FUN_0125b7e4(&local_130,*(undefined1 *)((int)param_3 + 0xdd));
LAB_00b61bf8:
  FUN_019bb7e0(ppppuVar8,pppuVar12);
  goto LAB_00b61c04;
LAB_00b61734:
  uVar11 = (uint)*(char *)((int)local_b0 + local_150);
  if (-1 < (int)uVar11) {
    uVar11 = (uint)*local_b0 & 0x80808080;
    uVar21 = LZCOUNT(((uint)*local_b0 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)local_b0 + (uVar21 >> 3));
    local_150 = uVar21 >> 3;
  }
  FUN_01bed4e2((uint)&local_50 | 7,&local_70,0x20);
  bVar4 = (byte)((ulonglong)uVar31 >> 0x18) >> 1;
  *(byte *)((int)ppppuVar25 + local_150) = bVar4;
  *(byte *)((int)ppppuVar25 + ((uint)ppppuVar15 & local_150 - 4) + 4) = bVar4;
  *(undefined1 *)(ppppuVar25 + local_150 * -10 + -10) = 5;
  local_a8 = local_a8 + -(uVar11 & 1);
  local_a4 = local_a4 + 1;
  FUN_01bed4e2((int)ppppuVar25 + local_150 * -0x28 + -0x27,&local_50,0x27);
LAB_00b610c8:
  local_120 = local_b0;
  local_11c = local_ac;
  puStack_118 = local_a8;
  local_114 = local_a4;
  local_110 = local_a0;
  uStack_10c = uStack_9c;
  local_108 = local_98;
  local_104 = local_94;
  if (local_a4 != 0) {
    cVar9 = *(char *)((int)param_3 + 0xdd);
    uVar21 = FUN_00b597f0(local_a0,uStack_9c,local_98,local_94,cVar9);
    ppppuVar15 = local_11c;
    ppppuVar25 = local_120;
    uVar11 = uVar21 >> 0x19;
    iVar10 = 0;
    do {
      uVar21 = (uint)local_11c & uVar21;
      uVar27 = *(uint *)((int)local_120 + uVar21);
      uVar18 = uVar27 ^ uVar11 * 0x1010101;
      uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
      while (uVar18 != 0) {
        uVar13 = uVar18 >> 8;
        uVar1 = uVar18 >> 0x10;
        uVar2 = uVar18 >> 0x18;
        uVar3 = uVar18 << 0x18;
        uVar18 = uVar18 - 1 & uVar18;
        if (cVar9 == *(char *)(local_120 +
                              (uVar21 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 |
                                                       (uVar1 & 0xff) << 8 | uVar2) >> 3) &
                              (uint)local_11c) * -10 + -10)) {
          FUN_019a5900(&local_50,"/etc/stock_model_id",0x13);
          pppuVar7 = local_48;
          pppuVar12 = local_4c;
          ppppuVar8 = local_50;
          if (local_50 != (uint ****)&DAT_80000000) {
            lVar32 = FUN_013245a0(local_4c,local_48);
            ppppuVar17 = (uint ****)((ulonglong)lVar32 >> 0x20);
            cVar9 = *(char *)((int)param_3 + 0xdd);
            local_dc = lVar32;
            uVar21 = FUN_00b597f0(local_a0,uStack_9c,local_98,local_94,cVar9);
            uVar11 = uVar21 >> 0x19;
            iVar10 = 0;
            goto LAB_00b61440;
          }
          if ((char)local_4c == '\x03') {
            ppuVar23 = *local_48;
            ppuVar28 = local_48[1];
            pcVar16 = (code *)*ppuVar28;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(ppuVar23);
            }
            if (ppuVar28[1] != (uint *)0x0) {
              thunk_FUN_01be4678(ppuVar23);
            }
            thunk_FUN_01be4678(pppuVar7);
          }
          if ((DAT_01d50f88 < 4) &&
             (((DAT_01d4c308 - 1 < 2 ||
               ((DAT_01d4c308 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4c300), cVar9 != '\0')))) &&
              (iVar10 = FUN_01aaa278(DAT_01d4c300), iVar10 != 0)))) {
            puVar24 = (undefined4 *)(DAT_01d4c300 + 0x1c);
            if (*(uint ****)(DAT_01d4c300 + 0x20) == (uint ***)0x0) {
LAB_00b61d48:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13004);
            }
            local_48 = *(uint ****)(DAT_01d4c300 + 0x24);
            local_44 = *(uint ****)(DAT_01d4c300 + 0x28);
            local_40 = (uint ****)0x0;
            local_50 = (uint ****)*puVar24;
            local_4c = *(uint ****)(DAT_01d4c300 + 0x20);
            FUN_0125b7e4(&local_b0,*(undefined1 *)((int)param_3 + 0xdd));
            local_ec = (uint ****)&local_70;
            local_c4 = &local_f0;
            local_c8 = (uint ****)&local_50;
            local_fc = (uint ****)&local_c8;
            local_f8 = (uint ****)&DAT_00000001;
            local_64 = (uint ***)&LAB_00632348;
            local_6c = (uint ****)&DAT_0132b6a0;
            local_70 = (uint ****)&DAT_01c13014;
            local_f0 = (uint ***)&DAT_0059b742;
            local_c0 = (undefined4 *)&DAT_01d2ea4c;
            local_f4 = puVar24;
            local_68 = (uint ****)&local_b0;
            FUN_01aaaecc(DAT_01d4c300,&local_fc);
            iVar10 = DAT_01d4c300;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_8c = *(uint *****)(DAT_01d4c300 + 0x14);
              local_88 = *(uint *****)(DAT_01d4c300 + 0x18);
              local_90 = (uint ****)0x2;
              DataMemoryBarrier(0xb);
              puVar24 = DAT_01d4edc8;
              pcVar6 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar24 = &DAT_01cfc5e0;
                pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)puVar24[3])(pcVar6,&local_90);
              if (iVar14 != 0) {
                FUN_01aaa328(iVar10,pcVar6,puVar24[4],&local_90,&local_fc);
              }
            }
            ppppuVar25 = local_b0;
            ppppuVar15 = local_ac;
          }
          else {
            iVar10 = DAT_01d4c300;
            if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 2)) goto LAB_00b61720;
            local_e4 = *(undefined4 *)(DAT_01d4c300 + 0x14);
            local_e0 = *(undefined4 *)(DAT_01d4c300 + 0x18);
            local_e8 = 2;
            DataMemoryBarrier(0xb);
            puVar24 = DAT_01d4edc8;
            pcVar6 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar24 = &DAT_01cfc5e0;
              pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar14 = (*(code *)puVar24[3])(pcVar6,&local_e8);
            if (iVar14 == 0) goto LAB_00b61720;
            puVar29 = (undefined4 *)(DAT_01d4c300 + 0x1c);
            if (*(uint ****)(DAT_01d4c300 + 0x20) == (uint ***)0x0) goto LAB_00b61d48;
            local_48 = *(uint ****)(DAT_01d4c300 + 0x24);
            local_44 = *(uint ****)(DAT_01d4c300 + 0x28);
            local_40 = (uint ****)0x0;
            local_50 = (uint ****)*puVar29;
            local_4c = *(uint ****)(DAT_01d4c300 + 0x20);
            FUN_0125b7e4(&local_90,*(undefined1 *)((int)param_3 + 0xdd));
            local_f8 = (uint ****)&local_70;
            local_ac = (uint ****)&local_fc;
            local_b0 = (uint ****)&local_50;
            local_c8 = (uint ****)&local_b0;
            local_c4 = (uint ****)&DAT_00000001;
            local_64 = (uint ***)&LAB_00632348;
            local_6c = (uint ****)&DAT_0132b6a0;
            local_70 = (uint ****)&DAT_01c13014;
            local_fc = (uint ****)&DAT_0059b742;
            local_a8 = &DAT_01d2ea4c;
            local_c0 = puVar29;
            local_68 = (uint ****)&local_90;
            FUN_01aaa328(iVar10,pcVar6,puVar24[4],&local_e8,&local_c8);
            ppppuVar25 = local_90;
            ppppuVar15 = local_8c;
          }
          FUN_019bb7e0(ppppuVar25,ppppuVar15);
          goto LAB_00b61720;
        }
      }
      if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
      iVar10 = iVar10 + 4;
      uVar21 = uVar21 + iVar10;
    } while( true );
  }
LAB_00b61720:
  FUN_0125b7e4(&local_130,*(undefined1 *)((int)param_3 + 0xdd));
LAB_00b61c04:
  FUN_00b5f20c(&local_120);
LAB_00b61c18:
  uVar19 = param_2[1];
  uVar22 = param_2[2];
  uVar30 = param_2[3];
  *(undefined4 *)(param_1 + 0x158) = *param_2;
  *(undefined4 *)(param_1 + 0x15c) = uVar19;
  *(undefined4 *)(param_1 + 0x160) = uVar22;
  *(undefined4 *)(param_1 + 0x164) = uVar30;
  uVar19 = param_2[5];
  uVar22 = param_2[6];
  uVar30 = param_2[7];
  *(undefined4 *)(param_1 + 0x168) = param_2[4];
  *(undefined4 *)(param_1 + 0x16c) = uVar19;
  *(undefined4 *)(param_1 + 0x170) = uVar22;
  *(undefined4 *)(param_1 + 0x174) = uVar30;
  FUN_01bed4e2(param_1,param_3,0x158);
  *(uint *****)(param_1 + 0x178) = local_130;
  *(uint *****)(param_1 + 0x17c) = ppppuStack_12c;
  *(uint *****)(param_1 + 0x180) = ppppuStack_128;
  return;
}

