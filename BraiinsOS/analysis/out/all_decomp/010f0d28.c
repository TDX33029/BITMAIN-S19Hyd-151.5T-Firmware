// FUN_010f0d28 @ 010f0d28 size=1488 calls_out=13 calls_in=0
// strings: 

longlong FUN_010f0d28(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  code *pcVar7;
  int *unaff_r6;
  ushort *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[1] = *param_1;
    iVar5 = *param_1 + 0x14;
    param_1[3] = iVar5;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_010f0eb0:
    uVar4 = 0x20;
    param_1[0xc] = iVar5;
    *(undefined2 *)(param_1 + 0xd) = 0x20;
LAB_010f0ec4:
    param_1[8] = iVar5;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 9) = uVar4;
    param_1[4] = 2;
    param_1[5] = 2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886148);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886148);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xe]) {
    case '\0':
      iVar5 = param_1[3];
      goto LAB_010f0eb0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x35)) {
    case 0:
      uVar4 = (undefined1)param_1[0xd];
      iVar5 = param_1[0xc];
      goto LAB_010f0ec4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      unaff_r6 = (int *)param_1[4];
      goto LAB_010f0dac;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886128);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886128);
    }
    goto switchD_010f0d94_caseD_3;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      goto switchD_010f0e64_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886128);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886128);
    }
    goto switchD_010f0e64_caseD_3;
  }
  unaff_r6 = param_1 + 5;
  FUN_010ee5e8(&local_34,unaff_r6,param_2);
  puVar3 = (ushort *)local_30;
  piVar2 = local_34;
  if (local_34 == (int *)0x80000001) {
    uVar4 = 3;
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)((int)param_1 + 0x35) = 3;
    goto LAB_010f107c;
  }
  FUN_00868aa0(unaff_r6);
  puVar8 = (ushort *)local_30;
  if (piVar2 == (int *)0x80000000) {
    puVar8 = puVar3;
  }
  else {
    if (local_2c == (int *)param_1[4]) {
      if (local_2c != (int *)0x2) {
        local_30 = (code *)&SUB_00000002;
        local_34 = (int *)0x6;
        puVar8 = (ushort *)FUN_010f683c(&local_34);
        uVar9 = 0;
      }
      else {
        uVar1 = *puVar3;
        local_30._0_2_ = uVar1 << 8;
        local_30._3_1_ = SUB41(puVar8,3);
        local_30._0_3_ = CONCAT12((byte)(uVar1 >> 0xc),(short)local_30);
        local_30 = (code *)CONCAT31(local_30._1_3_,(uVar1 & 0xfe) != 0x40);
        puVar8 = (ushort *)((uVar1 & 0xfff) >> 8);
        uVar9 = CONCAT22(uVar1 >> 0xc,(short)local_30) << 8;
      }
      if (piVar2 != (int *)0x0) {
        thunk_FUN_016d3fb4(puVar3);
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)((int)param_1 + 0x35) = 1;
      if (local_2c == (int *)0x2) {
        uVar4 = (undefined1)(uVar9 >> 0x10);
        if ((uVar9 & 0x100) == 0) {
          iVar5 = param_1[1];
          *(undefined1 *)(iVar5 + 0x10) = uVar4;
          *(uint *)(iVar5 + 8) = uVar9 >> 0x18;
          *(uint *)(iVar5 + 0xc) = (uint)puVar8 & 0xff;
          unaff_r6 = (int *)param_1[1] + 5;
          param_1[3] = *(int *)param_1[1];
          param_1[4] = (int)unaff_r6;
          *(undefined1 *)(param_1 + 0x11) = 0;
LAB_010f0dac:
          uVar9 = param_1[3];
          param_1[5] = uVar9;
          pbVar6 = (byte *)FUN_016d38c8(1,1);
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,1);
          }
          *pbVar6 = (byte)(uVar9 >> 0x18) & 7 |
                    (byte)(uVar9 >> 5) & 0xf8 | (byte)(uVar9 >> 0xc) & 0x70 | (byte)(uVar9 << 7);
          param_1[6] = 1;
          *(undefined1 *)((int)param_1 + 0x42) = 0;
          param_1[7] = (int)pbVar6;
          *(undefined1 *)(param_1 + 0x10) = 5;
          param_1[8] = 1;
          param_1[0xe] = (int)unaff_r6;
          param_1[0xf] = (int)(param_1 + 6);
switchD_010f0d94_caseD_3:
          uVar11 = FUN_010eee40(param_1 + 9,param_2);
          puVar8 = (ushort *)(uVar11 >> 0x20);
          if ((uVar11 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x11) = 3;
            uVar4 = 4;
LAB_010f107c:
            *(undefined1 *)(param_1 + 2) = uVar4;
            return CONCAT44(unaff_r6,1);
          }
          if (*(char *)((int)param_1 + 0x42) == '\x03') {
            puVar10 = (undefined4 *)param_1[10];
            iVar5 = param_1[9];
            pcVar7 = (code *)*puVar10;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(iVar5);
            }
            if (puVar10[1] != 0) {
              thunk_FUN_016d3fb4(iVar5);
            }
            *(undefined1 *)((int)param_1 + 0x41) = 0;
          }
          if (param_1[6] != 0) {
            thunk_FUN_016d3fb4(param_1[7]);
          }
          *(undefined1 *)(param_1 + 0x11) = 1;
          FUN_010f1550(param_1 + 3);
          if (puVar8 == (ushort *)0x0) {
            param_1[3] = *(int *)(param_1[1] + 4);
            param_1[4] = param_1[1] + 0x14;
            *(undefined1 *)(param_1 + 0x11) = 0;
switchD_010f0e64_caseD_0:
            unaff_r6 = (int *)param_1[3];
            iVar5 = param_1[4];
            param_1[5] = (int)unaff_r6;
            pbVar6 = (byte *)FUN_016d38c8(1,1);
            if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,1);
            }
            *pbVar6 = (byte)((uint)unaff_r6 >> 0x10) & 3 |
                      (byte)((uint)unaff_r6 >> 0x16) & 0x1c |
                      (byte)((uint)unaff_r6 >> 3) & 0x60 | (byte)((int)unaff_r6 << 7);
            param_1[6] = 1;
            *(undefined1 *)((int)param_1 + 0x42) = 0;
            param_1[7] = (int)pbVar6;
            param_1[0xe] = iVar5;
            *(undefined1 *)(param_1 + 0x10) = 6;
            param_1[8] = 1;
            param_1[0xf] = (int)(param_1 + 6);
switchD_010f0e64_caseD_3:
            uVar11 = FUN_010eee40(param_1 + 9,param_2);
            puVar8 = (ushort *)(uVar11 >> 0x20);
            if ((uVar11 & 1) != 0) {
              *(undefined1 *)(param_1 + 0x11) = 3;
              uVar4 = 5;
              goto LAB_010f107c;
            }
            if (*(char *)((int)param_1 + 0x42) == '\x03') {
              puVar10 = (undefined4 *)param_1[10];
              iVar5 = param_1[9];
              pcVar7 = (code *)*puVar10;
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(iVar5);
              }
              if (puVar10[1] != 0) {
                thunk_FUN_016d3fb4(iVar5);
              }
              *(undefined1 *)((int)param_1 + 0x41) = 0;
            }
            if (param_1[6] != 0) {
              thunk_FUN_016d3fb4(param_1[7]);
            }
            *(undefined1 *)(param_1 + 0x11) = 1;
            FUN_010f1550(param_1 + 3);
          }
        }
        else {
          local_48 = CONCAT31(local_48._1_3_,uVar4);
          local_34 = &local_48;
          local_30 = FUN_00facb58;
          puVar8 = (ushort *)FUN_010ef160(&DAT_00388e5e,&local_34);
        }
      }
      goto LAB_010f11f8;
    }
    local_38 = (int)local_2c;
    local_28 = &LAB_00fac484;
    local_30 = (code *)&LAB_00fac484;
    local_34 = param_1 + 4;
    local_2c = &local_38;
    FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
    local_58 = local_48;
    uStack_54 = uStack_44;
    uStack_50 = uStack_40;
    puVar8 = (ushort *)FUN_010f66dc(&local_58);
    if (piVar2 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar3);
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
LAB_010f11f8:
  *(undefined1 *)(param_1 + 2) = 1;
  return ZEXT48(puVar8) << 0x20;
}

