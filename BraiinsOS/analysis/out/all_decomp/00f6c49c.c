// FUN_00f6c49c @ 00f6c49c size=1644 calls_out=15 calls_in=3
// strings: 

void FUN_00f6c49c(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  uint local_104;
  uint local_f8;
  int local_f4;
  undefined4 *local_f0;
  int iStack_ec;
  int *local_a0;
  undefined1 *local_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int *local_78;
  undefined1 *local_74;
  uint local_70;
  uint local_6c;
  
  uVar25 = thunk_FUN_016de0ee(param_1,0xb0);
  piVar22 = (int *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
  if (((char)piVar22[0x20] != '\x01') &&
     (piVar22 = (int *)FUN_00f6cbac(piVar22,0), piVar22 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  puVar19 = (uint *)(piVar22 + 2);
  if (*piVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01880214);
  }
  *piVar22 = -1;
  if ((undefined1 *)piVar22[4] == &DAT_3b9aca00) {
    FUN_015e9334(&local_f8,&DAT_0035d693,2);
    puVar17 = param_1;
    if (local_f8 == 0x80000000) {
LAB_00f6c564:
      local_104 = 0;
      iVar13 = 0;
    }
    else {
      FUN_00fab1e0(&local_78,local_f4,local_f0);
      puVar17 = local_f0;
      if (local_78 == (int *)&DAT_00000001) {
        if ((local_f8 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_f4);
        }
        goto LAB_00f6c564;
      }
      local_104 = local_f8;
      local_108 = local_f4;
      iVar13 = local_f4;
    }
    FUN_015f3b0c(&local_78,0);
    uVar12 = local_70;
    puVar6 = local_74;
    piVar4 = local_78;
    FUN_00f6cd24(&local_88,iVar13,puVar17);
    FUN_00f6d3b8(&local_78,iVar13,puVar17);
    FUN_016dd1aa(&local_f8,&local_78,0x54);
    local_9c = (undefined1 *)local_88;
    uStack_98 = iStack_84;
    iStack_94 = iStack_80;
    iStack_90 = iStack_7c;
    if ((local_104 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_108);
    }
    piVar22[4] = uVar12;
    *puVar19 = (uint)piVar4;
    piVar22[3] = (int)puVar6;
    piVar22[5] = (int)local_a0;
    piVar22[6] = (int)local_9c;
    piVar22[7] = uStack_98;
    piVar22[8] = iStack_94;
    piVar22[9] = iStack_90;
    FUN_016dd1aa(piVar22 + 10,&local_f8,0x54);
  }
  FUN_015f3b0c(&local_78,0);
  uVar12 = local_70;
  piVar5 = local_78;
  local_f8 = *puVar19;
  local_f4 = piVar22[3];
  local_f0 = (undefined4 *)piVar22[4];
  local_a0 = local_78;
  local_9c = local_74;
  uStack_98 = local_70;
  FUN_015f3c24(&local_78,&local_a0,&local_f8);
  piVar9 = (int *)(local_70 | local_6c);
  piVar4 = piVar9;
  if (piVar9 == (int *)0x0) {
    piVar4 = local_78;
  }
  if (piVar9 != (int *)0x0 || piVar4 != (int *)0x0) {
    FUN_015e9334(&local_f8,&DAT_0035d693,2);
    puVar17 = local_f0;
    iVar13 = local_f4;
    local_10c = local_f8;
    puVar7 = (undefined4 *)local_74;
    if (local_f8 == 0x80000000) {
LAB_00f6c6e0:
      puVar17 = puVar7;
      local_10c = 0;
      iVar13 = 0;
    }
    else {
      FUN_00fab1e0(&local_78,local_f4,local_f0);
      if (local_78 != (int *)0x0) {
        puVar7 = puVar17;
        if ((local_10c & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(iVar13);
        }
        goto LAB_00f6c6e0;
      }
      local_110 = iVar13;
    }
    FUN_00f6cd24(&local_f8,iVar13,puVar17);
    if ((undefined1 *)piVar22[8] == &DAT_3b9aca00) {
      if (local_f0 != (undefined4 *)&DAT_3b9aca00) goto LAB_00f6c750;
LAB_00f6c734:
      if (piVar22[6] != local_f8 || piVar22[7] != local_f4) goto LAB_00f6c750;
    }
    else {
      if ((local_f0 != (undefined4 *)&DAT_3b9aca00) && ((undefined4 *)piVar22[8] == local_f0))
      goto LAB_00f6c734;
LAB_00f6c750:
      FUN_00f6d3b8(&local_78,iVar13,puVar17);
      if (piVar22[10] != 0) {
        thunk_FUN_016d3fb4(piVar22[0xb]);
      }
      if (piVar22[0xd] != 0) {
        thunk_FUN_016d3fb4(piVar22[0xe]);
      }
      if (piVar22[0x10] != 0) {
        thunk_FUN_016d3fb4(piVar22[0x11]);
      }
      FUN_016dd1aa(piVar22 + 10,&local_78,0x54);
    }
    piVar22[4] = uVar12;
    piVar22[6] = local_f8;
    piVar22[7] = local_f4;
    piVar22[8] = (int)local_f0;
    piVar22[9] = iStack_ec;
    *puVar19 = (uint)piVar5;
    piVar22[3] = (int)local_74;
    if ((local_10c & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_110);
    }
  }
  iVar13 = (int)param_2 >> 0xd;
  iVar10 = iVar13 + -1;
  if (iVar13 < 1) {
    iVar13 = (1U - iVar13) / 400 + 1;
    iVar10 = iVar13 * 400 + iVar10;
    iVar13 = iVar13 * -0x23ab1;
  }
  else {
    iVar13 = 0;
  }
  uVar21 = piVar22[0xf];
  lVar2 = (longlong)
          (int)(((((param_2 & 0x1fff) >> 4) + iVar13) - iVar10 / 100) + (iVar10 * 0x5b5 >> 2) +
                (iVar10 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)param_3;
  uVar12 = piVar22[0xc];
  if (uVar12 == 0) {
    if (*(char *)((int)piVar22 + 0x79) == '\x03') {
      local_78 = (int *)piVar22[0xe];
      if (uVar21 != 0) goto LAB_00f6ca14;
      uVar18 = 0;
      uVar12 = 0;
      puVar14 = &DAT_0188000c;
      goto LAB_00f6cb08;
    }
LAB_00f6c9d8:
    FUN_00f66ac0(&local_78,piVar22 + 0x13,(int)lVar2);
    if (local_70 != 0x3b9aca10) {
      if (local_70 == 0x3b9aca07) {
        local_70 = 0x3b9aca01;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00565c50,0x20,&local_78,&DAT_01880264,&DAT_0188027c);
    }
LAB_00f6ca14:
    uVar16 = 2;
    iVar13 = *piVar22;
    if (*local_78 + 0x1517fU < 0x2a2ff) {
      uVar16 = 0;
    }
    param_1[1] = *local_78;
    param_1[2] = 0;
    *param_1 = uVar16;
    *piVar22 = iVar13 + 1;
    return;
  }
  iVar23 = piVar22[0xb];
  iVar13 = piVar22[0x12];
  iVar10 = iVar23 + uVar12 * 0x10;
  lVar3 = lVar2;
  if (iVar13 != 0) {
    puVar19 = (uint *)piVar22[0x11];
    lVar8 = lVar2;
    do {
      lVar3 = lVar8;
      iVar20 = (int)((ulonglong)lVar3 >> 0x20);
      uVar18 = puVar19[1];
      bVar24 = (uint)lVar3 < *puVar19;
      if ((int)(iVar20 - (uVar18 + bVar24)) < 0 !=
          (SBORROW4(iVar20,uVar18) != SBORROW4(iVar20 - uVar18,(uint)bVar24))) break;
      puVar1 = puVar19 + 2;
      puVar19 = puVar19 + 4;
      lVar3 = lVar2 + (int)*puVar1;
      iVar13 = iVar13 + -1;
      lVar8 = lVar2 + (int)*puVar1;
    } while (iVar13 != 0);
  }
  iVar20 = (int)((ulonglong)lVar3 >> 0x20);
  uVar18 = (uint)lVar3;
  iVar13 = *(int *)(iVar10 + -0xc);
  bVar24 = uVar18 < *(uint *)(iVar10 + -0x10);
  if ((int)(iVar20 - (iVar13 + (uint)bVar24)) < 0 ==
      (SBORROW4(iVar20,iVar13) != SBORROW4(iVar20 - iVar13,(uint)bVar24))) {
    if (*(char *)((int)piVar22 + 0x79) != '\x03') goto LAB_00f6c9d8;
    uVar18 = *(uint *)(iVar10 + -8);
    if (uVar18 < uVar21) goto LAB_00f6ca0c;
    puVar14 = &UNK_0188003c;
  }
  else {
    iVar13 = 0;
    if (uVar12 != 1) {
      uVar15 = uVar12;
      iVar10 = 0;
      do {
        iVar13 = iVar10 + (uVar15 >> 1);
        uVar15 = uVar15 - (uVar15 >> 1);
        puVar19 = (uint *)(iVar23 + iVar13 * 0x10);
        uVar11 = puVar19[1];
        bVar24 = uVar18 < *puVar19;
        if ((int)(iVar20 - (uVar11 + bVar24)) < 0 !=
            (SBORROW4(iVar20,uVar11) != SBORROW4(iVar20 - uVar11,(uint)bVar24))) {
          iVar13 = iVar10;
        }
        iVar10 = iVar13;
      } while (1 < uVar15);
    }
    iVar10 = 1;
    puVar19 = (uint *)(iVar23 + iVar13 * 0x10);
    uVar15 = puVar19[1];
    if ((lVar3 != *(longlong *)puVar19) &&
       (iVar10 = 0,
       (int)(uVar15 - (iVar20 + (uint)(*puVar19 < uVar18))) < 0 !=
       (SBORROW4(uVar15,iVar20) != SBORROW4(uVar15 - iVar20,(uint)(*puVar19 < uVar18))))) {
      iVar13 = iVar13 + 1;
    }
    if (iVar10 + iVar13 == 0) {
      uVar18 = 0;
      if (uVar21 != 0) {
LAB_00f6ca0c:
        local_78 = (int *)piVar22[0xe] + uVar18 * 4;
        goto LAB_00f6ca14;
      }
    }
    else {
      uVar18 = (iVar10 + iVar13) - 1;
      if (uVar12 <= uVar18) {
        puVar14 = &DAT_0188001c;
        goto LAB_00f6cb08;
      }
      uVar18 = *(uint *)(iVar23 + uVar18 * 0x10 + 8);
      if (uVar18 < uVar21) goto LAB_00f6ca0c;
    }
    puVar14 = &DAT_0188002c;
  }
  uVar12 = uVar21;
LAB_00f6cb08:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar18,uVar12,puVar14);
}

