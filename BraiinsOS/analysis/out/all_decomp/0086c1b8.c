// FUN_0086c1b8 @ 0086c1b8 size=712 calls_out=10 calls_in=1
// strings: 

void FUN_0086c1b8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  ushort *puVar3;
  undefined4 ****ppppuVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined1 *puVar10;
  int *piVar11;
  uint in_fpscr;
  undefined4 extraout_s1;
  double in_d16;
  undefined *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 ****local_5c;
  undefined *local_58;
  undefined4 local_54;
  ushort *local_50;
  int *local_48;
  ushort *local_44;
  undefined4 ****local_40;
  undefined1 *local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xe]) {
  case '\0':
    iVar9 = *param_2 + 0x18;
    param_2[1] = *param_2;
    param_2[2] = iVar9;
    *(undefined1 *)(param_2 + 0xd) = 0;
LAB_0086c234:
    uVar5 = 3;
    param_2[0xb] = iVar9;
    *(undefined2 *)(param_2 + 0xc) = 3;
LAB_0086c248:
    *(undefined1 *)(param_2 + 8) = uVar5;
    *(undefined1 *)((int)param_2 + 0x22) = 0;
    param_2[7] = iVar9;
    param_2[3] = 2;
    param_2[4] = 2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018614cc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018614cc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xd]) {
    case '\0':
      iVar9 = param_2[2];
      goto LAB_0086c234;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x31)) {
    case 0:
      uVar5 = (undefined1)param_2[0xc];
      iVar9 = param_2[0xb];
      goto LAB_0086c248;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    }
  }
  puVar10 = (undefined1 *)((int)param_2 + 0x31);
  piVar11 = param_2 + 0xd;
  puVar8 = (ushort *)(param_2 + 4);
  FUN_00868b40(&local_48,puVar8);
  ppppuVar4 = local_40;
  puVar3 = local_44;
  piVar2 = local_48;
  if (local_48 == (int *)0x80000001) {
    uVar5 = 3;
    *(undefined1 *)piVar11 = 3;
    *puVar10 = 3;
    *param_1 = 2;
    goto LAB_0086c420;
  }
  FUN_00868aa0(puVar8);
  if (piVar2 == (int *)0x80000000) {
    puVar8 = puVar3;
LAB_0086c3d4:
    *(undefined1 *)piVar11 = 1;
    *puVar10 = 1;
LAB_0086c3e0:
    local_48 = (int *)0x3;
    local_54 = 0x25;
    local_58 = &DAT_0034418a;
    local_50 = puVar8;
    uVar6 = FUN_0080807c(&local_58,&local_48);
    uVar7 = 1;
  }
  else {
    if (ppppuVar4 != (undefined4 ****)param_2[3]) {
      local_40 = &local_5c;
      local_5c = ppppuVar4;
      local_3c = &LAB_00fac484;
      local_44 = (ushort *)&LAB_00fac484;
      local_48 = param_2 + 3;
      FUN_00600d2c(&local_58,&DAT_00573fe9,&local_48);
      local_68 = local_58;
      uStack_64 = local_54;
      uStack_60 = local_50;
      puVar8 = (ushort *)FUN_00808de4(&local_68);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_016d3fb4(puVar3);
      }
      goto LAB_0086c3d4;
    }
    if (ppppuVar4 != (undefined4 ****)&SUB_00000002) {
      local_44 = (ushort *)&SUB_00000002;
      local_48 = (int *)0x6;
      local_40 = ppppuVar4;
      puVar8 = (ushort *)FUN_0080a4c0(&local_48);
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar3 << 0x18 | (uint)(*puVar3 >> 8) << 0x10;
    }
    if (piVar2 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    *(undefined1 *)piVar11 = 1;
    *puVar10 = 1;
    if (ppppuVar4 != (undefined4 ****)&SUB_00000002) goto LAB_0086c3e0;
    uVar6 = FUN_016d5298(SUB84(*(double *)param_2[1] * 3.0517578125e-05 * 1000.0,0));
    uVar7 = 0;
    in_d16 = (double)VectorUnsignedToFloat(uVar1 >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
    in_d16 = ((double)CONCAT44(extraout_s1,uVar6) / 1000.0) * 25.0 * in_d16;
    uVar6 = extraout_r1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar6;
  uVar5 = 1;
  *(double *)(param_1 + 2) = in_d16;
LAB_0086c420:
  *(undefined1 *)(param_2 + 0xe) = uVar5;
  return;
}

