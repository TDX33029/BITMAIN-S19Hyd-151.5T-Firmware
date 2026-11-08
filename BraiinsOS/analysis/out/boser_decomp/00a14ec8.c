// FUN_00a14ec8 @ 00a14ec8 size=1552 calls_out=8 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a14ec8(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *unaff_r10;
  undefined4 *puVar15;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 local_348;
  undefined4 *local_344;
  undefined4 local_340;
  undefined2 local_33c;
  undefined1 local_33a;
  undefined4 local_338;
  undefined4 local_334;
  undefined2 local_31c;
  undefined1 local_31a;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 *local_310;
  undefined4 *local_30c;
  undefined4 *local_308;
  undefined4 *local_304;
  undefined4 *local_300;
  undefined4 *local_2fc;
  undefined4 local_2f8;
  undefined4 *local_2f4;
  undefined4 *local_2f0;
  undefined4 *local_2ec;
  undefined1 local_2e8;
  undefined2 local_2e7;
  undefined1 local_2e5;
  undefined4 local_2e4;
  undefined4 *local_2e0;
  undefined4 local_2dc;
  undefined1 auStack_2d8 [208];
  undefined4 *local_208;
  undefined4 *local_204;
  undefined4 local_200;
  undefined4 *local_1fc;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined2 local_2c;
  
  puVar3 = (undefined4 *)param_2[1];
  puVar13 = (undefined4 *)param_2[2];
  uVar11 = *param_2;
  puVar8 = puVar3 + (int)puVar13 * 0x34;
  if (puVar13 < (undefined4 *)0x1f) {
    puVar12 = (undefined4 *)0x0;
    local_208 = puVar3;
    local_204 = puVar3;
    local_200 = uVar11;
    local_1fc = puVar8;
    if (puVar13 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_00000008;
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_01298504((int)puVar13 * 0xd8,8);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar13 * 0xd8);
      }
    }
    puVar14 = local_1fc;
    local_308 = (undefined4 *)0x0;
    local_300 = local_208;
    local_2fc = local_204;
    local_2f8 = local_200;
    local_2f4 = local_1fc;
    local_310 = puVar13;
    local_30c = puVar4;
    if (local_204 != local_1fc) {
      puVar12 = (undefined4 *)0x0;
      puVar3 = local_204;
      do {
        FUN_01bed4e2(&local_128,puVar3,0xd0);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_01bed4e2(puVar4 + 2,&local_128,0xd0);
        puVar3 = puVar3 + 0x34;
        puVar4 = puVar4 + 0x36;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (puVar3 != puVar14);
      unaff_r10 = param_1;
      local_2fc = puVar3;
    }
    local_348 = 0xa15388;
    local_308 = puVar12;
    FUN_00949840(&local_300);
    local_344 = local_308;
    local_128 = local_310;
    local_124 = local_30c;
    local_120 = local_308;
    local_340 = extraout_r12;
    if (local_308 < local_310) {
      local_348 = 0xa153bc;
      iVar7 = FUN_0189bb64(&local_128,local_308,8,0xd8);
      local_340 = extraout_r12_00;
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar11 = 0x80000000;
    puVar12 = local_124;
    puVar15 = local_120;
  }
  else {
    local_30 = (undefined4 *)&DAT_ffffffff;
    local_11c = 0;
    local_120 = (undefined4 *)0x0;
    local_40 = 0;
    local_124 = (undefined4 *)0x1;
    local_128 = (undefined4 *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 1;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0x100);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x100);
    }
    FUN_01bed4e2(puVar13,&local_128,0x100);
    local_110 = puVar13 + 2;
    local_114 = 0;
    local_11c = 0;
    local_124 = (undefined4 *)0x1;
    local_128 = (undefined4 *)0x1;
    local_120 = puVar13;
    local_10c = local_110;
    unaff_r10 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (unaff_r10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *unaff_r10 = local_128;
    unaff_r10[1] = local_124;
    unaff_r10[2] = local_120;
    unaff_r10[3] = local_11c;
    unaff_r10[4] = local_118;
    unaff_r10[5] = local_114;
    unaff_r10[6] = local_110;
    unaff_r10[7] = local_10c;
    local_314 = 0;
    local_318 = 0;
    local_310 = puVar3;
    local_308 = (undefined4 *)uVar11;
    local_304 = puVar8;
    if (puVar3 != puVar8) {
      puVar14 = (undefined4 *)0x0;
      local_340 = 0;
      local_348 = 0;
      puVar13 = (undefined4 *)&DAT_00000008;
      puVar12 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      do {
        puVar5 = puVar3 + 0x34;
        local_30c = puVar5;
        FUN_01bed4e2(auStack_2d8,puVar3,0xd0);
        local_2f8 = local_318;
        local_2f4 = (undefined4 *)local_314;
        local_2e8 = 0;
        local_2dc = local_348;
        local_2e4 = local_340;
        local_2e5 = local_31a;
        local_2e7 = local_31c;
        local_300 = puVar12;
        local_2fc = puVar15;
        local_2f0 = unaff_r10;
        local_2ec = puVar14;
        local_2e0 = puVar13;
        FUN_01bed4e2(&local_200,puVar3,0xd0);
        local_208 = (undefined4 *)0x1;
        local_300 = (undefined4 *)((int)puVar12 + 1);
        iVar7 = unaff_r10[2];
        local_2fc = (undefined4 *)((int)puVar15 + (uint)((undefined4 *)0xfffffffe < puVar12));
        piVar6 = unaff_r10 + 1;
        local_204 = (undefined4 *)0x0;
LAB_00a15148:
        iVar9 = *piVar6;
        do {
          if (iVar9 == -1) goto LAB_00a1519c;
          local_130 = puVar12;
          local_12c = puVar15;
          if (iVar9 < 0) {
            local_124 = (undefined4 *)&DAT_0132b6a0;
            local_128 = (undefined4 *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_128,&DAT_01d2e880);
          }
          iVar10 = *piVar6;
          if (iVar10 == iVar9) {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar9 + 1;
            }
            bVar2 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar9 = iVar10;
        } while (!bVar2);
        FUN_01bed4e2(&local_120,&local_208,0xe0);
        local_34 = 0;
        local_2c = 1;
        local_40 = iVar7 + 8;
        local_38 = 0;
        local_3c = 0;
        local_124 = (undefined4 *)0x1;
        local_128 = (undefined4 *)0x1;
        local_30 = unaff_r10;
        iVar7 = thunk_FUN_01be5118(0x100);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x100);
        }
        FUN_01bed4e2(iVar7,&local_128,0x100);
        puVar14 = (undefined4 *)(iVar7 + 8);
        local_2e8 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_2ec);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_2ec == (undefined4 *)0x0) {
          *(undefined4 *)(iVar7 + 0xf0) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 0xe8) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (local_2ec[0x38] == local_2f0[2] + 8);
          *(int *)(iVar7 + 0xf0) = local_2ec[0x3a] + 1;
          DataMemoryBarrier(0xb);
          *(undefined4 **)(iVar7 + 0xe8) = local_2ec;
          local_2ec[0x39] = puVar14;
        }
        piVar6 = local_2f0 + 6;
        *(undefined4 *)(iVar7 + 0xf4) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = (int)puVar14;
        DataMemoryBarrier(0xb);
        *(undefined4 **)(iVar7 + 0xec) = puVar14;
        local_318 = local_2f8;
        local_314 = local_2f4;
        local_340 = local_2e4;
        local_348 = local_2dc;
        local_31c = local_2e7;
        local_31a = local_2e5;
        puVar13 = local_2e0;
        puVar4 = local_2e0;
        puVar12 = local_300;
        puVar3 = puVar5;
        unaff_r10 = local_2f0;
        puVar15 = local_2fc;
        local_2ec = puVar14;
        if (puVar5 == puVar8) goto LAB_00a153f4;
      } while( true );
    }
    puVar14 = (undefined4 *)0x0;
    local_340 = 0;
    local_348 = 0;
    puVar4 = (undefined4 *)&DAT_00000008;
    puVar12 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)0x0;
    local_30c = puVar3;
LAB_00a153f4:
    local_344 = (undefined4 *)0x0;
    local_338 = local_318;
    local_334 = local_314;
    local_33c = local_31c;
    local_33a = local_31a;
    FUN_00949840(&local_310);
    uVar11 = 0;
  }
  *param_1 = puVar12;
  param_1[1] = puVar15;
  param_1[2] = local_338;
  param_1[3] = local_334;
  param_1[4] = unaff_r10;
  *(char *)(param_1 + 6) = (char)local_344;
  param_1[5] = puVar14;
  *(undefined2 *)((int)param_1 + 0x19) = local_33c;
  *(undefined1 *)((int)param_1 + 0x1b) = local_33a;
  param_1[7] = local_340;
  param_1[8] = puVar4;
  param_1[9] = local_348;
  param_1[10] = uVar11;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a1519c:
  HintYield();
  goto LAB_00a15148;
}

