// FUN_00a16c14 @ 00a16c14 size=1592 calls_out=8 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a16c14(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint unaff_r11;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined1 *local_600;
  uint *local_5fc;
  undefined4 local_5f8;
  undefined2 local_5f4;
  undefined1 local_5f2;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined2 local_5d4;
  undefined1 local_5d2;
  undefined4 local_5d0;
  undefined4 local_5cc;
  uint *local_5c8;
  uint *local_5c4;
  uint *local_5c0;
  uint *local_5bc;
  uint *local_5b8;
  uint *local_5b4;
  undefined4 local_5b0;
  uint *local_5ac;
  uint *local_5a8;
  uint local_5a4;
  undefined1 local_5a0;
  undefined2 local_59f;
  undefined1 local_59d;
  undefined4 local_59c;
  uint *local_598;
  undefined1 *local_594;
  undefined1 auStack_590 [440];
  uint *local_3d8;
  uint *local_3d4;
  undefined4 local_3d0;
  uint *local_3cc;
  undefined1 auStack_238 [32];
  uint *local_218;
  uint *puStack_214;
  uint *local_210;
  uint *local_20c;
  uint *local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint *local_1f8;
  uint *local_1f4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 uStack_2c;
  
  local_600 = auStack_238;
  puVar3 = (uint *)param_2[1];
  puVar14 = (uint *)param_2[2];
  uVar11 = *param_2;
  puVar8 = puVar3 + (int)puVar14 * 0x6e;
  if (puVar14 < (uint *)0x1f) {
    puVar12 = (uint *)0x0;
    local_3d8 = puVar3;
    local_3d4 = puVar3;
    local_3d0 = uVar11;
    local_3cc = puVar8;
    if (puVar14 == (uint *)0x0) {
      puVar4 = (uint *)&DAT_00000008;
      puVar14 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)FUN_01298504((int)puVar14 * 0x1c0,8);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar14 * 0x1c0);
      }
    }
    puVar5 = local_3cc;
    local_5c0 = (uint *)0x0;
    local_5b8 = local_3d8;
    local_5b4 = local_3d4;
    local_5b0 = local_3d0;
    local_5ac = local_3cc;
    local_5c8 = puVar14;
    local_5c4 = puVar4;
    if (local_3d4 != local_3cc) {
      puVar12 = (uint *)0x0;
      puVar3 = local_3d4;
      do {
        FUN_01bed4e2(&local_210,puVar3,0x1b8);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_01bed4e2(puVar4 + 2,&local_210,0x1b8);
        puVar3 = puVar3 + 0x6e;
        puVar4 = puVar4 + 0x70;
        puVar12 = (uint *)((int)puVar12 + 1);
      } while (puVar3 != puVar5);
      local_5b4 = puVar3;
    }
    local_5c0 = puVar12;
    FUN_0094a5c8(&local_5b8);
    local_5fc = local_5c0;
    local_210 = local_5c8;
    local_20c = local_5c4;
    local_208 = local_5c0;
    local_5f8 = extraout_r12;
    if (local_5c0 < local_5c8) {
      local_600 = (undefined1 *)0xa17128;
      iVar7 = FUN_0189bb64(&local_210,local_5c0,8,0x1c0);
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      local_5f8 = extraout_r12_00;
    }
    uVar11 = 0x80000000;
    puVar14 = local_20c;
    puVar12 = local_208;
  }
  else {
    uStack_2c = 1;
    local_30 = (uint *)&DAT_ffffffff;
    local_204 = 0;
    local_208 = (uint *)0x0;
    local_40 = 0;
    local_20c = (uint *)0x1;
    local_210 = (uint *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    puVar14 = (uint *)thunk_FUN_01be5118(0x1e8);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1e8);
    }
    FUN_01bed4e2(puVar14,&local_210,0x1e8);
    local_1f8 = puVar14 + 2;
    local_1fc = 0;
    local_204 = 0;
    local_20c = (uint *)0x1;
    local_210 = (uint *)0x1;
    local_208 = puVar14;
    local_1f4 = local_1f8;
    puVar5 = (uint *)thunk_FUN_01be5118(0x20);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *puVar5 = (uint)local_210;
    puVar5[1] = (uint)local_20c;
    puVar5[2] = (uint)local_208;
    puVar5[3] = local_204;
    puVar5[4] = local_200;
    puVar5[5] = local_1fc;
    puVar5[6] = (uint)local_1f8;
    puVar5[7] = (uint)local_1f4;
    local_5cc = 0;
    local_5d0 = 0;
    local_5c8 = puVar3;
    local_5c0 = (uint *)uVar11;
    local_5bc = puVar8;
    if (puVar3 != puVar8) {
      unaff_r11 = 0;
      local_5f8 = 0;
      local_600 = (undefined1 *)0x0;
      puVar14 = (uint *)0x0;
      puVar4 = (uint *)&DAT_00000008;
      puVar12 = (uint *)0x0;
      do {
        puVar6 = puVar3 + 0x6e;
        local_5c4 = puVar6;
        FUN_01bed4e2(auStack_590,puVar3,0x1b8);
        local_5b0 = local_5d0;
        local_5ac = (uint *)local_5cc;
        local_5a0 = 0;
        local_594 = local_600;
        local_59c = local_5f8;
        local_59d = local_5d2;
        local_59f = local_5d4;
        local_5b8 = puVar14;
        local_5b4 = puVar12;
        local_5a8 = puVar5;
        local_5a4 = unaff_r11;
        local_598 = puVar4;
        FUN_01bed4e2(&local_3d0,puVar3,0x1b8);
        local_3d8 = (uint *)0x1;
        local_5b8 = (uint *)((int)puVar14 + 1);
        local_5b4 = (uint *)((int)puVar12 + (uint)((uint *)0xfffffffe < puVar14));
        uVar13 = puVar5[2];
        puVar3 = puVar5 + 1;
        local_3d4 = (uint *)0x0;
LAB_00a16eac:
        uVar9 = *puVar3;
        do {
          if (uVar9 == 0xffffffff) goto LAB_00a16f00;
          local_218 = puVar14;
          puStack_214 = puVar12;
          if ((int)uVar9 < 0) {
            local_20c = (uint *)&DAT_0132b6a0;
            local_210 = (uint *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_210,&DAT_01d2e880);
          }
          uVar10 = *puVar3;
          if (uVar10 == uVar9) {
            bVar1 = (bool)hasExclusiveAccess(puVar3);
            if (bVar1) {
              *puVar3 = uVar9 + 1;
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
          uVar9 = uVar10;
        } while (!bVar2);
        FUN_01bed4e2(&local_208,&local_3d8,0x1c8);
        uStack_2c = 1;
        local_40 = uVar13 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_20c = (uint *)0x1;
        local_210 = (uint *)0x1;
        local_30 = puVar5;
        iVar7 = thunk_FUN_01be5118(0x1e8);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x1e8);
        }
        FUN_01bed4e2(iVar7,&local_210,0x1e8);
        unaff_r11 = iVar7 + 8;
        local_5a0 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_5a4);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_5a4 == 0) {
          *(undefined4 *)(iVar7 + 0x1d8) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 0x1d0) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_5a4 + 0x1c8) == local_5a8[2] + 8);
          *(int *)(iVar7 + 0x1d8) = *(int *)(local_5a4 + 0x1d0) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar7 + 0x1d0) = local_5a4;
          *(uint *)(local_5a4 + 0x1cc) = unaff_r11;
        }
        *(undefined4 *)(iVar7 + 0x1dc) = 0;
        puVar3 = local_5a8 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar13 = *puVar3;
          bVar2 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar2);
        *puVar3 = unaff_r11;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar13 + 0x1d4) = unaff_r11;
        local_5d0 = local_5b0;
        local_5cc = local_5ac;
        local_5f8 = local_59c;
        local_600 = local_594;
        local_5d4 = local_59f;
        local_5d2 = local_59d;
        puVar14 = local_5b8;
        puVar4 = local_598;
        puVar5 = local_5a8;
        puVar3 = puVar6;
        puVar12 = local_5b4;
        local_5a4 = unaff_r11;
        if (puVar6 == puVar8) goto LAB_00a17164;
      } while( true );
    }
    unaff_r11 = 0;
    local_5f8 = 0;
    local_600 = (undefined1 *)0x0;
    puVar14 = (uint *)0x0;
    puVar4 = (uint *)&DAT_00000008;
    puVar12 = (uint *)0x0;
    local_5c4 = puVar3;
LAB_00a17164:
    local_5fc = (uint *)0x0;
    local_5f0 = local_5d0;
    local_5ec = local_5cc;
    local_5f4 = local_5d4;
    local_5f2 = local_5d2;
    FUN_0094a5c8(&local_5c8);
    uVar11 = 0;
  }
  *param_1 = puVar14;
  param_1[1] = puVar12;
  param_1[2] = local_5f0;
  param_1[3] = local_5ec;
  param_1[4] = puVar5;
  param_1[5] = unaff_r11;
  *(char *)(param_1 + 6) = (char)local_5fc;
  *(undefined2 *)((int)param_1 + 0x19) = local_5f4;
  *(undefined1 *)((int)param_1 + 0x1b) = local_5f2;
  param_1[7] = local_5f8;
  param_1[8] = puVar4;
  param_1[9] = local_600;
  param_1[10] = uVar11;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a16f00:
  HintYield();
  goto LAB_00a16eac;
}

