// FUN_00a14064 @ 00a14064 size=1560 calls_out=8 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a14064(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint local_480;
  uint *local_47c;
  uint local_478;
  undefined2 local_474;
  undefined1 local_472;
  uint local_470;
  uint local_46c;
  undefined2 local_454;
  undefined1 local_452;
  uint local_450;
  uint local_44c;
  uint *local_448;
  uint *local_444;
  uint *local_440;
  uint *local_43c;
  uint *local_438;
  uint *local_434;
  uint local_430;
  uint *local_42c;
  uint *local_428;
  uint local_424;
  undefined1 local_420;
  undefined2 local_41f;
  undefined1 local_41d;
  uint local_41c;
  uint *local_418;
  uint local_414;
  undefined1 auStack_410 [312];
  uint *local_2d8;
  uint *local_2d4;
  undefined4 local_2d0;
  uint *local_2cc;
  uint *local_198;
  uint *puStack_194;
  uint *local_190;
  uint *local_18c;
  uint *local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint *local_178;
  uint *local_174;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 uStack_2c;
  
  puVar3 = (uint *)param_2[1];
  puVar12 = (uint *)param_2[2];
  uVar9 = *param_2;
  puVar13 = puVar3 + (int)puVar12 * 0x4e;
  if (puVar12 < (uint *)0x1f) {
    puVar10 = (uint *)0x0;
    local_2d8 = puVar3;
    local_2d4 = puVar3;
    local_2d0 = uVar9;
    local_2cc = puVar13;
    if (puVar12 == (uint *)0x0) {
      local_444 = (uint *)0x8;
      puVar12 = (uint *)0x0;
    }
    else {
      local_444 = (uint *)FUN_01298504((int)puVar12 * 0x140,8);
      if (local_444 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar12 * 0x140);
      }
    }
    puVar4 = local_2cc;
    local_440 = (uint *)0x0;
    local_438 = local_2d8;
    local_434 = local_2d4;
    local_430 = local_2d0;
    local_42c = local_2cc;
    local_448 = puVar12;
    if (local_2d4 != local_2cc) {
      puVar13 = local_444 + 1;
      puVar10 = (uint *)0x0;
      puVar3 = local_2d4;
      do {
        FUN_01bed4e2(&local_190,puVar3,0x138);
        puVar13[-1] = 0;
        FUN_01bed4e2(puVar13,&local_190,0x138);
        puVar3 = puVar3 + 0x4e;
        puVar13 = puVar13 + 0x50;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (puVar3 != puVar4);
      local_434 = puVar3;
    }
    puVar11 = local_434;
    local_480 = 0xa14528;
    local_440 = puVar10;
    FUN_0094a530(&local_438);
    local_47c = local_440;
    local_190 = local_448;
    local_18c = local_444;
    local_188 = local_440;
    local_478 = extraout_r12;
    if (local_440 < local_448) {
      local_480 = 0xa1455c;
      iVar6 = FUN_0189bb64(&local_190,local_440,8,0x140);
      local_478 = extraout_r12_00;
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar14 = 0x80000000;
    puVar12 = local_18c;
    puVar10 = local_188;
  }
  else {
    uStack_2c = 1;
    local_30 = (uint *)&DAT_ffffffff;
    local_184 = 0;
    local_188 = (uint *)0x0;
    local_40 = 0;
    local_18c = (uint *)0x1;
    local_190 = (uint *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    puVar12 = (uint *)thunk_FUN_01be5118(0x168);
    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x168);
    }
    FUN_01bed4e2(puVar12,&local_190,0x168);
    local_178 = puVar12 + 2;
    local_17c = 0;
    local_184 = 0;
    local_18c = (uint *)0x1;
    local_190 = (uint *)0x1;
    local_188 = puVar12;
    local_174 = local_178;
    puVar4 = (uint *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *puVar4 = (uint)local_190;
    puVar4[1] = (uint)local_18c;
    puVar4[2] = (uint)local_188;
    puVar4[3] = local_184;
    puVar4[4] = local_180;
    puVar4[5] = local_17c;
    puVar4[6] = (uint)local_178;
    puVar4[7] = (uint)local_174;
    local_44c = 0;
    local_450 = 0;
    local_448 = puVar3;
    local_440 = (uint *)uVar9;
    local_43c = puVar13;
    if (puVar3 != puVar13) {
      unaff_r11 = 0;
      local_478 = 0;
      local_480 = 0;
      puVar12 = (uint *)0x0;
      puVar11 = (uint *)&DAT_00000008;
      puVar10 = (uint *)0x0;
      do {
        puVar5 = puVar3 + 0x4e;
        local_444 = puVar5;
        FUN_01bed4e2(auStack_410,puVar3,0x138);
        local_430 = local_450;
        local_42c = (uint *)local_44c;
        local_420 = 0;
        local_414 = local_480;
        local_41c = local_478;
        local_41d = local_452;
        local_41f = local_454;
        local_438 = puVar12;
        local_434 = puVar10;
        local_428 = puVar4;
        local_424 = unaff_r11;
        local_418 = puVar11;
        FUN_01bed4e2(&local_2d0,puVar3,0x138);
        local_2d8 = (uint *)0x1;
        local_438 = (uint *)((int)puVar12 + 1);
        local_434 = (uint *)((int)puVar10 + (uint)((uint *)0xfffffffe < puVar12));
        uVar14 = puVar4[2];
        puVar3 = puVar4 + 1;
        local_2d4 = (uint *)0x0;
LAB_00a142e8:
        uVar7 = *puVar3;
        do {
          if (uVar7 == 0xffffffff) goto LAB_00a1433c;
          local_198 = puVar12;
          puStack_194 = puVar10;
          if ((int)uVar7 < 0) {
            local_18c = (uint *)&DAT_0132b6a0;
            local_190 = (uint *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_190,&DAT_01d2e880);
          }
          uVar8 = *puVar3;
          if (uVar8 == uVar7) {
            bVar1 = (bool)hasExclusiveAccess(puVar3);
            if (bVar1) {
              *puVar3 = uVar7 + 1;
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
          uVar7 = uVar8;
        } while (!bVar2);
        FUN_01bed4e2(&local_188,&local_2d8,0x148);
        uStack_2c = 1;
        local_40 = uVar14 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_18c = (uint *)0x1;
        local_190 = (uint *)0x1;
        local_30 = puVar4;
        iVar6 = thunk_FUN_01be5118(0x168);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x168);
        }
        FUN_01bed4e2(iVar6,&local_190,0x168);
        unaff_r11 = iVar6 + 8;
        local_420 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_424);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_424 == 0) {
          *(undefined4 *)(iVar6 + 0x158) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar6 + 0x150) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_424 + 0x148) == local_428[2] + 8);
          *(int *)(iVar6 + 0x158) = *(int *)(local_424 + 0x150) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar6 + 0x150) = local_424;
          *(uint *)(local_424 + 0x14c) = unaff_r11;
        }
        *(undefined4 *)(iVar6 + 0x15c) = 0;
        puVar3 = local_428 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar14 = *puVar3;
          bVar2 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar2);
        *puVar3 = unaff_r11;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar14 + 0x154) = unaff_r11;
        local_450 = local_430;
        local_44c = (uint)local_42c;
        local_478 = local_41c;
        local_480 = local_414;
        local_454 = local_41f;
        local_452 = local_41d;
        puVar12 = local_438;
        puVar11 = local_418;
        puVar4 = local_428;
        puVar3 = puVar5;
        puVar10 = local_434;
        local_424 = unaff_r11;
        if (puVar5 == puVar13) goto LAB_00a14598;
      } while( true );
    }
    unaff_r11 = 0;
    local_478 = 0;
    local_480 = 0;
    puVar12 = (uint *)0x0;
    puVar11 = (uint *)&DAT_00000008;
    puVar10 = (uint *)0x0;
    local_444 = puVar3;
LAB_00a14598:
    local_47c = (uint *)0x0;
    local_470 = local_450;
    local_46c = local_44c;
    local_474 = local_454;
    local_472 = local_452;
    FUN_0094a530(&local_448);
    uVar14 = 0;
  }
  *param_1 = (uint)puVar12;
  param_1[1] = (uint)puVar10;
  param_1[2] = local_470;
  param_1[3] = local_46c;
  param_1[4] = (uint)puVar4;
  param_1[5] = unaff_r11;
  *(char *)(param_1 + 6) = (char)local_47c;
  *(undefined2 *)((int)param_1 + 0x19) = local_474;
  *(undefined1 *)((int)param_1 + 0x1b) = local_472;
  param_1[7] = local_478;
  param_1[8] = (uint)puVar11;
  param_1[9] = local_480;
  param_1[10] = uVar14;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a1433c:
  HintYield();
  goto LAB_00a142e8;
}

