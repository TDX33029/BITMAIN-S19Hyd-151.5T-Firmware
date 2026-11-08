// FUN_00b5c720 @ 00b5c720 size=2400 calls_out=23 calls_in=1
// strings: BUG: poisoned lock

/* WARNING: Removing unreachable block (ram,0x00b5d078) */

void FUN_00b5c720(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int **ppiVar17;
  uint *puVar18;
  undefined8 uVar19;
  int *local_2d0;
  int *local_294 [5];
  int local_280;
  undefined4 local_27c;
  int *local_274;
  int **local_270;
  code *local_26c;
  int **local_268;
  uint *local_264;
  int **local_260;
  uint local_25c;
  uint local_258;
  uint *puStack_254;
  undefined4 uStack_250;
  int **local_24c;
  uint local_248;
  int *local_244;
  uint local_240;
  int **local_238;
  code *local_234;
  uint uStack_230;
  uint *puStack_22c;
  int **local_228;
  uint local_224;
  uint uStack_220;
  uint *puStack_21c;
  undefined4 uStack_218;
  int **local_214;
  uint local_210;
  int *local_20c;
  uint uStack_208;
  uint uStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined4 local_138;
  int *local_134;
  uint auStack_130 [52];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1a)) {
  case 0:
    uVar9 = *param_2;
    uVar10 = param_2[1];
    param_2[2] = 0;
    param_2[3] = 8;
    param_2[4] = 0;
    iVar5 = FUN_00b31650(uVar9);
    param_2[5] = iVar5;
    if (iVar5 != 0) {
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[6] = iVar5;
      iVar5 = iVar5 + 8;
      param_2[7] = uVar9;
      param_2[8] = iVar5;
      param_2[9] = uVar10;
LAB_00b5c7e4:
      param_2[10] = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 0;
      param_2[0xb] = iVar5;
      param_2[0xc] = uVar10;
      param_2[0xd] = iVar5;
      goto switchD_00b5c7c4_caseD_3;
    }
LAB_00b5d0d0:
    uVar10 = param_2[2];
    piVar13 = (int *)param_2[3];
    uVar9 = param_2[4];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186fea0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186fea0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x19)) {
    case 0:
      uVar9 = param_2[7];
      iVar5 = param_2[8];
      uVar10 = param_2[9];
      goto LAB_00b5c7e4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01870090);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01870090);
    }
switchD_00b5c7c4_caseD_3:
    FUN_00b23e50(&local_138,param_2 + 0xd,param_3);
    if (local_138 == (int *)0x80000000) {
      *(undefined1 *)(param_2 + 0x19) = 3;
LAB_00b5cdb0:
      *param_1 = 0x80000001;
      uVar4 = 3;
      goto LAB_00b5d0ec;
    }
    local_248 = (uint)local_138;
    local_244 = local_134;
    local_240 = auStack_130[0];
    FUN_00b216bc(param_2 + 0xd);
    uVar16 = local_240;
    piVar13 = local_244;
    uVar9 = param_2[0xb];
    iVar11 = 0;
    iVar15 = *(int *)(param_2[10] + 0x204);
    piVar7 = local_244 + local_240;
    iVar5 = local_240 * 4;
    do {
      if (iVar5 == iVar11) {
        ppiVar17 = (int **)0x0;
        bVar3 = true;
        pcVar6 = (code *)&DAT_00000004;
        goto joined_r0x00b5c9ac;
      }
      FUN_00b374c0(&local_138,uVar9,*(undefined4 *)((int)piVar13 + iVar11));
      iVar11 = iVar11 + 4;
    } while ((char)local_138 != '\x01');
    FUN_016dd1aa(&local_238,(int)&local_138 + 1,0x20);
    uVar16 = *(uint *)(iVar15 + 0xb8);
    pcVar6 = (code *)thunk_FUN_016d4a50(0x90);
    if (pcVar6 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x90);
    }
    piVar13 = (int *)((int)piVar13 + iVar11);
    *(int ***)pcVar6 = local_238;
    *(code **)((int)pcVar6 + 4) = local_234;
    *(uint *)((int)pcVar6 + 8) = uStack_230;
    *(uint **)((int)pcVar6 + 0xc) = puStack_22c;
    *(int ***)((int)pcVar6 + 0x10) = local_228;
    *(uint *)((int)pcVar6 + 0x14) = local_224;
    *(uint *)((int)pcVar6 + 0x18) = uStack_220;
    *(uint **)((int)pcVar6 + 0x1c) = puStack_21c;
    *(uint *)((int)pcVar6 + 0x20) = uVar16;
    local_268 = (int **)0x1;
    local_270 = (int **)0x4;
    ppiVar17 = (int **)0x1;
    local_26c = pcVar6;
    while (piVar13 != piVar7) {
      FUN_00b374c0(&local_138,uVar9,*piVar13);
      piVar13 = piVar13 + 1;
      if ((char)local_138 == '\x01') {
        FUN_016dd1aa(&local_210,(int)&local_138 + 1,0x20);
        uVar16 = *(uint *)(iVar15 + 0xb8);
        if (ppiVar17 == local_270) {
          FUN_00d653ec(&local_270,ppiVar17,1,4,0x24);
          pcVar6 = local_26c;
        }
        local_268 = (int **)((int)ppiVar17 + 1);
        puVar18 = (uint *)((int)pcVar6 + (int)ppiVar17 * 9 * 4);
        *puVar18 = local_210;
        puVar18[1] = (uint)local_20c;
        puVar18[2] = uStack_208;
        puVar18[3] = uStack_204;
        puVar18[4] = local_200;
        puVar18[5] = uStack_1fc;
        puVar18[6] = uStack_1f8;
        puVar18[7] = uStack_1f4;
        puVar18[8] = uVar16;
        ppiVar17 = local_268;
      }
    }
    bVar3 = local_270 == (int **)0x0;
    pcVar6 = local_26c;
    piVar13 = local_244;
    uVar16 = local_240;
joined_r0x00b5c9ac:
    if (uVar16 != 0) {
      uVar8 = 0;
      do {
        piVar7 = (int *)piVar13[uVar8];
        uVar12 = uVar8 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(piVar13[uVar8]);
        }
        uVar8 = uVar12;
      } while (uVar12 != uVar16);
    }
    if (local_248 != 0) {
      thunk_FUN_016d3fb4(local_244);
    }
    (*(code *)param_2[0xc])(&local_280,pcVar6,ppiVar17);
    iVar5 = *(int *)(param_2[10] + 0x4a4);
    piVar13 = (int *)(iVar5 + 0x10);
    do {
      local_274 = &local_280;
      if (*piVar13 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar13);
        goto LAB_00b5ca94;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 1;
    DataMemoryBarrier(0xb);
LAB_00b5ca94:
    uVar16 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar5 + 0x14);
    }
    else {
      uVar16 = FUN_015bf3f8();
      uVar16 = uVar16 ^ 1;
      cVar1 = *(char *)(iVar5 + 0x14);
    }
    if (cVar1 != '\0') {
      uVar8 = (uint)local_134 >> 8;
      local_134 = (int *)CONCAT31((int3)uVar8,(char)uVar16);
      local_138 = piVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: poisoned lock",0x12,&local_138,&DAT_0187262c,&DAT_01871f70);
    }
    local_268 = *(int ***)(iVar5 + 0x18);
    if (local_268 == (int **)0x0) {
      uStack_250 = 0;
      local_264 = (uint *)pcVar6;
    }
    else {
      uStack_250 = *(undefined4 *)(iVar5 + 0x20);
      local_264 = *(uint **)(iVar5 + 0x1c);
    }
    local_270 = (int **)(uint)(local_268 != (int **)0x0);
    local_24c = &local_274;
    local_25c = 0;
    local_26c = (code *)0x0;
    local_260 = local_270;
    local_258 = (uint)local_268;
    puStack_254 = local_264;
    do {
      uVar19 = FUN_00c394b8(&local_270);
      piVar7 = (int *)((ulonglong)uVar19 >> 0x20);
      iVar11 = (int)uVar19;
      if (iVar11 == 0) {
        local_2d0 = (int *)&DAT_00000008;
        uVar8 = 0;
        uVar12 = 0;
        goto joined_r0x00b5cd34;
      }
      uVar8 = (*local_24c)[2];
    } while (((*(uint *)(iVar11 + 8) < uVar8) ||
             (iVar15 = *piVar7, iVar14 = piVar7[1],
             iVar11 = thunk_FUN_016dd50a((*local_24c)[1],
                                         *(int *)(iVar11 + 4) + (*(uint *)(iVar11 + 8) - uVar8)),
             (iVar15 != 2 || iVar14 != 0) || iVar11 != 0)) ||
            (FUN_00c012c8(&local_138,piVar7), piVar7 = local_134, uVar8 = (uint)local_138,
            local_138 == (int *)0x4 && local_134 == (int *)0x0));
    FUN_016dd1aa(&uStack_208,auStack_130,0xd0);
    local_20c = piVar7;
    local_210 = uVar8;
    local_2d0 = (int *)thunk_FUN_016d4a50(0x360);
    if (local_2d0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x360);
    }
    FUN_016dd1aa(local_2d0,&local_210,0xd8);
    local_240 = 1;
    local_248 = 4;
    local_238 = local_270;
    local_234 = local_26c;
    uStack_230 = (uint)local_268;
    puStack_22c = local_264;
    local_228 = local_260;
    uVar8 = 1;
    local_224 = local_25c;
    uStack_220 = local_258;
    puStack_21c = puStack_254;
    uStack_218 = uStack_250;
    local_214 = local_24c;
    local_244 = local_2d0;
    while( true ) {
      uVar19 = FUN_00c394b8(&local_238);
      piVar7 = (int *)((ulonglong)uVar19 >> 0x20);
      iVar11 = (int)uVar19;
      uVar12 = local_248;
      if (iVar11 == 0) break;
      uVar12 = (*local_214)[2];
      if (((uVar12 <= *(uint *)(iVar11 + 8)) &&
          (iVar14 = *piVar7, iVar15 = piVar7[1],
          iVar11 = thunk_FUN_016dd50a((*local_214)[1],
                                      *(int *)(iVar11 + 4) + (*(uint *)(iVar11 + 8) - uVar12)),
          (iVar14 == 2 && iVar15 == 0) && iVar11 == 0)) &&
         (FUN_00c012c8(&local_138,piVar7), piVar7 = local_134, uVar12 = (uint)local_138,
         local_138 != (int *)0x4 || local_134 != (int *)0x0)) {
        FUN_016dd1aa(&uStack_208,auStack_130,0xd0);
        local_20c = piVar7;
        local_210 = uVar12;
        if (uVar8 == local_248) {
          FUN_00d653ec(&local_248,uVar8,1,8,0xd8);
          local_2d0 = local_244;
        }
        FUN_016dd1aa(local_2d0 + uVar8 * 0x36,&local_210,0xd8);
        uVar8 = uVar8 + 1;
        local_240 = uVar8;
      }
    }
joined_r0x00b5cd34:
    if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar5 + 0x14) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar13,0x81,1);
    }
    if (local_280 != 0) {
      thunk_FUN_016d3fb4(local_27c);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(pcVar6);
    }
    *(undefined1 *)(param_2 + 0x19) = 1;
    if (uVar12 == 0x80000000) {
      piVar13 = local_2d0;
    }
    else {
      if (uVar12 == 0x80000001) goto LAB_00b5cdb0;
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          thunk_FUN_016d3fb4(local_2d0);
        }
        piVar13 = (int *)param_2[6];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f1030(param_2[6]);
        }
        goto LAB_00b5d0d0;
      }
      local_294[0] = local_2d0;
      if (*local_2d0 == 2 && local_2d0[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b5cf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00b5cf50 + *(int *)(&DAT_00b5cf50 + local_2d0[2] * 4)))
                  (local_2d0[4],local_2d0[5],local_2d0[6],local_2d0[7]);
        return;
      }
      local_234 = FUN_00c05cb4;
      local_238 = local_294;
      FUN_00600d2c(&local_138,&DAT_0059a127,&local_238);
      local_210 = (uint)local_138;
      local_20c = local_134;
      uStack_208 = auStack_130[0];
      piVar13 = (int *)FUN_00c6b484(&local_210);
      piVar7 = local_2d0;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_00ce259c(piVar7);
        piVar7 = piVar7 + 0x36;
      }
      if (uVar12 != 0) {
        thunk_FUN_016d3fb4(local_2d0);
      }
    }
    piVar7 = (int *)param_2[6];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(param_2[6]);
    }
    uVar10 = 0x80000000;
    uVar9 = 0;
    if (param_2[2] != 0) {
      uVar9 = thunk_FUN_016d3fb4(param_2[3]);
    }
  }
  *param_1 = uVar10;
  param_1[1] = piVar13;
  param_1[2] = uVar9;
  uVar4 = 1;
LAB_00b5d0ec:
  *(undefined1 *)(param_2 + 0x1a) = uVar4;
  return;
}

