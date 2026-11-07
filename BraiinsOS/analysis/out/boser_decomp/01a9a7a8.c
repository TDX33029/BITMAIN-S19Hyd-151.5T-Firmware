// FUN_01a9a7a8 @ 01a9a7a8 size=2196 calls_out=17 calls_in=1
// strings: invalid MessageRequest

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01a9a7a8(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [96];
  undefined1 auStack_1e8 [96];
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined1 auStack_15c [68];
  int local_118;
  int local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined1 auStack_6c [72];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x244)) {
  case 0:
    *(undefined2 *)(param_1 + 0x245) = 0;
    *(undefined1 *)(param_1 + 0x247) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2e06c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e06c);
  case 3:
    iVar7 = *(int *)(param_1 + 0x248);
    goto LAB_01a9a8b4;
  case 4:
    goto LAB_01a9a824;
  case 5:
switchD_01a9a7d0_caseD_5:
    FUN_01a9bdfc(&local_90,param_1 + 0x248,param_2);
    uVar10 = local_8c;
    uVar9 = local_90;
    if (local_90 == 5 && local_8c == 0) {
      uVar3 = 1;
      uVar5 = 5;
    }
    else {
      FUN_01bed4e2(auStack_1e8,&local_88,0x60);
      FUN_01a9a37c(param_1 + 0x248);
      if (uVar9 != 4 || uVar10 != 0) {
        local_90 = uVar9;
        local_8c = uVar10;
        FUN_01bed4e2(&local_88,auStack_1e8,0x60);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_0056d284,4,&local_90,&DAT_01d2e09c,&DAT_01d2e08c);
      }
      *(undefined2 *)(param_1 + 0x246) = 0;
      FUN_01a9a400(param_1 + 0x228);
      if (*(int *)(param_1 + 0x150) != 3 || *(int *)(param_1 + 0x154) != 0) {
LAB_01a9b8f8:
        FUN_01a9a428(param_1 + 0x150);
      }
      FUN_01a8d084(param_1);
      piVar4 = *(int **)(param_1 + 0x220);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a9c794(*(undefined4 *)(param_1 + 0x220));
      }
LAB_01a9b938:
      FUN_01a8d004(param_1 + 0x224);
      uVar3 = 0;
      uVar5 = 1;
    }
LAB_01a9b948:
    *(undefined1 *)(param_1 + 0x244) = uVar5;
    return uVar3;
  }
  do {
    *(int *)(param_1 + 0x248) = param_1;
    iVar7 = param_1;
LAB_01a9a8b4:
    puVar8 = (uint *)(iVar7 + 0x40);
    uVar9 = *puVar8;
    uVar10 = *(uint *)(iVar7 + 0x44);
    if (uVar10 != 0 || uVar10 < (3 < uVar9)) {
      do {
        (**(code **)(*(int *)(iVar7 + 0xe4) + 0x10))(*(undefined4 *)(iVar7 + 0xe0));
        FUN_01a71cb4(&local_90,iVar7);
        uVar10 = local_84;
        uVar9 = local_88;
        uVar12 = local_8c;
        uVar11 = local_90;
        if (local_90 != 3 || local_8c != 0) {
          FUN_01bed4e2(&local_170,&local_80,0x58);
LAB_01a9ab7c:
          local_188 = local_170;
          uStack_184 = uStack_16c;
          uStack_180 = uStack_168;
          uStack_17c = uStack_164;
          uStack_178 = uStack_160;
          FUN_01bed4e2(&local_2c0,auStack_15c,0x44);
          local_278 = local_188;
          uStack_274 = uStack_184;
          uStack_270 = uStack_180;
          uStack_26c = uStack_17c;
          uStack_268 = uStack_178;
          goto LAB_01a9abb4;
        }
        if (local_88 != 0) {
          local_ac = local_84;
          local_b0 = local_88;
          (**(code **)(*(int *)(iVar7 + 0xe4) + 0xc))
                    (&local_90,*(undefined4 *)(iVar7 + 0xe0),&local_b0);
          uVar10 = local_84;
          uVar9 = local_88;
          uVar12 = local_8c;
          uVar11 = local_90;
          local_a8 = local_80;
          uStack_a4 = uStack_7c;
          uStack_a0 = uStack_78;
          uStack_9c = uStack_74;
          uStack_98 = uStack_70;
          if (local_90 != 3 || local_8c != 0) {
            FUN_01bed4e2(auStack_15c,auStack_6c,0x44);
            local_170 = local_a8;
            uStack_16c = uStack_a4;
            uStack_168 = uStack_a0;
            uStack_164 = uStack_9c;
            uStack_160 = uStack_98;
            goto LAB_01a9ab7c;
          }
          if (local_88 != 0x80000000) {
            uVar12 = 0;
            local_8c = local_84;
            local_90 = local_88;
            local_88 = local_80;
            local_84 = uStack_7c;
            local_80 = uStack_78;
            uStack_7c = uStack_74;
            uStack_78 = uStack_70;
            uVar11 = *puVar8;
            if ((uVar11 != 3 || *(int *)(iVar7 + 0x44) != 0) &&
               ((uint)-*(int *)(iVar7 + 0x44) < (uint)(uVar11 < 4) || (uVar11 & 6) != 4)) {
              FUN_005f6588(puVar8);
            }
            *puVar8 = 4;
            *(undefined4 *)(iVar7 + 0x44) = 0;
            uVar11 = 3;
            local_278 = local_88;
            uStack_274 = local_84;
            uStack_270 = local_80;
            uStack_26c = uStack_7c;
            uStack_268 = uStack_78;
            local_2d8 = uVar9 >> 8;
            local_188 = local_278;
            uStack_184 = uStack_274;
            uStack_180 = uStack_270;
            uStack_17c = uStack_26c;
            uStack_178 = uStack_268;
            local_170 = local_278;
            uStack_16c = uStack_274;
            uStack_168 = uStack_270;
            uStack_164 = uStack_26c;
            uStack_160 = uStack_268;
            goto LAB_01a9abb8;
          }
        }
        FUN_01a71074(&local_90,iVar7,param_2);
        uVar10 = local_84;
        uVar12 = local_8c;
        uVar11 = local_90;
        if (local_90 == 4 && local_8c == 0) {
          uVar3 = 1;
          uVar5 = 3;
          goto LAB_01a9b948;
        }
        uVar9 = local_88 & 0xff;
        if (local_90 != 3 || local_8c != 0) {
          local_2d8 = local_88 >> 8;
          local_278 = local_80;
          uStack_274 = uStack_7c;
          uStack_270 = uStack_78;
          uStack_26c = uStack_74;
          uStack_268 = uStack_70;
          FUN_01bed4e2(&local_2c0,auStack_6c,0x44);
          goto LAB_01a9abb8;
        }
        if ((local_88 & 1) == 0) {
          FUN_01a72290(&local_118,iVar7);
          if (local_118 == 3 && local_114 == 0) {
            uVar12 = 0;
            uVar11 = 4;
            uVar9 = local_2e8;
            uVar10 = local_2e4;
            goto LAB_01a9abb8;
          }
          uVar9 = *puVar8;
          if ((uVar9 != 3 || *(int *)(iVar7 + 0x44) != 0) &&
             ((uint)-*(int *)(iVar7 + 0x44) < (uint)(uVar9 < 4) || (uVar9 & 6) != 4)) {
            FUN_005f6588(puVar8);
          }
          FUN_01bed4e2(puVar8,&local_118,0x68);
        }
        uVar9 = *puVar8;
        uVar10 = *(uint *)(iVar7 + 0x44);
      } while (uVar10 != 0 || uVar10 < (3 < uVar9));
    }
    *puVar8 = 3;
    *(undefined4 *)(iVar7 + 0x44) = 0;
    uVar11 = 4;
    uVar12 = 0;
    if (uVar9 != 3 || uVar10 != 0) {
      local_2dc = *(uint *)(iVar7 + 0x48);
      local_2e0 = *(uint *)(iVar7 + 0x4c);
      local_170 = *(uint *)(iVar7 + 0x50);
      uStack_16c = *(uint *)(iVar7 + 0x54);
      uStack_168 = *(uint *)(iVar7 + 0x58);
      uStack_164 = *(uint *)(iVar7 + 0x5c);
      uStack_160 = *(uint *)(iVar7 + 0x60);
      FUN_01bed4e2(&local_90,iVar7 + 100,0x44);
      uVar11 = uVar9;
      uVar12 = uVar10;
    }
    local_278 = local_170;
    uStack_274 = uStack_16c;
    uStack_270 = uStack_168;
    uStack_26c = uStack_164;
    uStack_268 = uStack_160;
    FUN_01bed4e2(&local_2c0,&local_90,0x44);
    uVar9 = local_2dc;
    uVar10 = local_2e0;
LAB_01a9abb4:
    local_2d8 = uVar9 >> 8;
LAB_01a9abb8:
    *(uint *)(param_1 + 0xe8) = uVar11;
    *(uint *)(param_1 + 0xec) = uVar12;
    *(uint *)(param_1 + 0xf0) = uVar9 & 0xff | local_2d8 << 8;
    *(uint *)(param_1 + 0xf4) = uVar10;
    *(uint *)(param_1 + 0xf8) = local_278;
    *(uint *)(param_1 + 0xfc) = uStack_274;
    *(uint *)(param_1 + 0x100) = uStack_270;
    *(uint *)(param_1 + 0x104) = uStack_26c;
    *(uint *)(param_1 + 0x108) = uStack_268;
    FUN_01bed4e2(param_1 + 0x10c,&local_2c0,0x44);
    if (uVar11 == 4 && uVar12 == 0) {
      FUN_01a8d084(param_1);
      piVar4 = *(int **)(param_1 + 0x220);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a9c794(*(undefined4 *)(param_1 + 0x220));
      }
      goto LAB_01a9b938;
    }
    FUN_01bed4e2(param_1 + 0x150,(uint *)(param_1 + 0xe8),0x68);
    if (*(int *)(param_1 + 0x150) != 3 || *(int *)(param_1 + 0x154) != 0) goto LAB_01a9b8f8;
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x108);
    puVar2 = *(undefined1 **)(param_1 + 0x234);
    if (puVar2 != &DAT_80000005) {
      puVar6 = (undefined1 *)0x2;
      if ((int)puVar2 < 0) {
        puVar6 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x01a9aca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_01a9aca8 + *(int *)(&DAT_01a9aca8 + (int)puVar6 * 4)))();
      return uVar3;
    }
    FUN_01a71aac(&local_90,3,"invalid MessageRequest",0x16);
    *(undefined2 *)(param_1 + 0x246) = 0x101;
    FUN_01bed4e2(param_1 + 0x1b8,&local_90,0x68);
    if (*(int *)(param_1 + 0x1b8) != 3 || *(int *)(param_1 + 0x1bc) != 0) {
      *(undefined1 *)(param_1 + 0x247) = 0;
      FUN_01bed4e2((undefined4 *)(param_1 + 0x248),(int *)(param_1 + 0x1b8),0x68);
      *(undefined1 *)(param_1 + 0x35c) = 0;
      *(int *)(param_1 + 0x358) = param_1 + 0x224;
      goto switchD_01a9a7d0_caseD_5;
    }
    *(undefined2 *)(param_1 + 0x245) = 1;
    local_118 = *(int *)(param_1 + 0x1c0);
    local_114 = *(int *)(param_1 + 0x1c4);
    uStack_110 = *(undefined4 *)(param_1 + 0x1c8);
    uStack_10c = *(undefined4 *)(param_1 + 0x1cc);
    uStack_108 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_104 = *(undefined4 *)(param_1 + 0x1d4);
    FUN_006666fc(&local_188,*(undefined4 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x230));
    FUN_006666fc(&local_2c0,*(undefined4 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x230));
    puVar2 = *(undefined1 **)(param_1 + 0x234);
    if (puVar2 != &DAT_80000005) {
      puVar6 = (undefined1 *)0x2;
      if ((int)puVar2 < 0) {
        puVar6 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x01a9b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_01a9b6f0 + *(int *)(&DAT_01a9b6f0 + (int)puVar6 * 4)))();
      return uVar3;
    }
    local_254 = local_2c0;
    uStack_250 = uStack_2bc;
    uStack_24c = uStack_2b8;
    local_a8 = local_170;
    uStack_a4 = uStack_16c;
    uStack_a0 = uStack_168;
    *(undefined1 *)(param_1 + 0x245) = 0;
    local_260 = local_188;
    uStack_25c = uStack_184;
    uStack_258 = uStack_180;
    *(undefined4 *)(param_1 + 0x248) = 3;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(uint *)(param_1 + 0x250) = local_188;
    *(uint *)(param_1 + 0x254) = uStack_184;
    *(uint *)(param_1 + 600) = uStack_180;
    *(undefined4 *)(param_1 + 0x25c) = local_2c0;
    *(undefined4 *)(param_1 + 0x260) = uStack_2bc;
    *(undefined4 *)(param_1 + 0x264) = uStack_2b8;
    *(undefined1 **)(param_1 + 0x268) = &DAT_80000005;
    *(uint *)(param_1 + 0x26c) = local_170;
    *(uint *)(param_1 + 0x270) = uStack_16c;
    *(uint *)(param_1 + 0x274) = uStack_168;
    *(int *)(param_1 + 0x278) = local_118;
    *(int *)(param_1 + 0x27c) = local_114;
    *(undefined4 *)(param_1 + 0x280) = uStack_110;
    *(undefined4 *)(param_1 + 0x284) = uStack_10c;
    *(undefined4 *)(param_1 + 0x288) = uStack_108;
    *(undefined4 *)(param_1 + 0x28c) = uStack_104;
    *(int *)(param_1 + 0x358) = param_1 + 0x224;
    *(undefined1 *)(param_1 + 0x35c) = 0;
    local_2e8 = uVar9;
    local_2e4 = uVar10;
LAB_01a9a824:
    FUN_01a9bdfc(&local_90,param_1 + 0x248,param_2);
    uVar10 = local_8c;
    uVar9 = local_90;
    if (local_90 == 5 && local_8c == 0) {
      uVar3 = 1;
      uVar5 = 4;
      goto LAB_01a9b948;
    }
    FUN_01bed4e2(auStack_248,&local_88,0x60);
    FUN_01a9a37c(param_1 + 0x248);
    if (uVar9 != 4 || uVar10 != 0) {
      local_90 = uVar9;
      local_8c = uVar10;
      FUN_01bed4e2(&local_88,auStack_248,0x60);
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_0056d284,4,&local_90,&DAT_01d2e09c,&DAT_01d2e07c);
    }
    *(undefined1 *)(param_1 + 0x245) = 0;
    *(undefined2 *)(param_1 + 0x246) = 0;
    FUN_01a9a400(param_1 + 0x228);
    if (*(int *)(param_1 + 0x150) != 3 || *(int *)(param_1 + 0x154) != 0) {
      FUN_01a9a428((int *)(param_1 + 0x150));
    }
  } while( true );
}

