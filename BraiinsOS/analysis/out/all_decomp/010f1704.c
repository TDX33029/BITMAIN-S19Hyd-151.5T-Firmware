// FUN_010f1704 @ 010f1704 size=1916 calls_out=10 calls_in=0
// strings: 

void FUN_010f1704(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  ushort *puVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  int *local_64;
  ushort *local_60;
  undefined4 ****local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 ****local_38;
  int *local_34;
  ushort *local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[1]) {
  case '\0':
    iVar4 = *param_2;
    param_2[2] = iVar4;
    if (*(char *)((int)param_2 + 5) == '\0') {
      *(undefined1 *)((int)param_2 + 0x12) = 0;
LAB_010f1870:
      param_2[3] = iVar4;
      *(undefined1 *)(param_2 + 0x10) = 0;
      param_2[5] = iVar4 + 0x14;
switchD_010f1778_caseD_3:
      FUN_010f21d0(&local_34,param_2 + 5,param_3);
      puVar2 = local_30;
      piVar7 = local_34;
      if ((short)local_34 == 2) {
        *(undefined1 *)((int)param_2 + 0x12) = 3;
        goto LAB_010f1cc0;
      }
      cVar1 = (char)param_2[0x10];
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)((int)param_2 + 0x3d);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_00868aa0(param_2 + 7);
      }
      if (((uint)piVar7 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x10) = 0;
        *(short *)(param_2 + 4) = (short)((uint)piVar7 >> 0x10);
        iVar4 = param_2[3] + 0x14;
        param_2[5] = iVar4;
        goto LAB_010f19a0;
      }
      FUN_010f4fd4(&local_64,puVar2);
LAB_010f1ca4:
      *(undefined1 *)((int)param_2 + 0x12) = 1;
      local_2c = local_5c;
      if (local_64 == (int *)0x80000006) {
LAB_010f1cc0:
        *param_1 = 0x80000006;
        *(undefined1 *)(param_2 + 1) = 3;
        return;
      }
      goto LAB_010f1cdc;
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
LAB_010f17c8:
    *(undefined1 *)(param_2 + 0xe) = 0;
    param_2[3] = iVar4 + 0x14;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886168);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886168);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x12)) {
    case 0:
      iVar4 = param_2[2];
      goto LAB_010f1870;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861a8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861a8);
    case 3:
      goto switchD_010f1778_caseD_3;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x10]) {
      case '\0':
        iVar4 = param_2[5];
LAB_010f19a0:
        uVar6 = 1;
        param_2[0xe] = iVar4;
        *(undefined2 *)(param_2 + 0xf) = 1;
LAB_010f19b4:
        param_2[10] = iVar4;
        *(undefined1 *)((int)param_2 + 0x2e) = 0;
        *(undefined1 *)(param_2 + 0xb) = uVar6;
        param_2[6] = 2;
        param_2[7] = 2;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861f4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861f4);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x3d)) {
        case 0:
          uVar6 = (undefined1)param_2[0xf];
          iVar4 = param_2[0xe];
          goto LAB_010f19b4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018861e4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018861e4);
        }
      }
      puVar8 = (undefined1 *)((int)param_2 + 0x3d);
      piVar9 = param_2 + 0x10;
      puVar5 = (ushort *)(param_2 + 7);
      FUN_010ee5e8(&local_34,puVar5,param_3);
      ppppuVar3 = local_2c;
      puVar2 = local_30;
      piVar7 = local_34;
      if (local_34 == (int *)0x80000001) {
        *puVar8 = 3;
LAB_010f1a10:
        *(undefined1 *)piVar9 = 3;
        *(undefined1 *)((int)param_2 + 0x12) = 4;
        goto LAB_010f1cc0;
      }
      FUN_00868aa0(puVar5);
      if (piVar7 == (int *)&DAT_80000000) {
        puVar5 = puVar2;
LAB_010f1c0c:
        *(undefined1 *)piVar9 = 1;
        *puVar8 = 1;
      }
      else {
        if (ppppuVar3 != (undefined4 ****)param_2[6]) {
          local_2c = &local_38;
          local_38 = ppppuVar3;
          local_28 = &LAB_00fac484;
          local_30 = (ushort *)&LAB_00fac484;
          local_34 = param_2 + 6;
          FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
          local_58 = local_48;
          uStack_54 = local_44;
          uStack_50 = uStack_40;
          puVar5 = (ushort *)FUN_010f66dc(&local_58);
          if (piVar7 != (int *)0x0) {
            thunk_FUN_016d3fb4(puVar2);
          }
          goto LAB_010f1c0c;
        }
        if (ppppuVar3 == (undefined4 ****)&SUB_00000002) {
          uVar10 = (uint)*puVar2 << 0x18 | (uint)(*puVar2 >> 8) << 0x10;
        }
        else {
          local_30 = (ushort *)&SUB_00000002;
          local_34 = (int *)&DAT_00000006;
          local_2c = ppppuVar3;
          puVar5 = (ushort *)FUN_010f683c(&local_34);
          uVar10 = 1;
        }
        if (piVar7 != (int *)0x0) {
          thunk_FUN_016d3fb4(puVar2);
        }
        *puVar8 = 1;
        if ((uVar10 & 0xffff) == 2) goto LAB_010f1a10;
        *(undefined1 *)piVar9 = 1;
        if ((uVar10 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x11) = 0;
          *(short *)(param_2 + 5) = (short)(uVar10 >> 0x10);
          iVar4 = param_2[3] + 0x14;
          param_2[6] = iVar4;
          goto LAB_010f196c;
        }
      }
      FUN_010f4fd4(&local_64,puVar5);
      goto LAB_010f1ca4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x11]) {
    case '\0':
      iVar4 = param_2[6];
LAB_010f196c:
      uVar6 = 2;
      param_2[0xf] = iVar4;
      *(undefined2 *)(param_2 + 0x10) = 2;
LAB_010f1ac4:
      param_2[0xb] = iVar4;
      *(undefined1 *)((int)param_2 + 0x32) = 0;
      *(undefined1 *)(param_2 + 0xc) = uVar6;
      param_2[7] = 2;
      param_2[8] = 2;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x41)) {
      case 0:
        uVar6 = (undefined1)param_2[0x10];
        iVar4 = param_2[0xf];
        goto LAB_010f1ac4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018861e4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018861e4);
      }
    }
    piVar9 = param_2 + 0x11;
    puVar8 = (undefined1 *)((int)param_2 + 0x41);
    puVar5 = (ushort *)(param_2 + 8);
    FUN_010ee5e8(&local_34,puVar5,param_3);
    ppppuVar3 = local_2c;
    puVar2 = local_30;
    piVar7 = local_34;
    if (local_34 == (int *)0x80000001) {
      *puVar8 = 3;
LAB_010f1b08:
      *(undefined1 *)piVar9 = 3;
      *(undefined1 *)((int)param_2 + 0x12) = 5;
      goto LAB_010f1cc0;
    }
    FUN_00868aa0(puVar5);
    if (piVar7 == (int *)&DAT_80000000) {
      puVar5 = puVar2;
LAB_010f1c8c:
      *(undefined1 *)piVar9 = 1;
      *puVar8 = 1;
LAB_010f1c98:
      FUN_010f4fd4(&local_64,puVar5);
      goto LAB_010f1ca4;
    }
    if (ppppuVar3 != (undefined4 ****)param_2[7]) {
      local_2c = &local_38;
      local_38 = ppppuVar3;
      local_28 = &LAB_00fac484;
      local_30 = (ushort *)&LAB_00fac484;
      local_34 = param_2 + 7;
      FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
      local_58 = local_48;
      uStack_54 = local_44;
      uStack_50 = uStack_40;
      puVar5 = (ushort *)FUN_010f66dc(&local_58);
      if (piVar7 != (int *)0x0) {
        thunk_FUN_016d3fb4(puVar2);
      }
      goto LAB_010f1c8c;
    }
    if (ppppuVar3 == (undefined4 ****)&SUB_00000002) {
      uVar10 = (uint)*puVar2 << 0x18 | (uint)(*puVar2 >> 8) << 0x10;
    }
    else {
      local_30 = (ushort *)&SUB_00000002;
      local_34 = (int *)&DAT_00000006;
      local_2c = ppppuVar3;
      puVar5 = (ushort *)FUN_010f683c(&local_34);
      uVar10 = 1;
    }
    if (piVar7 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar2);
    }
    *puVar8 = 1;
    if ((uVar10 & 0xffff) == 2) goto LAB_010f1b08;
    *(undefined1 *)piVar9 = 1;
    if ((uVar10 & 1) != 0) goto LAB_010f1c98;
    fVar12 = (float)VectorSignedToFloat((int)uVar10 >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined1 *)((int)param_2 + 0x12) = 1;
    local_2c = local_5c;
    goto LAB_010f190c;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xf]) {
    case '\0':
      iVar4 = param_2[2];
      goto LAB_010f17c8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886198);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886198);
    }
  }
  piVar7 = param_2 + 0xf;
  FUN_010f21d0(&local_48,param_2 + 3,param_3);
  if ((short)local_48 == 2) {
    *(undefined1 *)piVar7 = 3;
LAB_010f17fc:
    *param_1 = 0x80000006;
    *(undefined1 *)(param_2 + 1) = 4;
    return;
  }
  cVar1 = (char)param_2[0xe];
  bVar11 = cVar1 == '\x03';
  if (bVar11) {
    cVar1 = *(char *)((int)param_2 + 0x35);
  }
  if (bVar11 && cVar1 == '\x03') {
    FUN_00868aa0(param_2 + 5);
  }
  if ((local_48 & 1) == 0) {
    fVar12 = (float)VectorSignedToFloat((int)local_48 >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined1 *)piVar7 = 1;
LAB_010f190c:
    local_60 = (ushort *)(fVar12 * 0.0625);
    local_64 = (int *)0x80000005;
  }
  else {
    FUN_010f4fd4(&local_34,local_44);
    *(undefined1 *)piVar7 = 1;
    local_60 = local_30;
    local_64 = local_34;
    if (local_34 == (int *)0x80000006) goto LAB_010f17fc;
  }
LAB_010f1cdc:
  param_1[2] = local_2c;
  *param_1 = local_64;
  param_1[1] = local_60;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

