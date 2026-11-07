// FUN_01170ca0 @ 01170ca0 size=1388 calls_out=8 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01170ca0(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 ***pppuVar14;
  undefined4 ***pppuVar15;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 local_2e8;
  uint **local_2e4;
  undefined4 local_2e0;
  undefined2 local_2dc;
  undefined1 local_2da;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined2 local_2bc;
  undefined1 local_2ba;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 ***local_2b0;
  undefined4 ***local_2ac;
  uint **local_2a8;
  undefined4 ***local_2a4;
  undefined4 ***local_2a0;
  undefined4 ***local_29c;
  undefined4 local_298;
  undefined4 ***local_294;
  undefined4 ***local_290;
  undefined4 ***local_28c;
  undefined1 local_288;
  undefined2 local_287;
  undefined1 local_285;
  undefined4 ***local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 auStack_278 [176];
  undefined4 ***local_1c8;
  undefined4 ***local_1c4;
  undefined4 local_1c0;
  undefined4 ***local_1bc;
  uint **local_110;
  uint **ppuStack_10c;
  uint **local_108;
  uint **local_104;
  uint **local_100;
  undefined4 **local_fc;
  undefined4 **local_f8;
  undefined4 **local_f4;
  undefined4 **local_f0;
  undefined4 **local_ec;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  undefined2 local_2c;
  
  pppuVar2 = (undefined4 ***)param_2[1];
  ppuVar12 = (uint **)param_2[2];
  uVar9 = *param_2;
  pppuVar8 = pppuVar2 + (int)ppuVar12 * 0x2c;
  if (ppuVar12 < (uint **)0x1f) {
    ppuVar13 = (uint **)0x0;
    local_1c8 = pppuVar2;
    local_1c4 = pppuVar2;
    local_1c0 = uVar9;
    local_1bc = pppuVar8;
    if (ppuVar12 == (uint **)0x0) {
      ppuVar3 = (uint **)&DAT_00000008;
      ppuVar12 = (uint **)0x0;
    }
    else {
      ppuVar3 = (uint **)FUN_01298504((int)ppuVar12 * 0xb8,8);
      if (ppuVar3 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)ppuVar12 * 0xb8);
      }
    }
    pppuVar14 = local_1bc;
    local_2a0 = local_1c8;
    local_29c = local_1c4;
    local_298 = local_1c0;
    local_294 = local_1bc;
    pppuVar5 = local_1bc;
    local_2b0 = (undefined4 ***)ppuVar12;
    local_2ac = (undefined4 ***)ppuVar3;
    if (local_1c4 != local_1bc) {
      pppuVar5 = &local_108;
      ppuVar13 = (uint **)0x0;
      pppuVar2 = local_1c4;
      do {
        FUN_01bed4e2(pppuVar5,pppuVar2,0xb0);
        *ppuVar3 = (uint *)0x0;
        ppuVar3[1] = (uint *)0x0;
        FUN_01bed4e2(ppuVar3 + 2,pppuVar5,0xb0);
        pppuVar2 = pppuVar2 + 0x2c;
        ppuVar3 = ppuVar3 + 0x2e;
        ppuVar13 = (uint **)((int)ppuVar13 + 1);
      } while (pppuVar2 != pppuVar14);
      local_29c = pppuVar2;
    }
    pppuVar11 = local_29c;
    local_2a8 = ppuVar13;
    FUN_00db293c(&local_2a0);
    local_2e4 = local_2a8;
    local_108 = (uint **)local_2b0;
    local_104 = (uint **)local_2ac;
    local_100 = local_2a8;
    local_2e8 = extraout_r12;
    if ((local_2a8 < local_2b0) &&
       (iVar7 = FUN_0189bb64(&local_108,local_2a8,8,0xb8), local_2e8 = extraout_r12_00,
       iVar7 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar9 = 0x80000000;
    pppuVar10 = (undefined4 ***)local_104;
    pppuVar15 = (undefined4 ***)local_100;
  }
  else {
    local_30 = (undefined4 ***)&DAT_ffffffff;
    local_fc = (undefined4 **)0x0;
    local_100 = (undefined4 **)0x0;
    local_40 = (undefined4 **)0x0;
    local_104 = (uint **)0x1;
    local_108 = (undefined4 **)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 1;
    ppuVar4 = (undefined4 **)thunk_FUN_01be5118(0xe0);
    if (ppuVar4 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xe0);
    }
    FUN_01bed4e2(ppuVar4,&local_108,0xe0);
    local_f0 = ppuVar4 + 2;
    local_f4 = (undefined4 **)0x0;
    local_fc = (undefined4 **)0x0;
    local_104 = (undefined4 **)0x1;
    local_108 = (undefined4 **)0x1;
    local_100 = ppuVar4;
    local_ec = local_f0;
    pppuVar5 = (undefined4 ***)thunk_FUN_01be5118(0x20);
    if (pppuVar5 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *pppuVar5 = local_108;
    pppuVar5[1] = local_104;
    pppuVar5[2] = local_100;
    pppuVar5[3] = local_fc;
    pppuVar5[4] = local_f8;
    pppuVar5[5] = local_f4;
    pppuVar5[6] = local_f0;
    pppuVar5[7] = local_ec;
    local_2b4 = 0;
    local_2b8 = 0;
    local_2b0 = pppuVar2;
    local_2a8 = (uint **)uVar9;
    local_2a4 = pppuVar8;
    if (pppuVar2 == pppuVar8) {
      local_2e0 = 8;
      pppuVar14 = (undefined4 ***)0x0;
      local_2e8 = 0;
      pppuVar10 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)0x0;
      pppuVar15 = (undefined4 ***)(uint **)0x0;
      local_2ac = pppuVar2;
    }
    else {
      local_2e0 = 8;
      pppuVar14 = (undefined4 ***)0x0;
      local_2e8 = 0;
      pppuVar10 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)0x0;
      pppuVar15 = (undefined4 ***)(uint **)0x0;
      do {
        pppuVar6 = pppuVar2 + 0x2c;
        local_2ac = pppuVar6;
        FUN_01bed4e2(auStack_278,pppuVar2,0xb0);
        local_298 = local_2b8;
        local_294 = (undefined4 ***)local_2b4;
        local_288 = 0;
        local_27c = local_2e8;
        local_280 = local_2e0;
        local_285 = local_2ba;
        local_287 = local_2bc;
        local_2a0 = pppuVar10;
        local_29c = pppuVar15;
        local_290 = pppuVar5;
        local_28c = pppuVar14;
        local_284 = pppuVar11;
        FUN_01bed4e2(&local_1c0,pppuVar2,0xb0);
        local_1c4 = (undefined4 ***)0x0;
        local_2a0 = (undefined4 ***)((int)pppuVar10 + 1);
        ppuVar4 = pppuVar5[2];
        local_29c = (undefined4 ***)((int)pppuVar15 + (uint)((uint **)0xfffffffe < pppuVar10));
        local_1c8 = (undefined4 ***)0x1;
        local_110 = (uint **)pppuVar10;
        ppuStack_10c = (uint **)pppuVar15;
        FUN_0117f4c4(pppuVar5);
        FUN_01bed4e2(&local_100,&local_1c8,0xc0);
        local_34 = 0;
        local_2c = 1;
        local_40 = ppuVar4 + 2;
        local_38 = 0;
        local_3c = 0;
        local_104 = (undefined4 **)0x1;
        local_108 = (undefined4 **)0x1;
        local_30 = pppuVar5;
        iVar7 = thunk_FUN_01be5118(0xe0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0xe0);
        }
        FUN_01bed4e2(iVar7,&local_108,0xe0);
        pppuVar14 = (undefined4 ***)(iVar7 + 8);
        local_288 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(&local_28c);
        } while (!bVar1);
        DataMemoryBarrier(0xb);
        if (local_28c == (undefined4 ***)0x0) {
          *(undefined4 *)(iVar7 + 0xd0) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar7 + 200) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (local_28c[0x30] == local_290[2] + 2);
          *(int *)(iVar7 + 0xd0) = (int)local_28c[0x32] + 1;
          DataMemoryBarrier(0xb);
          *(undefined4 ****)(iVar7 + 200) = local_28c;
          local_28c[0x31] = pppuVar14;
        }
        *(undefined4 *)(iVar7 + 0xd4) = 0;
        pppuVar2 = local_290 + 6;
        DataMemoryBarrier(0xb);
        do {
          ppuVar4 = *pppuVar2;
          bVar1 = (bool)hasExclusiveAccess(pppuVar2);
        } while (!bVar1);
        *pppuVar2 = pppuVar14;
        DataMemoryBarrier(0xb);
        ppuVar4[0x33] = pppuVar14;
        local_2b8 = local_298;
        local_2b4 = local_294;
        local_2e0 = local_280;
        local_2e8 = local_27c;
        local_2bc = local_287;
        local_2ba = local_285;
        pppuVar10 = local_2a0;
        pppuVar11 = local_284;
        pppuVar5 = local_290;
        pppuVar2 = pppuVar6;
        pppuVar15 = local_29c;
        local_28c = pppuVar14;
      } while (pppuVar6 != pppuVar8);
    }
    local_2e4 = (uint **)0x0;
    local_2d8 = local_2b8;
    local_2d4 = local_2b4;
    local_2dc = local_2bc;
    local_2da = local_2ba;
    FUN_00db293c(&local_2b0);
    uVar9 = 0;
  }
  *param_1 = pppuVar10;
  param_1[1] = pppuVar15;
  *(undefined1 *)((int)param_1 + 0x1b) = local_2da;
  param_1[2] = local_2d8;
  param_1[3] = local_2d4;
  param_1[4] = pppuVar5;
  param_1[5] = pppuVar14;
  *(undefined2 *)((int)param_1 + 0x19) = local_2dc;
  *(char *)(param_1 + 6) = (char)local_2e4;
  param_1[7] = pppuVar11;
  param_1[8] = local_2e0;
  param_1[9] = local_2e8;
  param_1[10] = uVar9;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
}

