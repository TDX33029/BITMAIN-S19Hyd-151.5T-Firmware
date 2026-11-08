// FUN_010f21d0 @ 010f21d0 size=496 calls_out=8 calls_in=1
// strings: 

void FUN_010f21d0(uint *param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  int *local_34;
  ushort *local_30;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 0:
    uVar4 = *param_2;
    uVar3 = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    param_2[9] = uVar4;
LAB_010f224c:
    param_2[5] = uVar4;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    *(undefined1 *)(param_2 + 6) = uVar3;
    param_2[1] = 2;
    param_2[2] = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018861f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018861f4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x29)) {
    case 0:
      uVar3 = *(undefined1 *)(param_2 + 10);
      uVar4 = param_2[9];
      goto LAB_010f224c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    }
  }
  puVar8 = (undefined1 *)((int)param_2 + 0x29);
  puVar6 = param_2 + 2;
  FUN_010ee5e8(&local_34,puVar6);
  puVar2 = local_30;
  piVar1 = local_34;
  if (local_34 == (int *)0x80000001) {
    *puVar8 = 3;
  }
  else {
    FUN_00868aa0(puVar6);
    if (piVar1 == (int *)0x80000000) {
      puVar5 = puVar2;
LAB_010f2368:
      *param_1 = 1;
      param_1[1] = (uint)puVar5;
      *puVar8 = 1;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    if (local_2c != (int *)param_2[1]) {
      local_38 = (int)local_2c;
      local_28 = &LAB_00fac484;
      local_30 = (ushort *)&LAB_00fac484;
      local_34 = param_2 + 1;
      local_2c = &local_38;
      FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
      local_58 = local_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
      puVar5 = (ushort *)FUN_010f66dc(&local_58);
      if (piVar1 != (int *)0x0) {
        thunk_FUN_016d3fb4(puVar2);
      }
      goto LAB_010f2368;
    }
    if (local_2c == (int *)0x2) {
      uVar7 = (uint)*puVar2 << 0x18 | (uint)(*puVar2 >> 8) << 0x10;
    }
    else {
      local_30 = (ushort *)&SUB_00000002;
      local_34 = (int *)0x6;
      puVar6 = (undefined4 *)FUN_010f683c(&local_34);
      uVar7 = 1;
    }
    if (piVar1 != (int *)0x0) {
      thunk_FUN_016d3fb4(puVar2);
    }
    *param_1 = uVar7;
    param_1[1] = (uint)puVar6;
    uVar3 = 1;
    *puVar8 = 1;
    if ((uVar7 & 0xffff) != 2) goto LAB_010f2298;
  }
  *(undefined2 *)param_1 = 2;
  uVar3 = 3;
LAB_010f2298:
  *(undefined1 *)(param_2 + 0xb) = uVar3;
  return;
}

