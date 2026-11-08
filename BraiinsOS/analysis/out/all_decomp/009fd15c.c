// FUN_009fd15c @ 009fd15c size=1432 calls_out=13 calls_in=2
// strings: 

void FUN_009fd15c(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  code *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 **ppuVar18;
  undefined4 *puVar19;
  undefined1 **ppuVar20;
  int *piVar21;
  undefined1 *puVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 **local_d8;
  undefined1 *local_d4;
  undefined1 **local_d0;
  undefined1 **local_c8;
  undefined1 *local_c4;
  undefined1 **local_c0;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [12];
  undefined1 *local_a0;
  undefined1 **local_9c;
  undefined1 **local_98;
  undefined1 *local_94;
  undefined4 local_90;
  
  piVar21 = (int *)(param_2 + 0x48);
  iVar6 = *piVar21;
  iVar9 = param_2;
  if (iVar6 != 0) {
    iVar9 = *(int *)(param_2 + 0x50);
  }
  if (iVar6 != 0 && iVar9 != 0) {
    for (iVar9 = *(int *)(param_2 + 0x4c); iVar9 != 0; iVar9 = iVar9 + -1) {
      iVar6 = *(int *)(iVar6 + 0x60);
    }
    if (*(short *)(iVar6 + 0x5e) == 0) {
      iVar9 = 0;
      do {
        iVar17 = *(int *)(iVar6 + 0x58);
        if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        iVar9 = iVar9 + 1;
        puVar1 = (ushort *)(iVar6 + 0x5c);
        iVar6 = iVar17;
      } while (*(ushort *)(iVar17 + 0x5e) <= *puVar1);
      if (iVar9 != 0) {
        iVar9 = -iVar9;
        do {
          bVar25 = iVar9 != -1;
          iVar9 = iVar9 + 1;
        } while (bVar25);
      }
    }
  }
  uVar7 = param_4 & 0xff;
  puVar14 = (undefined1 *)(param_3 + 1);
  uVar23 = param_4;
  if (uVar7 == 3) {
    puVar14 = (undefined1 *)0x1;
    uVar23 = 2;
  }
  FUN_009f5b80(&local_d8,puVar14,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if ((uVar23 & 0xff) != 2) {
    uVar15 = 3;
    if ((uVar23 & 1) != 0) {
      uVar15 = 4;
    }
    local_98 = local_d8;
    local_94 = local_d4;
    local_90 = local_d0;
    if ((uint)((int)local_d8 - (int)local_d0) < uVar15) {
      FUN_009f4d18(&local_98,local_d0,uVar15,1,1);
    }
    ppuVar18 = local_90;
    puVar10 = &DAT_005687a0;
    if ((uVar23 & 1) == 0) {
      puVar10 = &DAT_00378071;
    }
    FUN_016dd1aa(local_94 + (int)local_90,puVar10,uVar15);
    local_d0 = (undefined1 **)((int)ppuVar18 + uVar15);
    local_d8 = local_98;
    local_d4 = local_94;
  }
  iVar9 = *piVar21;
  if (iVar9 != 0) {
    iVar6 = *(int *)(param_2 + 0x4c);
    while( true ) {
      iVar17 = (uint)*(ushort *)(iVar9 + 0x5e) << 3;
      uVar15 = 0;
      do {
        uVar12 = uVar15;
        uVar15 = (uint)*(ushort *)(iVar9 + 0x5e);
        if (iVar17 == 0) goto LAB_009fd29c;
        puVar13 = *(undefined1 **)(iVar9 + uVar12 * 8);
        iVar17 = iVar17 + -8;
        bVar24 = puVar14 < puVar13;
        bVar25 = !bVar24 && puVar14 != puVar13;
        uVar15 = uVar12 + 1;
      } while ((char)(bVar25 - bVar24) == '\x01');
      if (bVar25 == bVar24) break;
      uVar15 = uVar12;
LAB_009fd29c:
      if (iVar6 == 0) goto LAB_009fd314;
      iVar6 = iVar6 + -1;
      iVar9 = *(int *)(iVar9 + uVar15 * 4 + 0x60);
    }
    puVar19 = (undefined4 *)(iVar9 + uVar12 * 8);
    uVar16 = *puVar19;
    uVar2 = *(undefined1 *)(puVar19 + 1);
    FUN_009f3ce0(piVar21,puVar14,uVar23);
    FUN_009fd15c(&local_98,param_2,uVar16,uVar2);
    uVar23 = (uint)local_90 & 0xff;
    puVar14 = local_94;
    if (local_98 == (undefined1 **)&DAT_00000001) {
      *(undefined1 *)((int)param_1 + 0xb) = local_90._3_1_;
      *(undefined2 *)((int)param_1 + 9) = local_90._1_2_;
      *(undefined1 *)(param_1 + 2) = (undefined1)local_90;
      *param_1 = 1;
      param_1[1] = local_94;
      goto LAB_009fd66c;
    }
  }
LAB_009fd314:
  uVar16 = *(undefined4 *)(param_2 + 4);
  ppuVar18 = *(undefined1 ***)(param_2 + 8);
  if (uVar7 == 3) {
    uVar8 = 0;
    if ((int)ppuVar18 < 0) {
LAB_009fd330:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,ppuVar18);
    }
    if (ppuVar18 == (undefined1 **)0x0) {
      puVar13 = (undefined1 *)0x1;
      ppuVar20 = (undefined1 **)0x0;
    }
    else {
      puVar13 = (undefined1 *)thunk_FUN_016d4a50(ppuVar18);
      ppuVar20 = ppuVar18;
      if (puVar13 == (undefined1 *)0x0) {
        uVar8 = 1;
        goto LAB_009fd330;
      }
    }
    FUN_016dd1aa(puVar13,uVar16,ppuVar18);
    local_c8 = ppuVar20;
    local_c4 = puVar13;
    local_c0 = ppuVar18;
  }
  else {
    FUN_009f5b80(&local_c8,param_3,uVar16,ppuVar18);
    if (uVar7 != 2) {
      uVar7 = 3;
      local_98 = local_c8;
      local_94 = local_c4;
      local_90 = local_c0;
      if ((param_4 & 1) != 0) {
        uVar7 = 4;
      }
      if ((uint)((int)local_c8 - (int)local_c0) < uVar7) {
        FUN_009f4d18(&local_98,local_c0,uVar7,1,1);
      }
      ppuVar18 = local_90;
      puVar10 = &DAT_005687a0;
      if ((param_4 & 1) == 0) {
        puVar10 = &DAT_00378071;
      }
      FUN_016dd1aa(local_94 + (int)local_90,puVar10,uVar7);
      local_c0 = (undefined1 **)((int)ppuVar18 + uVar7);
      local_c8 = local_98;
      local_c4 = local_94;
    }
  }
  ppuVar20 = local_c0;
  puVar5 = local_c4;
  FUN_015f5984(&local_98,local_c4,local_c0);
  ppuVar3 = local_90;
  ppuVar18 = local_d0;
  puVar13 = local_d4;
  if (local_98 == (undefined1 **)0x0) {
    FUN_015f5984(&local_98,local_d4,local_d0);
    ppuVar3 = local_90;
    if (local_98 != (undefined1 **)0x0) {
      if ((char)local_94 == '\x03') {
        puVar19 = (undefined4 *)local_90[1];
        puVar22 = *local_90;
        pcVar11 = (code *)*puVar19;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(puVar22);
        }
        if (puVar19[1] != 0) {
          thunk_FUN_016d3fb4(puVar22);
        }
        thunk_FUN_016d3fb4(ppuVar3);
      }
      ppuVar4 = local_c8;
      ppuVar3 = local_d8;
      FUN_015f529c(&local_98,puVar5,ppuVar20,puVar13,ppuVar18);
      if (ppuVar3 != (undefined1 **)0x0) {
        thunk_FUN_016d3fb4(puVar13);
      }
      if (ppuVar4 != (undefined1 **)0x0) {
        thunk_FUN_016d3fb4(puVar5);
      }
      if ((char)local_98 == '\x04') {
        *(char *)(param_1 + 2) = (char)uVar23;
        *param_1 = 0;
        param_1[1] = puVar14;
        return;
      }
      *param_1 = 1;
      param_1[1] = local_98;
      param_1[2] = local_94;
      return;
    }
    local_9c = ppuVar18;
    local_94 = &LAB_016040f8;
    local_98 = &local_a0;
    local_a0 = puVar13;
    FUN_00600d2c(auStack_ac,&DAT_00589769,&local_98);
    FUN_016d23a8(&local_98,0xc,auStack_ac);
  }
  else {
    if ((char)local_94 == '\x03') {
      puVar14 = *local_90;
      puVar19 = (undefined4 *)local_90[1];
      pcVar11 = (code *)*puVar19;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(puVar14);
      }
      if (puVar19[1] != 0) {
        thunk_FUN_016d3fb4(puVar14);
      }
      thunk_FUN_016d3fb4(ppuVar3);
    }
    local_9c = ppuVar20;
    local_94 = &LAB_016040f8;
    local_98 = &local_a0;
    local_a0 = puVar5;
    FUN_00600d2c(auStack_b8,&DAT_005828d6,&local_98);
    FUN_016d23a8(&local_98,0,auStack_b8);
  }
  param_1[1] = local_98;
  *param_1 = 1;
  param_1[2] = local_94;
  if (local_c8 != (undefined1 **)0x0) {
    thunk_FUN_016d3fb4(puVar5);
  }
LAB_009fd66c:
  if (local_d8 == (undefined1 **)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(local_d4);
  return;
}

