// FUN_01172b54 @ 01172b54 size=1396 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01172b54(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 ***pppuVar2;
  undefined4 **ppuVar3;
  undefined4 ***pppuVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  undefined4 ***pppuVar7;
  undefined4 uVar8;
  undefined4 ***pppuVar9;
  uint **ppuVar10;
  undefined4 ***pppuVar11;
  uint **ppuVar12;
  uint uVar13;
  uint unaff_r10;
  undefined4 **extraout_r12;
  undefined4 **extraout_r12_00;
  undefined4 ***local_484;
  uint **local_480;
  uint local_47c;
  undefined4 **local_478;
  undefined2 local_474;
  undefined1 local_472;
  uint local_470;
  uint local_46c;
  undefined2 local_454;
  undefined1 local_452;
  uint local_450;
  uint local_44c;
  undefined4 ***local_448;
  undefined4 ***local_444;
  uint **local_440;
  undefined4 ***local_43c;
  undefined4 ***local_438;
  undefined4 ***local_434;
  uint local_430;
  undefined4 ***local_42c;
  undefined4 ***local_428;
  undefined4 **local_424;
  undefined1 local_420;
  undefined2 local_41f;
  undefined1 local_41d;
  uint local_41c;
  uint local_418;
  undefined4 ***local_414;
  undefined1 auStack_410 [312];
  undefined4 ***local_2d8;
  undefined4 ***local_2d4;
  undefined4 local_2d0;
  undefined4 ***local_2cc;
  uint **local_198;
  uint **ppuStack_194;
  uint **local_190;
  uint **local_18c;
  uint **local_188;
  undefined4 **local_184;
  undefined4 **local_180;
  undefined4 **local_17c;
  undefined4 **local_178;
  undefined4 **local_174;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  undefined2 uStack_2c;
  
  pppuVar2 = (undefined4 ***)param_2[1];
  ppuVar10 = (uint **)param_2[2];
  uVar8 = *param_2;
  pppuVar7 = pppuVar2 + (int)ppuVar10 * 0x4e;
  if (ppuVar10 < (uint **)0x1f) {
    ppuVar12 = (uint **)0x0;
    local_2d8 = pppuVar2;
    local_2d4 = pppuVar2;
    local_2d0 = uVar8;
    local_2cc = pppuVar7;
    if (ppuVar10 == (uint **)0x0) {
      local_444 = (undefined4 ***)0x8;
      ppuVar10 = (uint **)0x0;
    }
    else {
      local_444 = (undefined4 ***)FUN_01298504((int)ppuVar10 * 0x140,8);
      if (local_444 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,(int)ppuVar10 * 0x140);
      }
    }
    local_484 = local_2cc;
    local_438 = local_2d8;
    local_434 = local_2d4;
    local_430 = local_2d0;
    local_42c = local_2cc;
    pppuVar4 = local_2cc;
    local_448 = (undefined4 ***)ppuVar10;
    if (local_2d4 != local_2cc) {
      ppuVar10 = (uint **)(local_444 + 1);
      pppuVar4 = &local_190;
      ppuVar12 = (uint **)0x0;
      pppuVar2 = local_2d4;
      do {
        FUN_01bed4e2(pppuVar4,pppuVar2,0x138);
        ppuVar10[-1] = (uint *)0x0;
        FUN_01bed4e2(ppuVar10,pppuVar4,0x138);
        pppuVar2 = pppuVar2 + 0x4e;
        ppuVar10 = ppuVar10 + 0x50;
        ppuVar12 = (uint **)((int)ppuVar12 + 1);
      } while (pppuVar2 != local_484);
      local_434 = pppuVar2;
    }
    local_47c = 0x1172fa4;
    local_440 = ppuVar12;
    FUN_00db1a5c(&local_438);
    local_480 = local_440;
    local_190 = (uint **)local_448;
    local_18c = (uint **)local_444;
    local_188 = local_440;
    local_478 = extraout_r12;
    if (local_440 < local_448) {
      local_47c = 0x1172fd8;
      iVar6 = FUN_0189bb64(&local_190,local_440,8,0x140);
      local_478 = extraout_r12_00;
      if (iVar6 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
    }
    uVar13 = 0x80000000;
    pppuVar9 = (undefined4 ***)local_18c;
    pppuVar11 = (undefined4 ***)local_188;
  }
  else {
    uStack_2c = 1;
    local_30 = (undefined4 ***)&DAT_ffffffff;
    local_184 = (undefined4 **)0x0;
    local_188 = (undefined4 **)0x0;
    local_40 = (undefined4 **)0x0;
    local_18c = (uint **)0x1;
    local_190 = (undefined4 **)0x1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    ppuVar3 = (undefined4 **)thunk_FUN_01be5118(0x168);
    if (ppuVar3 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x168);
    }
    FUN_01bed4e2(ppuVar3,&local_190,0x168);
    local_178 = ppuVar3 + 2;
    local_17c = (undefined4 **)0x0;
    local_184 = (undefined4 **)0x0;
    local_18c = (undefined4 **)0x1;
    local_190 = (undefined4 **)0x1;
    local_188 = ppuVar3;
    local_174 = local_178;
    pppuVar4 = (undefined4 ***)thunk_FUN_01be5118(0x20);
    if (pppuVar4 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *pppuVar4 = local_190;
    pppuVar4[1] = local_18c;
    pppuVar4[2] = local_188;
    pppuVar4[3] = local_184;
    pppuVar4[4] = local_180;
    pppuVar4[5] = local_17c;
    pppuVar4[6] = local_178;
    pppuVar4[7] = local_174;
    local_44c = 0;
    local_450 = 0;
    local_448 = pppuVar2;
    local_440 = (uint **)uVar8;
    local_43c = pppuVar7;
    if (pppuVar2 == pppuVar7) {
      local_478 = (undefined4 **)0x0;
      local_47c = 0;
      local_484 = (undefined4 ***)0x0;
      pppuVar9 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      unaff_r10 = 8;
      local_444 = pppuVar2;
    }
    else {
      local_478 = (undefined4 **)0x0;
      local_47c = 0;
      local_484 = (undefined4 ***)0x0;
      pppuVar9 = (undefined4 ***)(uint **)0x0;
      pppuVar11 = (undefined4 ***)(uint **)0x0;
      uVar13 = 8;
      do {
        pppuVar5 = pppuVar2 + 0x4e;
        local_444 = pppuVar5;
        FUN_01bed4e2(auStack_410,pppuVar2,0x138);
        local_430 = local_450;
        local_42c = (undefined4 ***)local_44c;
        local_420 = 0;
        local_424 = local_478;
        local_414 = local_484;
        local_41c = local_47c;
        local_41d = local_452;
        local_41f = local_454;
        local_438 = pppuVar9;
        local_434 = pppuVar11;
        local_428 = pppuVar4;
        local_418 = uVar13;
        FUN_01bed4e2(&local_2d0,pppuVar2,0x138);
        local_2d4 = (undefined4 ***)0x0;
        local_2d8 = (undefined4 ***)0x1;
        local_438 = (undefined4 ***)((int)pppuVar9 + 1);
        ppuVar3 = pppuVar4[2];
        local_434 = (undefined4 ***)((int)pppuVar11 + (uint)((uint **)0xfffffffe < pppuVar9));
        local_198 = (uint **)pppuVar9;
        ppuStack_194 = (uint **)pppuVar11;
        FUN_0117f4c4(pppuVar4);
        FUN_01bed4e2(&local_188,&local_2d8,0x148);
        uStack_2c = 1;
        local_40 = ppuVar3 + 2;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_18c = (undefined4 **)0x1;
        local_190 = (undefined4 **)0x1;
        local_30 = pppuVar4;
        iVar6 = thunk_FUN_01be5118(0x168);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x168);
        }
        FUN_01bed4e2(iVar6,&local_190,0x168);
        local_478 = (undefined4 **)(iVar6 + 8);
        local_420 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(&local_424);
        } while (!bVar1);
        DataMemoryBarrier(0xb);
        if (local_424 == (undefined4 **)0x0) {
          *(undefined4 *)(iVar6 + 0x158) = 1;
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar6 + 0x150) = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while ((undefined4 **)local_424[0x52] == local_428[2] + 2);
          *(int *)(iVar6 + 0x158) = (int)local_424[0x54] + 1;
          DataMemoryBarrier(0xb);
          *(undefined4 ***)(iVar6 + 0x150) = local_424;
          local_424[0x53] = local_478;
        }
        *(undefined4 *)(iVar6 + 0x15c) = 0;
        pppuVar2 = local_428 + 6;
        DataMemoryBarrier(0xb);
        do {
          ppuVar3 = *pppuVar2;
          bVar1 = (bool)hasExclusiveAccess(pppuVar2);
        } while (!bVar1);
        *pppuVar2 = local_478;
        DataMemoryBarrier(0xb);
        ppuVar3[0x55] = local_478;
        local_450 = local_430;
        local_44c = (uint)local_42c;
        local_47c = local_41c;
        local_484 = local_414;
        local_454 = local_41f;
        local_452 = local_41d;
        pppuVar9 = local_438;
        pppuVar11 = local_434;
        pppuVar4 = local_428;
        pppuVar2 = pppuVar5;
        uVar13 = local_418;
        unaff_r10 = local_418;
        local_424 = local_478;
      } while (pppuVar5 != pppuVar7);
    }
    local_480 = (uint **)0x0;
    local_470 = local_450;
    local_46c = local_44c;
    local_474 = local_454;
    local_472 = local_452;
    FUN_00db1a5c(&local_448);
    uVar13 = 0;
  }
  *param_1 = (uint)pppuVar9;
  param_1[1] = (uint)pppuVar11;
  param_1[2] = local_470;
  param_1[3] = local_46c;
  param_1[4] = (uint)pppuVar4;
  param_1[5] = (uint)local_478;
  *(char *)(param_1 + 6) = (char)local_480;
  *(undefined2 *)((int)param_1 + 0x19) = local_474;
  *(undefined1 *)((int)param_1 + 0x1b) = local_472;
  param_1[7] = local_47c;
  param_1[8] = unaff_r10;
  param_1[9] = (uint)local_484;
  param_1[10] = uVar13;
  param_1[0xb] = 8;
  param_1[0xc] = 0;
  return;
}

