// FUN_00d01058 @ 00d01058 size=4040 calls_out=41 calls_in=0
// strings: BUG: failed to create tokio runtime | Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks. | Failed to `Enter::block_on` | reached max `enter` depth | not a CurrentThread handle | expected `CurrentThread::Context`there is no reactor running; must be called from the context of a Tokio 1.x runtime

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d01058(int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  int ************ppppppppppppiVar6;
  undefined4 *puVar7;
  int ***********pppppppppppiVar8;
  int iVar9;
  int ************ppppppppppppiVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int **********ppppppppppiVar15;
  int iVar16;
  int *******pppppppiVar17;
  int ***********pppppppppppiVar18;
  int extraout_r2;
  uint extraout_r2_00;
  undefined *puVar19;
  int *******pppppppiVar20;
  int extraout_r3;
  int ***********pppppppppppiVar21;
  int extraout_r3_00;
  char cVar22;
  undefined4 uVar23;
  int ************ppppppppppppiVar24;
  int *piVar25;
  int ************ppppppppppppiVar26;
  int ************ppppppppppppiVar27;
  char *pcVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int ***********local_3904;
  int ************local_38f0;
  int ************local_38ec;
  int iStack_38e8;
  undefined4 uStack_38e4;
  undefined4 uStack_38e0;
  int ***********local_38dc;
  int ************local_38d8;
  int ************local_38d4;
  int ************ppppppppppppiStack_38d0;
  undefined4 *puStack_38cc;
  undefined1 auStack_38c8 [808];
  undefined4 local_35a0;
  undefined4 uStack_359c;
  undefined4 uStack_3598;
  undefined4 uStack_3594;
  undefined4 uStack_3590;
  undefined4 uStack_358c;
  undefined4 local_3588;
  undefined4 uStack_3584;
  undefined4 uStack_3580;
  undefined4 uStack_357c;
  undefined4 uStack_3578;
  undefined4 uStack_3574;
  int ************ppppppppppppiStack_2630;
  int ************ppppppppppppiStack_262c;
  int ************local_2628;
  int ***********local_2620;
  int ***********local_261c;
  int ************local_2618;
  uint local_2614;
  undefined4 local_2610;
  int ************local_260c;
  int ************local_2608;
  int ************local_2604;
  int ************local_2600;
  int ************local_25fc;
  undefined4 *local_25f8;
  undefined1 *local_25f4;
  undefined4 local_25f0;
  undefined4 uStack_25ec;
  undefined4 local_25e8;
  undefined4 local_25e0;
  undefined4 local_25d8;
  undefined4 local_25d0;
  undefined4 local_25c8;
  undefined4 local_25c0;
  undefined1 local_25bc;
  undefined4 local_25b8;
  uint local_25b4;
  undefined4 local_25b0;
  undefined4 local_25ac;
  undefined4 local_25a8;
  undefined1 local_25a4;
  undefined2 local_25a3;
  undefined1 local_25a1;
  undefined2 local_25a0;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined4 local_1350;
  undefined1 local_134c;
  undefined4 local_1348;
  undefined4 local_1344;
  undefined4 local_1340;
  int ***********local_1338;
  int ***********local_1334;
  int ***********local_1318;
  int ************local_1314;
  int local_1310;
  uint local_130c;
  undefined4 local_1308;
  int ************local_1304;
  int ************local_1300;
  int ************local_12fc;
  int ************local_12f8;
  undefined4 *puStack_12f4;
  undefined1 *puStack_12f0;
  undefined4 uStack_12ec;
  undefined4 uStack_12e8;
  int local_7c;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int ***********local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  int *local_44;
  
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar7 = 1;
  puVar7[1] = 1;
  uVar31 = FUN_0164e918();
  local_25b8 = (undefined4)((ulonglong)uVar31 >> 0x20);
  local_25b0 = 0x400;
  local_2600 = (int ************)&DAT_3b9aca00;
  local_25a4 = 1;
  local_25b4 = 1;
  if (1 < (uint)uVar31) {
    local_25b4 = (uint)uVar31;
  }
  local_25ac = 0x200;
  local_25a1 = 0;
  local_2620 = (int ***********)0x0;
  local_25c8 = 0;
  local_25d0 = 0;
  local_25d8 = 0;
  local_25e0 = 0;
  local_25e8 = 0;
  local_25f0 = 0;
  local_2618 = (int ************)0x0;
  local_25a8 = 0x3d;
  local_2610 = 0;
  local_25a0 = 0;
  local_25bc = 0;
  local_25c0 = 0;
  local_25f4 = &LAB_018acb38;
  local_25a3 = 0x101;
  local_25f8 = puVar7;
  FUN_016478d0(&local_1318,&local_2620);
  if (local_1318 == (int ***********)&SUB_00000002) {
    local_38ec = (int ************)local_1310;
    local_38f0 = local_1314;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: failed to create tokio runtime",0x23,&local_38f0,&DAT_01877564,&DAT_0187712c)
    ;
  }
  local_38f0 = (int ************)local_1318;
  local_38ec = local_1314;
  iStack_38e8 = local_1310;
  uStack_38e4 = local_130c;
  uStack_38e0 = local_1308;
  local_38dc = (int ***********)local_1304;
  local_38d8 = local_1300;
  local_38d4 = local_12fc;
  ppppppppppppiStack_38d0 = local_12f8;
  puStack_38cc = puStack_12f4;
  FUN_014a3b0c(&local_2620);
  puVar7 = (undefined4 *)((uint)&local_2620 | 0x10);
  local_35a0 = *(undefined4 *)(param_1 + 0x328);
  uStack_359c = *(undefined4 *)(param_1 + 0x32c);
  uStack_3598 = *(undefined4 *)(param_1 + 0x330);
  uStack_3594 = *(undefined4 *)(param_1 + 0x334);
  uStack_3590 = *(undefined4 *)(param_1 + 0x338);
  uStack_358c = *(undefined4 *)(param_1 + 0x33c);
  local_3588 = *(undefined4 *)(param_1 + 0x340);
  uStack_3584 = *(undefined4 *)(param_1 + 0x344);
  uStack_3580 = *(undefined4 *)(param_1 + 0x348);
  uStack_357c = *(undefined4 *)(param_1 + 0x34c);
  uStack_3578 = *(undefined4 *)(param_1 + 0x350);
  uStack_3574 = *(undefined4 *)(param_1 + 0x354);
  FUN_016dd1aa(auStack_38c8,param_1,0x328);
  ppppppppppppiVar27 = local_38d4;
  uVar23 = *(undefined4 *)(param_1 + 0x358);
  uVar30 = *(undefined4 *)(param_1 + 0x35c);
  uVar29 = *(undefined4 *)(param_1 + 0x360);
  do {
    do {
      pppppppiVar5 = DAT_018d9204;
      pppppppiVar4 = DAT_018d9200;
      ppppppppppppiVar24 = (int ************)DAT_018d9200;
      ppppppppppppiVar26 = (int ************)DAT_018d9204;
      pppppppiVar17 = (int *******)((int)DAT_018d9200 + 1);
      pppppppiVar20 =
           (int *******)((int)DAT_018d9204 + (uint)((int *******)0xfffffffe < DAT_018d9200));
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int *******)0x0;
    bVar3 = DAT_018d9204 == (int *******)0x0;
    DAT_018d9200 = pppppppiVar17;
    DAT_018d9204 = pppppppiVar20;
  } while (bVar2 && bVar3);
  if (((uint)local_38d8 & 1) == 0) {
    do {
      pppppppppppiVar8 = *local_38d4;
      bVar2 = (bool)hasExclusiveAccess(local_38d4);
    } while (!bVar2);
    *local_38d4 = (int ***********)((int)pppppppppppiVar8 + 1);
    if ((int)pppppppppppiVar8 < 0) goto LAB_00d0142c;
    pppppppppppiVar8 = local_38d4[0x8e];
    pppppppppppiVar18 = (int ***********)0x0;
    if (pppppppppppiVar8 != (int ***********)0x0) {
      do {
        ppppppppppiVar15 = *pppppppppppiVar8;
        bVar2 = (bool)hasExclusiveAccess(pppppppppppiVar8);
      } while (!bVar2);
      *pppppppppppiVar8 = (int **********)((int)ppppppppppiVar15 + 1);
      if ((int)ppppppppppiVar15 < 0) goto LAB_00d0142c;
      pppppppppppiVar18 = local_38d4[0x8e];
      local_3904 = local_38d4[0x8f];
    }
    FUN_016dd1aa((uint)&local_1318 | 4,auStack_38c8,0x1298);
    local_2618 = (int ************)&PTR_LAB_01876690;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[4] = pppppppiVar4;
    puVar7[5] = pppppppiVar5;
    local_2620 = (int ***********)0xcc;
    local_261c = (int ***********)0x0;
    local_2608 = ppppppppppppiVar27;
    local_25f8 = (undefined4 *)0x0;
    FUN_016dd1aa(&local_25f4,&local_1318,0x129c);
    local_1334 = local_3904;
    local_1348 = 0;
    local_1344 = 0;
    local_1340 = 0;
    local_134c = 0;
    local_68 = (int ***********)0x0;
    local_1358 = uVar23;
    local_1354 = uVar30;
    local_1350 = uVar29;
    local_1338 = pppppppppppiVar18;
    iVar9 = FUN_016d51b0(&local_68,0x20,0x1300);
    pppppppppppiVar8 = local_68;
    if ((iVar9 != 0) || (local_68 == (int ***********)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1300);
    }
    FUN_016dd1aa(local_68,&local_2620,0x1300);
    iVar9 = FUN_00c61cb4(ppppppppppppiVar27 + 0x40,pppppppppppiVar8,pppppppppppiVar8);
    local_2620 = (int ***********)ppppppppppppiVar24;
    local_261c = (int ***********)ppppppppppppiVar26;
    if (ppppppppppppiVar27[0x8c] != (int ***********)0x0) {
      (*(code *)ppppppppppppiVar27[0x8d][5])
                ((int)ppppppppppppiVar27[0x8c] +
                 ((int)ppppppppppppiVar27[0x8d][2] - 1U & 0xfffffff8) + 8,&local_2620);
    }
    if (iVar9 != 0) {
      FUN_01659ec0(local_38d4,iVar9);
    }
  }
  else {
    do {
      pppppppppppiVar8 = *local_38d4;
      bVar2 = (bool)hasExclusiveAccess(local_38d4);
    } while (!bVar2);
    *local_38d4 = (int ***********)((int)pppppppppppiVar8 + 1);
    if ((int)pppppppppppiVar8 < 0) goto LAB_00d0142c;
    pppppppppppiVar8 = local_38d4[0x5c];
    pppppppppppiVar18 = (int ***********)0x0;
    if (pppppppppppiVar8 != (int ***********)0x0) {
      do {
        ppppppppppiVar15 = *pppppppppppiVar8;
        bVar2 = (bool)hasExclusiveAccess(pppppppppppiVar8);
      } while (!bVar2);
      *pppppppppppiVar8 = (int **********)((int)ppppppppppiVar15 + 1);
      if ((int)ppppppppppiVar15 < 0) goto LAB_00d0142c;
      pppppppppppiVar18 = local_38d4[0x5c];
      local_3904 = local_38d4[0x5d];
    }
    FUN_016dd1aa((uint)&local_1318 | 4,auStack_38c8,0x1298);
    local_2618 = (int ************)&PTR_LAB_018763e8;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[4] = pppppppiVar4;
    puVar7[5] = pppppppiVar5;
    local_2620 = (int ***********)0xcc;
    local_261c = (int ***********)0x0;
    local_2608 = ppppppppppppiVar27;
    local_25f8 = (undefined4 *)0x0;
    FUN_016dd1aa(&local_25f4,&local_1318,0x129c);
    local_1334 = local_3904;
    local_1348 = 0;
    local_1344 = 0;
    local_1340 = 0;
    local_134c = 0;
    local_68 = (int ***********)0x0;
    local_1358 = uVar23;
    local_1354 = uVar30;
    local_1350 = uVar29;
    local_1338 = pppppppppppiVar18;
    iVar9 = FUN_016d51b0(&local_68,0x20,0x1300);
    pppppppppppiVar8 = local_68;
    if ((iVar9 != 0) || (local_68 == (int ***********)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x1300);
    }
    FUN_016dd1aa(local_68,&local_2620,0x1300);
    ppppppppppppiVar10 =
         (int ************)FUN_00c61cb4(ppppppppppppiVar27 + 0x14,pppppppppppiVar8,pppppppppppiVar8)
    ;
    local_2620 = (int ***********)ppppppppppppiVar24;
    local_261c = (int ***********)ppppppppppppiVar26;
    if (ppppppppppppiVar27[0x5a] != (int ***********)0x0) {
      (*(code *)ppppppppppppiVar27[0x5b][5])
                ((int)ppppppppppppiVar27[0x5a] +
                 ((int)ppppppppppppiVar27[0x5b][2] - 1U & 0xfffffff8) + 8,&local_2620);
    }
    if (ppppppppppppiVar10 != (int ************)0x0) {
      local_1318 = (int ***********)((uint)local_1318 & 0xffffff00);
      local_2620 = (int ***********)(ppppppppppppiVar27 + 2);
      local_2618 = &local_1318;
      local_261c = (int ***********)ppppppppppppiVar10;
      FUN_0164511c(&local_2620);
    }
  }
  if ((int ***********)*pppppppppppiVar8 == (int ***********)0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(pppppppppppiVar8);
    if (!bVar2) goto LAB_00d015b0;
    *pppppppppppiVar8 = (int **********)0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00d015b0:
    (*(code *)pppppppppppiVar8[2][4])(pppppppppppiVar8);
  }
  FUN_01657e94(&local_2620,local_38d8,local_38d4);
  if (local_2620 == (int ***********)0x3) {
    local_1318 = (int ***********)&DAT_018ad30c;
    local_1314 = (int ************)&DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_1318,&DAT_018acca0);
  }
  local_2628 = local_2618;
  ppppppppppppiStack_262c = (int ************)local_261c;
  ppppppppppppiStack_2630 = (int ************)local_2620;
  if (((uint)local_38f0 & 1) == 0) {
    uVar31 = thunk_FUN_016de0ee(local_2620,0x40);
    piVar25 = (int *)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
    if ((char)piVar25[0xe] != '\x01') {
      if ((char)piVar25[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(piVar25,FUN_00bacf28);
      *(undefined1 *)(piVar25 + 0xe) = 1;
    }
    if (*(char *)((int)piVar25 + 0x32) != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                   ,0x183,&DAT_0187713c);
    }
    *(undefined1 *)((int)piVar25 + 0x32) = 0;
    iVar9 = 0x220;
    if (((uint)local_38d8 & 1) != 0) {
      iVar9 = 0x158;
    }
    uVar31 = FUN_016470fc((int)local_38d4 + iVar9);
    if ((piVar25[9] & 1U) == 0) {
      uVar32 = FUN_0164e918();
      if ((uint)uVar32 < 2) {
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),1);
      }
    }
    else {
      uVar32 = CONCAT44(piVar25[10],piVar25[0xb]);
    }
    ppppppppppppiVar27 = local_38d8;
    piVar25[9] = 1;
    *(undefined8 *)(piVar25 + 10) = uVar31;
    if (*piVar25 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018aca90);
    }
    ppppppppppppiVar24 = (int ************)((uint)&local_38f0 | 4);
    *piVar25 = -1;
    do {
      pppppppppppiVar8 = *local_38d4;
      bVar2 = (bool)hasExclusiveAccess(local_38d4);
    } while (!bVar2);
    *local_38d4 = (int ***********)((int)pppppppppppiVar8 + 1);
    if (-1 < (int)pppppppppppiVar8) {
      local_7c = piVar25[1];
      local_78 = piVar25[2];
      piVar25[1] = (uint)(((uint)local_38d8 & 1) != 0);
      piVar25[2] = (int)local_38d4;
      iStack_74 = piVar25[3] + 1;
      *piVar25 = *piVar25 + 1;
      if (0xfffffffe < (uint)piVar25[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
      }
      piVar25[3] = iStack_74;
      if (((uint)local_38d8 & 1) != 0) {
        uVar23 = 0x35;
        puVar19 = &DAT_018accf0;
        pcVar28 = "not a CurrentThread handle";
LAB_00d01f04:
        uStack_70 = (undefined4)((ulonglong)uVar32 >> 0x20);
        local_6c = (undefined4)uVar32;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(pcVar28,uVar23,puVar19);
      }
      uStack_70 = (int)((ulonglong)uVar32 >> 0x20);
      local_6c = (int)uVar32;
      uVar31 = thunk_FUN_016de0ee(iStack_74,local_38d4,0x1c4,0x278);
      ppppppppppppiVar10 = (int ************)((int)uVar31 + extraout_r2);
      piVar11 = (int *)((int)uVar31 + extraout_r3);
      ppppppppppppiVar26 = (int ************)((ulonglong)uVar31 >> 0x20);
      while( true ) {
        ppppppppppppiVar6 = local_38d4;
        pppppppppppiVar8 = local_38dc;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(&local_38dc);
        } while (!bVar2);
        local_38dc = (int ***********)0x0;
        DataMemoryBarrier(0xb);
        if (pppppppppppiVar8 != (int ***********)0x0) goto LAB_00d01d24;
        DataMemoryBarrier(0xb);
        local_64 = (uint)local_38ec >> 2;
        local_4c = 0;
        local_50 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        piVar12 = piVar11;
        local_68 = (int ***********)ppppppppppppiVar24;
        if (((char)piVar11[1] != '\x01') &&
           (piVar12 = (int *)FUN_01655dc8(piVar11), piVar12 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("Failed to `Enter::block_on`",0x1b,&local_2620,&DAT_018ac53c,&DAT_018a6aac);
        }
        piVar12 = (int *)*piVar12;
        do {
          iVar9 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar9 + 1;
        if (iVar9 < 0) break;
        local_48 = &DAT_018ac55c;
        local_44 = piVar12 + 2;
LAB_00d01960:
        cVar22 = (char)piVar25[0xe];
        if (cVar22 == '\x01') {
LAB_00d0198c:
          cVar22 = (char)piVar25[0xc];
          ppppppppppppiVar27 = (int ************)(uint)*(byte *)((int)piVar25 + 0x31);
          *(undefined2 *)(piVar25 + 0xc) = 0x8001;
        }
        else if (cVar22 != '\x02') {
          FUN_015e8e6c(piVar25,FUN_00bacf28);
          *(undefined1 *)(piVar25 + 0xe) = 1;
          goto LAB_00d0198c;
        }
        iVar9 = FUN_0163c044(&local_68,&local_48);
        if (cVar22 != '\x02') {
          if ((char)piVar25[0xe] != '\x01') {
            if ((char)piVar25[0xe] == '\x02') goto LAB_00d019f4;
            FUN_015e8e6c(piVar25,FUN_01655ec4);
            *(undefined1 *)(piVar25 + 0xe) = 1;
          }
          *(char *)((int)piVar25 + 0x31) = (char)ppppppppppppiVar27;
          *(char *)(piVar25 + 0xc) = cVar22;
        }
LAB_00d019f4:
        if (iVar9 != 0) {
          piVar13 = piVar11;
          if (((char)piVar11[1] != '\x01') &&
             (piVar13 = (int *)FUN_01655dc8(piVar11), piVar13 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2620,&DAT_018ac53c,&DAT_018ac54c);
          }
          iVar9 = *piVar13;
          ppppppppppppiVar27 = (int ************)(iVar9 + 8);
          if (*ppppppppppppiVar27 == (int ***********)0x2) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(ppppppppppppiVar27);
              if (bVar2) {
                *ppppppppppppiVar27 = (int ***********)0x0;
                DataMemoryBarrier(0xb);
                goto LAB_00d01960;
              }
            } while (*ppppppppppppiVar27 == (int ***********)0x2);
          }
          ClearExclusiveLocal();
          pcVar28 = (char *)(iVar9 + 0x10);
          DataMemoryBarrier(0xb);
          if (*pcVar28 == '\0') {
            bVar2 = (bool)hasExclusiveAccess(pcVar28);
            if (!bVar2) goto LAB_00d01a70;
            *pcVar28 = '\x01';
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_00d01a70:
            FUN_01280da8(pcVar28);
          }
          FUN_0128236c(pcVar28);
          pppppppppppiVar8 = *ppppppppppppiVar27;
          if (pppppppppppiVar8 == (int ***********)0x0) {
            DataMemoryBarrier(0xb);
            do {
              bVar3 = true;
              bVar2 = (bool)hasExclusiveAccess(ppppppppppppiVar27);
              if (bVar2) {
                *ppppppppppppiVar27 = (int ***********)0x1;
                goto LAB_00d01ab4;
              }
              pppppppppppiVar8 = *ppppppppppppiVar27;
            } while (pppppppppppiVar8 == (int ***********)0x0);
          }
          bVar3 = false;
          ClearExclusiveLocal();
LAB_00d01ab4:
          DataMemoryBarrier(0xb);
          if (bVar3) {
            do {
              FUN_0127fd30(iVar9 + 0xc,pcVar28);
              if (*ppppppppppppiVar27 == (int ***********)0x2) {
                DataMemoryBarrier(0xb);
                do {
                  bVar2 = (bool)hasExclusiveAccess(ppppppppppppiVar27);
                  if (bVar2) {
                    *ppppppppppppiVar27 = (int ***********)0x0;
                    goto LAB_00d01b30;
                  }
                } while (*ppppppppppppiVar27 == (int ***********)0x2);
              }
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            } while( true );
          }
          if (pppppppppppiVar8 != (int ***********)&SUB_00000002) {
            local_2620 = (int ***********)&local_1318;
            local_261c = (int ***********)&LAB_00fac484;
            local_1318 = pppppppppppiVar8;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0057f434,&local_2620,&DAT_018ac58c);
          }
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(ppppppppppppiVar27);
          } while (!bVar2);
          *ppppppppppppiVar27 = (int ***********)0x0;
LAB_00d01b30:
          DataMemoryBarrier(0xb);
          bVar2 = true;
          local_2620 = (int ***********)0x0;
          ppppppppppppiVar26 = ppppppppppppiVar10;
          if ((*(char *)(ppppppppppppiVar10 + 0xd) != '\x01') &&
             (ppppppppppppiVar26 = (int ************)FUN_01284e64(),
             ppppppppppppiVar26 == (int ************)0x0)) {
            FUN_01283788(&local_1318);
            bVar2 = false;
            local_2620 = (int ***********)&DAT_00000001;
            local_261c = local_1318;
            local_2618 = local_1314;
            local_2610 = local_130c;
            local_2608 = local_1304;
            local_2604 = local_1300;
            local_2600 = local_12fc;
            local_25fc = local_12f8;
            local_25f8 = puStack_12f4;
            local_25f4 = puStack_12f0;
            local_25f0 = uStack_12ec;
            uStack_25ec = uStack_12e8;
            ppppppppppppiVar26 = &local_261c;
          }
          pppppppppppiVar18 = ppppppppppppiVar26[8];
          pppppppppppiVar21 = ppppppppppppiVar26[9];
          iVar9 = (int)pppppppppppiVar21 * -4;
          pppppppppppiVar8 = pppppppppppiVar21;
          do {
            ppppppppppppiVar27 = (int ************)0x0;
            if (iVar9 == 0) goto LAB_00d01b88;
            iVar16 = -4 - iVar9;
            iVar9 = iVar9 + 4;
            pppppppppppiVar8 = (int ***********)((int)pppppppppppiVar8 + -1);
          } while (*(char **)((int)pppppppppppiVar18 + iVar16) != pcVar28);
          ppppppppppppiVar27 = (int ************)pppppppppppiVar18[(int)pppppppppppiVar21 + -1];
          pppppppppppiVar18[(int)pppppppppppiVar8] = (int **********)ppppppppppppiVar27;
          ppppppppppppiVar26[9] = (int ***********)((int)pppppppppppiVar21 + -1);
LAB_00d01b88:
          if (!bVar2) {
            do {
              iVar9 = DAT_018dd954 + -1;
              bVar2 = (bool)hasExclusiveAccess(0x18dd954);
            } while (!bVar2);
            DAT_018dd954 = iVar9;
            if (local_2600 != (int ************)0x0) {
              thunk_FUN_016d3fb4(local_25fc);
            }
            if (local_2608 != (int ************)0x3) {
              if (local_2608 == (int ************)0x0) {
                FUN_012848c0(local_2604);
              }
              else if (local_2608 == (int ************)&DAT_00000001) {
                FUN_01283d28();
              }
              else {
                FUN_01284358();
              }
            }
          }
          if (*pcVar28 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(pcVar28);
              if (bVar2) {
                *pcVar28 = '\0';
                goto LAB_00d01960;
              }
            } while (*pcVar28 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar28);
          goto LAB_00d01960;
        }
        FUN_0163a054(piVar12 + 2);
        FUN_0163bdc0(&local_68);
        if (local_58 != 0) {
          (**(code **)(local_58 + 0xc))(local_54);
        }
        ppppppppppppiVar26 = local_38d4;
      }
    }
  }
  else {
    FUN_00c08928(local_38d8,local_38d4);
  }
LAB_00d0142c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd0142c);
  (*pcVar1)();
LAB_00d01d24:
  do {
    pppppppppppiVar8 = *ppppppppppppiVar26;
    bVar2 = (bool)hasExclusiveAccess(ppppppppppppiVar26);
  } while (!bVar2);
  *ppppppppppppiVar26 = (int ***********)((int)pppppppppppiVar8 + 1);
  if ((int)pppppppppppiVar8 < 0) goto LAB_00d0142c;
  local_1300 = (int ************)&DAT_00000004;
  local_1308 = 0;
  local_1304 = (int ************)0x0;
  local_12fc = (int ************)0x0;
  local_12f8 = ppppppppppppiVar24;
  uVar31 = thunk_FUN_016de0ee();
  local_1314 = (int ************)((ulonglong)uVar31 >> 0x20);
  uVar14 = *(uint *)((int)uVar31 + extraout_r3_00);
  local_1318 = (int ***********)0x0;
  local_1310 = 0;
  local_130c = extraout_r2_00;
  if (uVar14 < 3) {
    uVar31 = FUN_015f7ed0();
  }
  else {
    piVar11 = (int *)(uVar14 - 8);
    do {
      iVar9 = *piVar11;
      iVar16 = iVar9 + 1;
      uVar31 = CONCAT44(iVar16,piVar11);
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar16;
    if (iVar9 < 0) goto LAB_00d0142c;
  }
  piVar11 = (int *)uVar31;
  FUN_0164c1c0(ppppppppppppiVar6 + 0x20,(int)((ulonglong)uVar31 >> 0x20),piVar11[2],piVar11[3]);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(piVar11);
  }
  local_2620 = local_1318;
  local_261c = (int ***********)local_1314;
  local_2618 = (int ************)local_1310;
  local_2614 = local_130c;
  local_2610 = local_1308;
  local_260c = local_1304;
  local_2608 = local_1300;
  local_2604 = local_12fc;
  local_2600 = local_12f8;
  if (((uint)local_1318 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("expected `CurrentThread::Context`there is no reactor running, must be called from the context of a Tokio 1.x runtime"
                 ,0x43,&DAT_018acbf0);
  }
  if (local_1310 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018acc20);
  }
  local_2618 = (int ************)0xffffffff;
  local_2614 = 0;
  if (local_130c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("core missing",0xc,&DAT_018acc00);
  }
  local_2618 = (int ************)0x0;
  if ((char)piVar25[0xe] != '\x01') {
    if ((char)piVar25[0xe] == '\x02') {
      FUN_014c8020(local_130c);
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(piVar25,FUN_00bacf28);
    *(undefined1 *)(piVar25 + 0xe) = 1;
  }
  local_68 = (int ***********)&local_2620;
  local_60 = (uint)local_68 | 4;
  local_64 = local_130c;
  uVar23 = FUN_00c751bc(piVar25 + 8,&local_2620,&local_68);
  if (local_2618 != (int ************)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018acc10);
  }
  ppppppppppppiVar27 = (int ************)0x0;
  local_2618 = (int ************)0xffffffff;
  if (local_2614 != 0) {
    FUN_014c8020();
    ppppppppppppiVar27 = (int ************)((int)local_2618 + 1);
  }
  local_2618 = ppppppppppppiVar27;
  local_2614 = uVar23;
  FUN_0164cf50(&local_2620);
  FUN_014d3d80(&local_2620);
  uVar32 = CONCAT44(uStack_70,local_6c);
  uVar23 = 0xab;
  puVar19 = &DAT_018a6a9c;
  pcVar28 = "a spawned task panicked and the runtime is configured to shut down on unhandled panic";
  goto LAB_00d01f04;
}

