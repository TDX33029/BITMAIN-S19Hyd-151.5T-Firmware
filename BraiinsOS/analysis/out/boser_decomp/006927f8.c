// FUN_006927f8 @ 006927f8 size=9532 calls_out=29 calls_in=1
// strings: braiins-manager-agent/ | BUG: cannot evict User-Agent (map is empty despite being at cap).event open/utils-rs/api-logging/src/api_usage/state.rs:124event open/utils-rs/api-logging/src/api_usage/state.rs:181event open/utils-rs/api-logging/src/api_usage/state.rs:168event open/utils-rs/api-logging/src/api_usage/state.rs:105event open/utils-rs/api-logging/src/api_usage/state.rs:260event open/utils-rs/api-logging/src/api_usage/state.rs:250event open/utils-rs/api-logging/src/api_usage/state.rs:218event open/utils-rs/api-logging/src/api_usage/state.rs:245 | api_logging::api_usage::stateopen/utils-rs/api-logging/src/api_usage/state.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::api_usage::stateopen/utils-rs/api-logging/src/api_usage/state.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006927f8(uint *param_1,uint *******param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint ******ppppppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint ******ppppppuVar12;
  uint uVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined *puVar21;
  int *piVar22;
  uint *puVar23;
  uint **ppuVar24;
  int iVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  undefined4 *puVar28;
  uint *******pppppppuVar29;
  uint *puVar30;
  uint ******ppppppuVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint *******pppppppuVar35;
  uint ******ppppppuVar36;
  uint *******pppppppuVar37;
  uint *puVar38;
  uint uVar39;
  int iVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  int local_184;
  int local_16c;
  uint *******local_160;
  uint *******local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint ******local_148;
  uint *******local_144;
  undefined8 local_140;
  uint *******local_138;
  uint local_134;
  uint *******local_130;
  undefined1 *local_12c;
  uint ******local_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint ******local_cc;
  uint *******local_c8;
  int local_c4;
  uint ******local_c0;
  int local_bc;
  uint ******local_b8;
  int local_b4;
  uint *******local_b0;
  uint *******local_ac;
  uint *******local_a8;
  undefined1 *local_a4;
  uint *******local_a0;
  uint ******local_9c;
  uint *local_98;
  code *local_94;
  undefined8 local_78;
  uint *******local_70;
  uint *******local_6c;
  uint *******local_68;
  uint *******local_64;
  uint *******local_60;
  undefined4 *local_5c;
  uint ******local_58;
  uint *******local_54;
  uint *******local_50;
  uint *******local_4c;
  uint *******local_48;
  code *local_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  uint *******local_30;
  uint *******local_2c;
  uint *******local_28;
  
  FUN_0128e808();
  ppppppuVar31 = param_2[1];
  pppppppuVar37 = (uint *******)param_2[2];
  for (iVar25 = 0; iVar25 != 0x10; iVar25 = iVar25 + 8) {
    if ((*(uint ********)((int)&DAT_01c050a4 + iVar25) <= pppppppuVar37) &&
       (iVar7 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c050a0 + iVar25),ppppppuVar31),
       iVar7 == 0)) {
      pppppppuVar26 = (uint *******)0x0;
      goto LAB_00692874;
    }
  }
  goto LAB_00692934;
LAB_00693148:
  if (pppppppuVar26 == (uint *******)0x0) {
LAB_0069329c:
    local_c4 = -0x80000000;
  }
  else {
    FUN_006666fc(&local_c4,pppppppuVar26[1],pppppppuVar26[2]);
    iVar25 = local_c4;
    if (local_c4 != -0x80000000) {
      local_b4 = local_bc;
      local_b8 = local_c0;
      uVar16 = FUN_01a60560(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],local_c0,local_bc);
      uVar19 = uVar16 >> 0x19;
      uVar32 = param_1[8];
      uVar34 = param_1[9];
      local_184 = 0;
      while( true ) {
        uVar16 = uVar34 & uVar16;
        uVar8 = *(uint *)(uVar32 + uVar16);
        uVar39 = uVar8 ^ uVar19 * 0x1010101;
        uVar39 = ~uVar39 & 0x80808080 & uVar39 + 0xfefefeff;
        while (uVar39 != 0) {
          uVar9 = uVar39 >> 8;
          uVar13 = uVar39 >> 0x10;
          uVar1 = uVar39 >> 0x18;
          uVar2 = uVar39 << 0x18;
          uVar39 = uVar39 - 1 & uVar39;
          uVar9 = uVar16 + ((uint)LZCOUNT(uVar2 | (uVar9 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 |
                                          uVar1) >> 3) & uVar34;
          iVar7 = (uVar32 - 0x48) + uVar9 * -0x48;
          if ((local_bc == *(int *)(iVar7 + 8)) &&
             (iVar7 = thunk_FUN_01bed842(local_c0,*(undefined4 *)(iVar7 + 4),local_bc), iVar7 == 0))
          {
            iVar7 = ((int)(uVar9 * 0x48) >> 3) * 0x38e38e39;
            puVar38 = (uint *)(uVar32 + (iVar7 - 4U & uVar34));
            uVar16 = *puVar38;
            uVar19 = *(uint *)(uVar32 + iVar7) & 0x80808080 & *(uint *)(uVar32 + iVar7) << 1;
            uVar16 = ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                    (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) +
                     ((uint)LZCOUNT(uVar16 & 0x80808080 & uVar16 << 1) >> 3);
            uVar19 = 0x80;
            if (uVar16 < 4) {
              uVar19 = param_1[10];
            }
            iVar40 = uVar32 + uVar9 * -0x48;
            if (uVar16 < 4) {
              param_1[10] = uVar19 + 1;
              uVar19 = 0xff;
            }
            *(char *)(uVar32 + iVar7) = (char)uVar19;
            uVar16 = param_1[0xb];
            *(char *)(puVar38 + 1) = (char)uVar19;
            iVar7 = *(int *)(iVar40 + -0x48);
            pppppppuVar26 = *(uint ********)(iVar40 + -0x38);
            param_1[0xb] = uVar16 - 1;
            if (iVar7 == -0x80000000) goto LAB_00693600;
            local_140._0_4_ = *(uint ********)(iVar40 + -0x34);
            local_140._4_4_ = *(uint ********)(iVar40 + -0x30);
            local_138 = *(uint ********)(iVar40 + -0x2c);
            local_134 = *(uint *)(iVar40 + -0x28);
            local_130 = *(uint ********)(iVar40 + -0x24);
            local_12c = *(undefined1 **)(iVar40 + -0x20);
            local_128 = *(uint *******)(iVar40 + -0x1c);
            uStack_124 = *(uint *)(iVar40 + -0x18);
            local_120 = *(uint *)(iVar40 + -0x14);
            uStack_11c = *(uint *)(iVar40 + -0x10);
            uStack_118 = *(uint *)(iVar40 + -0xc);
            uStack_114 = *(uint *)(iVar40 + -8);
            uStack_110 = *(uint *)(iVar40 + -4);
            FUN_019bb7e0(iVar7,*(undefined4 *)(iVar40 + -0x44));
            if (pppppppuVar26 == (uint *******)0x0) goto LAB_00693600;
            puVar38 = (uint *)((uint)&local_b0 | 4);
            *puVar38 = (uint)(uint *******)local_140;
            puVar38[1] = (uint)local_140._4_4_;
            puVar38[2] = (uint)local_138;
            puVar38[3] = local_134;
            puVar38[4] = (uint)local_130;
            puVar38[5] = (uint)local_12c;
            puVar38[6] = (uint)local_128;
            puVar38[7] = uStack_124;
            puVar38[8] = local_120;
            puVar38[9] = uStack_11c;
            puVar38[10] = uStack_118;
            puVar38[0xb] = uStack_114;
            puVar38[0xc] = uStack_110;
            pppppppuVar27 = pppppppuVar26 + 1;
            uVar19 = ~(uint)*pppppppuVar26 & 0x80808080;
            local_78 = 0;
            puVar33 = local_a4;
            local_b0 = pppppppuVar26;
            goto LAB_00693550;
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        local_184 = local_184 + 4;
        uVar16 = uVar16 + local_184;
      }
LAB_00693600:
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4b5d4 - 1 < 2 ||
           ((DAT_01d4b5d4 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b5cc), cVar6 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4b5cc), iVar7 != 0)))) {
        if (*(uint ********)(DAT_01d4b5cc + 0x20) == (uint *******)0x0) {
LAB_00694e14:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04ef0);
        }
        local_a8 = *(uint ********)(DAT_01d4b5cc + 0x24);
        local_a4 = *(undefined1 **)(DAT_01d4b5cc + 0x28);
        local_38 = (uint *******)(DAT_01d4b5cc + 0x1c);
        local_b0 = (uint *******)*local_38;
        local_2c = (uint *******)&local_70;
        local_30 = (uint *******)&local_b0;
        local_3c = (uint *******)&DAT_00000001;
        local_6c = (uint *******)&local_64;
        local_40 = (uint *******)&local_30;
        local_64 = &local_b8;
        local_a0 = (uint *******)0x0;
        local_28 = (uint *******)&DAT_01d2ea4c;
        local_70 = (uint *******)&DAT_00596b9c;
        local_60 = (uint *******)&DAT_0132b6a0;
        local_ac = *(uint ********)(DAT_01d4b5cc + 0x20);
        FUN_01aaaecc(DAT_01d4b5cc,&local_40);
        iVar7 = DAT_01d4b5cc;
        local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
        local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
        if (DAT_01d51ae9 == '\0') {
          local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
          local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
          if (DAT_01d51b00 != 0) {
            local_4c = *(uint ********)(DAT_01d4b5cc + 0x14);
            local_48 = *(uint ********)(DAT_01d4b5cc + 0x18);
            local_50 = (uint *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar28 = DAT_01d4edc8;
            pcVar18 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar28 = &DAT_01cfc5e0;
              pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar40 = (*(code *)puVar28[3])(pcVar18,&local_50);
            local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
            local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
            if (iVar40 != 0) {
              local_140._0_4_ = local_50;
              local_140._4_4_ = local_4c;
              local_138 = local_48;
              FUN_01aaa328(iVar7,pcVar18,puVar28[4],&local_140,&local_40);
              local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
              local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
            }
          }
        }
      }
      else {
        iVar7 = DAT_01d4b5cc;
        local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
        local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
        if (DAT_01d51ae9 == '\0') {
          local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
          local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
          if (DAT_01d51b00 != 0) {
            local_3c = *(uint ********)(DAT_01d4b5cc + 0x14);
            local_38 = *(uint ********)(DAT_01d4b5cc + 0x18);
            local_40 = (uint *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar28 = DAT_01d4edc8;
            pcVar18 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar28 = &DAT_01cfc5e0;
              pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar40 = (*(code *)puVar28[3])(pcVar18,&local_40);
            if (iVar40 != 0) {
              local_28 = (uint *******)(DAT_01d4b5cc + 0x1c);
              if (*(uint ********)(DAT_01d4b5cc + 0x20) == (uint *******)0x0) goto LAB_00694e14;
              local_4c = (uint *******)&local_70;
              local_a8 = *(uint ********)(DAT_01d4b5cc + 0x24);
              local_a4 = *(undefined1 **)(DAT_01d4b5cc + 0x28);
              local_50 = (uint *******)&local_b0;
              local_30 = (uint *******)&local_50;
              local_a0 = (uint *******)0x0;
              local_2c = (uint *******)&DAT_00000001;
              local_6c = (uint *******)&local_64;
              local_48 = (uint *******)&DAT_01d2ea4c;
              local_70 = (uint *******)&DAT_00596b9c;
              local_60 = (uint *******)&DAT_0132b6a0;
              local_64 = &local_b8;
              local_140._0_4_ = local_40;
              local_140._4_4_ = local_3c;
              local_138 = local_38;
              local_b0 = (uint *******)*local_28;
              local_ac = *(uint ********)(DAT_01d4b5cc + 0x20);
              FUN_01aaa328(iVar7,pcVar18,puVar28[4],&local_140,&local_30);
            }
          }
        }
      }
      goto LAB_00694354;
    }
  }
  if (((DAT_01d50f88 < 5) &&
      ((DAT_01d4b5bc - 1 < 2 ||
       ((DAT_01d4b5bc != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b5b4), cVar6 != '\0')))))) &&
     (iVar25 = FUN_01aaa278(DAT_01d4b5b4), iVar25 != 0)) {
    if (*(uint ********)(DAT_01d4b5b4 + 0x20) == (uint *******)0x0) {
LAB_00694dc4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04e00);
    }
    local_2c = (uint *******)&local_64;
    local_a8 = *(uint ********)(DAT_01d4b5b4 + 0x24);
    local_a4 = *(undefined1 **)(DAT_01d4b5b4 + 0x28);
    local_38 = (uint *******)(DAT_01d4b5b4 + 0x1c);
    local_b0 = (uint *******)*local_38;
    local_30 = (uint *******)&local_b0;
    local_40 = (uint *******)&local_30;
    local_a0 = (uint *******)0x0;
    local_3c = (uint *******)&DAT_00000001;
    local_60 = (uint *******)0x83;
    local_28 = (uint *******)&DAT_01d2ea4c;
    local_64 = (uint *******)0x3d4e44;
    local_ac = *(uint ********)(DAT_01d4b5b4 + 0x20);
    FUN_01aaaecc(DAT_01d4b5b4,&local_40);
    iVar25 = DAT_01d4b5b4;
    local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
    local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
    if (DAT_01d51ae9 == '\0') {
      local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
      local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
      if (DAT_01d51b00 != 0) {
        local_4c = *(uint ********)(DAT_01d4b5b4 + 0x14);
        local_48 = *(uint ********)(DAT_01d4b5b4 + 0x18);
        local_50 = (uint *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar28 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar28 = &DAT_01cfc5e0;
        }
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar28[3])(pcVar18,&local_50);
        local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
        local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
        if (iVar7 != 0) {
          local_140._0_4_ = local_50;
          local_140._4_4_ = local_4c;
          local_138 = local_48;
          FUN_01aaa328(iVar25,pcVar18,puVar28[4],&local_140,&local_40);
          local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
          local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
        }
      }
    }
  }
  else {
    iVar25 = DAT_01d4b5b4;
    local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
    local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
    if (DAT_01d51ae9 == '\0') {
      local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
      local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
      if (DAT_01d51b00 != 0) {
        local_3c = *(uint ********)(DAT_01d4b5b4 + 0x14);
        local_38 = *(uint ********)(DAT_01d4b5b4 + 0x18);
        local_40 = (uint *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar28 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar28 = &DAT_01cfc5e0;
        }
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar28[3])(pcVar18,&local_40);
        if (iVar7 != 0) {
          local_28 = (uint *******)(DAT_01d4b5b4 + 0x1c);
          if (*(uint ********)(DAT_01d4b5b4 + 0x20) == (uint *******)0x0) goto LAB_00694dc4;
          local_4c = (uint *******)&local_64;
          local_a8 = *(uint ********)(DAT_01d4b5b4 + 0x24);
          local_a4 = *(undefined1 **)(DAT_01d4b5b4 + 0x28);
          local_50 = (uint *******)&local_b0;
          local_30 = (uint *******)&local_50;
          local_2c = (uint *******)&DAT_00000001;
          local_a0 = (uint *******)0x0;
          local_48 = (uint *******)&DAT_01d2ea4c;
          local_60 = (uint *******)0x83;
          local_64 = (uint *******)0x3d4e44;
          local_140._0_4_ = local_40;
          local_140._4_4_ = local_3c;
          local_138 = local_38;
          local_b0 = (uint *******)*local_28;
          local_ac = *(uint ********)(DAT_01d4b5b4 + 0x20);
          FUN_01aaa328(iVar25,pcVar18,puVar28[4],&local_140,&local_30);
        }
      }
    }
  }
  goto LAB_00694360;
LAB_00693550:
  uVar20 = (undefined4)((ulonglong)local_78 >> 0x20);
  if (uVar19 == 0) {
    pppppppuVar29 = pppppppuVar27;
    if (puVar33 == (undefined1 *)0x0) goto LAB_00693964;
    do {
      pppppppuVar27 = pppppppuVar29 + 1;
      ppppppuVar36 = *pppppppuVar29;
      pppppppuVar26 = pppppppuVar26 + -0x30;
      pppppppuVar29 = pppppppuVar27;
    } while (((uint)ppppppuVar36 & 0x80808080) == 0x80808080);
    uVar19 = (uint)ppppppuVar36 & 0x80808080 ^ 0x80808080;
  }
  uVar16 = LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18);
  iVar7 = (uVar16 >> 3) * -2 - (uVar16 >> 3);
  local_138 = (uint *******)pppppppuVar26[iVar7 * 4 + -8];
  local_128 = pppppppuVar26[iVar7 * 4 + -5];
  local_12c = (undefined1 *)((int)local_138 + (int)pppppppuVar26[iVar7 * 4 + -7] + 1U);
  local_130 = local_138 + 1;
  local_134 = ~(uint)*local_138 & 0x80808080;
  local_140 = local_78;
  local_78 = FUN_0067cf64(&local_138,uVar20,(int)local_78,uVar20);
  uVar19 = uVar19 - 1 & uVar19;
  puVar33 = puVar33 + -1;
  goto LAB_00693550;
LAB_00693964:
  uVar19 = *param_1;
  *param_1 = uVar19 + 1;
  param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar19);
  *(longlong *)(param_1 + 2) = local_78 + *(longlong *)(param_1 + 2);
  if (DAT_01d50f88 < 2) {
    if (1 < DAT_01d4b5e0 - 1) {
      if (DAT_01d4b5e0 != 0) {
        cVar6 = FUN_01aaafa8(&DAT_01d4b5d8);
        if (cVar6 != '\0') goto LAB_006939c4;
      }
      goto LAB_006941dc;
    }
LAB_006939c4:
    iVar7 = FUN_01aaa278(DAT_01d4b5d8);
    if (iVar7 == 0) goto LAB_006941dc;
    if (*(int *)(DAT_01d4b5d8 + 0x20) == 0) goto LAB_00694e34;
    local_138 = *(uint ********)(DAT_01d4b5d8 + 0x24);
    local_134 = *(uint *)(DAT_01d4b5d8 + 0x28);
    local_68 = (uint *******)(DAT_01d4b5d8 + 0x1c);
    local_140._0_4_ = (uint *******)*local_68;
    local_60 = &local_58;
    local_6c = (uint *******)&DAT_00000001;
    local_54 = (uint *******)&local_50;
    local_64 = (uint *******)&local_140;
    local_48 = (uint *******)&local_78;
    local_70 = (uint *******)&local_64;
    local_50 = &local_b8;
    local_130 = (uint *******)0x0;
    local_5c = (undefined4 *)&DAT_01d2ea4c;
    local_58 = (uint ******)&DAT_005b3285;
    local_44 = FUN_012fd074;
    local_4c = (uint *******)&DAT_0132b6a0;
    local_140._4_4_ = (uint *******)*(int *)(DAT_01d4b5d8 + 0x20);
    FUN_01aaaecc(DAT_01d4b5d8,&local_70);
    iVar7 = DAT_01d4b5d8;
    local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
    if ((DAT_01d51ae9 == '\0') &&
       (local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140), 3 < DAT_01d51b00)) {
      local_3c = *(uint ********)(DAT_01d4b5d8 + 0x14);
      local_38 = *(uint ********)(DAT_01d4b5d8 + 0x18);
      local_40 = (uint *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar28 = DAT_01d4edc8;
      pcVar18 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar28 = &DAT_01cfc5e0;
        pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar40 = (*(code *)puVar28[3])(pcVar18,&local_40);
      if (iVar40 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar7,pcVar18,puVar28[4],&local_30,&local_70);
      }
    }
  }
  else {
LAB_006941dc:
    iVar7 = DAT_01d4b5d8;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_6c = *(uint ********)(DAT_01d4b5d8 + 0x14);
      local_68 = *(uint ********)(DAT_01d4b5d8 + 0x18);
      local_70 = (uint *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar28 = DAT_01d4edc8;
      pcVar18 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar28 = &DAT_01cfc5e0;
        pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar40 = (*(code *)puVar28[3])(pcVar18,&local_70);
      if (iVar40 != 0) {
        local_5c = (undefined4 *)(DAT_01d4b5d8 + 0x1c);
        if (*(int *)(DAT_01d4b5d8 + 0x20) == 0) {
LAB_00694e34:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04ee0);
        }
        local_3c = &local_58;
        local_138 = *(uint ********)(DAT_01d4b5d8 + 0x24);
        local_134 = *(uint *)(DAT_01d4b5d8 + 0x28);
        local_40 = (uint *******)&local_140;
        local_64 = (uint *******)&local_40;
        local_130 = (uint *******)0x0;
        local_60 = (uint *******)&DAT_00000001;
        local_54 = (uint *******)&local_50;
        local_38 = (uint *******)&DAT_01d2ea4c;
        local_48 = (uint *******)&local_78;
        local_58 = (uint ******)&DAT_005b3285;
        local_44 = FUN_012fd074;
        local_4c = (uint *******)&DAT_0132b6a0;
        local_50 = &local_b8;
        local_30 = local_70;
        local_2c = local_6c;
        local_28 = local_68;
        local_140._0_4_ = (uint *******)*local_5c;
        local_140._4_4_ = (uint *******)*(int *)(DAT_01d4b5d8 + 0x20);
        FUN_01aaa328(iVar7,pcVar18,puVar28[4],&local_30,&local_64);
      }
    }
  }
  FUN_0067e1d0(&local_b0);
LAB_00694354:
  FUN_019bb7e0(iVar25,local_c0);
  goto LAB_00694360;
LAB_00692bdc:
  uVar32 = uVar19 & (uint)puVar38;
  uVar34 = *(uint *)(iVar25 + uVar32);
  uVar16 = uVar34 ^ ((uint)puVar10 >> 0x19) * 0x1010101;
  for (uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff; uVar16 != 0;
      uVar16 = uVar16 - 1 & uVar16) {
    puVar38 = (uint *)(iVar25 + (uVar32 + ((uint)LZCOUNT(uVar16 << 0x18 |
                                                         (uVar16 >> 8 & 0xff) << 0x10 |
                                                         (uVar16 >> 0x10 & 0xff) << 8 |
                                                         uVar16 >> 0x18) >> 3) & uVar19) * -0x30);
    if ((uint *******)puVar38[-10] == pppppppuVar26) {
      iVar11 = thunk_FUN_01bed842(puVar38[-0xb],pppppppuVar37);
      if (iVar11 == 0) {
        FUN_019bb7e0(local_b0,pppppppuVar37);
        goto LAB_00692fd4;
      }
    }
  }
  if ((uVar34 & 0x80808080 & uVar34 << 1) != 0) goto LAB_00692e98;
  iVar40 = iVar40 + 4;
  puVar38 = (uint *)(uVar32 + iVar40);
  goto LAB_00692bdc;
LAB_00692e98:
  if (*(int *)(iVar7 + -0x30) == 0) {
    FUN_0067f5f4(piVar22,(undefined4 *)(iVar7 + -0x28));
  }
  pppppppuVar27 = local_a8;
  pppppppuVar26 = local_ac;
  pppppppuVar37 = local_b0;
  puVar38 = puVar10;
  if (local_b0 != (uint *******)&DAT_80000000) {
    uVar42 = thunk_FUN_01bee35a(&local_ac,0x2c0);
    puVar38 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
    if ((char)puVar38[4] == '\0') {
      FUN_019ae6ac(&local_b0);
      *puVar38 = (uint)local_b0;
      puVar38[1] = (uint)local_ac;
      puVar38[2] = (uint)local_a8;
      puVar38[3] = (uint)local_a4;
      *(undefined1 *)(puVar38 + 4) = 1;
    }
    uVar19 = puVar38[2];
    uVar39 = *puVar38;
    uVar9 = puVar38[1];
    uVar16 = puVar38[3];
    puVar28 = (undefined4 *)((uint)&local_b0 | 4);
    *puVar38 = uVar39 + 1;
    puVar38[1] = uVar9 + (0xfffffffe < uVar39);
    *puVar28 = &DAT_0056d238;
    puVar28[1] = 0;
    puVar28[2] = 0;
    puVar28[3] = 0;
    puVar38 = (uint *)*piVar22;
    uVar8 = *(uint *)(iVar7 + -0x34);
    uVar32 = uVar8 & (uint)puVar10;
    uVar34 = *(uint *)((int)puVar38 + uVar32) & 0x80808080;
    bVar15 = (byte)((uint)puVar10 >> 0x19);
    if (uVar34 == 0) {
      iVar25 = 4;
      do {
        uVar32 = uVar32 + iVar25;
        iVar25 = iVar25 + 4;
        uVar32 = uVar32 & uVar8;
        uVar34 = *(uint *)((int)puVar38 + uVar32) & 0x80808080;
      } while (uVar34 == 0);
    }
    uVar32 = uVar32 + ((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                     (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) & uVar8;
    uVar34 = (uint)*(char *)((int)puVar38 + uVar32);
    if (-1 < (int)uVar34) {
      uVar32 = *puVar38 & 0x80808080;
      uVar32 = LZCOUNT((*puVar38 & 0x80) << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                       (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18);
      uVar34 = (uint)*(byte *)((int)puVar38 + (uVar32 >> 3));
      uVar32 = uVar32 >> 3;
    }
    iVar25 = *(int *)(iVar7 + -0x30);
    *(byte *)((int)puVar38 + uVar32) = bVar15;
    *(uint *)(iVar7 + -0x30) = iVar25 - (uVar34 & 1);
    *(byte *)((int)puVar38 + (uVar32 - 4 & uVar8) + 4) = bVar15;
    puVar38 = puVar38 + uVar32 * -0xc;
    puVar38[-0xb] = (uint)pppppppuVar26;
    puVar38[-10] = (uint)pppppppuVar27;
    puVar38[-0xc] = (uint)pppppppuVar37;
    puVar38[-9] = (uint)local_b0;
    puVar38[-8] = (uint)local_ac;
    puVar38[-7] = (uint)local_a8;
    puVar38[-6] = (uint)local_a4;
    puVar38[-5] = (uint)local_a0;
    puVar38[-1] = uVar16;
    puVar38[-2] = uVar19;
    iVar25 = *(int *)(iVar7 + -0x2c);
    puVar38[-3] = uVar9;
    puVar38[-4] = uVar39;
    *(int *)(iVar7 + -0x2c) = iVar25 + 1;
  }
LAB_00692fd4:
  uVar19 = puVar38[-5];
  ppppppuVar31 = param_2[7];
  ppppppuVar36 = param_2[8];
  if (uVar19 == 0) {
    if (param_1[0x11] != 0) goto LAB_00693114;
  }
  else {
    uVar32 = FUN_01adafd4(puVar38[-4],puVar38[-3],puVar38[-2],puVar38[-1],ppppppuVar31,ppppppuVar36)
    ;
    uVar16 = uVar32 >> 0x19;
    uVar8 = puVar38[-8];
    uVar34 = puVar38[-7];
    local_16c = 0;
    while( true ) {
      uVar32 = uVar34 & uVar32;
      uVar39 = *(uint *)(uVar8 + uVar32);
      uVar9 = uVar39 ^ uVar16 * 0x1010101;
      uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
      while (uVar9 != 0) {
        uVar13 = uVar9 >> 8;
        uVar1 = uVar9 >> 0x10;
        uVar2 = uVar9 >> 0x18;
        uVar3 = uVar9 << 0x18;
        uVar9 = uVar9 - 1 & uVar9;
        uVar13 = uVar32 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                         uVar2) >> 3) & uVar34;
        iVar25 = (uVar8 - 0x18) + uVar13 * -0x18;
        if (ppppppuVar36 == *(uint *******)(iVar25 + 8)) {
          iVar25 = thunk_FUN_01bed842(ppppppuVar31,*(undefined4 *)(iVar25 + 4),ppppppuVar36);
          if (iVar25 == 0) {
            iVar25 = uVar8 + uVar13 * -0x18;
            uVar19 = *(uint *)(iVar25 + -8);
            *(uint *)(iVar25 + -8) = uVar19 + 1;
            *(uint *)(iVar25 + -4) = *(int *)(iVar25 + -4) + (uint)(0xfffffffe < uVar19);
            return;
          }
        }
      }
      if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) break;
      local_16c = local_16c + 4;
      uVar32 = uVar32 + local_16c;
    }
    if (uVar19 < param_1[0x11]) {
LAB_00693114:
      FUN_006666fc(&local_140,ppppppuVar31,ppppppuVar36);
      FUN_0067d3b8(&local_b0,puVar38 + -8,&local_140);
      return;
    }
    if (uVar19 != 0) {
      puVar14 = (uint *)puVar38[-8];
      uVar16 = *puVar14;
      puVar10 = puVar14;
      while( true ) {
        puVar10 = puVar10 + 1;
        if ((uVar16 & 0x80808080) != 0x80808080) break;
        uVar16 = *puVar10;
        puVar14 = puVar14 + -0x18;
      }
      uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
      uVar32 = uVar16 - 1 & uVar16;
      uVar16 = (uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
      puVar30 = puVar14 + uVar16 * -6 + -2;
      puVar23 = puVar14 + uVar16 * -6 + -6;
      do {
        uVar19 = uVar19 - 1;
        if (uVar32 == 0) {
          puVar17 = puVar10;
          if (uVar19 == 0) goto LAB_00693d58;
          do {
            puVar10 = puVar17 + 1;
            uVar16 = *puVar17;
            puVar14 = puVar14 + -0x18;
            puVar17 = puVar10;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar32 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        uVar16 = LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                         (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18);
        iVar25 = (uVar16 >> 3) * -2 - (uVar16 >> 3);
        if (puVar14[iVar25 * 2 + -1] <= puVar30[1] &&
            (uint)(*puVar30 <= puVar14[iVar25 * 2 + -2]) <= puVar14[iVar25 * 2 + -1] - puVar30[1]) {
          puVar23 = puVar14 + iVar25 * 2 + -6;
          puVar30 = puVar14 + iVar25 * 2 + -2;
        }
        uVar32 = uVar32 - 1 & uVar32;
      } while( true );
    }
  }
  goto LAB_00693d7c;
LAB_00693d58:
  FUN_006666fc(&local_b0,puVar23[1],puVar23[2]);
  pppppppuVar26 = local_a8;
  pppppppuVar37 = local_ac;
  if (local_b0 != (uint *******)&DAT_80000000) {
    local_40 = local_b0;
    local_3c = local_ac;
    local_38 = local_a8;
    uVar16 = FUN_01adafd4(puVar38[-4],puVar38[-3],puVar38[-2],puVar38[-1],local_ac,local_a8);
    uVar19 = uVar16 >> 0x19;
    uVar32 = puVar38[-8];
    uVar34 = puVar38[-7];
    local_16c = 0;
    do {
      uVar16 = uVar34 & uVar16;
      uVar39 = *(uint *)(uVar32 + uVar16);
      uVar8 = uVar39 ^ uVar19 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar9 = uVar8 >> 8;
        uVar13 = uVar8 >> 0x10;
        uVar1 = uVar8 >> 0x18;
        uVar2 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        uVar9 = uVar16 + ((uint)LZCOUNT(uVar2 | (uVar9 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 |
                                        uVar1) >> 3) & uVar34;
        iVar25 = (uVar32 - 0x18) + uVar9 * -0x18;
        if (pppppppuVar26 == *(uint ********)(iVar25 + 8)) {
          iVar25 = thunk_FUN_01bed842(pppppppuVar37,*(undefined4 *)(iVar25 + 4),pppppppuVar26);
          if (iVar25 == 0) {
            iVar25 = ((int)(uVar9 * 0x18) >> 3) * -0x55555555;
            puVar10 = (uint *)(uVar32 + (iVar25 - 4U & uVar34));
            uVar16 = *puVar10;
            uVar19 = *(uint *)(uVar32 + iVar25) & 0x80808080 & *(uint *)(uVar32 + iVar25) << 1;
            uVar16 = ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                    (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) +
                     ((uint)LZCOUNT(uVar16 & 0x80808080 & uVar16 << 1) >> 3);
            uVar19 = 0x80;
            if (uVar16 < 4) {
              uVar19 = puVar38[-6];
            }
            iVar7 = uVar32 + uVar9 * -0x18;
            if (uVar16 < 4) {
              puVar38[-6] = uVar19 + 1;
              uVar19 = 0xff;
            }
            *(char *)(uVar32 + iVar25) = (char)uVar19;
            uVar16 = puVar38[-5];
            *(char *)(puVar10 + 1) = (char)uVar19;
            iVar25 = *(int *)(iVar7 + -0x18);
            puVar38[-5] = uVar16 - 1;
            if (iVar25 == -0x80000000) goto LAB_006940ec;
            uVar32 = *(uint *)(iVar7 + -8);
            iVar40 = *(int *)(iVar7 + -4);
            FUN_019bb7e0(iVar25,*(undefined4 *)(iVar7 + -0x14));
            uVar19 = param_1[4];
            uVar16 = param_1[6];
            param_1[4] = uVar19 + 1;
            param_1[5] = param_1[5] + (uint)(0xfffffffe < uVar19);
            param_1[6] = uVar16 + uVar32;
            param_1[7] = param_1[7] + iVar40 + (uint)CARRY4(uVar16,uVar32);
            local_e0 = uVar32;
            local_dc = iVar40;
            if (DAT_01d50f88 < 2) {
              if (1 < DAT_01d4b5f8 - 1) {
                if (DAT_01d4b5f8 != 0) {
                  cVar6 = FUN_01aaafa8(&DAT_01d4b5f0);
                  if (cVar6 != '\0') goto LAB_00694814;
                }
                goto LAB_00694aa8;
              }
LAB_00694814:
              iVar25 = FUN_01aaa278(DAT_01d4b5f0);
              if (iVar25 == 0) goto LAB_00694aa8;
              if (*(int *)(DAT_01d4b5f0 + 0x20) == 0) goto LAB_00694e6c;
              local_4c = (uint *******)&local_64;
              local_138 = *(uint ********)(DAT_01d4b5f0 + 0x24);
              local_134 = *(uint *)(DAT_01d4b5f0 + 0x28);
              local_130 = (uint *******)0x0;
              local_50 = (uint *******)&local_140;
              local_60 = (uint *******)&local_b0;
              local_98 = &local_e0;
              local_a0 = (uint *******)&local_40;
              local_2c = (uint *******)&DAT_00000001;
              local_30 = (uint *******)&local_50;
              local_48 = (uint *******)&DAT_01d2ea4c;
              local_64 = (uint *******)&DAT_00593c63;
              local_94 = FUN_012fd074;
              local_9c = (uint ******)&LAB_00632348;
              local_a4 = &LAB_00632348;
              local_ac = (uint *******)&LAB_00632348;
              local_140._0_4_ = (uint *******)*(uint *******)(DAT_01d4b5f0 + 0x1c);
              local_140._4_4_ = (uint *******)*(int *)(DAT_01d4b5f0 + 0x20);
              local_b0 = param_2;
              local_a8 = param_2 + 3;
              local_28 = (uint *******)(DAT_01d4b5f0 + 0x1c);
              FUN_0069509c(&local_30);
            }
            else {
LAB_00694aa8:
              iVar25 = DAT_01d4b5f0;
              if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                local_d4 = *(undefined4 *)(DAT_01d4b5f0 + 0x14);
                local_d0 = *(undefined4 *)(DAT_01d4b5f0 + 0x18);
                local_d8 = 4;
                DataMemoryBarrier(0xb);
                puVar28 = DAT_01d4edc8;
                pcVar18 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar28 = &DAT_01cfc5e0;
                  pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar7 = (*(code *)puVar28[3])(pcVar18,&local_d8);
                if (iVar7 != 0) {
                  if (*(int *)(DAT_01d4b5f0 + 0x20) == 0) {
LAB_00694e6c:
                    puVar21 = &DAT_01c05050;
                    goto LAB_00694e74;
                  }
                  local_4c = (uint *******)&local_64;
                  local_138 = *(uint ********)(DAT_01d4b5f0 + 0x24);
                  local_134 = *(uint *)(DAT_01d4b5f0 + 0x28);
                  local_130 = (uint *******)0x0;
                  local_50 = (uint *******)&local_140;
                  local_60 = (uint *******)&local_b0;
                  local_98 = &local_e0;
                  local_a0 = (uint *******)&local_40;
                  local_2c = (uint *******)&DAT_00000001;
                  local_30 = (uint *******)&local_50;
                  local_48 = (uint *******)&DAT_01d2ea4c;
                  local_64 = (uint *******)&DAT_00593c63;
                  local_94 = FUN_012fd074;
                  local_9c = (uint ******)&LAB_00632348;
                  local_a4 = &LAB_00632348;
                  local_ac = (uint *******)&LAB_00632348;
                  local_140._0_4_ = (uint *******)*(uint *******)(DAT_01d4b5f0 + 0x1c);
                  local_140._4_4_ = (uint *******)*(int *)(DAT_01d4b5f0 + 0x20);
                  local_b0 = param_2;
                  local_a8 = param_2 + 3;
                  local_28 = (uint *******)(DAT_01d4b5f0 + 0x1c);
                  FUN_01aaa328(iVar25,pcVar18,puVar28[4],&local_d8,&local_30);
                }
              }
            }
            FUN_019bb7e0(local_40,local_3c);
            ppppppuVar31 = param_2[7];
            ppppppuVar36 = param_2[8];
            goto LAB_00693114;
          }
        }
      }
      if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) goto LAB_006940ec;
      local_16c = local_16c + 4;
      uVar16 = uVar16 + local_16c;
    } while( true );
  }
LAB_00693d7c:
  if (DAT_01d50f88 < 5) {
    if (DAT_01d4b61c - 1 < 2) {
LAB_00693da8:
      iVar25 = FUN_01aaa278(DAT_01d4b614);
      if (iVar25 != 0) {
        if (*(uint *******)(DAT_01d4b614 + 0x20) != (uint ******)0x0) {
          local_a8 = *(uint ********)(DAT_01d4b614 + 0x24);
          local_a4 = *(undefined1 **)(DAT_01d4b614 + 0x28);
          local_140._4_4_ = (uint *******)&local_30;
          local_4c = (uint *******)0x1;
          local_140._0_4_ = (uint *******)&local_b0;
          local_2c = (uint *******)0x63;
          local_50 = (uint *******)&local_140;
          local_a0 = (uint *******)0x0;
          local_138 = (uint *******)&DAT_01d2ea4c;
          local_30 = (uint *******)0x3d5055;
          local_b0 = (uint *******)*(uint *******)(DAT_01d4b614 + 0x1c);
          local_ac = (uint *******)*(uint *******)(DAT_01d4b614 + 0x20);
          local_48 = (uint *******)(DAT_01d4b614 + 0x1c);
          FUN_00695290(&local_50);
          return;
        }
        goto LAB_00694de4;
      }
    }
    else if (DAT_01d4b61c != 0) {
      cVar6 = FUN_01aaafa8(&DAT_01d4b614);
      if (cVar6 != '\0') goto LAB_00693da8;
    }
  }
  iVar25 = DAT_01d4b614;
  if (DAT_01d51ae9 != '\0') {
    return;
  }
  if (DAT_01d51b00 == 0) {
    return;
  }
  local_f4 = *(undefined4 *)(DAT_01d4b614 + 0x14);
  local_f0 = *(undefined4 *)(DAT_01d4b614 + 0x18);
  local_f8 = (uint *)0x1;
  DataMemoryBarrier(0xb);
  puVar28 = DAT_01d4edc8;
  if (DAT_01d51174 != 2) {
    puVar28 = &DAT_01cfc5e0;
  }
  pcVar18 = DAT_01d4edc4;
  if (DAT_01d51174 != 2) {
    pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
  }
  iVar7 = (*(code *)puVar28[3])(pcVar18,&local_f8);
  if (iVar7 == 0) {
    return;
  }
  if (*(uint *******)(DAT_01d4b614 + 0x20) == (uint ******)0x0) {
LAB_00694de4:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c05070);
  }
  local_140._4_4_ = (uint *******)&local_30;
  local_a8 = *(uint ********)(DAT_01d4b614 + 0x24);
  local_a4 = *(undefined1 **)(DAT_01d4b614 + 0x28);
  ppuVar24 = &local_f8;
  local_2c = (uint *******)0x63;
  local_30 = (uint *******)0x3d5055;
  local_b0 = (uint *******)*(uint *******)(DAT_01d4b614 + 0x1c);
  local_ac = (uint *******)*(uint *******)(DAT_01d4b614 + 0x20);
  local_48 = (uint *******)(DAT_01d4b614 + 0x1c);
  goto LAB_00694768;
LAB_006940ec:
  if (DAT_01d50f88 < 5) {
    if (DAT_01d4b610 - 1 < 2) {
LAB_00694118:
      iVar25 = FUN_01aaa278(DAT_01d4b608);
      if (iVar25 != 0) {
        if (*(uint ********)(DAT_01d4b608 + 0x20) == (uint *******)0x0) goto LAB_00694e50;
        local_a8 = *(uint ********)(DAT_01d4b608 + 0x24);
        local_a4 = *(undefined1 **)(DAT_01d4b608 + 0x28);
        local_140._4_4_ = (uint *******)&local_64;
        local_4c = (uint *******)&DAT_00000001;
        local_60 = (uint *******)&local_30;
        local_140._0_4_ = (uint *******)&local_b0;
        local_30 = (uint *******)&local_40;
        local_50 = (uint *******)&local_140;
        local_a0 = (uint *******)0x0;
        local_138 = (uint *******)&DAT_01d2ea4c;
        local_64 = (uint *******)&DAT_0057a9df;
        local_2c = (uint *******)&LAB_00632348;
        local_b0 = *(uint ********)(DAT_01d4b608 + 0x1c);
        local_ac = *(uint ********)(DAT_01d4b608 + 0x20);
        local_48 = (uint *******)(DAT_01d4b608 + 0x1c);
        FUN_00695194(&local_50);
        goto LAB_00694904;
      }
    }
    else if (DAT_01d4b610 != 0) {
      cVar6 = FUN_01aaafa8(&DAT_01d4b608);
      if (cVar6 != '\0') goto LAB_00694118;
    }
  }
  iVar25 = DAT_01d4b608;
  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
    local_e8 = *(undefined4 *)(DAT_01d4b608 + 0x14);
    local_e4 = *(undefined4 *)(DAT_01d4b608 + 0x18);
    local_ec = 1;
    DataMemoryBarrier(0xb);
    puVar28 = DAT_01d4edc8;
    pcVar18 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar28 = &DAT_01cfc5e0;
      pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar7 = (*(code *)puVar28[3])(pcVar18,&local_ec);
    if (iVar7 != 0) {
      if (*(uint ********)(DAT_01d4b608 + 0x20) == (uint *******)0x0) {
LAB_00694e50:
        puVar21 = &DAT_01c05060;
LAB_00694e74:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar21);
      }
      local_140._4_4_ = (uint *******)&local_64;
      local_a8 = *(uint ********)(DAT_01d4b608 + 0x24);
      local_a4 = *(undefined1 **)(DAT_01d4b608 + 0x28);
      local_140._0_4_ = (uint *******)&local_b0;
      local_50 = (uint *******)&local_140;
      local_4c = (uint *******)&DAT_00000001;
      local_60 = (uint *******)&local_30;
      local_a0 = (uint *******)0x0;
      local_30 = (uint *******)&local_40;
      local_138 = (uint *******)&DAT_01d2ea4c;
      local_64 = (uint *******)&DAT_0057a9df;
      local_2c = (uint *******)&LAB_00632348;
      local_b0 = *(uint ********)(DAT_01d4b608 + 0x1c);
      local_ac = *(uint ********)(DAT_01d4b608 + 0x20);
      local_48 = (uint *******)(DAT_01d4b608 + 0x1c);
      FUN_01aaa328(iVar25,pcVar18,puVar28[4],&local_ec,&local_50);
    }
  }
LAB_00694904:
  FUN_019bb7e0(local_40,local_3c);
  return;
  while( true ) {
    pppppppuVar26 = (uint *******)((int)(uVar41 >> 0x20) + (int)pppppppuVar26);
    if ((pppppppuVar26 < pppppppuVar37) &&
       (*(char *)((int)ppppppuVar31 + (int)pppppppuVar26) == ' ')) goto LAB_00692900;
    pppppppuVar26 = (uint *******)((int)pppppppuVar26 + 1);
    if (pppppppuVar37 < pppppppuVar26) break;
LAB_00692874:
    uVar19 = (int)pppppppuVar37 - (int)pppppppuVar26;
    if (uVar19 < 8) {
      uVar16 = 0;
      if (uVar19 == 0) {
        uVar41 = 0;
      }
      else {
        do {
          if (((undefined1 *)((int)ppppppuVar31 + (int)pppppppuVar26))[uVar16] == ' ') {
            uVar41 = CONCAT44(uVar16,1);
            goto LAB_006928d0;
          }
          uVar16 = uVar16 + 1;
        } while (uVar19 != uVar16);
        uVar41 = (ulonglong)uVar19 << 0x20;
      }
    }
    else {
      uVar41 = FUN_01307168(0x20,(undefined1 *)((int)ppppppuVar31 + (int)pppppppuVar26));
    }
LAB_006928d0:
    if ((uVar41 & 1) == 0) break;
  }
  pppppppuVar26 = pppppppuVar37;
LAB_00692900:
  if (pppppppuVar26 == (uint *******)0x0) {
    pppppppuVar37 = (uint *******)0x0;
  }
  else if (pppppppuVar26 < pppppppuVar37) {
    if (*(char *)((int)ppppppuVar31 + (int)pppppppuVar26) < -0x40) goto LAB_00694d60;
    pppppppuVar37 = pppppppuVar26;
  }
  else if (pppppppuVar26 != pppppppuVar37) {
LAB_00694d60:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(ppppppuVar31,pppppppuVar37,0,pppppppuVar26,&DAT_01c050b0);
  }
LAB_00692934:
  pppppppuVar26 = (uint *******)param_1[0xb];
  local_148 = ppppppuVar31;
  local_144 = pppppppuVar37;
  if (pppppppuVar26 != (uint *******)0x0) {
    uVar16 = FUN_01a60560(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],ppppppuVar31,
                          pppppppuVar37);
    uVar19 = uVar16 >> 0x19;
    uVar32 = param_1[8];
    uVar34 = param_1[9];
    local_15c = (uint *******)0x0;
    while( true ) {
      uVar16 = uVar34 & uVar16;
      uVar39 = *(uint *)(uVar32 + uVar16);
      uVar8 = uVar39 ^ uVar19 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar9 = uVar8 >> 8;
        uVar13 = uVar8 >> 0x10;
        uVar1 = uVar8 >> 0x18;
        uVar2 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        iVar25 = (uVar32 - 0x48) +
                 (uVar16 + ((uint)LZCOUNT(uVar2 | (uVar9 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 |
                                          uVar1) >> 3) & uVar34) * -0x48;
        if (pppppppuVar37 == *(uint ********)(iVar25 + 8)) {
          iVar25 = thunk_FUN_01bed842(ppppppuVar31,*(undefined4 *)(iVar25 + 4),pppppppuVar37);
          if (iVar25 == 0) goto LAB_00692a5c;
        }
      }
      if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) break;
      local_15c = (uint *******)((int)local_15c + 4);
      uVar16 = uVar16 + (int)local_15c;
    }
  }
  local_140 = CONCAT44(local_140._4_4_,(uint *******)local_140);
  local_78 = CONCAT44(local_78._4_4_,(uint ******)local_78);
  if ((uint *******)param_1[0x10] <= pppppppuVar26) {
    local_b0 = (uint *******)param_1[8];
    local_9c = (uint ******)&local_cc;
    local_a4 = (undefined1 *)((int)local_b0 + param_1[9] + 1);
    local_a8 = local_b0 + 1;
    local_ac = (uint *******)(~(uint)*local_b0 & 0x80808080);
    local_cc = ppppppuVar31;
    local_c8 = pppppppuVar37;
    local_a0 = pppppppuVar26;
    do {
      uVar42 = FUN_0067cfec(&local_b0);
      iVar25 = (int)((ulonglong)uVar42 >> 0x20);
      pppppppuVar26 = (uint *******)uVar42;
      if (pppppppuVar26 == (uint *******)0x0) goto LAB_0069329c;
    } while (((uint *******)pppppppuVar26[2] == pppppppuVar37) &&
            (iVar7 = thunk_FUN_01bed842(pppppppuVar26[1],ppppppuVar31,pppppppuVar37), iVar7 == 0));
    FUN_0128fa50(&local_140,iVar25 + 0x2c,iVar25 + 0x20);
    ppppppuVar5 = local_9c;
    local_15c = local_a0;
    local_160 = local_138;
    pppppppuVar27 = local_ac;
    pppppppuVar29 = local_b0;
    pppppppuVar35 = local_a8;
    uVar19 = (uint)local_140._4_4_;
    ppppppuVar36 = (uint ******)(uint *******)local_140;
    do {
      if (pppppppuVar27 == (uint *******)0x0) {
        pppppppuVar27 = pppppppuVar35;
        if (local_15c == (uint *******)0x0) goto LAB_00693148;
        do {
          pppppppuVar35 = pppppppuVar27 + 1;
          ppppppuVar12 = *pppppppuVar27;
          pppppppuVar29 = pppppppuVar29 + -0x48;
          pppppppuVar27 = pppppppuVar35;
        } while (((uint)ppppppuVar12 & 0x80808080) == 0x80808080);
        pppppppuVar27 = (uint *******)((uint)ppppppuVar12 & 0x80808080 ^ 0x80808080);
      }
      uVar16 = (uint)LZCOUNT((int)pppppppuVar27 << 0x18 | ((uint)pppppppuVar27 >> 8 & 0xff) << 0x10
                             | ((uint)pppppppuVar27 >> 0x10 & 0xff) << 8 |
                             (uint)pppppppuVar27 >> 0x18) >> 3;
      if ((pppppppuVar29[uVar16 * -0x12 + -0x10] != (uint ******)ppppppuVar5[1]) ||
         (iVar25 = thunk_FUN_01bed842(pppppppuVar29[uVar16 * -0x12 + -0x11],*ppppppuVar5),
         iVar25 != 0)) {
        FUN_0128fa50(&local_140,pppppppuVar29 + uVar16 * -0x12 + -3,
                     pppppppuVar29 + uVar16 * -0x12 + -6);
        bVar4 = (int)((int)local_140._4_4_ - (uVar19 + ((uint *******)local_140 < ppppppuVar36))) <
                0 == (SBORROW4((int)local_140._4_4_,uVar19) !=
                     SBORROW4((int)local_140._4_4_ - uVar19,
                              (uint)((uint *******)local_140 < ppppppuVar36)));
        if ((uint *******)ppppppuVar36 == (uint *******)local_140 &&
            (uint *******)uVar19 == local_140._4_4_) {
          bVar4 = (int)local_160 <= (int)local_138;
        }
        if (bVar4) {
        }
        else {
          pppppppuVar26 = pppppppuVar29 + uVar16 * -0x12 + -0x12;
          local_160 = local_138;
          ppppppuVar36 = (uint ******)(uint *******)local_140;
          uVar19 = (uint)local_140._4_4_;
        }
      }
      pppppppuVar27 = (uint *******)((uint)((int)pppppppuVar27 + -1) & (uint)pppppppuVar27);
      local_15c = (uint *******)((int)local_15c - 1);
    } while( true );
  }
LAB_00694360:
  uVar20 = 0;
  if ((int)pppppppuVar37 < 0) {
LAB_0069436c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar20,pppppppuVar37);
  }
  if (pppppppuVar37 == (uint *******)0x0) {
    pppppppuVar27 = (uint *******)&DAT_00000001;
    pppppppuVar26 = (uint *******)0x0;
  }
  else {
    uVar20 = 1;
    pppppppuVar27 = (uint *******)FUN_01298504(pppppppuVar37,1);
    pppppppuVar26 = pppppppuVar37;
    if (pppppppuVar27 == (uint *******)0x0) goto LAB_0069436c;
  }
  uVar20 = FUN_01bed4e2(pppppppuVar27,ppppppuVar31,pppppppuVar37);
  local_4c = pppppppuVar27;
  local_48 = pppppppuVar37;
  uVar42 = thunk_FUN_01bee35a(uVar20,0x2c0);
  puVar38 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
  local_50 = pppppppuVar26;
  if ((char)puVar38[4] == '\0') {
    FUN_019ae6ac(&local_140);
    *(longlong *)puVar38 = local_140;
    puVar38[2] = (uint)local_138;
    puVar38[3] = local_134;
    *(undefined1 *)(puVar38 + 4) = 1;
  }
  local_a0 = (uint *******)*puVar38;
  local_9c = (uint ******)puVar38[1];
  local_98 = (uint *)puVar38[2];
  local_94 = (code *)puVar38[3];
  *puVar38 = (int)local_a0 + 1;
  puVar38[1] = (uint)((int)local_9c + (uint)((uint *******)0xfffffffe < local_a0));
  local_b0 = (uint *******)&DAT_0056d238;
  local_ac = (uint *******)0x0;
  local_a8 = (uint *******)0x0;
  local_a4 = (undefined1 *)0x0;
  FUN_0067d664(&local_140,param_1 + 8,&local_50);
  if ((uint *******)local_140 != (uint *******)0x0) {
    FUN_0067e1d0(&local_140);
  }
  if (param_1[0xb] != 0) {
LAB_00692a5c:
    uVar16 = FUN_01a60560(param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],ppppppuVar31,
                          pppppppuVar37);
    uVar19 = uVar16 >> 0x19;
    uVar32 = param_1[8];
    uVar34 = param_1[9];
    local_15c = (uint *******)0x0;
    while( true ) {
      uVar16 = uVar34 & uVar16;
      uVar39 = *(uint *)(uVar32 + uVar16);
      uVar8 = uVar39 ^ uVar19 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar9 = uVar8 >> 8;
        uVar13 = uVar8 >> 0x10;
        uVar1 = uVar8 >> 0x18;
        uVar2 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        uVar9 = uVar16 + ((uint)LZCOUNT(uVar2 | (uVar9 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 |
                                        uVar1) >> 3) & uVar34;
        iVar25 = (uVar32 - 0x48) + uVar9 * -0x48;
        if (pppppppuVar37 == *(uint ********)(iVar25 + 8)) {
          iVar25 = thunk_FUN_01bed842(ppppppuVar31,*(undefined4 *)(iVar25 + 4),pppppppuVar37);
          if (iVar25 == 0) {
            iVar7 = uVar32 + uVar9 * -0x48;
            *(undefined4 *)(iVar7 + -0xc) = local_158;
            *(undefined4 *)(iVar7 + -8) = uStack_154;
            *(undefined4 *)(iVar7 + -4) = uStack_150;
            FUN_006666fc(&local_b0,param_2[4],param_2[5]);
            pppppppuVar26 = local_a8;
            pppppppuVar37 = local_ac;
            puVar10 = (uint *)FUN_01adafd4(*(undefined4 *)(iVar7 + -0x28),
                                           *(undefined4 *)(iVar7 + -0x24),
                                           *(undefined4 *)(iVar7 + -0x20),
                                           *(undefined4 *)(iVar7 + -0x1c),local_ac,local_a8);
            uVar19 = *(uint *)(iVar7 + -0x34);
            piVar22 = (int *)(iVar7 + -0x38);
            iVar25 = *piVar22;
            iVar40 = 0;
            puVar38 = puVar10;
            goto LAB_00692bdc;
          }
        }
      }
      if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) break;
      local_15c = (uint *******)((int)local_15c + 4);
      uVar16 = uVar16 + (int)local_15c;
    }
  }
  if (DAT_01d50f88 < 5) {
    if (DAT_01d4b604 - 1 < 2) {
LAB_006944a8:
      iVar25 = FUN_01aaa278(DAT_01d4b5fc);
      if (iVar25 != 0) {
        if (*(uint *******)(DAT_01d4b5fc + 0x20) == (uint ******)0x0) goto LAB_00694dfc;
        local_4c = (uint *******)&local_64;
        local_a8 = *(uint ********)(DAT_01d4b5fc + 0x24);
        local_a4 = *(undefined1 **)(DAT_01d4b5fc + 0x28);
        local_28 = (uint *******)(DAT_01d4b5fc + 0x1c);
        local_b0 = (uint *******)*local_28;
        local_50 = (uint *******)&local_b0;
        local_30 = (uint *******)&local_50;
        local_a0 = (uint *******)0x0;
        pppppppuVar37 = (uint *******)&local_30;
        local_2c = (uint *******)0x1;
        local_60 = (uint *******)&local_40;
        local_40 = &local_148;
        local_48 = (uint *******)&DAT_01d2ea4c;
        local_64 = (uint *******)&DAT_005b01a2;
        local_3c = (uint *******)&DAT_0132b6a0;
        local_ac = (uint *******)*(uint *******)(DAT_01d4b5fc + 0x20);
        FUN_01aaaecc(DAT_01d4b5fc,pppppppuVar37);
        iVar25 = DAT_01d4b5fc;
        if (DAT_01d51ae9 != '\0') {
          return;
        }
        if (DAT_01d51b00 == 0) {
          return;
        }
        local_140._4_4_ = *(uint ********)(DAT_01d4b5fc + 0x14);
        local_138 = *(uint ********)(DAT_01d4b5fc + 0x18);
        local_140._0_4_ = (uint *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar28 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar28 = &DAT_01cfc5e0;
        }
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar28[3])(pcVar18,&local_140);
        if (iVar7 == 0) {
          return;
        }
        uVar20 = puVar28[4];
        ppuVar24 = (uint **)&local_140;
        goto LAB_00694778;
      }
    }
    else if (DAT_01d4b604 != 0) {
      cVar6 = FUN_01aaafa8(&DAT_01d4b5fc);
      if (cVar6 != '\0') goto LAB_006944a8;
    }
  }
  iVar25 = DAT_01d4b5fc;
  if (DAT_01d51ae9 != '\0') {
    return;
  }
  if (DAT_01d51b00 == 0) {
    return;
  }
  local_100 = *(undefined4 *)(DAT_01d4b5fc + 0x14);
  local_fc = *(undefined4 *)(DAT_01d4b5fc + 0x18);
  local_104 = (uint *)0x1;
  DataMemoryBarrier(0xb);
  puVar28 = DAT_01d4edc8;
  if (DAT_01d51174 != 2) {
    puVar28 = &DAT_01cfc5e0;
  }
  pcVar18 = DAT_01d4edc4;
  if (DAT_01d51174 != 2) {
    pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
  }
  iVar7 = (*(code *)puVar28[3])(pcVar18,&local_104);
  if (iVar7 == 0) {
    return;
  }
  if (*(uint *******)(DAT_01d4b5fc + 0x20) == (uint ******)0x0) {
LAB_00694dfc:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c05080);
  }
  local_140._4_4_ = (uint *******)&local_40;
  local_a8 = *(uint ********)(DAT_01d4b5fc + 0x24);
  local_a4 = *(undefined1 **)(DAT_01d4b5fc + 0x28);
  local_3c = (uint *******)&local_30;
  ppuVar24 = &local_104;
  local_30 = &local_148;
  local_40 = (uint *******)&DAT_005b01a2;
  local_2c = (uint *******)&DAT_0132b6a0;
  local_b0 = (uint *******)*(uint *******)(DAT_01d4b5fc + 0x1c);
  local_ac = (uint *******)*(uint *******)(DAT_01d4b5fc + 0x20);
  local_48 = (uint *******)(DAT_01d4b5fc + 0x1c);
LAB_00694768:
  local_4c = (uint *******)&DAT_00000001;
  local_50 = (uint *******)&local_140;
  local_a0 = (uint *******)0x0;
  local_138 = (uint *******)&DAT_01d2ea4c;
  local_140._0_4_ = (uint *******)&local_b0;
  pppppppuVar37 = (uint *******)&local_50;
  uVar20 = puVar28[4];
LAB_00694778:
  FUN_01aaa328(iVar25,pcVar18,uVar20,ppuVar24,pppppppuVar37);
  return;
}

