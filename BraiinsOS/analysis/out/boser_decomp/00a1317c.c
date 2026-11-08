// FUN_00a1317c @ 00a1317c size=1560 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a1317c(uint *param_1,undefined4 *param_2)

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
  uint local_4c8;
  uint *local_4c4;
  uint local_4c0;
  undefined2 local_4bc;
  undefined1 local_4ba;
  uint local_4b8;
  uint local_4b4;
  undefined2 local_49c;
  undefined1 local_49a;
  uint local_498;
  uint local_494;
  uint *local_490;
  uint *local_48c;
  uint *local_488;
  uint *local_484;
  uint *local_480;
  uint *local_47c;
  uint local_478;
  uint *local_474;
  uint *local_470;
  uint local_46c;
  undefined1 local_468;
  undefined2 local_467;
  undefined1 local_465;
  uint local_464;
  uint *local_460;
  uint local_45c;
  undefined1 auStack_458 [336];
  uint *local_308;
  uint *local_304;
  undefined4 local_300;
  uint *local_2fc;
  undefined1 auStack_2f8 [336];
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint *local_190;
  uint *local_18c;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 uStack_2c;
  
  puVar3 = (uint *)param_2[1];
  puVar12 = (uint *)param_2[2];
  uVar9 = *param_2;
  puVar13 = puVar3 + (int)puVar12 * 0x53;
  if (puVar12 < (uint *)0x1f) {
    puVar10 = (uint *)0x0;
    local_308 = puVar3;
    local_304 = puVar3;
    local_300 = uVar9;
    local_2fc = puVar13;
    if (puVar12 == (uint *)0x0) {
      local_48c = (uint *)0x8;
      puVar12 = (uint *)0x0;
    }
    else {
      local_48c = (uint *)FUN_01298504((int)puVar12 * 0x150,8);
      if (local_48c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar12 * 0x150);
      }
    }
    puVar4 = local_2fc;
    local_488 = (uint *)0x0;
    local_480 = local_308;
    local_47c = local_304;
    local_478 = local_300;
    local_474 = local_2fc;
    local_490 = puVar12;
    if (local_304 != local_2fc) {
      puVar13 = local_48c + 1;
      puVar10 = (uint *)0x0;
      puVar3 = local_304;
      do {
        FUN_01bed4e2(&local_1a8,puVar3,0x14c);
        puVar13[-1] = 0;
        FUN_01bed4e2(puVar13,&local_1a8,0x14c);
        puVar3 = puVar3 + 0x53;
        puVar13 = puVar13 + 0x54;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (puVar3 != puVar4);
      local_47c = puVar3;
    }
    puVar11 = local_47c;
    local_4c8 = 0xa13640;
    local_488 = puVar10;
    FUN_0094a864(&local_480);
    local_4c4 = local_488;
    local_1a8 = local_490;
    local_1a4 = local_48c;
    local_1a0 = local_488;
    local_4c0 = extraout_r12;
    if (local_488 < local_490) {
      local_4c8 = 0xa13674;
      iVar6 = FUN_0189bb64(&local_1a8,local_488,8,0x150);
      local_4c0 = extraout_r12_00;
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar14 = 0x80000000;
    puVar12 = local_1a4;
    puVar10 = local_1a0;
  }
  else {
    uStack_2c = 1;
    local_30 = (uint *)&DAT_ffffffff;
    local_19c = 0;
    local_1a0 = (uint *)0x0;
    local_40 = 0;
    local_1a4 = (uint *)0x1;
    local_1a8 = (uint *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    puVar12 = (uint *)thunk_FUN_01be5118(0x180);
    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x180);
    }
    FUN_01bed4e2(puVar12,&local_1a8,0x180);
    local_190 = puVar12 + 2;
    local_194 = 0;
    local_19c = 0;
    local_1a4 = (uint *)0x1;
    local_1a8 = (uint *)0x1;
    local_1a0 = puVar12;
    local_18c = local_190;
    puVar4 = (uint *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *puVar4 = (uint)local_1a8;
    puVar4[1] = (uint)local_1a4;
    puVar4[2] = (uint)local_1a0;
    puVar4[3] = local_19c;
    puVar4[4] = local_198;
    puVar4[5] = local_194;
    puVar4[6] = (uint)local_190;
    puVar4[7] = (uint)local_18c;
    local_494 = 0;
    local_498 = 0;
    local_490 = puVar3;
    local_488 = (uint *)uVar9;
    local_484 = puVar13;
    if (puVar3 != puVar13) {
      unaff_r11 = 0;
      local_4c0 = 0;
      local_4c8 = 0;
      puVar12 = (uint *)0x0;
      puVar11 = (uint *)&DAT_00000008;
      puVar10 = (uint *)0x0;
      do {
        puVar5 = puVar3 + 0x53;
        local_48c = puVar5;
        FUN_01bed4e2(auStack_458,puVar3,0x14c);
        local_478 = local_498;
        local_474 = (uint *)local_494;
        local_468 = 0;
        local_45c = local_4c8;
        local_464 = local_4c0;
        local_465 = local_49a;
        local_467 = local_49c;
        local_480 = puVar12;
        local_47c = puVar10;
        local_470 = puVar4;
        local_46c = unaff_r11;
        local_460 = puVar11;
        FUN_01bed4e2(auStack_2f8,puVar3,0x14c);
        local_308 = (uint *)0x1;
        local_480 = (uint *)((int)puVar12 + 1);
        local_47c = (uint *)((int)puVar10 + (uint)((uint *)0xfffffffe < puVar12));
        uVar14 = puVar4[2];
        puVar3 = puVar4 + 1;
        local_304 = (uint *)0x0;
LAB_00a13400:
        uVar7 = *puVar3;
        do {
          if (uVar7 == 0xffffffff) goto LAB_00a13454;
          if ((int)uVar7 < 0) {
            local_1a4 = (uint *)&DAT_0132b6a0;
            local_1a8 = (uint *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_1a8,&DAT_01d2e880);
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
        FUN_01bed4e2(&local_1a0,&local_308,0x160);
        uStack_2c = 1;
        local_40 = uVar14 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_1a4 = (uint *)0x1;
        local_1a8 = (uint *)0x1;
        local_30 = puVar4;
        iVar6 = thunk_FUN_01be5118(0x180);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x180);
        }
        FUN_01bed4e2(iVar6,&local_1a8,0x180);
        unaff_r11 = iVar6 + 8;
        local_468 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_46c);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_46c == 0) {
          *(undefined4 *)(iVar6 + 0x170) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar6 + 0x168) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_46c + 0x160) == local_470[2] + 8);
          *(int *)(iVar6 + 0x170) = *(int *)(local_46c + 0x168) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar6 + 0x168) = local_46c;
          *(uint *)(local_46c + 0x164) = unaff_r11;
        }
        *(undefined4 *)(iVar6 + 0x174) = 0;
        puVar3 = local_470 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar14 = *puVar3;
          bVar2 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar2);
        *puVar3 = unaff_r11;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar14 + 0x16c) = unaff_r11;
        local_498 = local_478;
        local_494 = (uint)local_474;
        local_4c0 = local_464;
        local_4c8 = local_45c;
        local_49c = local_467;
        local_49a = local_465;
        puVar12 = local_480;
        puVar11 = local_460;
        puVar4 = local_470;
        puVar3 = puVar5;
        puVar10 = local_47c;
        local_46c = unaff_r11;
        if (puVar5 == puVar13) goto LAB_00a136b0;
      } while( true );
    }
    unaff_r11 = 0;
    local_4c0 = 0;
    local_4c8 = 0;
    puVar12 = (uint *)0x0;
    puVar11 = (uint *)&DAT_00000008;
    puVar10 = (uint *)0x0;
    local_48c = puVar3;
LAB_00a136b0:
    local_4c4 = (uint *)0x0;
    local_4b8 = local_498;
    local_4b4 = local_494;
    local_4bc = local_49c;
    local_4ba = local_49a;
    FUN_0094a864(&local_490);
    uVar14 = 0;
  }
  *param_1 = (uint)puVar12;
  param_1[1] = (uint)puVar10;
  param_1[2] = local_4b8;
  param_1[3] = local_4b4;
  param_1[4] = (uint)puVar4;
  param_1[5] = unaff_r11;
  *(char *)(param_1 + 6) = (char)local_4c4;
  *(undefined2 *)((int)param_1 + 0x19) = local_4bc;
  *(undefined1 *)((int)param_1 + 0x1b) = local_4ba;
  param_1[7] = local_4c0;
  param_1[8] = (uint)puVar11;
  param_1[9] = local_4c8;
  param_1[10] = uVar14;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a13454:
  HintYield();
  goto LAB_00a13400;
}

