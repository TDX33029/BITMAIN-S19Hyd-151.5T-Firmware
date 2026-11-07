// FUN_0086aab0 @ 0086aab0 size=1312 calls_out=11 calls_in=0
// strings: 

undefined4 FUN_0086aab0(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ushort *puVar3;
  code *pcVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar10;
  ulonglong uVar11;
  int *local_60;
  undefined *local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  ushort *local_4c;
  undefined4 local_48;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    iVar2 = *param_1;
    param_1[3] = iVar2;
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[1] = iVar2;
LAB_0086ab40:
    uVar1 = *(undefined1 *)(iVar2 + 0x11);
    iVar2 = iVar2 + 0x18;
    *(undefined2 *)((int)param_1 + 0x46) = 0x100;
    *(undefined4 *)((int)param_1 + 0x49) = 0x4070404;
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    param_1[0xf] = iVar2;
LAB_0086ab6c:
    *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)((int)param_1 + 0x4b);
    param_1[0x10] = *(int *)((int)param_1 + 0x47);
    local_4c = (ushort *)FUN_016d38c8(2,1);
    if (local_4c == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,2);
    }
    param_1[0xc] = 2;
    local_48 = 2;
    param_1[9] = iVar2;
    *(undefined1 *)((int)param_1 + 0x2e) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[0xd] = (int)local_4c;
    param_1[0xe] = 2;
    local_50 = 2;
    param_1[10] = (int)(param_1 + 0xc);
    *local_4c = ((ushort)*(byte *)(param_1 + 0x10) << 7 | (*(byte *)((int)param_1 + 0x45) & 7) << 4
                | (ushort)*(byte *)((int)param_1 + 0x41) << 1) & 0xff |
                (ushort)(*(byte *)((int)param_1 + 0x42) >> 2) |
                ((ushort)*(byte *)(param_1 + 0x11) |
                (ushort)*(byte *)((int)param_1 + 0x43) << 3 |
                (ushort)*(byte *)((int)param_1 + 0x42) << 6) << 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186149c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186149c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x14]) {
    case '\0':
      iVar2 = param_1[3];
      goto LAB_0086ab40;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018614ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018614ac);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x46)) {
    case 0:
      iVar2 = param_1[0xf];
      goto LAB_0086ab6c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886128);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886128);
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x12]) {
    case '\0':
      goto switchD_0086ac58_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018614bc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018614bc);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x11]) {
      case '\0':
        uVar6 = (uint)*(ushort *)(param_1 + 0x10);
        pdVar5 = (double *)param_1[4];
        goto LAB_0086ae14;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01886128);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01886128);
      }
    }
    goto switchD_0086ac80_caseD_3;
  }
  local_60 = param_1 + 0x14;
  uVar11 = FUN_00869394(param_1 + 4,param_2);
  iVar2 = (int)(uVar11 >> 0x20);
  if ((uVar11 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x46) = 3;
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)(param_1 + 0x14) = 3;
    return 1;
  }
  if (*(char *)((int)param_1 + 0x2e) == '\x03') {
    iVar7 = param_1[4];
    puVar8 = (undefined4 *)param_1[5];
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(param_1[0xd]);
  }
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  FUN_0086b1f0(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[3] = param_1[1];
switchD_0086ac58_caseD_0:
    pdVar5 = (double *)param_1[3];
    dVar10 = pdVar5[1];
    uVar9 = FUN_016d5298(SUB84(*pdVar5 * 3.0517578125e-05 * 1000.0,0));
    uVar9 = FUN_016d6168(SUB84(0.00512 / (dVar10 * ((double)CONCAT44(extraout_s1,uVar9) / 1000.0)),0
                              ));
    dVar10 = (double)CONCAT44(extraout_s1_00,uVar9);
    pdVar5 = pdVar5 + 3;
    param_1[4] = (int)pdVar5;
    *(undefined1 *)(param_1 + 0x11) = 0;
    uVar6 = (uint)(0.0 < dVar10) * (int)(longlong)dVar10;
    if (dVar10 < 0.0) {
      uVar6 = 0;
    }
    if (65535.0 < dVar10) {
      uVar6 = 0xffff;
    }
    *(short *)(param_1 + 0x10) = (short)uVar6;
LAB_0086ae14:
    *(short *)((int)param_1 + 0x42) = (short)uVar6;
    puVar3 = (ushort *)FUN_016d38c8(2,1);
    if (puVar3 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,2);
    }
    *puVar3 = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
    param_1[5] = 2;
    local_48 = 2;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    param_1[6] = (int)puVar3;
    param_1[0xd] = (int)pdVar5;
    param_1[7] = 2;
    *(undefined1 *)(param_1 + 0xf) = 5;
    local_50 = 2;
    param_1[0xe] = (int)(param_1 + 5);
    local_4c = puVar3;
switchD_0086ac80_caseD_3:
    local_60 = param_1 + 0x12;
    uVar11 = FUN_00869394(param_1 + 8,param_2);
    iVar2 = (int)(uVar11 >> 0x20);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x11) = 3;
      *(undefined1 *)(param_1 + 2) = 4;
      *(undefined1 *)(param_1 + 0x12) = 3;
      return 1;
    }
    if (*(char *)((int)param_1 + 0x3e) == '\x03') {
      iVar7 = param_1[8];
      puVar8 = (undefined4 *)param_1[9];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
    }
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_0086b29c(param_1 + 4);
    if (iVar2 != 0) {
      local_50 = 3;
      local_58 = 0x2c;
      local_5c = &DAT_0034415e;
      local_54 = iVar2;
      FUN_0080807c(&local_5c,&local_50);
    }
  }
  else {
    local_50 = 3;
    local_58 = 0x1e;
    local_5c = &DAT_00344140;
    local_54 = iVar2;
    FUN_0080807c(&local_5c,&local_50);
  }
  *(undefined1 *)local_60 = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  return 0;
}

