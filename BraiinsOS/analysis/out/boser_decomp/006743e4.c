// FUN_006743e4 @ 006743e4 size=3708 calls_out=30 calls_in=0
// strings: BUG: `ApiLogCommonInfo` not set in GraphQL extension execute hook.event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:340 | api_logging::middleware::graphql_extensionopen/utils-rs/api-logging/src/middleware/graphql_extension.rsevent open/utils-rs/api-logging/src/middleware/graphql_extension.rs:245event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:259event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:283 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: `ApiLogCommonInfo` not set in GraphQL extension execute hook.event open/utils-rs/api-logging/src/middleware/graphql_extension.rs:340 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_006743e4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint *****pppppuVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint *****pppppuVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *****pppppuVar16;
  undefined4 uVar17;
  int iVar18;
  uint *****pppppuVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  int local_404;
  undefined4 local_400;
  uint *****local_3fc;
  undefined4 *local_3f8;
  undefined1 auStack_3e8 [144];
  uint *****local_358;
  uint *****local_354;
  undefined1 auStack_350 [56];
  undefined1 auStack_318 [60];
  int local_2dc;
  int local_2d8;
  uint *****local_2c8;
  uint *****local_2c4;
  uint *****local_2c0;
  uint *****local_2bc;
  uint *****local_240;
  uint *****local_23c;
  uint *****local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 auStack_228 [136];
  uint *****local_1a0;
  uint *****local_19c;
  uint *****local_198;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint *****local_160;
  uint *****pppppuStack_15c;
  uint *****pppppuStack_158;
  uint *****pppppuStack_154;
  uint *****local_150;
  uint *****local_14c;
  uint *****local_148;
  undefined4 uStack_144;
  uint *****local_140;
  uint *****local_13c;
  uint *****local_138;
  uint *****local_134;
  uint *****local_130;
  uint *****local_12c;
  uint *****pppppuStack_128;
  uint *****pppppuStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint *****local_b0;
  uint *****local_ac;
  uint *****local_a8;
  uint *****local_a4;
  uint *****local_a0;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xd5)) {
  case 0:
    uVar23 = param_2[8];
    uVar21 = param_2[9];
    param_2[10] = uVar23;
    *(undefined1 *)(param_2 + 0x35) = 0;
    param_2[0x32] = param_2[0x33];
    param_2[0xb] = uVar21;
    local_400 = param_2[0x34];
    param_2[0xc] = *param_2;
    param_2[0xd] = param_2[1];
    param_2[0xe] = param_2[2];
    param_2[0xf] = param_2[3];
    param_2[0x10] = param_2[4];
    param_2[0x11] = param_2[5];
    param_2[0x12] = param_2[6];
    param_2[0x13] = param_2[7];
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[0x14] = local_400;
    param_2[0x15] = uVar23;
    param_2[0x16] = uVar21;
LAB_006744a8:
    uStack_180 = param_2[0xc];
    uStack_17c = param_2[0xd];
    local_178 = param_2[0xe];
    uStack_174 = param_2[0xf];
    uStack_170 = param_2[0x10];
    uStack_16c = param_2[0x11];
    uStack_168 = param_2[0x12];
    uStack_164 = param_2[0x13];
    local_1a0 = local_140;
    local_19c = local_13c;
    local_198 = local_138;
    param_2[0x17] = local_140;
    param_2[0x18] = local_13c;
    param_2[0x19] = local_138;
    param_2[0x1a] = local_134;
    param_2[0x1b] = local_130;
    param_2[0x1c] = local_12c;
    param_2[0x1d] = pppppuStack_128;
    param_2[0x1e] = pppppuStack_124;
    param_2[0x1f] = uStack_180;
    param_2[0x20] = uStack_17c;
    param_2[0x21] = local_178;
    param_2[0x22] = uStack_174;
    param_2[0x23] = uStack_170;
    param_2[0x24] = uStack_16c;
    param_2[0x25] = uStack_168;
    param_2[0x26] = uStack_164;
    local_160 = (uint *****)0x0;
    *(undefined1 *)((int)param_2 + 0xba) = 0;
    param_2[0x2b] = uVar23;
    param_2[0x2c] = uVar21;
    param_2[0x2d] = local_400;
    param_2[0x27] = 0;
    local_120 = uStack_180;
    uStack_11c = uStack_17c;
    local_118 = local_178;
    uStack_114 = uStack_174;
    local_110 = uStack_170;
    uStack_10c = uStack_16c;
    uStack_108 = uStack_168;
    uStack_104 = uStack_164;
LAB_0067452c:
    *(undefined2 *)(param_2 + 0x2e) = 0x100;
    param_2[0x17] = param_2[0x1f];
    param_2[0x18] = param_2[0x20];
    param_2[0x19] = param_2[0x21];
    param_2[0x1a] = param_2[0x22];
    param_2[0x1b] = param_2[0x23];
    param_2[0x1c] = param_2[0x24];
    param_2[0x1d] = param_2[0x25];
    param_2[0x1e] = param_2[0x26];
    pppppuVar11 = (uint *****)param_2[0x1b];
    if (pppppuVar11 == (uint *****)0x0) {
      *(undefined1 *)(param_2 + 0x2e) = 1;
      if (local_160 == (uint *****)0x0) {
        local_160 = (uint *****)0x0;
      }
      else {
        uVar15 = param_2[0x29];
        uVar17 = param_2[0x2a];
        puVar12 = (undefined4 *)((uint)&local_160 | 4);
        *puVar12 = param_2[0x28];
        puVar12[1] = uVar15;
        puVar12[2] = uVar17;
      }
    }
    else if (local_160 == (uint *****)0x0) {
      *(undefined1 *)(param_2 + 0x2e) = 1;
      uVar15 = param_2[0x25];
      uVar17 = param_2[0x26];
      puVar12 = (undefined4 *)((uint)&local_160 | 4);
      *puVar12 = param_2[0x24];
      puVar12[1] = uVar15;
      puVar12[2] = uVar17;
      local_160 = pppppuVar11;
    }
    else {
      uVar15 = param_2[0x25];
      uVar17 = param_2[0x26];
      puVar12 = (undefined4 *)((uint)&local_140 | 4);
      *puVar12 = param_2[0x24];
      puVar12[1] = uVar15;
      puVar12[2] = uVar17;
      local_14c = (uint *****)param_2[0x28];
      local_148 = (uint *****)param_2[0x29];
      uStack_144 = param_2[0x2a];
      local_150 = local_160;
      local_140 = pppppuVar11;
      FUN_006cb608(&local_140);
      local_160 = local_140;
      pppppuStack_15c = local_13c;
      pppppuStack_158 = local_138;
      pppppuStack_154 = local_134;
      *(undefined1 *)(param_2 + 0x2e) = 1;
    }
    if (param_2[0x18] != 0) {
      piVar9 = (int *)param_2[0x17];
      local_13c = (uint *****)(param_2[0x18] + -1);
      iVar10 = *piVar9;
      iVar13 = piVar9[1];
      iVar18 = *(int *)(iVar13 + 8);
      *(undefined2 *)(param_2 + 0x2e) = 0;
      local_138 = (uint *****)param_2[0x19];
      local_134 = (uint *****)param_2[0x1a];
      local_130 = local_160;
      local_12c = pppppuStack_15c;
      pppppuStack_128 = pppppuStack_158;
      pppppuStack_124 = pppppuStack_154;
      local_140 = (uint *****)(piVar9 + 2);
      uVar24 = (**(code **)(iVar13 + 0x20))
                         (iVar10 + (iVar18 - 1U & 0xfffffff8) + 8,local_400,uVar23,uVar21,&local_140
                         );
      *(undefined8 *)(param_2 + 0x2f) = uVar24;
      goto LAB_00674728;
    }
    *(undefined2 *)(param_2 + 0x2e) = 0;
    uVar24 = FUN_006c9928(param_2[0x19],param_2[0x1a],&local_160);
    *(undefined8 *)(param_2 + 0x2f) = uVar24;
LAB_006747c0:
    (**(code **)((int)((ulonglong)uVar24 >> 0x20) + 0xc))(&local_140,(int)uVar24,param_3);
    pppppuVar19 = local_13c;
    pppppuVar11 = local_140;
    if (local_140 != (uint *****)&DAT_00000003 || local_13c != (uint *****)0x0) {
      FUN_01bed4e2(&local_b0,&local_138,0x88);
      FUN_01139b38(param_2[0x2f],param_2[0x30]);
      goto LAB_00674828;
    }
    uVar3 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c045f8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c045f8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      local_400 = param_2[0x14];
      uVar23 = param_2[0x15];
      uVar21 = param_2[0x16];
      goto LAB_006744a8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c219ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c219ec);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0xba)) {
    case 0:
      local_160 = (uint *****)param_2[0x27];
      uVar23 = param_2[0x2b];
      uVar21 = param_2[0x2c];
      local_400 = param_2[0x2d];
      goto LAB_0067452c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c219dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c219dc);
    case 3:
      uVar24 = *(undefined8 *)(param_2 + 0x2f);
      break;
    case 4:
      uVar24 = *(undefined8 *)(param_2 + 0x2f);
      goto LAB_006747c0;
    }
LAB_00674728:
    (**(code **)((int)((ulonglong)uVar24 >> 0x20) + 0xc))(&local_140,(int)uVar24,param_3);
    pppppuVar19 = local_13c;
    pppppuVar11 = local_140;
    if (local_140 != (uint *****)&DAT_00000003 || local_13c != (uint *****)0x0) {
      FUN_01bed4e2(&local_b0,&local_138,0x88);
      FUN_01139b38(param_2[0x2f],param_2[0x30]);
LAB_00674828:
      local_3f8 = param_2 + 0x17;
      local_3fc = (uint *****)((int)param_2 + 0xba);
      *(undefined2 *)(param_2 + 0x2e) = 0;
      FUN_01bed4e2(&local_2c8,&local_b0,0x88);
      *(undefined1 *)((int)param_2 + 0xba) = 1;
      FUN_006755e4(local_3f8);
      *(undefined1 *)(param_2 + 0x31) = 1;
      FUN_01bed4e2(auStack_350,&local_2c8,0x88);
      local_358 = pppppuVar11;
      local_354 = pppppuVar19;
      FUN_006755c4(param_2 + 0xc);
      iVar10 = *(int *)(param_2[0x32] + 0x1c);
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar10 + 0x28) == 0) {
        iVar13 = param_2[10];
        if (iVar13 == 0) {
          local_b0 = (uint *****)&DAT_80000000;
        }
        else {
          pppppuVar11 = (uint *****)param_2[0xb];
          if ((int)pppppuVar11 < 0) {
            uVar21 = 0;
LAB_006748f4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar21,pppppuVar11);
          }
          if (pppppuVar11 == (uint *****)0x0) {
            pppppuVar19 = (uint *****)0x0;
            local_3fc = (uint *****)&DAT_00000001;
          }
          else {
            uVar21 = 1;
            local_3fc = (uint *****)FUN_01298504(pppppuVar11,1);
            if (local_3fc == (uint *****)0x0) goto LAB_006748f4;
            pppppuVar19 = pppppuVar11;
          }
          FUN_01bed4e2(local_3fc,iVar13,pppppuVar11);
          local_b0 = pppppuVar19;
          local_ac = local_3fc;
          local_a8 = pppppuVar11;
        }
        pppppuVar11 = local_b0;
        iVar18 = *(int *)(iVar10 + 0x14);
        if (iVar18 == 0) {
LAB_00674b10:
          local_240 = (uint *****)&DAT_80000000;
        }
        else {
          uVar5 = FUN_0068fd90(*(undefined4 *)(iVar10 + 0x18),*(undefined4 *)(iVar10 + 0x1c),
                               *(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24),
                               &local_b0);
          uVar20 = uVar5 >> 0x19;
          pppppuVar19 = *(uint ******)(iVar10 + 8);
          uVar14 = *(uint *)(iVar10 + 0xc);
          local_404 = 0;
          while( true ) {
            uVar5 = uVar14 & uVar5;
            uVar22 = *(uint *)((int)pppppuVar19 + uVar5);
            uVar6 = uVar22 ^ uVar20 * 0x1010101;
            uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
            while (uVar6 != 0) {
              uVar7 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                      uVar14;
              iVar8 = FUN_0067c4d4(&local_b0,pppppuVar19 + uVar7 * -6 + -6);
              uVar6 = uVar6 - 1 & uVar6;
              if (iVar8 != 0) {
                pppppuVar19 = pppppuVar19 + uVar7 * -6 + -3;
                goto LAB_00674a90;
              }
            }
            if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) break;
            local_404 = local_404 + 4;
            uVar5 = uVar5 + local_404;
          }
          if (iVar18 != 1) goto LAB_00674b10;
          local_130 = *(uint ******)(iVar10 + 0x14);
          local_138 = pppppuVar19 + 1;
          local_134 = (uint *****)((int)pppppuVar19 + uVar14 + 1);
          local_13c = (uint *****)(~(uint)*pppppuVar19 & 0x80808080);
          local_140 = pppppuVar19;
          uVar24 = FUN_0067d078(&local_140);
          pppppuVar19 = (uint *****)((ulonglong)uVar24 >> 0x20);
          if ((int)uVar24 == 0 || pppppuVar19 == (uint *****)0x0) goto LAB_00674b10;
LAB_00674a90:
          FUN_006666fc(&local_240,pppppuVar19[1],pppppuVar19[2]);
        }
        if (iVar13 != 0) {
          FUN_019bb7e0(pppppuVar11,local_3fc);
        }
        pppppuVar11 = local_240;
        if (local_240 == (uint *****)&DAT_80000000) goto LAB_00674894;
        iVar10 = param_2[0x32];
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar10 + 0x24) != 0) {
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d4b4fc - 1 < 2 ||
               ((DAT_01d4b4fc != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4b4f4), cVar4 != '\0')))) &&
              (iVar10 = FUN_01aaa278(DAT_01d4b4f4), iVar10 != 0)))) {
            local_2c0 = (uint *****)(DAT_01d4b4f4 + 0x1c);
            if (*(uint ******)(DAT_01d4b4f4 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04608);
            }
            local_ac = (uint *****)&local_1a0;
            local_138 = *(uint ******)(DAT_01d4b4f4 + 0x24);
            local_134 = *(uint ******)(DAT_01d4b4f4 + 0x28);
            local_b0 = (uint *****)&local_140;
            local_2c8 = (uint *****)&local_b0;
            local_2c4 = (uint *****)&DAT_00000001;
            local_130 = (uint *****)0x0;
            local_a8 = (uint *****)&DAT_01d2ea4c;
            local_19c = (uint *****)0x85;
            local_1a0 = (uint *****)0x3d4687;
            local_140 = (uint *****)*local_2c0;
            local_13c = *(uint ******)(DAT_01d4b4f4 + 0x20);
            FUN_00675840(&local_2c8);
          }
          else {
            iVar10 = DAT_01d4b4f4;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_230 = *(undefined4 *)(DAT_01d4b4f4 + 0x14);
              local_22c = *(undefined4 *)(DAT_01d4b4f4 + 0x18);
              local_234 = 1;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar13 = (*(code *)puVar12[3])(pcVar1,&local_234);
              if (iVar13 != 0) {
                local_2c0 = (uint *****)(DAT_01d4b4f4 + 0x1c);
                if (*(uint ******)(DAT_01d4b4f4 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04608);
                }
                local_ac = (uint *****)&local_1a0;
                local_138 = *(uint ******)(DAT_01d4b4f4 + 0x24);
                local_134 = *(uint ******)(DAT_01d4b4f4 + 0x28);
                local_b0 = (uint *****)&local_140;
                local_2c8 = (uint *****)&local_b0;
                local_130 = (uint *****)0x0;
                local_2c4 = (uint *****)&DAT_00000001;
                local_a8 = (uint *****)&DAT_01d2ea4c;
                local_19c = (uint *****)0x85;
                local_1a0 = (uint *****)0x3d4687;
                local_140 = (uint *****)*local_2c0;
                local_13c = *(uint ******)(DAT_01d4b4f4 + 0x20);
                FUN_01aaa328(iVar10,pcVar1,puVar12[4],&local_234,&local_2c8);
              }
            }
          }
          FUN_01bed4e2(auStack_3e8,&local_358,0x90);
          FUN_019bb7e0(pppppuVar11,local_23c);
          goto LAB_006748a4;
        }
        iVar13 = 0;
        DataMemoryBarrier(0xb);
        if (*(int *)(*(int *)(param_2[0x32] + 0x20) + 0x18) == 0) {
          iVar13 = *(int *)(param_2[0x32] + 0x20) + 8;
        }
        FUN_0067c454(&local_140,iVar13);
        if ((char)local_134 == '\x03') {
          local_2bc = (uint *****)CONCAT31(local_2bc._1_3_,2);
          pppppuVar19 = pppppuVar11;
        }
        else {
          local_2c8 = local_140;
          local_2c4 = local_13c;
          local_2c0 = local_138;
          local_2bc = local_134;
          pppppuVar19 = local_134;
        }
        if (local_2d8 == 0) {
          FUN_00675680(&local_140,auStack_318);
          if (local_140 == (uint *****)&DAT_80000000) {
            uVar21 = 2;
            local_b0 = (uint *****)0x2;
            local_a8 = local_140;
          }
          else if (local_138 == (uint *****)0x0) {
            FUN_019bb7e0(local_140,local_13c);
            local_a8 = (uint *****)&DAT_80000000;
            uVar21 = 3;
            local_b0 = (uint *****)0x0;
          }
          else {
            uVar21 = 3;
            local_3fc = local_13c;
            local_b0 = (uint *****)0x0;
            local_a8 = local_140;
            pppppuVar19 = local_138;
          }
        }
        else {
          pppppuVar16 = (uint *****)0x0;
          local_138 = (uint *****)0x0;
          local_13c = (uint *****)&DAT_00000001;
          local_140 = (uint *****)0x0;
          iVar13 = *(int *)(local_2dc + 0x18);
          uVar21 = *(undefined4 *)(local_2dc + 0x14);
          local_3fc = (uint *****)&DAT_00000001;
          if (iVar13 != 0) {
            FUN_0132b898(&local_140,0,iVar13,1,1);
          }
          pppppuVar19 = local_138;
          pppppuVar2 = local_140;
          FUN_01bed4e2((undefined1 *)((int)local_13c + (int)local_138),uVar21,iVar13);
          local_138 = (uint *****)((int)pppppuVar19 + iVar13);
          pppppuVar19 = (uint *****)0x0;
          if (pppppuVar2 != (uint *****)&DAT_80000000) {
            local_14c = local_13c;
            uVar20 = local_2d8 * 0x3c - 0x3c;
            local_150 = pppppuVar2;
            local_148 = local_138;
            if (uVar20 == 0) {
              local_19c = (uint *****)&DAT_00000001;
              pppppuVar19 = (uint *****)0x0;
            }
            else {
              pppppuVar19 = (uint *****)((uVar20 >> 2) * -0x22222222);
              local_19c = (uint *****)FUN_01298504(pppppuVar19,1);
              if (local_19c == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,pppppuVar19);
              }
            }
            local_140 = (uint *****)&local_150;
            local_198 = (uint *****)0x0;
            local_13c = (uint *****)&LAB_00632348;
            local_1a0 = pppppuVar19;
            iVar13 = FUN_012fa178(&local_1a0,&DAT_01c0764c,&DAT_00590e5f,&local_140);
            if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01c04814,&DAT_01c1d470);
            }
            if (local_2d8 != 1) {
              piVar9 = (int *)(local_2dc + 0x54);
              do {
                iVar13 = piVar9[-1];
                iVar18 = *piVar9;
                local_a8 = (uint *****)0x0;
                local_ac = (uint *****)&DAT_00000001;
                local_b0 = (uint *****)0x0;
                if (iVar18 != 0) {
                  FUN_0132b898(&local_b0,0,iVar18,1,1);
                }
                pppppuVar19 = local_a8;
                FUN_01bed4e2((undefined1 *)((int)local_ac + (int)local_a8),iVar13,iVar18);
                local_138 = (uint *****)((int)pppppuVar19 + iVar18);
                local_140 = local_b0;
                local_13c = local_ac;
                local_a8 = local_138;
                if ((uint)((int)local_1a0 - (int)local_198) < 2) {
                  FUN_0132b898(&local_1a0,local_198,2,1,1);
                }
                *(undefined2 *)((int)local_19c + (int)local_198) = 0x202c;
                local_ac = (uint *****)&LAB_00632348;
                local_198 = (uint *****)((int)local_198 + 2);
                local_b0 = (uint *****)&local_140;
                iVar13 = FUN_012fa178(&local_1a0,&DAT_01c0764c,&DAT_00590e5f,&local_b0);
                if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01c04814,&DAT_01c1d480);
                }
                piVar9 = piVar9 + 0xf;
                FUN_019bb7e0(local_140,local_13c);
                uVar20 = uVar20 - 0x3c;
              } while (uVar20 != 0);
            }
            pppppuVar19 = local_198;
            pppppuVar16 = local_1a0;
            local_3fc = local_19c;
            FUN_019bb7e0(local_150,local_14c);
          }
          uVar21 = 3;
          local_b0 = (uint *****)0x0;
          local_a8 = pppppuVar16;
        }
        local_a4 = local_3fc;
        local_ac = (uint *****)0x0;
        local_a0 = pppppuVar19;
        FUN_00671a1c(&local_140,iVar10 + 0x28);
        local_198 = local_238;
        local_19c = local_23c;
        local_1a0 = pppppuVar11;
        FUN_0069f130(auStack_228,&local_140,2,&local_1a0,uVar21,&local_2c8,&local_b0);
        FUN_006807d8(param_2[0x32],auStack_228);
        FUN_01bed4e2(auStack_3e8,&local_358,0x90);
      }
      else {
LAB_00674894:
        FUN_01bed4e2(auStack_3e8,&local_358,0x90);
LAB_006748a4:
        if (*(char *)(param_2 + 0x35) != '\0') {
          FUN_0067593c(param_2);
        }
      }
      FUN_01bed4e2(param_1,auStack_3e8,0x90);
      uVar3 = 1;
      goto LAB_006748cc;
    }
    uVar3 = 3;
  }
  local_3fc = (uint *****)((int)param_2 + 0xba);
  *(undefined1 *)local_3fc = uVar3;
  uVar3 = 3;
  *(undefined1 *)(param_2 + 0x31) = 3;
  *param_1 = 3;
  param_1[1] = 0;
LAB_006748cc:
  *(undefined1 *)((int)param_2 + 0xd5) = uVar3;
  return;
}

