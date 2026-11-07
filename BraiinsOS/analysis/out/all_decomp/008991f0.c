// FUN_008991f0 @ 008991f0 size=2460 calls_out=22 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x008999a4) */
/* WARNING: Removing unreachable block (ram,0x008999c8) */
/* WARNING: Removing unreachable block (ram,0x008999d4) */
/* WARNING: Removing unreachable block (ram,0x008999e0) */
/* WARNING: Removing unreachable block (ram,0x008999e4) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_008991f0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  ushort *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  uint in_fpscr;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined4 *local_30;
  undefined1 uStack_25;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    uVar9 = param_2[1];
    param_2[2] = *param_2;
    param_2[3] = 0;
    param_2[4] = uVar9;
    uVar5 = 0;
    while (uVar5 < uVar9) {
      param_2[3] = uVar5 + 1;
      param_2[5] = 1;
      param_2[6] = uVar5;
      iVar8 = *(int *)(param_2[2] + 0x148);
      param_2[8] = 0x10000;
      *(undefined1 *)((int)param_2 + 0x27) = 7;
      param_2[10] = 1;
      *(undefined1 *)(param_2 + 9) = 0;
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined2 *)((int)param_2 + 0x25) = 0xf;
      param_2[0xb] = uVar5;
      param_2[0xc] = iVar8 + 8;
      param_2[0xd] = param_2 + 8;
switchD_00899210_caseD_3:
      uVar19 = FUN_00818c80(param_2 + 10,param_3);
      iVar8 = (int)(uVar19 >> 0x20);
      if ((uVar19 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 7) = 3;
        return;
      }
      FUN_0081b77c(param_2 + 10);
      if (iVar8 != 0) {
LAB_008995ac:
        uVar4 = 9;
        goto LAB_008999f8;
      }
      iVar8 = *(int *)(param_2[2] + 0x148);
      param_2[8] = 0;
      param_2[0xb] = 0xf;
      *(undefined2 *)(param_2 + 9) = 0x101;
      *(undefined1 *)((int)param_2 + 0x26) = 0;
      *(undefined1 *)((int)param_2 + 0x29) = 0;
      *(undefined2 *)((int)param_2 + 0x27) = 0x100;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      *(undefined2 *)(param_2 + 0xc) = 0;
      *(undefined2 *)((int)param_2 + 0x2a) = 0;
      param_2[0xd] = param_2[5];
      param_2[0xe] = param_2[6];
      param_2[0xf] = iVar8 + 8;
      param_2[0x10] = param_2 + 8;
switchD_00899210_caseD_4:
      uVar19 = FUN_0081b34c(param_2 + 0xd,param_3);
      iVar8 = (int)(uVar19 >> 0x20);
      if ((uVar19 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 7) = 4;
        return;
      }
      FUN_0081b77c(param_2 + 0xd);
      if (iVar8 != 0) goto LAB_008995ac;
      iVar8 = *(int *)(param_2[2] + 0x148);
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined2 *)((int)param_2 + 0x25) = 0;
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined1 *)((int)param_2 + 0x27) = 0;
      param_2[10] = param_2[5];
      *(undefined4 *)((int)param_2 + 0x21) = 0xb000001;
      param_2[0xb] = param_2[6];
      param_2[0xc] = iVar8 + 8;
      param_2[0xd] = param_2 + 8;
switchD_00899210_caseD_5:
      uVar19 = FUN_0081b024(param_2 + 10,param_3);
      iVar8 = (int)(uVar19 >> 0x20);
      if ((uVar19 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 7) = 5;
        return;
      }
      FUN_0081b77c(param_2 + 10);
      if (iVar8 != 0) goto LAB_008995ac;
      *(undefined1 *)((int)param_2 + 0xad) = *(undefined1 *)(param_2[2] + 0x144);
      *(undefined1 *)(param_2 + 0x2b) = 0;
      param_2[8] = param_2[5];
      param_2[9] = param_2[6];
      param_2[10] = param_2[2] + 0x148;
switchD_00899210_caseD_6:
      uVar19 = FUN_0081b674(param_2 + 8,param_3);
      iVar8 = (int)(uVar19 >> 0x20);
      if ((uVar19 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 7) = 6;
        return;
      }
      if (*(char *)(param_2 + 0x2b) == '\x03') {
        FUN_0081b77c(param_2 + 0xd);
      }
      if (iVar8 != 0) goto LAB_008995ac;
      iVar8 = *(int *)(param_2[2] + 0x148);
      *(undefined2 *)((int)param_2 + 0x25) = 0;
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined1 *)((int)param_2 + 0x27) = 0xaa;
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined4 *)((int)param_2 + 0x21) = 0x2000001;
      param_2[10] = param_2[5];
      param_2[0xb] = param_2[6];
      param_2[0xc] = iVar8 + 8;
      param_2[0xd] = param_2 + 8;
switchD_00899210_caseD_7:
      uVar19 = FUN_0081b024(param_2 + 10,param_3);
      iVar8 = (int)(uVar19 >> 0x20);
      if ((uVar19 & 1) != 0) {
        *param_1 = 0xd;
        *(undefined1 *)(param_2 + 7) = 7;
        return;
      }
      FUN_0081b77c(param_2 + 10);
      if (iVar8 != 0) goto LAB_008995ac;
      uVar9 = param_2[4];
      uVar5 = param_2[3];
    }
    iVar8 = param_2[2] + 0x148;
    param_2[8] = iVar8;
    iVar12 = param_2[2] + 0x38;
    param_2[9] = iVar12;
    *(undefined1 *)(param_2 + 0xd) = 0;
LAB_008995dc:
    param_2[10] = iVar8;
    param_2[0xb] = iVar12;
    if (*(int *)(iVar12 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01862b74);
    }
    uVar6 = FUN_018462e8(0xffff);
    param_2[0xc] = uVar6;
    iVar8 = *(int *)(iVar12 + 0xb8);
    uVar5 = 0;
    param_2[0xf] = 0;
    param_2[0x10] = iVar8;
    if (iVar8 != 0) {
      do {
        param_2[0xf] = uVar5 + 1;
        iVar8 = *(int *)param_2[10];
        uVar6 = 1;
        param_2[0x11] = 1;
        iVar8 = iVar8 + 8;
        param_2[0x12] = uVar5;
        param_2[0x13] = iVar8;
        *(undefined1 *)((int)param_2 + 0x3a) = 1;
        puVar11 = (ushort *)(param_2 + 0xe);
        *puVar11 = (short)param_2[0xc] * (short)uVar5;
        param_2[0x14] = puVar11;
        *(undefined1 *)(param_2 + 0x1f) = 0;
LAB_00899a98:
        param_2[0x16] = uVar6;
        param_2[0x17] = uVar5;
        param_2[0x15] = iVar8;
        param_2[0x18] = puVar11;
        uVar3 = puVar11[1];
        uVar2 = *puVar11;
        puVar7 = (uint *)FUN_016d38c8(4,1);
        if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,4);
        }
        *(undefined1 *)(param_2 + 0x2e) = 0;
        param_2[0x20] = iVar8 + 0xc;
        param_2[0x1c] = 0xc;
        param_2[0x19] = 4;
        param_2[0x1a] = puVar7;
        param_2[0x1b] = 4;
        param_2[0x1d] = 4;
        *puVar7 = (uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10 | ((byte)uVar3 & 1) << 7;
switchD_008992b4_caseD_3:
        iVar8 = FUN_007d67b8(param_2 + 0x20,param_3);
        if (iVar8 == 0) {
          *(undefined1 *)(param_2 + 0x1f) = 3;
LAB_00899cac:
          uVar4 = 3;
          goto LAB_00899cb0;
        }
        param_2[0x1e] = iVar8;
        if (*(char *)(param_2 + 0x2e) == '\x03') {
          cVar1 = *(char *)(param_2 + 0x2d);
          bVar15 = cVar1 == '\x03';
          if (bVar15) {
            cVar1 = *(char *)(param_2 + 0x24);
          }
          if (bVar15 && cVar1 == '\x04') {
            FUN_0163c790(param_2 + 0x25);
            if (param_2[0x26] != 0) {
              (**(code **)(param_2[0x26] + 0xc))(param_2[0x27]);
            }
          }
        }
        if (param_2[0x16] == 1) {
          uVar5 = *(int *)param_2[0x15] * param_2[0x17];
          if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0034b2fb,0x2e,&uStack_25,&DAT_0186b108,&DAT_0186afe8);
          }
        }
        else {
          uVar5 = (uint)*(byte *)((int *)param_2[0x15] + 1);
        }
        uVar20 = (**(code **)(*(int *)(param_2[0x1e] + 0x20) + 0x14))
                           (*(undefined4 *)(param_2[0x1e] + 0x1c),param_2[0x16],uVar5,param_2[0x1c],
                            param_2[0x1d],param_2[0x1a],param_2[0x1b]);
        *(undefined8 *)(param_2 + 0x20) = uVar20;
LAB_00899bc0:
        uVar19 = (**(code **)((int)((ulonglong)uVar20 >> 0x20) + 0xc))((int)uVar20,param_3);
        iVar8 = (int)(uVar19 >> 0x20);
        if ((uVar19 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x1f) = 4;
          goto LAB_00899cac;
        }
        puVar14 = (undefined4 *)param_2[0x21];
        uVar6 = param_2[0x20];
        pcVar10 = (code *)*puVar14;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar6);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar6);
        }
        pcVar13 = (char *)param_2[0x1e];
        if (*pcVar13 == '\0') {
          bVar15 = (bool)hasExclusiveAccess(pcVar13);
          if (!bVar15) goto LAB_00899c68;
          *pcVar13 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00899c68:
          FUN_01280da8(pcVar13);
        }
        FUN_0128236c(pcVar13);
        FUN_0163af68(pcVar13,1,pcVar13);
        if (param_2[0x19] != 0) {
          thunk_FUN_016d3fb4(param_2[0x1a]);
        }
        *(undefined1 *)(param_2 + 0x1f) = 1;
        if ((uVar19 & 1) != 0) goto LAB_00899cac;
        FUN_0081b77c(param_2 + 0x11);
        if (iVar8 != 0) goto LAB_00899980;
        uVar5 = param_2[0xf];
      } while (uVar5 < (uint)param_2[0x10]);
    }
    iVar8 = param_2[0xb];
    if (*(int *)(iVar8 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0187b958);
    }
    uVar6 = FUN_018462e8(0xffffffff);
    dVar16 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    iVar12 = *(int *)param_2[10];
    dVar17 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar8 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
    dVar18 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar8 + 0x44),(byte)(in_fpscr >> 0x16) & 3);
    dVar16 = ((dVar16 / dVar17) / dVar18) * 12500000.0 * 0.8;
    param_2[0xe] = (uint)(0.0 < dVar16) * (int)(longlong)dVar16 & 0x7fffffff;
    *(undefined1 *)(param_2 + 0x1e) = 0;
    param_2[0x10] = 0;
    *(undefined1 *)(param_2 + 0xf) = 0;
    param_2[0x12] = iVar12 + 8;
    param_2[0x13] = param_2 + 0xe;
switchD_00899270_caseD_4:
    uVar19 = FUN_0081bcac(param_2 + 0x10,param_3);
    iVar8 = (int)(uVar19 >> 0x20);
    if ((uVar19 & 1) != 0) {
      uVar4 = 4;
      goto LAB_00899cb0;
    }
    FUN_0081b77c(param_2 + 0x10);
    if (iVar8 != 0) goto LAB_00899980;
    iVar8 = *(int *)param_2[10];
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = &LAB_00989680;
    param_2[0x2a] = iVar8 + 8;
switchD_00899270_caseD_5:
    iVar8 = FUN_0081c170(param_2 + 0xe,param_3);
    if (iVar8 != 0) {
      uVar4 = 5;
      goto LAB_00899cb0;
    }
    if (*(char *)(param_2 + 0x2b) == '\x03') {
      FUN_0081c020(param_2 + 0x16);
    }
    iVar8 = *(int *)param_2[10];
    *(undefined1 *)(param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 0x1e) = 0;
    param_2[0x10] = 0;
    param_2[0x12] = iVar8 + 8;
    param_2[0x13] = param_2 + 0xe;
    param_2[0xe] = 0x101ffff;
switchD_00899270_caseD_6:
    uVar19 = FUN_0081c490(param_2 + 0x10,param_3);
    iVar8 = (int)(uVar19 >> 0x20);
    if ((uVar19 & 1) != 0) {
      uVar4 = 6;
      goto LAB_00899cb0;
    }
    FUN_0081b77c(param_2 + 0x10);
    if (iVar8 != 0) goto LAB_00899980;
    iVar8 = *(int *)param_2[10];
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 100000000;
    param_2[0x2a] = iVar8 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01862798);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01862798);
  case 3:
    goto switchD_00899210_caseD_3;
  case 4:
    goto switchD_00899210_caseD_4;
  case 5:
    goto switchD_00899210_caseD_5;
  case 6:
    goto switchD_00899210_caseD_6;
  case 7:
    goto switchD_00899210_caseD_7;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xd)) {
    case 0:
      iVar8 = param_2[8];
      iVar12 = param_2[9];
      goto LAB_008995dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01862b84);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01862b84);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1f)) {
      case 0:
        uVar6 = param_2[0x11];
        uVar5 = param_2[0x12];
        iVar8 = param_2[0x13];
        puVar11 = (ushort *)param_2[0x14];
        goto LAB_00899a98;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01864dac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01864dac);
      case 3:
        goto switchD_008992b4_caseD_3;
      case 4:
        uVar20 = *(undefined8 *)(param_2 + 0x20);
        goto LAB_00899bc0;
      }
    case 4:
      goto switchD_00899270_caseD_4;
    case 5:
      goto switchD_00899270_caseD_5;
    case 6:
      goto switchD_00899270_caseD_6;
    }
  }
  iVar8 = FUN_0081c170(param_2 + 0xe,param_3);
  if (iVar8 == 0) {
    iVar8 = 0;
    if (*(char *)(param_2 + 0x2b) == '\x03') {
      FUN_0081c020(param_2 + 0x16);
    }
LAB_00899980:
    local_30 = param_2 + 0xd;
    *(undefined1 *)local_30 = 1;
    uVar4 = 9;
    if (iVar8 == 0) {
      uVar4 = 0xc;
    }
LAB_008999f8:
    *param_1 = uVar4;
    *(int *)(param_1 + 4) = iVar8;
    *(undefined1 *)(param_2 + 7) = 1;
    return;
  }
  uVar4 = 7;
LAB_00899cb0:
  local_30 = param_2 + 0xd;
  *(undefined1 *)local_30 = uVar4;
  *param_1 = 0xd;
  *(undefined1 *)(param_2 + 7) = 8;
  return;
}

