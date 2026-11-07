// FUN_00a15db0 @ 00a15db0 size=1568 calls_out=8 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a15db0(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 local_5a0;
  uint *local_59c;
  undefined4 local_598;
  undefined2 local_594;
  undefined1 local_592;
  undefined4 local_590;
  undefined4 local_58c;
  undefined2 local_574;
  undefined1 local_572;
  undefined4 local_570;
  undefined4 local_56c;
  uint *local_568;
  uint *local_564;
  uint *local_560;
  uint *local_55c;
  uint *local_558;
  uint *local_554;
  undefined4 local_550;
  uint *local_54c;
  uint *local_548;
  uint local_544;
  undefined1 local_540;
  undefined2 local_53f;
  undefined1 local_53d;
  undefined4 local_53c;
  uint *local_538;
  undefined4 local_534;
  undefined1 auStack_530 [408];
  uint *local_398;
  uint *local_394;
  undefined4 local_390;
  uint *local_38c;
  uint *local_1f8;
  uint *puStack_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint *local_1d8;
  uint *local_1d4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 uStack_2c;
  
  puVar3 = (uint *)param_2[1];
  puVar14 = (uint *)param_2[2];
  uVar11 = *param_2;
  puVar8 = puVar3 + (int)puVar14 * 0x66;
  if (puVar14 < (uint *)0x1f) {
    puVar12 = (uint *)0x0;
    local_398 = puVar3;
    local_394 = puVar3;
    local_390 = uVar11;
    local_38c = puVar8;
    if (puVar14 == (uint *)0x0) {
      puVar4 = (uint *)&DAT_00000008;
      puVar14 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)FUN_01298504((int)puVar14 * 0x1a0,8);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)puVar14 * 0x1a0);
      }
    }
    puVar5 = local_38c;
    local_560 = (uint *)0x0;
    local_558 = local_398;
    local_554 = local_394;
    local_550 = local_390;
    local_54c = local_38c;
    local_568 = puVar14;
    local_564 = puVar4;
    if (local_394 != local_38c) {
      puVar12 = (uint *)0x0;
      puVar3 = local_394;
      do {
        FUN_01bed4e2(&local_1f0,puVar3,0x198);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_01bed4e2(puVar4 + 2,&local_1f0,0x198);
        puVar3 = puVar3 + 0x66;
        puVar4 = puVar4 + 0x68;
        puVar12 = (uint *)((int)puVar12 + 1);
      } while (puVar3 != puVar5);
      local_554 = puVar3;
    }
    local_5a0 = 0xa1627c;
    local_560 = puVar12;
    FUN_0094abb4(&local_558);
    local_59c = local_560;
    local_1f0 = local_568;
    local_1ec = local_564;
    local_1e8 = local_560;
    local_598 = extraout_r12;
    if (local_560 < local_568) {
      local_5a0 = 0xa162b0;
      iVar7 = FUN_0189bb64(&local_1f0,local_560,8,0x1a0);
      local_598 = extraout_r12_00;
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar11 = 0x80000000;
    puVar14 = local_1ec;
    puVar12 = local_1e8;
  }
  else {
    uStack_2c = 1;
    local_30 = (uint *)&DAT_ffffffff;
    local_1e4 = 0;
    local_1e8 = (uint *)0x0;
    local_40 = 0;
    local_1ec = (uint *)0x1;
    local_1f0 = (uint *)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    puVar14 = (uint *)thunk_FUN_01be5118(0x1c8);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1c8);
    }
    FUN_01bed4e2(puVar14,&local_1f0,0x1c8);
    local_1d8 = puVar14 + 2;
    local_1dc = 0;
    local_1e4 = 0;
    local_1ec = (uint *)0x1;
    local_1f0 = (uint *)0x1;
    local_1e8 = puVar14;
    local_1d4 = local_1d8;
    puVar5 = (uint *)thunk_FUN_01be5118(0x20);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *puVar5 = (uint)local_1f0;
    puVar5[1] = (uint)local_1ec;
    puVar5[2] = (uint)local_1e8;
    puVar5[3] = local_1e4;
    puVar5[4] = local_1e0;
    puVar5[5] = local_1dc;
    puVar5[6] = (uint)local_1d8;
    puVar5[7] = (uint)local_1d4;
    local_56c = 0;
    local_570 = 0;
    local_568 = puVar3;
    local_560 = (uint *)uVar11;
    local_55c = puVar8;
    if (puVar3 != puVar8) {
      unaff_r11 = 0;
      local_598 = 0;
      local_5a0 = 0;
      puVar14 = (uint *)0x0;
      puVar4 = (uint *)&DAT_00000008;
      puVar12 = (uint *)0x0;
      do {
        puVar6 = puVar3 + 0x66;
        local_564 = puVar6;
        FUN_01bed4e2(auStack_530,puVar3,0x198);
        local_550 = local_570;
        local_54c = (uint *)local_56c;
        local_540 = 0;
        local_534 = local_5a0;
        local_53c = local_598;
        local_53d = local_572;
        local_53f = local_574;
        local_558 = puVar14;
        local_554 = puVar12;
        local_548 = puVar5;
        local_544 = unaff_r11;
        local_538 = puVar4;
        FUN_01bed4e2(&local_390,puVar3,0x198);
        local_398 = (uint *)0x1;
        local_558 = (uint *)((int)puVar14 + 1);
        local_554 = (uint *)((int)puVar12 + (uint)((uint *)0xfffffffe < puVar14));
        uVar13 = puVar5[2];
        puVar3 = puVar5 + 1;
        local_394 = (uint *)0x0;
LAB_00a1603c:
        uVar9 = *puVar3;
        do {
          if (uVar9 == 0xffffffff) goto LAB_00a16090;
          local_1f8 = puVar14;
          puStack_1f4 = puVar12;
          if ((int)uVar9 < 0) {
            local_1ec = (uint *)&DAT_0132b6a0;
            local_1f0 = (uint *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_1f0,&DAT_01d2e880);
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
        FUN_01bed4e2(&local_1e8,&local_398,0x1a8);
        uStack_2c = 1;
        local_40 = uVar13 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_1ec = (uint *)0x1;
        local_1f0 = (uint *)0x1;
        local_30 = puVar5;
        iVar7 = thunk_FUN_01be5118(0x1c8);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x1c8);
        }
        FUN_01bed4e2(iVar7,&local_1f0,0x1c8);
        unaff_r11 = iVar7 + 8;
        local_540 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_544);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        if (local_544 == 0) {
          *(undefined4 *)(iVar7 + 0x1b8) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 0x1b0) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_544 + 0x1a8) == local_548[2] + 8);
          *(int *)(iVar7 + 0x1b8) = *(int *)(local_544 + 0x1b0) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar7 + 0x1b0) = local_544;
          *(uint *)(local_544 + 0x1ac) = unaff_r11;
        }
        *(undefined4 *)(iVar7 + 0x1bc) = 0;
        puVar3 = local_548 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar13 = *puVar3;
          bVar2 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar2);
        *puVar3 = unaff_r11;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar13 + 0x1b4) = unaff_r11;
        local_570 = local_550;
        local_56c = local_54c;
        local_598 = local_53c;
        local_5a0 = local_534;
        local_574 = local_53f;
        local_572 = local_53d;
        puVar14 = local_558;
        puVar4 = local_538;
        puVar5 = local_548;
        puVar3 = puVar6;
        puVar12 = local_554;
        local_544 = unaff_r11;
        if (puVar6 == puVar8) goto LAB_00a162ec;
      } while( true );
    }
    unaff_r11 = 0;
    local_598 = 0;
    local_5a0 = 0;
    puVar14 = (uint *)0x0;
    puVar4 = (uint *)&DAT_00000008;
    puVar12 = (uint *)0x0;
    local_564 = puVar3;
LAB_00a162ec:
    local_59c = (uint *)0x0;
    local_590 = local_570;
    local_58c = local_56c;
    local_594 = local_574;
    local_592 = local_572;
    FUN_0094abb4(&local_568);
    uVar11 = 0;
  }
  *param_1 = puVar14;
  param_1[1] = puVar12;
  param_1[2] = local_590;
  param_1[3] = local_58c;
  param_1[4] = puVar5;
  param_1[5] = unaff_r11;
  *(char *)(param_1 + 6) = (char)local_59c;
  *(undefined2 *)((int)param_1 + 0x19) = local_594;
  *(undefined1 *)((int)param_1 + 0x1b) = local_592;
  param_1[7] = local_598;
  param_1[8] = puVar4;
  param_1[9] = local_5a0;
  param_1[10] = uVar11;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
LAB_00a16090:
  HintYield();
  goto LAB_00a1603c;
}

