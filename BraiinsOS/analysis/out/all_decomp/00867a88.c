// FUN_00867a88 @ 00867a88 size=1196 calls_out=9 calls_in=0
// strings: 

void FUN_00867a88(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  double in_d16;
  double dVar13;
  ulonglong uVar14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int *local_34;
  byte *local_30;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x15)) {
  case 0:
    uVar4 = *param_2;
    param_2[1] = uVar4;
    *(undefined1 *)(param_2 + 3) = 0;
LAB_00867b08:
    param_2[4] = uVar4;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[2] = uVar4;
switchD_00867aec_caseD_3:
    uVar14 = FUN_008681f4(param_2 + 4,param_3);
    pbVar7 = (byte *)(uVar14 >> 0x20);
    uVar8 = 3;
    if ((uVar14 & 1) != 0) goto LAB_00867c8c;
    if (*(char *)(param_2 + 6) == '\x03') {
      if (*(char *)(param_2 + 0x12) == '\x03') {
        cVar1 = *(char *)((int)param_2 + 0x45);
        iVar5 = 0x14;
joined_r0x00867bbc:
        if (cVar1 == '\x03') {
          FUN_00868aa0((int)(param_2 + 4) + iVar5);
        }
      }
    }
    else if (*(char *)(param_2 + 6) == '\x04') {
      cVar1 = *(char *)(param_2 + 0x14);
      bVar12 = cVar1 == '\x03';
      if (bVar12) {
        cVar1 = *(char *)(param_2 + 0x13);
      }
      if (bVar12 && cVar1 == '\x03') {
        cVar1 = *(char *)((int)param_2 + 0x49);
        iVar5 = 0x18;
        goto joined_r0x00867bbc;
      }
    }
    if (pbVar7 != (byte *)0x0) {
      uVar4 = 1;
      goto LAB_00867dec;
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
    iVar6 = param_2[2];
    param_2[4] = iVar6;
LAB_00867bec:
    *(undefined1 *)(param_2 + 0x11) = 0;
    iVar5 = iVar6 + 0x10;
    param_2[5] = iVar6;
    param_2[6] = iVar5;
LAB_00867c00:
    uVar8 = 0;
    param_2[0xf] = iVar5;
    *(undefined2 *)(param_2 + 0x10) = 0;
LAB_00867c14:
    *(undefined1 *)(param_2 + 0xc) = uVar8;
    *(undefined1 *)((int)param_2 + 0x32) = 0;
    param_2[0xb] = iVar5;
    param_2[7] = 1;
    param_2[8] = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861198);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861198);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 3)) {
    case 0:
      uVar4 = param_2[1];
      goto LAB_00867b08;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018614ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018614ec);
    case 3:
      goto switchD_00867aec_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x12)) {
    case 0:
      iVar6 = param_2[4];
      goto LAB_00867bec;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186152c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186152c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x11)) {
    case 0:
      iVar5 = param_2[6];
      goto LAB_00867c00;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x41)) {
    case 0:
      uVar8 = *(undefined1 *)(param_2 + 0x10);
      iVar5 = param_2[0xf];
      goto LAB_00867c14;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    }
  }
  puVar10 = (undefined1 *)((int)param_2 + 0x41);
  puVar9 = param_2 + 0x11;
  pbVar7 = (byte *)(param_2 + 8);
  FUN_00868b40(&local_34,pbVar7,param_3);
  pbVar3 = local_30;
  piVar2 = local_34;
  if (local_34 == (int *)0x80000001) {
    *puVar10 = 3;
    *(undefined1 *)(param_2 + 0x12) = 3;
    *(undefined1 *)puVar9 = 3;
    uVar8 = 4;
LAB_00867c8c:
    *(undefined1 *)(param_2 + 3) = uVar8;
    *param_1 = 2;
    *(undefined1 *)(param_2 + 0x15) = 3;
    return;
  }
  FUN_00868aa0(pbVar7);
  if (piVar2 == (int *)0x80000000) {
    pbVar7 = pbVar3;
LAB_00867dd0:
    uVar4 = 1;
    *(undefined1 *)puVar9 = 1;
    *puVar10 = 1;
  }
  else {
    if (local_2c != (int *)param_2[7]) {
      local_38 = (int)local_2c;
      local_28 = &LAB_00fac484;
      local_30 = &LAB_00fac484;
      local_34 = param_2 + 7;
      local_2c = &local_38;
      FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
      local_58 = local_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
      pbVar7 = (byte *)FUN_00808de4(&local_58);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_016d3fb4(pbVar3);
      }
      goto LAB_00867dd0;
    }
    if (local_2c != (int *)0x1) {
      uVar11 = 0;
      local_30 = &DAT_00000001;
      local_34 = (int *)0x6;
      pbVar7 = (byte *)FUN_0080a4c0(&local_34);
    }
    else {
      uVar11 = (uint)*pbVar3 << 8;
    }
    if (piVar2 != (int *)0x0) {
      thunk_FUN_016d3fb4(pbVar3);
    }
    uVar4 = 1;
    *(undefined1 *)puVar9 = 1;
    *puVar10 = 1;
    if (local_2c == (int *)0x1) {
      dVar13 = (double)VectorUnsignedToFloat(uVar11 >> 8,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = 0;
      in_d16 = *(double *)(&DAT_00565df0 + (uint)*(byte *)(param_2[5] + 10) * 8) +
               *(double *)(&DAT_005659d0 + (uint)*(byte *)(param_2[5] + 10) * 8) * dVar13;
    }
  }
  *(undefined1 *)(param_2 + 0x12) = 1;
LAB_00867dec:
  *(undefined1 *)(param_2 + 3) = 1;
  *(double *)(param_1 + 2) = in_d16;
  *param_1 = uVar4;
  param_1[1] = pbVar7;
  *(undefined1 *)(param_2 + 0x15) = 1;
  return;
}

