// FUN_008681f4 @ 008681f4 size=1604 calls_out=10 calls_in=2
// strings: PSU undervoltage

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffc8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_008681f4(int *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  int *piVar5;
  uint3 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  undefined *local_48;
  undefined4 local_44;
  byte *local_40;
  int *local_3c;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined2 uStack_34;
  byte bStack_32;
  undefined1 uStack_31;
  undefined1 *local_30;
  
  _uStack_35 = CONCAT12(uStack_34._1_1_,CONCAT11((undefined1)uStack_34,uStack_35));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[1] = *param_1;
    iVar7 = *param_1 + 0x10;
    param_1[3] = iVar7;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_00868278:
    uVar9 = 4;
    param_1[0xc] = iVar7;
    *(undefined2 *)(param_1 + 0xd) = 4;
LAB_0086828c:
    param_1[8] = iVar7;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 9) = uVar9;
    param_1[4] = 1;
    param_1[5] = 1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186150c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186150c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xe]) {
    case '\0':
      iVar7 = param_1[3];
      goto LAB_00868278;
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
      uVar9 = (undefined1)param_1[0xd];
      iVar7 = param_1[0xc];
      goto LAB_0086828c;
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
    switch((char)param_1[0x10]) {
    case '\0':
      goto switchD_008682f8_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018614dc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018614dc);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0xf]) {
      case '\0':
        iVar7 = param_1[4];
        goto LAB_008683b4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_1 + 0x39)) {
        case 0:
          uVar9 = (undefined1)param_1[0xe];
          iVar7 = param_1[0xd];
          goto LAB_008683c8;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018861e4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018861e4);
        }
      }
    }
    goto switchD_0086852c_caseD_3;
  }
  FUN_00868b40(&local_3c,param_1 + 5,param_2);
  uVar9 = uStack_31;
  bVar1 = bStack_32;
  uVar6 = _uStack_35;
  piVar5 = local_3c;
  if (local_3c == (int *)0x80000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)((int)param_1 + 0x35) = 3;
    *(undefined1 *)(param_1 + 2) = 3;
    return 1;
  }
  pbVar4 = (byte *)CONCAT13(uStack_35,CONCAT12(uStack_36,local_38));
  iVar7 = CONCAT13(uStack_31,CONCAT12(bStack_32,(short)(_uStack_35 >> 8)));
  FUN_00868aa0(param_1 + 5);
  if (piVar5 == (int *)0x80000000) {
    pbVar11 = pbVar4;
LAB_008685b8:
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  else {
    if (iVar7 != param_1[4]) {
      local_30 = &LAB_00fac484;
      bStack_32 = (byte)((uint)&local_4c >> 0x10);
      uStack_31 = (undefined1)((uint)&local_4c >> 0x18);
      local_38 = 0xc484;
      uStack_36 = 0xfa;
      _uStack_35 = (uint3)(ushort)&local_4c << 8;
      local_3c = param_1 + 4;
      FUN_00600d2c(&local_48,&DAT_00573fe9,&local_3c);
      local_58 = local_48;
      uStack_54 = local_44;
      uStack_50 = local_40;
      pbVar11 = (byte *)FUN_00808de4(&local_58);
      if (piVar5 != (int *)0x0) {
        thunk_FUN_016d3fb4(pbVar4);
      }
      goto LAB_008685b8;
    }
    if (iVar7 == 1) {
      uVar8 = (uint)*pbVar4;
      _uStack_35 = CONCAT21(CONCAT11(*pbVar4,(char)((uVar8 & 3) >> 1)),(char)((uVar8 & 7) >> 2)) &
                   0x1ffff;
      uVar10 = (uVar8 & 0x1f) >> 4;
      local_38 = CONCAT11((char)uVar10,(char)((uVar8 & 0x3f) >> 5));
      uStack_36 = (undefined1)((uVar8 & 0xf) >> 3);
      pbVar11 = (byte *)(uint)_uStack_35;
      uVar10 = uVar10 ^ 1;
    }
    else {
      uVar10 = 1;
      local_38 = 1;
      uStack_36 = 0;
      _uStack_35 = uVar6 & 0xffff00;
      local_3c = (int *)0x6;
      bStack_32 = bVar1;
      uStack_31 = uVar9;
      pbVar11 = (byte *)FUN_0080a4c0(&local_3c);
    }
    if (piVar5 != (int *)0x0) {
      thunk_FUN_016d3fb4(pbVar4);
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)((int)param_1 + 0x35) = 1;
    if (iVar7 == 1) {
      if (uVar10 == 0) {
        FUN_00808f1c(&DAT_0034422e,0x11);
        goto LAB_0086869c;
      }
      if (((uint)pbVar11 & 1) != 0) {
        FUN_00808f1c(&DAT_0034421a,0x14);
        goto LAB_0086869c;
      }
      if (((uint)pbVar11 & 0x10000) != 0) {
        FUN_00808f1c(&DAT_0034420b,0xf);
        goto LAB_0086869c;
      }
      if (((uint)pbVar11 & 0x100) == 0) goto LAB_0086869c;
      param_1[3] = param_1[1];
      *(undefined1 *)(param_1 + 0x10) = 0;
switchD_008682f8_caseD_0:
      *(undefined1 *)(param_1 + 0xf) = 0;
      iVar7 = param_1[3] + 0x10;
      param_1[4] = iVar7;
LAB_008683b4:
      uVar9 = 1;
      param_1[0xd] = iVar7;
      *(undefined2 *)(param_1 + 0xe) = 1;
LAB_008683c8:
      param_1[9] = iVar7;
      *(undefined1 *)((int)param_1 + 0x2a) = 0;
      *(undefined1 *)(param_1 + 10) = uVar9;
      param_1[5] = 1;
      param_1[6] = 1;
switchD_0086852c_caseD_3:
      FUN_00868b40(&local_3c,param_1 + 6,param_2);
      uVar9 = uStack_31;
      bVar1 = bStack_32;
      uVar6 = _uStack_35;
      piVar5 = local_3c;
      if (local_3c == (int *)0x80000001) {
        *(undefined1 *)(param_1 + 0x10) = 3;
        *(undefined1 *)(param_1 + 0xf) = 3;
        *(undefined1 *)((int)param_1 + 0x39) = 3;
        *(undefined1 *)(param_1 + 2) = 4;
        return 1;
      }
      pbVar4 = (byte *)CONCAT13(uStack_35,CONCAT12(uStack_36,local_38));
      iVar7 = CONCAT13(uStack_31,CONCAT12(bStack_32,(short)(_uStack_35 >> 8)));
      FUN_00868aa0(param_1 + 6);
      if (piVar5 == (int *)0x80000000) {
        local_40 = pbVar4;
LAB_00868658:
        *(undefined1 *)(param_1 + 0xf) = 1;
        *(undefined1 *)((int)param_1 + 0x39) = 1;
      }
      else {
        if (iVar7 != param_1[5]) {
          local_30 = &LAB_00fac484;
          bStack_32 = (byte)((uint)&local_4c >> 0x10);
          uStack_31 = (undefined1)((uint)&local_4c >> 0x18);
          local_38 = 0xc484;
          uStack_36 = 0xfa;
          _uStack_35 = (uint3)(ushort)&local_4c << 8;
          local_4c = iVar7;
          local_3c = param_1 + 5;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_3c);
          local_58 = local_48;
          uStack_54 = local_44;
          uStack_50 = local_40;
          local_40 = (byte *)FUN_00808de4(&local_58);
          if (piVar5 != (int *)0x0) {
            thunk_FUN_016d3fb4(pbVar4);
          }
          goto LAB_00868658;
        }
        if (iVar7 == 1) {
          bVar1 = *pbVar4;
          uVar8 = (uint)bVar1;
          bStack_32 = bVar1 & 3;
          uVar9 = (undefined1)((uVar8 & 7) >> 2);
          uVar2 = (undefined1)((uVar8 & 0xf) >> 3);
          uVar3 = (undefined1)((uVar8 & 0x1f) >> 4);
          _uStack_35 = CONCAT21(CONCAT11(uVar9,uVar2),uVar3);
          uVar10 = (uVar8 & 0x3f) >> 5;
          uStack_36 = (undefined1)uVar10;
          local_40 = (byte *)(CONCAT13(bVar1,CONCAT12(uVar9,CONCAT11(uVar2,uVar3))) & 0x3ffffff);
          local_38 = CONCAT11((char)((uVar8 & 0x7f) >> 6),bVar1 >> 7);
        }
        else {
          local_38 = 1;
          uStack_36 = 0;
          _uStack_35 = uVar6 & 0xffff00;
          local_3c = (int *)0x6;
          bStack_32 = bVar1;
          uStack_31 = uVar9;
          local_40 = (byte *)FUN_0080a4c0(&local_3c);
          uVar10 = 0;
        }
        if (piVar5 != (int *)0x0) {
          thunk_FUN_016d3fb4(pbVar4);
        }
        *(undefined1 *)(param_1 + 0xf) = 1;
        *(undefined1 *)((int)param_1 + 0x39) = 1;
        if (iVar7 == 1) {
          *(undefined1 *)(param_1 + 0x10) = 1;
          if (uVar10 != 0) {
            FUN_00808f1c("PSU undervoltage",0x10);
          }
          goto LAB_0086869c;
        }
      }
      local_3c = (int *)0x3;
      local_44 = 0x2e;
      local_48 = &DAT_003441af;
      FUN_0080807c(&local_48,&local_3c);
      *(undefined1 *)(param_1 + 0x10) = 1;
      goto LAB_0086869c;
    }
  }
  local_3c = (int *)0x3;
  local_44 = 0x2e;
  local_48 = &DAT_003441dd;
  local_40 = pbVar11;
  FUN_0080807c(&local_48,&local_3c);
LAB_0086869c:
  *(undefined1 *)(param_1 + 2) = 1;
  return 0;
}

