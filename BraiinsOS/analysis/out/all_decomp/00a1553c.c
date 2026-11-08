// FUN_00a1553c @ 00a1553c size=1628 calls_out=12 calls_in=0
// strings: 

undefined4 FUN_00a1553c(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 uVar8;
  int *piVar9;
  uint extraout_r1;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  int local_64;
  int local_60;
  int local_5c;
  char local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined4 uStack_38;
  undefined3 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x25]) {
  case '\0':
    iVar14 = param_1[0x24];
    iVar12 = *(int *)(iVar14 + 0xa8);
    puVar11 = (uint *)(iVar12 + 0x88);
    uVar4 = *(uint *)(iVar12 + 0x88);
    if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
      if (*puVar11 != uVar4) {
        ClearExclusiveLocal();
        goto LAB_00a1564c;
      }
      bVar16 = (bool)hasExclusiveAccess(puVar11);
      if (!bVar16) goto LAB_00a1564c;
      *puVar11 = uVar4 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00a1564c:
      FUN_0127d66c(puVar11);
    }
    FUN_0128236c(puVar11);
    FUN_0128236c((uint)puVar11 | 1);
    DataMemoryBarrier(0xb);
    *(uint *)(iVar14 + 0xac) = *(uint *)(iVar12 + 0xf8) & 0xfffffffe;
    iVar5 = *(int *)(iVar12 + 0x90);
    if (iVar5 != 2) {
      local_58 = *(char *)(iVar12 + 0xac);
      local_50 = *(undefined1 *)(iVar12 + 0xb4);
      local_54 = *(undefined1 *)(iVar12 + 0xb5);
      if (local_58 != '\x02') {
        local_30 = *(int *)(iVar12 + 0xa0);
        local_2c = *(int *)(iVar12 + 0xa4);
        local_28 = *(int *)(iVar12 + 0xa8);
        uStack_38._0_3_ = (undefined3)*(undefined4 *)(iVar12 + 0xad);
        uStack_38._3_1_ = (undefined1)*(undefined4 *)(iVar12 + 0xb0);
        uStack_34 = (undefined3)((uint)*(undefined4 *)(iVar12 + 0xb0) >> 8);
      }
      local_64 = *(int *)(iVar12 + 0x94);
      local_60 = *(int *)(iVar12 + 0x98);
      local_5c = *(int *)(iVar12 + 0x9c);
    }
    uVar6 = *(undefined4 *)(iVar12 + 0xda);
    uVar15 = *(undefined4 *)(iVar12 + 0xde);
    uVar3 = *(undefined2 *)(iVar12 + 0xd8);
    uVar2 = *(undefined1 *)(iVar12 + 0xe3);
    uVar1 = *(undefined1 *)(iVar12 + 0xe2);
    FUN_00a65030(param_1 + 10,iVar12 + 0xb8);
    *param_1 = iVar5;
    param_1[4] = local_30;
    param_1[5] = local_2c;
    param_1[6] = local_28;
    *(char *)(param_1 + 7) = local_58;
    *(undefined1 *)((int)param_1 + 0x25) = local_54;
    *(undefined1 *)(param_1 + 9) = local_50;
    param_1[1] = local_64;
    param_1[2] = local_60;
    *(undefined4 *)((int)param_1 + 0x1d) = uStack_38;
    param_1[3] = local_5c;
    param_1[8] = CONCAT31(uStack_34,uStack_38._3_1_);
    *(undefined1 *)((int)param_1 + 0x53) = uVar2;
    *(undefined1 *)((int)param_1 + 0x52) = uVar1;
    *(undefined4 *)((int)param_1 + 0x4e) = uVar15;
    *(undefined4 *)((int)param_1 + 0x4a) = uVar6;
    *(undefined2 *)(param_1 + 0x12) = uVar3;
    FUN_01282570(puVar11);
    FUN_01282570((uint)puVar11 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar11;
      bVar16 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar16);
    *puVar11 = uVar4 - 0x10;
    if ((uVar4 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar11);
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x17] = (int)param_1;
    piVar7 = (int *)(iVar14 + 0xd0);
    param_1[0x16] = (int)piVar7;
    piVar9 = param_1;
LAB_00a157e8:
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1b] = (int)piVar7;
    param_1[0x1c] = (int)piVar9;
    param_1[0x18] = (int)piVar7;
    param_1[0x19] = (int)piVar9;
LAB_00a157fc:
    uVar8 = 0xe10;
    uVar3 = 0xe10;
    if ((short)piVar9[0x12] == 1) {
      uVar3 = (undefined2)piVar9[0x13];
      uVar8 = *(undefined2 *)((int)piVar9 + 0x4a);
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined2 *)((int)param_1 + 0x82) = uVar3;
    *(undefined2 *)(param_1 + 0x20) = uVar8;
    param_1[0x1d] = (int)piVar7;
LAB_00a1582c:
    *(undefined2 *)((int)param_1 + 0x86) = uVar3;
    *(undefined2 *)(param_1 + 0x21) = uVar8;
    param_1[0x1e] = *piVar7 + 8;
    param_1[0x1f] = -1;
switchD_00a15b2c_caseD_3:
    piVar7 = param_1 + 0x23;
    iVar12 = FUN_00aa15a4(param_1 + 0x1e,param_2);
    if (iVar12 == 0) {
      uVar2 = 3;
      *(undefined1 *)(param_1 + 0x22) = 3;
      goto LAB_00a15b00;
    }
    iVar14 = param_1[0x1e];
    if (iVar14 != 0) {
      FUN_00aa190c(iVar14,param_1[0x1f],1);
    }
    puVar11 = (uint *)(*(int *)(iVar12 + 0x38) + 8);
    uVar4 = *(uint *)(*(int *)(iVar12 + 0x38) + 8);
    do {
      while( true ) {
        uVar10 = uVar4;
        if ((uVar10 & 0x10000) != 0) goto LAB_00a158ec;
        uVar4 = *puVar11;
        if (uVar4 == uVar10) break;
        ClearExclusiveLocal();
      }
      bVar16 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar16);
    *puVar11 = (uint)*(ushort *)(param_1 + 0x21);
LAB_00a158ec:
    puVar11 = (uint *)(*(int *)(iVar12 + 0x3c) + 8);
    uVar4 = *(uint *)(*(int *)(iVar12 + 0x3c) + 8);
    do {
      while( true ) {
        if ((uVar4 & 0x10000) != 0) {
          uVar4 = (uint)DAT_018dd947;
          if ((uVar10 & 0x10000) == 0) goto LAB_00a1595c;
          goto LAB_00a159b4;
        }
        uVar13 = *puVar11;
        if (uVar13 == uVar4) break;
        ClearExclusiveLocal();
        uVar4 = uVar13;
      }
      bVar16 = (bool)hasExclusiveAccess(puVar11);
      uVar4 = uVar13;
    } while (!bVar16);
    *puVar11 = (uint)*(ushort *)((int)param_1 + 0x86);
LAB_00a1595c:
    uVar4 = *(uint *)(iVar12 + 0x3c);
    uVar6 = *(undefined4 *)(*(int *)(iVar12 + 0x38) + 8);
    uVar15 = *(undefined4 *)(uVar4 + 8);
    if (*(int *)(iVar12 + 0x30) != 0) {
      iVar14 = *(int *)(iVar12 + 0x30) * 0x30;
      piVar7 = (int *)(*(int *)(iVar12 + 0x2c) + 0x2c);
      do {
        uVar4 = 1;
        if (*(char *)(*piVar7 + 100) != '\x01') {
          FUN_00ac35e4(*piVar7 + 8,uVar6,uVar15);
          uVar4 = extraout_r1;
        }
        iVar14 = iVar14 + -0x30;
        piVar7 = piVar7 + 0xc;
      } while (iVar14 != 0);
    }
LAB_00a159b4:
    FUN_00aa13c0(iVar12,uVar4);
    iVar12 = param_1[0x19];
    *(undefined1 *)(param_1 + 0x23) = 1;
    *(undefined1 *)(param_1 + 0x22) = 1;
    uVar3 = *(undefined2 *)(iVar12 + 0x4e);
    bVar16 = *(short *)(iVar12 + 0x48) == 0;
    uVar8 = *(undefined2 *)(iVar12 + 0x50);
    if (bVar16) {
      uVar3 = 0xe10;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (bVar16) {
      uVar8 = 0xe10;
    }
    *(undefined2 *)((int)param_1 + 0x7a) = uVar8;
    *(undefined2 *)(param_1 + 0x1e) = uVar3;
    param_1[0x1b] = param_1[0x18];
LAB_00a15a0c:
    *(undefined2 *)((int)param_1 + 0x7e) = uVar8;
    *(undefined2 *)(param_1 + 0x1f) = uVar3;
    param_1[0x1c] = *(int *)param_1[0x1b] + 8;
    param_1[0x1d] = -1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186b9e4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186b9e4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x1a]) {
    case '\0':
      piVar7 = (int *)param_1[0x16];
      piVar9 = (int *)param_1[0x17];
      goto LAB_00a157e8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186b994);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186b994);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x23]) {
      case '\0':
        piVar7 = (int *)param_1[0x1b];
        piVar9 = (int *)param_1[0x1c];
        goto LAB_00a157fc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186be78);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186be78);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x22]) {
      case '\0':
        uVar3 = *(undefined2 *)((int)param_1 + 0x82);
        uVar8 = (undefined2)param_1[0x20];
        piVar7 = (int *)param_1[0x1d];
        goto LAB_00a1582c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186be88);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186be88);
      }
      goto switchD_00a15b2c_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x20]) {
    case '\0':
      uVar8 = *(undefined2 *)((int)param_1 + 0x7a);
      uVar3 = (undefined2)param_1[0x1e];
      goto LAB_00a15a0c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186be98);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186be98);
    }
  }
  piVar7 = param_1 + 0x20;
  iVar12 = FUN_00aa15a4(param_1 + 0x1c,param_2);
  if (iVar12 != 0) {
    iVar14 = param_1[0x1c];
    if (iVar14 != 0) {
      FUN_00aa190c(iVar14,param_1[0x1d],1);
    }
    if (*(int *)(iVar12 + 0x30) != 0) {
      iVar14 = *(int *)(iVar12 + 0x30) * 0x30;
      piVar7 = (int *)(*(int *)(iVar12 + 0x2c) + 0x2c);
      do {
        if (*(char *)(*piVar7 + 100) != '\0') {
          FUN_00ac35e4(*piVar7 + 8,(short)param_1[0x1f],*(undefined2 *)((int)param_1 + 0x7e));
        }
        iVar14 = iVar14 + -0x30;
        piVar7 = piVar7 + 0xc;
      } while (iVar14 != 0);
    }
    FUN_00aa13c0(iVar12);
    iVar12 = param_1[0xb];
    *(undefined1 *)(param_1 + 0x1a) = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((iVar12 != 0) && (uVar4 = iVar12 * 0x11 & 0xfffffffc, uVar4 + iVar12 != -0x19)) {
      thunk_FUN_016d3fb4((param_1[10] - uVar4) + -0x14);
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
    return 0;
  }
  uVar2 = 4;
LAB_00a15b00:
  *(undefined1 *)piVar7 = 3;
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  *(undefined1 *)(param_1 + 0x25) = 3;
  return 1;
}

