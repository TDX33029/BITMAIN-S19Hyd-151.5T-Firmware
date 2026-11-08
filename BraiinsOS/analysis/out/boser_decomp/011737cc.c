// FUN_011737cc @ 011737cc size=1444 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011737cc(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 ***pppuVar2;
  uint **ppuVar3;
  undefined4 **ppuVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  undefined4 ***pppuVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 ***pppuVar11;
  undefined1 uVar12;
  uint **ppuVar13;
  undefined4 ***pppuVar14;
  uint **ppuVar15;
  undefined4 ***pppuVar16;
  uint unaff_r10;
  undefined4 local_5a0;
  undefined4 *local_59c;
  uint **local_598;
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
  undefined4 *local_548;
  uint local_544;
  undefined1 local_540;
  undefined2 local_53f;
  undefined1 local_53d;
  undefined4 ***local_53c;
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
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 **local_1d8;
  undefined4 **local_1d4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined2 uStack_2c;
  
  pppuVar2 = (undefined4 ***)param_2[1];
  ppuVar13 = (uint **)param_2[2];
  uVar9 = *param_2;
  pppuVar7 = pppuVar2 + (int)ppuVar13 * 0x66;
  if (ppuVar13 < (uint **)0x1f) {
    ppuVar15 = (uint **)0x0;
    local_398 = pppuVar2;
    local_394 = pppuVar2;
    local_390 = uVar9;
    local_38c = pppuVar7;
    if (ppuVar13 == (uint **)0x0) {
      ppuVar3 = (uint **)&DAT_00000008;
      ppuVar13 = (uint **)0x0;
    }
    else {
      ppuVar3 = (uint **)FUN_01298504((int)ppuVar13 * 0x1a0,8);
      if (ppuVar3 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)ppuVar13 * 0x1a0);
      }
    }
    pppuVar16 = local_38c;
    local_558 = local_398;
    local_554 = local_394;
    local_550 = local_390;
    local_54c = local_38c;
    pppuVar14 = local_38c;
    local_568 = (undefined4 ***)ppuVar13;
    local_564 = (undefined4 ***)ppuVar3;
    if (local_394 != local_38c) {
      pppuVar14 = &local_1f0;
      ppuVar15 = (uint **)0x0;
      pppuVar2 = local_394;
      do {
        FUN_01bed4e2(pppuVar14,pppuVar2,0x198);
        *ppuVar3 = (uint *)0x0;
        ppuVar3[1] = (uint *)0x0;
        FUN_01bed4e2(ppuVar3 + 2,pppuVar14,0x198);
        pppuVar2 = pppuVar2 + 0x66;
        ppuVar3 = ppuVar3 + 0x68;
        ppuVar15 = (uint **)((int)ppuVar15 + 1);
      } while (pppuVar2 != pppuVar16);
      local_554 = pppuVar2;
    }
    uVar12 = SUB41(local_554,0);
    local_560 = ppuVar15;
    FUN_00db1ef8(&local_558);
    local_1f0 = (uint **)local_568;
    local_1ec = (uint **)local_564;
    local_1e8 = local_560;
    if ((local_560 < local_568) &&
       (iVar6 = FUN_0189bb64(&local_1f0,local_560,8,0x1a0), iVar6 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar9 = 0x80000000;
    pppuVar11 = (undefined4 ***)local_1ec;
    local_598 = local_1e8;
  }
  else {
    uStack_2c = 1;
    local_30 = (undefined4 *)&DAT_ffffffff;
    local_1e4 = 0;
    local_1e8 = (undefined4 **)0x0;
    local_40 = 0;
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
    local_1dc = 0;
    local_1e4 = 0;
    local_1ec = (uint **)0x1;
    local_1f0 = (undefined4 **)0x1;
    local_1e8 = ppuVar4;
    local_1d4 = local_1d8;
    local_59c = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (local_59c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *local_59c = local_1f0;
    local_59c[1] = local_1ec;
    local_59c[2] = local_1e8;
    local_59c[3] = local_1e4;
    local_59c[4] = local_1e0;
    local_59c[5] = local_1dc;
    local_59c[6] = local_1d8;
    local_59c[7] = local_1d4;
    local_56c = 0;
    local_570 = 0;
    local_568 = pppuVar2;
    local_560 = (uint **)uVar9;
    local_55c = pppuVar7;
    if (pppuVar2 == pppuVar7) {
      local_5a0 = 8;
      local_598 = (uint **)0x0;
      unaff_r10 = 0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      pppuVar14 = (undefined4 ***)0x0;
      pppuVar16 = (undefined4 ***)0x0;
      local_564 = pppuVar2;
    }
    else {
      local_5a0 = 8;
      unaff_r10 = 0;
      local_598 = (uint **)0x0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      pppuVar14 = (undefined4 ***)0x0;
      pppuVar16 = (undefined4 ***)0x0;
      do {
        pppuVar5 = pppuVar2 + 0x66;
        local_564 = pppuVar5;
        FUN_01bed4e2(auStack_530,pppuVar2,0x198);
        local_550 = local_570;
        local_54c = (undefined4 ***)local_56c;
        local_538 = local_5a0;
        local_53d = local_572;
        local_53f = local_574;
        local_554 = (undefined4 ***)local_598;
        local_548 = local_59c;
        local_558 = pppuVar11;
        local_544 = unaff_r10;
        local_540 = 0;
        local_53c = pppuVar16;
        local_534 = pppuVar14;
        FUN_01bed4e2(&local_390,pppuVar2,0x198);
        local_394 = (undefined4 ***)0x0;
        local_398 = (undefined4 ***)0x1;
        ppuStack_1f4 = local_598;
        local_558 = (undefined4 ***)((int)pppuVar11 + 1);
        iVar6 = local_59c[2];
        local_554 = (undefined4 ***)((int)local_598 + (uint)((uint **)0xfffffffe < pppuVar11));
        local_1f8 = (uint **)pppuVar11;
        FUN_0117f4c4(local_59c);
        FUN_01bed4e2(&local_1e8,&local_398,0x1a8);
        local_30 = local_59c;
        uStack_2c = 1;
        local_40 = iVar6 + 8;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_1ec = (uint **)0x1;
        local_1f0 = (undefined4 **)0x1;
        iVar6 = thunk_FUN_01be5118(0x1c8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x1c8);
        }
        FUN_01bed4e2(iVar6,&local_1f0,0x1c8);
        unaff_r10 = iVar6 + 8;
        local_540 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(&local_544);
        } while (!bVar1);
        DataMemoryBarrier(0xb);
        if (local_544 == 0) {
          *(undefined4 *)(iVar6 + 0x1b8) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar6 + 0x1b0) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(local_544 + 0x1a8) == local_548[2] + 8);
          *(int *)(iVar6 + 0x1b8) = *(int *)(local_544 + 0x1b0) + 1;
          DataMemoryBarrier(0xb);
          *(uint *)(iVar6 + 0x1b0) = local_544;
          *(uint *)(local_544 + 0x1ac) = unaff_r10;
        }
        *(undefined4 *)(iVar6 + 0x1bc) = 0;
        puVar10 = local_548 + 6;
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar10;
          bVar1 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar1);
        *puVar10 = unaff_r10;
        DataMemoryBarrier(0xb);
        *(uint *)(uVar8 + 0x1b4) = unaff_r10;
        local_570 = local_550;
        local_56c = local_54c;
        local_59c = local_548;
        local_5a0 = local_538;
        local_574 = local_53f;
        local_572 = local_53d;
        local_598 = (uint **)local_554;
        pppuVar11 = local_558;
        pppuVar14 = local_534;
        pppuVar16 = local_53c;
        pppuVar2 = pppuVar5;
        local_544 = unaff_r10;
      } while (pppuVar5 != pppuVar7);
    }
    uVar12 = 0;
    local_590 = local_570;
    local_58c = local_56c;
    local_594 = local_574;
    local_592 = local_572;
    FUN_00db1ef8(&local_568);
    uVar9 = 0;
  }
  param_1[2] = local_590;
  *(undefined1 *)((int)param_1 + 0x1b) = local_592;
  *param_1 = pppuVar11;
  param_1[3] = local_58c;
  param_1[4] = local_59c;
  *(undefined2 *)((int)param_1 + 0x19) = local_594;
  *(undefined1 *)(param_1 + 6) = uVar12;
  param_1[1] = local_598;
  param_1[5] = unaff_r10;
  param_1[7] = pppuVar16;
  param_1[8] = local_5a0;
  param_1[9] = pppuVar14;
  param_1[10] = uVar9;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
}

