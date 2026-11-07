// FUN_0117318c @ 0117318c size=1404 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0117318c(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 ***pppuVar2;
  uint **ppuVar3;
  undefined4 **ppuVar4;
  undefined4 ***pppuVar5;
  undefined4 ***pppuVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  undefined4 uVar9;
  undefined4 ***pppuVar10;
  undefined4 ***pppuVar11;
  uint **ppuVar12;
  uint **ppuVar13;
  undefined4 unaff_r10;
  undefined4 **extraout_r12;
  undefined4 **extraout_r12_00;
  undefined4 ***local_5a4;
  uint **local_5a0;
  undefined4 local_59c;
  undefined4 **local_598;
  undefined2 local_594;
  undefined1 local_592;
  undefined4 local_590;
  undefined4 local_58c;
  undefined2 local_574;
  undefined1 local_572;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 ***local_568;
  undefined4 ***local_564;
  uint **local_560;
  undefined4 ***local_55c;
  undefined4 ***local_558;
  undefined4 ***local_554;
  undefined4 local_550;
  undefined4 ***local_54c;
  undefined4 ***local_548;
  undefined4 **local_544;
  undefined1 local_540;
  undefined2 local_53f;
  undefined1 local_53d;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 ***local_534;
  undefined1 auStack_530 [408];
  undefined4 ***local_398;
  undefined4 ***local_394;
  undefined4 local_390;
  undefined4 ***local_38c;
  uint **local_1f8;
  uint **ppuStack_1f4;
  uint **local_1f0;
  uint **local_1ec;
  uint **local_1e8;
  undefined4 **local_1e4;
  undefined4 **local_1e0;
  undefined4 **local_1dc;
  undefined4 **local_1d8;
  undefined4 **local_1d4;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  undefined2 uStack_2c;
  
  pppuVar2 = (undefined4 ***)param_2[1];
  ppuVar12 = (uint **)param_2[2];
  uVar9 = *param_2;
  pppuVar8 = pppuVar2 + (int)ppuVar12 * 0x66;
  if (ppuVar12 < (uint **)0x1f) {
    ppuVar13 = (uint **)0x0;
    local_398 = pppuVar2;
    local_394 = pppuVar2;
    local_390 = uVar9;
    local_38c = pppuVar8;
    if (ppuVar12 == (uint **)0x0) {
      ppuVar3 = (uint **)&DAT_00000008;
      ppuVar12 = (uint **)0x0;
    }
    else {
      ppuVar3 = (uint **)FUN_01298504((int)ppuVar12 * 0x1a0,8);
      if (ppuVar3 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)ppuVar12 * 0x1a0);
      }
    }
    local_5a4 = local_38c;
    local_558 = local_398;
    local_554 = local_394;
    local_550 = local_390;
    local_54c = local_38c;
    pppuVar5 = local_38c;
    local_568 = (undefined4 ***)ppuVar12;
    local_564 = (undefined4 ***)ppuVar3;
    if (local_394 != local_38c) {
      pppuVar5 = &local_1f0;
      ppuVar13 = (uint **)0x0;
      pppuVar2 = local_394;
      do {
        FUN_01bed4e2(pppuVar5,pppuVar2,0x198);
        *ppuVar3 = (uint *)0x0;
        ppuVar3[1] = (uint *)0x0;
        FUN_01bed4e2(ppuVar3 + 2,pppuVar5,0x198);
        pppuVar2 = pppuVar2 + 0x66;
        ppuVar3 = ppuVar3 + 0x68;
        ppuVar13 = (uint **)((int)ppuVar13 + 1);
      } while (pppuVar2 != local_5a4);
      local_554 = pppuVar2;
    }
    local_59c = 0x11735e4;
    local_560 = ppuVar13;
    FUN_00db1ef8(&local_558);
    local_5a0 = local_560;
    local_1f0 = (uint **)local_568;
    local_1ec = (uint **)local_564;
    local_1e8 = local_560;
    local_598 = extraout_r12;
    if (local_560 < local_568) {
      local_59c = 0x1173618;
      iVar7 = FUN_0189bb64(&local_1f0,local_560,8,0x1a0);
      local_598 = extraout_r12_00;
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar9 = 0x80000000;
    pppuVar10 = (undefined4 ***)local_1ec;
    pppuVar11 = (undefined4 ***)local_1e8;
  }
  else {
    uStack_2c = 1;
    local_30 = (undefined4 ***)&DAT_ffffffff;
    local_1e4 = (undefined4 **)0x0;
    local_1e8 = (undefined4 **)0x0;
    local_40 = (undefined4 **)0x0;
    local_1ec = (uint **)0x1;
    local_1f0 = (undefined4 **)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    ppuVar4 = (undefined4 **)thunk_FUN_01be5118(0x1c8);
    if (ppuVar4 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x1c8);
    }
    FUN_01bed4e2(ppuVar4,&local_1f0,0x1c8);
    local_1d8 = ppuVar4 + 2;
    local_1dc = (undefined4 **)0x0;
    local_1e4 = (undefined4 **)0x0;
    local_1ec = (undefined4 **)0x1;
    local_1f0 = (undefined4 **)0x1;
    local_1e8 = ppuVar4;
    local_1d4 = local_1d8;
    pppuVar5 = (undefined4 ***)thunk_FUN_01be5118(0x20);
    if (pppuVar5 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *pppuVar5 = local_1f0;
    pppuVar5[1] = local_1ec;
    pppuVar5[2] = local_1e8;
    pppuVar5[3] = local_1e4;
    pppuVar5[4] = local_1e0;
    pppuVar5[5] = local_1dc;
    pppuVar5[6] = local_1d8;
    pppuVar5[7] = local_1d4;
    local_56c = 0;
    local_570 = 0;
    local_568 = pppuVar2;
    local_560 = (uint **)uVar9;
    local_55c = pppuVar8;
    if (pppuVar2 == pppuVar8) {
      local_598 = (undefined4 **)0x0;
      local_59c = 0;
      local_5a4 = (undefined4 ***)0x0;
      pppuVar10 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      unaff_r10 = 8;
      local_564 = pppuVar2;
    }
    else {
      local_598 = (undefined4 **)0x0;
      local_59c = 0;
      local_5a4 = (undefined4 ***)0x0;
      pppuVar10 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      uVar9 = 8;
      do {
        pppuVar6 = pppuVar2 + 0x66;
        local_564 = pppuVar6;
        FUN_01bed4e2(auStack_530,pppuVar2,0x198);
        local_550 = local_570;
        local_54c = (undefined4 ***)local_56c;
        local_540 = 0;
        local_544 = local_598;
        local_534 = local_5a4;
        local_53c = local_59c;
        local_53d = local_572;
        local_53f = local_574;
        local_558 = pppuVar10;
        local_554 = pppuVar11;
        local_548 = pppuVar5;
        local_538 = uVar9;
        FUN_01bed4e2(&local_390,pppuVar2,0x198);
        local_394 = (undefined4 ***)0x0;
        local_398 = (undefined4 ***)0x1;
        local_558 = (undefined4 ***)((int)pppuVar10 + 1);
        ppuVar4 = pppuVar5[2];
        local_554 = (undefined4 ***)((int)pppuVar11 + (uint)((uint **)0xfffffffe < pppuVar10));
        local_1f8 = (uint **)pppuVar10;
        ppuStack_1f4 = (uint **)pppuVar11;
        FUN_0117f4c4(pppuVar5);
        FUN_01bed4e2(&local_1e8,&local_398,0x1a8);
        uStack_2c = 1;
        local_40 = ppuVar4 + 2;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_1ec = (undefined4 **)0x1;
        local_1f0 = (undefined4 **)0x1;
        local_30 = pppuVar5;
        iVar7 = thunk_FUN_01be5118(0x1c8);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x1c8);
        }
        FUN_01bed4e2(iVar7,&local_1f0,0x1c8);
        local_598 = (undefined4 **)(iVar7 + 8);
        local_540 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(&local_544);
        } while (!bVar1);
        DataMemoryBarrier(0xb);
        if (local_544 == (undefined4 **)0x0) {
          *(undefined4 *)(iVar7 + 0x1b8) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 0x1b0) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while ((undefined4 **)local_544[0x6a] == local_548[2] + 2);
          *(int *)(iVar7 + 0x1b8) = (int)local_544[0x6c] + 1;
          DataMemoryBarrier(0xb);
          *(undefined4 ***)(iVar7 + 0x1b0) = local_544;
          local_544[0x6b] = local_598;
        }
        *(undefined4 *)(iVar7 + 0x1bc) = 0;
        pppuVar2 = local_548 + 6;
        DataMemoryBarrier(0xb);
        do {
          ppuVar4 = *pppuVar2;
          bVar1 = (bool)hasExclusiveAccess(pppuVar2);
        } while (!bVar1);
        *pppuVar2 = local_598;
        DataMemoryBarrier(0xb);
        ppuVar4[0x6d] = local_598;
        local_570 = local_550;
        local_56c = local_54c;
        local_59c = local_53c;
        local_5a4 = local_534;
        local_574 = local_53f;
        local_572 = local_53d;
        pppuVar10 = local_558;
        pppuVar11 = local_554;
        pppuVar5 = local_548;
        pppuVar2 = pppuVar6;
        uVar9 = local_538;
        unaff_r10 = local_538;
        local_544 = local_598;
      } while (pppuVar6 != pppuVar8);
    }
    local_5a0 = (uint **)0x0;
    local_590 = local_570;
    local_58c = local_56c;
    local_594 = local_574;
    local_592 = local_572;
    FUN_00db1ef8(&local_568);
    uVar9 = 0;
  }
  *param_1 = pppuVar10;
  param_1[1] = pppuVar11;
  param_1[2] = local_590;
  param_1[3] = local_58c;
  param_1[4] = pppuVar5;
  param_1[5] = local_598;
  *(char *)(param_1 + 6) = (char)local_5a0;
  *(undefined2 *)((int)param_1 + 0x19) = local_594;
  *(undefined1 *)((int)param_1 + 0x1b) = local_592;
  param_1[7] = local_59c;
  param_1[8] = unaff_r10;
  param_1[9] = local_5a4;
  param_1[10] = uVar9;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
}

