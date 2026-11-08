// FUN_00d75310 @ 00d75310 size=4860 calls_out=25 calls_in=0
// strings: assertion failed: self.inner.semaphore.is_idle()

/* WARNING: Removing unreachable block (ram,0x00d75c78) */
/* WARNING: Removing unreachable block (ram,0x00d75c80) */
/* WARNING: Removing unreachable block (ram,0x00d75c84) */
/* WARNING: Removing unreachable block (ram,0x00d75ad0) */
/* WARNING: Removing unreachable block (ram,0x00d75ad8) */
/* WARNING: Removing unreachable block (ram,0x00d75adc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d75310(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *unaff_r8;
  uint *puVar15;
  uint *unaff_r9;
  uint *puVar16;
  int iVar17;
  uint *extraout_r12;
  uint *local_2e0;
  uint *local_2dc;
  uint *local_2d8;
  uint *local_2d4;
  uint *local_2cc;
  undefined1 local_2c8 [8];
  undefined1 auStack_2c0 [72];
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint local_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint *local_258;
  uint *puStack_254;
  uint *puStack_250;
  uint *puStack_24c;
  uint *puStack_248;
  uint *puStack_244;
  undefined1 *local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint *local_228;
  uint *local_224;
  uint *puStack_220;
  uint *puStack_21c;
  uint *local_218;
  uint *puStack_214;
  uint *puStack_210;
  uint *puStack_20c;
  uint *puStack_208;
  uint *puStack_204;
  undefined1 *local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint *local_1e8;
  uint *local_1e4;
  uint *local_1e0;
  uint *local_1dc;
  uint *puStack_1d8;
  uint *local_1d4;
  uint *local_1d0;
  uint *puStack_1cc;
  uint *puStack_1c8;
  uint *puStack_1c4;
  uint *local_1c0;
  uint *puStack_1bc;
  undefined1 *local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint *local_180;
  uint *local_17c;
  uint *local_178;
  uint *puStack_174;
  uint *puStack_170;
  uint *local_16c;
  uint *puStack_168;
  uint *puStack_164;
  uint *puStack_160;
  uint *puStack_15c;
  uint local_120;
  uint *local_11c;
  uint *local_118;
  uint *puStack_114;
  undefined1 *puStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint *local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  uint *local_e0;
  uint *local_dc;
  uint *local_d8;
  uint *local_d4;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint *local_90;
  uint *local_8c;
  uint **local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *local_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint *local_48;
  uint *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar11 = (uint *)*param_2;
  puVar14 = (uint *)param_2[1];
  uVar5 = param_2[0x25];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar11 == (uint *)&DAT_00000003 && puVar14 == (uint *)0x0) {
    puVar13 = param_2 + 0x26;
    local_2cc = param_2 + 0x1c;
    uVar8 = *puVar13;
    puVar10 = puVar13;
    local_2d4 = param_2;
    if (uVar8 != 0) {
      uVar6 = *param_3;
      puVar12 = puVar11;
      do {
        uVar2 = FUN_019ec670(uVar6);
        unaff_r9 = (uint *)0x0;
        if ((uVar2 & 0xff) != 2) {
          if ((uVar2 & 1) == 0) {
            puVar12 = (uint *)((uVar2 & 0xffffff) >> 0x10);
            unaff_r9 = (uint *)((uVar2 & 0xffffff) >> 8);
            goto LAB_00d753d8;
          }
LAB_00d762a8:
          if (param_2[0x1d] != 0) goto LAB_00d76564;
          goto LAB_00d768a4;
        }
LAB_00d753d8:
        puVar11 = (uint *)(uVar8 + 0x20);
        FUN_01a9e54c(&local_f8,uVar8 + 0x70,puVar11);
        if (((uint)local_f8 & 7) != 4) {
          if (local_f8 != (uint *)&DAT_00000005) {
            FUN_01bed4e2(&local_90,&local_f8,0x68);
            FUN_019f8c54(uVar8 + 0x80,1);
LAB_00d75490:
            puVar14 = local_f4;
            puVar11 = local_f8;
            FUN_01bed4e2(&local_180,&local_f0,0x60);
            goto LAB_00d754c8;
          }
          FUN_019f79e0(uVar8 + 0x40,uVar6);
          FUN_01a9e54c(&local_f8,uVar8 + 0x70,puVar11);
          if (((uint)local_f8 & 7) == 4) {
            DataMemoryBarrier(0xb);
            if (*(uint *)(uVar8 + 0x94) != *(uint *)(uVar8 + 0x90) >> 1) {
              puVar7 = &DAT_01d2e17c;
              goto LAB_00d769c0;
            }
            goto LAB_00d754c0;
          }
          if (local_f8 != (uint *)&DAT_00000005) {
            FUN_01bed4e2(&local_90,&local_f8,0x68);
            FUN_019f8c54(uVar8 + 0x80,1);
            goto LAB_00d75490;
          }
          if (*(char *)(uVar8 + 0x7c) != '\x01') {
LAB_00d76974:
            FUN_019edbc4(unaff_r9,puVar12);
            goto LAB_00d762a8;
          }
          DataMemoryBarrier(0xb);
          if (*(uint *)(uVar8 + 0x94) == *(uint *)(uVar8 + 0x90) >> 1) {
            unaff_r9 = (uint *)0x0;
          }
          if (*(uint *)(uVar8 + 0x94) != *(uint *)(uVar8 + 0x90) >> 1) goto LAB_00d76974;
          FUN_019edbc4(unaff_r9,puVar12);
          local_1e4 = (uint *)0x0;
          local_1e8 = (uint *)&SUB_00000004;
          FUN_01bed4e2(&local_1e0,&local_180,0x60);
LAB_00d76534:
          if (*puVar13 != 0) {
            FUN_00d7519c(puVar13);
          }
          *puVar13 = 0;
          puVar10 = puVar11;
          break;
        }
        DataMemoryBarrier(0xb);
        if (*(uint *)(uVar8 + 0x94) != *(uint *)(uVar8 + 0x90) >> 1) {
          puVar7 = &DAT_01d2e18c;
LAB_00d769c0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar7);
        }
LAB_00d754c0:
        puVar14 = (uint *)0x0;
        puVar11 = (uint *)&SUB_00000004;
LAB_00d754c8:
        FUN_019edbc4(0,puVar12);
        unaff_r9 = (uint *)((uint)puVar11 ^ 5 | (uint)puVar14);
        if (unaff_r9 == (uint *)0x0) goto LAB_00d762a8;
        local_1e8 = puVar11;
        local_1e4 = puVar14;
        FUN_01bed4e2(&local_1e0,&local_180,0x60);
        puVar15 = local_1d4;
        puVar1 = puStack_1d8;
        puVar12 = local_1dc;
        puVar10 = local_1e0;
        if (puVar11 == (uint *)&SUB_00000004 && puVar14 == (uint *)0x0) goto LAB_00d76534;
        local_258 = local_1d0;
        puStack_254 = puStack_1cc;
        puStack_250 = puStack_1c8;
        puStack_24c = puStack_1c4;
        puStack_248 = local_1c0;
        puStack_244 = puStack_1bc;
        local_240 = local_1b8;
        uStack_23c = uStack_1b4;
        uStack_238 = local_1b0;
        uStack_234 = uStack_1ac;
        uStack_230 = uStack_1a8;
        uStack_22c = uStack_1a4;
        local_278 = local_1a0;
        uStack_274 = uStack_19c;
        uStack_270 = uStack_198;
        uStack_26c = uStack_194;
        local_268 = local_190;
        uStack_264 = uStack_18c;
        uStack_260 = uStack_188;
        uStack_25c = uStack_184;
        if (puVar11 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
          local_2dc = local_1e0;
          local_2d8 = puVar11;
          if (unaff_r9 == (uint *)0x0) goto LAB_00d762a8;
          uVar5 = param_2[0x1d];
          if (uVar5 == 0) {
            puVar10 = local_1d4;
            unaff_r8 = local_1dc;
            unaff_r9 = puStack_1d8;
            goto LAB_00d76614;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar5 = param_2[0x1d];
          }
          param_2[5] = (uint)puVar15;
          *param_2 = (uint)puVar11;
          param_2[1] = (uint)puVar14;
          param_2[2] = (uint)puVar10;
          param_2[3] = (uint)puVar12;
          param_2[4] = (uint)puVar1;
          param_2[6] = (uint)local_258;
          param_2[7] = (uint)puStack_254;
          param_2[8] = (uint)puStack_250;
          param_2[9] = (uint)puStack_24c;
          param_2[10] = (uint)puStack_248;
          param_2[0xb] = (uint)puStack_244;
          param_2[0xc] = (uint)local_240;
          param_2[0xd] = uStack_23c;
          param_2[0xe] = uStack_238;
          param_2[0xf] = uStack_234;
          param_2[0x10] = uStack_230;
          param_2[0x11] = uStack_22c;
          param_2[0x12] = local_278;
          param_2[0x13] = uStack_274;
          param_2[0x14] = uStack_270;
          param_2[0x15] = uStack_26c;
          param_2[0x16] = local_268;
          param_2[0x17] = uStack_264;
          param_2[0x18] = uStack_260;
          param_2[0x19] = uStack_25c;
          FUN_01283fd8(&local_1e8,local_2cc,uVar5);
          puVar11 = local_1dc;
          if (((uint)local_1dc & 1) == 0) goto LAB_00d76584;
          local_178 = (uint *)((int)local_1e4 + ((uint)local_1dc >> 5));
          local_17c = (uint *)((int)local_1e8 - ((uint)local_1dc >> 5));
          local_180 = (uint *)((int)local_1e0 + ((uint)local_1dc >> 5));
          FUN_01283524(&local_f8,&local_180);
          local_120 = (uint)puVar11 >> 5;
          if (local_f0 < (uint *)((uint)puVar11 >> 5)) {
            local_88 = &local_11c;
            local_11c = local_f0;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_120;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
LAB_00d76478:
          unaff_r9 = (uint *)((int)local_f0 - local_120);
          goto LAB_00d765f4;
        }
        local_224 = local_1dc;
        puStack_220 = puStack_1d8;
        puStack_21c = local_1d4;
        local_2dc = local_1dc;
        local_228 = local_1e0;
        local_218 = local_1d0;
        puStack_214 = puStack_1cc;
        puStack_210 = puStack_1c8;
        puStack_20c = puStack_1c4;
        puStack_208 = local_1c0;
        puStack_204 = puStack_1bc;
        local_200 = local_1b8;
        uStack_1fc = uStack_1b4;
        uStack_1f8 = local_1b0;
        uStack_1f4 = uStack_1ac;
        uStack_1f0 = uStack_1a8;
        uStack_1ec = uStack_1a4;
        uVar2 = param_2[0x1a];
        local_2e0 = (uint *)param_2[0x1d];
        uVar8 = param_2[0x1b];
        puVar16 = local_2e0;
        if (param_2[0x1e] - (int)local_2e0 < 5) {
          FUN_01283c9c(local_2cc,5);
          puVar16 = (uint *)param_2[0x1d];
          local_f4 = (uint *)(param_2[0x1e] - (int)puVar16);
          if (local_f4 < 5) {
            local_f8 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_f8);
          }
        }
        param_2[0x1d] = (int)puVar16 + 5;
        local_ec = puVar15;
        local_f4 = puVar12;
        local_f8 = puVar10;
        iVar17 = 0;
        local_f0 = puVar1;
        local_e8 = local_258;
        local_e4 = puStack_254;
        local_e0 = puStack_250;
        local_dc = puStack_24c;
        local_d8 = puStack_248;
        local_d4 = puStack_244;
        local_cc = uStack_23c;
        local_c8 = uStack_238;
        uStack_c4 = uStack_234;
        local_c0 = uStack_230;
        local_bc = uStack_22c;
        iVar9 = 0;
        if (puVar1 != (uint *)0x0) {
          iVar17 = (int)puVar1 + ((LZCOUNT((uint)puVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if (puVar15 != (uint *)&DAT_80000000) {
          uVar3 = 0;
          if (puStack_254 != (uint *)0x0) {
            uVar3 = (int)puStack_254 +
                    ((LZCOUNT((uint)puStack_254 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          if (puStack_250 != (uint *)&DAT_80000005) {
            puVar11 = (uint *)0x2;
            if ((int)puStack_250 < 0) {
              puVar11 = puStack_250;
            }
                    /* WARNING: Could not recover jumptable at 0x00d756a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00d756a4 + *(int *)(&DAT_00d756a4 + (int)puVar11 * 4)))();
            return;
          }
          iVar9 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if (local_240 != &DAT_80000004) {
          puVar4 = (undefined1 *)0x1;
          if ((int)local_240 < 0) {
            puVar4 = local_240;
          }
                    /* WARNING: Could not recover jumptable at 0x00d75788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00d7578c + *(int *)(&DAT_00d7578c + (int)puVar4 * 4)))();
          return;
        }
        local_2d8 = (uint *)(0x7ffffffa - (int)puVar16);
        puVar11 = (uint *)(iVar9 + iVar17);
        if (local_2d8 < puVar11) {
LAB_00d76a54:
          local_1e8 = puVar11;
          local_1e4 = local_2d8;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1e8,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (puVar1 != (uint *)0x0) {
          FUN_01016f10(1,puVar12,puVar1,local_2cc);
        }
        if (puVar15 != (uint *)&DAT_80000000) {
          local_1e8 = (uint *)CONCAT31(local_1e8._1_3_,0x12);
          FUN_01284394(local_2cc,&local_1e8,1);
          puVar15 = local_e4;
          uVar3 = 0;
          if (local_e4 != (uint *)0x0) {
            uVar3 = (int)local_e4 + ((LZCOUNT((uint)local_e4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          if (local_e0 != (uint *)&DAT_80000005) {
            puVar11 = (uint *)0x2;
            if ((int)local_e0 < 0) {
              puVar11 = local_e0;
            }
                    /* WARNING: Could not recover jumptable at 0x00d759a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00d759ac + *(int *)(&DAT_00d759ac + (int)puVar11 * 4)))();
            return;
          }
          iVar9 = 10;
          do {
            if (uVar3 < 0x80) {
              local_1e8 = (uint *)CONCAT31(local_1e8._1_3_,(char)uVar3);
              FUN_01284394(local_2cc,&local_1e8,1);
              break;
            }
            local_1e8 = (uint *)(CONCAT31(local_1e8._1_3_,(char)uVar3) | 0x80);
            FUN_01284394(local_2cc,&local_1e8,1);
            uVar3 = uVar3 >> 7;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          if (puVar15 != (uint *)0x0) {
            FUN_01016f10(1,local_e8,puVar15,local_2cc);
          }
          puVar16 = (uint *)&DAT_80000004;
        }
        if (local_2d8 < puVar11) goto LAB_00d76a54;
        FUN_00d76c88(&local_f8);
        puVar11 = (uint *)param_2[0x1d];
        if (puVar11 < local_2e0) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(local_2e0,puVar11,puVar11,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,uVar2,uVar8,*local_2cc + (int)local_2e0,(int)puVar11 - (int)local_2e0
                    );
        puVar10 = local_7c;
        unaff_r9 = local_80;
        unaff_r8 = local_84;
        puVar14 = local_8c;
        puVar11 = local_90;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_2dc = (uint *)local_88;
          FUN_01bed4e2(local_2c8,&local_78,0x50);
          goto LAB_00d76610;
        }
        if (uVar5 <= param_2[0x1d]) {
          FUN_01283fd8(&local_1e8,local_2cc);
          puVar11 = local_1dc;
          if (((uint)local_1dc & 1) != 0) {
            local_178 = (uint *)((int)local_1e4 + ((uint)local_1dc >> 5));
            local_17c = (uint *)((int)local_1e8 - ((uint)local_1dc >> 5));
            local_180 = (uint *)((int)local_1e0 + ((uint)local_1dc >> 5));
            FUN_01283524(&local_f8,&local_180);
            local_120 = (uint)puVar11 >> 5;
            if (local_f0 < (uint *)((uint)puVar11 >> 5)) {
              local_88 = &local_11c;
              local_11c = local_f0;
              local_84 = (uint *)&LAB_01a6a304;
              local_8c = (uint *)&LAB_01a6a304;
              local_90 = &local_120;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
            }
            goto LAB_00d76478;
          }
          goto LAB_00d76584;
        }
        uVar8 = *puVar13;
        puVar10 = puVar13;
        puVar12 = local_90;
        unaff_r8 = puVar15;
        unaff_r9 = puVar16;
      } while (uVar8 != 0);
    }
    if (param_2[0x1d] == 0) {
      puVar14 = (uint *)0x0;
      puVar11 = (uint *)&SUB_00000004;
LAB_00d76610:
    }
    else {
LAB_00d76564:
      FUN_01283fd8(&local_1e8,local_2cc);
      puVar11 = local_1dc;
      if (((uint)local_1dc & 1) == 0) {
LAB_00d76584:
        local_2dc = &DAT_01d2e520;
        puVar10 = local_1dc;
        unaff_r8 = local_1e8;
        unaff_r9 = local_1e4;
      }
      else {
        local_178 = (uint *)((int)local_1e4 + ((uint)local_1dc >> 5));
        local_17c = (uint *)((int)local_1e8 - ((uint)local_1dc >> 5));
        local_180 = (uint *)((int)local_1e0 + ((uint)local_1dc >> 5));
        FUN_01283524(&local_f8,&local_180);
        local_120 = (uint)puVar11 >> 5;
        if (local_f0 < (uint *)((uint)puVar11 >> 5)) {
          local_88 = &local_11c;
          local_11c = local_f0;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_120;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
        unaff_r9 = (uint *)((int)local_f0 - local_120);
LAB_00d765f4:
        unaff_r8 = (uint *)((int)local_f4 + local_120);
        puVar10 = local_ec;
        local_2dc = local_f8;
      }
      puVar14 = (uint *)0x0;
      puVar11 = (uint *)&DAT_00000003;
    }
LAB_00d76614:
    if (puVar11 == (uint *)&SUB_00000004 && puVar14 == (uint *)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x28);
      if (local_90 == (uint *)&SUB_00000004 && local_8c == (uint *)0x0) {
        local_78 = unaff_r8;
        local_7c = extraout_r12;
      }
      else {
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_118 = local_48;
          puStack_114 = puStack_44;
          puStack_110 = puStack_40;
          uStack_10c = uStack_3c;
          local_108 = local_38;
          uStack_104 = uStack_34;
          uStack_100 = uStack_30;
          uStack_fc = uStack_2c;
        }
        local_2d8 = local_80;
        local_2e0 = local_74;
        local_2cc = (uint *)local_88;
        local_2d4 = local_84;
        local_f8 = local_70;
        local_f4 = puStack_6c;
        local_f0 = puStack_68;
        local_ec = puStack_64;
        local_e8 = puStack_60;
        local_e4 = local_5c;
        local_e0 = puStack_58;
        local_dc = puStack_54;
        local_d8 = puStack_50;
        local_d4 = puStack_4c;
      }
      local_1e8 = local_f8;
      local_1e4 = local_f4;
      local_1e0 = local_f0;
      local_1dc = local_ec;
      puStack_1d8 = local_e8;
      local_1d4 = local_e4;
      local_1d0 = local_e0;
      puStack_1cc = local_dc;
      puStack_1c8 = local_d8;
      puStack_1c4 = local_d4;
      local_1c0 = local_118;
      puStack_1bc = puStack_114;
      local_1b8 = puStack_110;
      uStack_1b4 = uStack_10c;
      local_1b0 = local_108;
      uStack_1ac = uStack_104;
      uStack_1a8 = uStack_100;
      uStack_1a4 = uStack_fc;
      puVar13 = local_78;
LAB_00d76878:
      puVar14 = local_8c;
      puVar10 = local_7c;
      puVar11 = local_90;
LAB_00d7687c:
      if (puVar11 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
        if (puVar11 != (uint *)&SUB_00000004 || puVar14 != (uint *)0x0) {
          if (puVar11 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_1e8,0x48);
            local_84 = local_2d4;
            local_88 = (uint **)local_2cc;
            local_74 = local_2e0;
            local_80 = local_2d8;
            local_90 = puVar11;
            local_8c = puVar14;
            local_7c = puVar10;
            local_78 = puVar13;
            uVar6 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar6,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d768a4;
        }
        uVar6 = 4;
        goto LAB_00d768b8;
      }
      local_2dc = local_2d8;
      unaff_r8 = puVar10;
    }
    else {
      if (puVar11 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
        local_f0 = local_2dc;
        local_f8 = puVar11;
        local_f4 = puVar14;
        local_ec = unaff_r8;
        local_e8 = unaff_r9;
        local_e4 = puVar10;
        FUN_01bed4e2(&local_e0,local_2c8,0x50);
        puVar13 = local_e0;
        if ((char)param_2[0x42] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_90,&local_f8);
          local_2cc = (uint *)local_88;
          local_2d4 = local_84;
          local_2e0 = local_74;
          local_2d8 = local_80;
          local_180 = local_70;
          local_17c = puStack_6c;
          local_178 = puStack_68;
          puStack_174 = puStack_64;
          puStack_170 = puStack_60;
          local_16c = local_5c;
          puStack_168 = puStack_58;
          puStack_164 = puStack_54;
          puStack_160 = puStack_50;
          puStack_15c = puStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_1e8 = local_70;
            local_1e4 = puStack_6c;
            local_1e0 = puStack_68;
            local_1dc = puStack_64;
            puStack_1d8 = puStack_60;
            local_1d4 = local_5c;
            local_1d0 = puStack_58;
            puStack_1cc = puStack_54;
            puStack_1c8 = puStack_50;
            puStack_1c4 = puStack_4c;
            FUN_005f6588(&local_f8);
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
          }
          else {
            local_1c0 = local_48;
            puStack_1bc = puStack_44;
            local_1b8 = puStack_40;
            uStack_1b4 = uStack_3c;
            local_1b0 = local_38;
            uStack_1ac = uStack_34;
            uStack_1a8 = uStack_30;
            uStack_1a4 = uStack_2c;
            local_1e8 = local_70;
            local_1e4 = puStack_6c;
            local_1e0 = puStack_68;
            local_1dc = puStack_64;
            puStack_1d8 = puStack_60;
            local_1d4 = local_5c;
            local_1d0 = puStack_58;
            puStack_1cc = puStack_54;
            puStack_1c8 = puStack_50;
            puStack_1c4 = puStack_4c;
            FUN_005f6588(&local_f8);
          }
          puVar13 = local_78;
          goto LAB_00d76878;
        }
        local_2e0 = local_dc;
        local_2cc = local_f0;
        local_2d4 = local_ec;
        FUN_01bed4e2(&local_1e8,auStack_2c0,0x48);
        local_2d8 = unaff_r9;
        goto LAB_00d7687c;
      }
      local_2d4 = (uint *)0x0;
      local_2cc = (uint *)&DAT_00000003;
      puVar13 = unaff_r9;
      local_2e0 = puVar10;
    }
    param_1[8] = local_1e8;
    param_1[9] = local_1e4;
    param_1[10] = local_1e0;
    param_1[0xb] = local_1dc;
    param_1[0xc] = puStack_1d8;
    param_1[0xd] = local_1d4;
    param_1[0xe] = local_1d0;
    param_1[0xf] = puStack_1cc;
    param_1[0x10] = puStack_1c8;
    param_1[0x11] = puStack_1c4;
    param_1[1] = 0;
    param_1[2] = local_2cc;
    param_1[3] = local_2d4;
    *param_1 = 3;
    param_1[4] = local_2dc;
    param_1[5] = unaff_r8;
    param_1[6] = puVar13;
    param_1[7] = local_2e0;
  }
  else {
    local_2dc = (uint *)param_2[2];
    unaff_r8 = (uint *)param_2[3];
    unaff_r9 = (uint *)param_2[4];
    puVar10 = (uint *)param_2[5];
    FUN_01bed4e2(local_2c8,param_2 + 6,0x50);
    if (puVar11 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0) goto LAB_00d76614;
LAB_00d768a4:
    uVar6 = 5;
LAB_00d768b8:
    *param_1 = uVar6;
    param_1[1] = 0;
  }
  return;
}

