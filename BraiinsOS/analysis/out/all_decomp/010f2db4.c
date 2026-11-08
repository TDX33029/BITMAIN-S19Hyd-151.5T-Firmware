// FUN_010f2db4 @ 010f2db4 size=716 calls_out=10 calls_in=0
// strings: 

void FUN_010f2db4(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_68;
  ushort *local_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 ***local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x35)) {
  case 0:
    uVar6 = param_2[0xc];
    *(char *)(param_2 + 0xd) = *(char *)((int)param_2 + 0x36);
    if (*(char *)((int)param_2 + 0x36) != '\0') {
      local_68 = 0x80000000;
      goto LAB_010f2fbc;
    }
    *param_2 = uVar6;
    *(undefined1 *)(param_2 + 0xb) = 0;
LAB_010f2e74:
    uVar8 = 0;
    param_2[9] = uVar6;
    *(undefined2 *)(param_2 + 10) = 0;
LAB_010f2e88:
    param_2[5] = uVar6;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    *(undefined1 *)(param_2 + 6) = uVar8;
    param_2[1] = 2;
    param_2[2] = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886234);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886234);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      uVar6 = *param_2;
      goto LAB_010f2e74;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861f4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x29)) {
    case 0:
      uVar8 = *(undefined1 *)(param_2 + 10);
      uVar6 = param_2[9];
      goto LAB_010f2e88;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    }
  }
  puVar10 = param_2 + 0xb;
  puVar9 = (undefined1 *)((int)param_2 + 0x29);
  puVar7 = (ushort *)(param_2 + 2);
  FUN_010ee5e8(&local_34,puVar7);
  pppuVar5 = local_2c;
  puVar3 = local_30;
  piVar2 = local_34;
  if (local_34 == (int *)0x80000001) {
    *(undefined1 *)puVar10 = 3;
    *puVar9 = 3;
    *param_1 = 0x80000006;
    *(undefined1 *)((int)param_2 + 0x35) = 3;
    return;
  }
  FUN_00868aa0(puVar7);
  puVar4 = local_30;
  if (piVar2 == (int *)&DAT_80000000) {
    puVar7 = puVar3;
LAB_010f2fa4:
    *(undefined1 *)puVar10 = 1;
    *puVar9 = 1;
  }
  else {
    if (pppuVar5 != (undefined4 ***)param_2[1]) {
      local_2c = &local_38;
      local_38 = pppuVar5;
      local_28 = &LAB_00fac484;
      local_30 = (ushort *)&LAB_00fac484;
      local_34 = param_2 + 1;
      FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
      local_58 = local_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
      puVar7 = (ushort *)FUN_010f66dc(&local_58);
      if (piVar2 != (int *)0x0) {
        thunk_FUN_016d3fb4(puVar3);
      }
      goto LAB_010f2fa4;
    }
    if (pppuVar5 != (undefined4 ***)&SUB_00000002) {
      local_30 = (ushort *)&SUB_00000002;
      local_34 = (int *)&DAT_00000006;
      local_2c = pppuVar5;
      puVar7 = (ushort *)FUN_010f683c(&local_34);
      iVar11 = 0;
    }
    else {
      uVar1 = *puVar3;
      local_30._0_2_ = CONCAT11((byte)(uVar1 >> 0xf),(char)uVar1);
      local_30._3_1_ = SUB41(puVar4,3);
      local_30._0_3_ = CONCAT12((char)((uVar1 & 0x7fff) >> 8),(ushort)local_30);
      iVar11 = ((uint)(ushort)local_30 | ((uVar1 & 0x7fff) >> 8) << 0x10) << 8;
    }
    if (piVar2 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar3);
    }
    *(undefined1 *)puVar10 = 1;
    *puVar9 = 1;
    if (pppuVar5 == (undefined4 ***)&SUB_00000002) {
      local_5a = (undefined1)((uint)iVar11 >> 0x18);
      local_5c = (undefined2)((uint)iVar11 >> 8);
      FUN_010f319c(&local_34,&local_5c);
      if (local_34 == (int *)&DAT_00000001) {
        FUN_010f4fd4(&local_68,local_30);
      }
      else {
        local_64 = local_30;
        local_68 = 0x80000005;
      }
      goto LAB_010f2fbc;
    }
  }
  FUN_010f4fd4(&local_68,puVar7);
LAB_010f2fbc:
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = uStack_60;
  *(undefined1 *)((int)param_2 + 0x35) = 1;
  return;
}

