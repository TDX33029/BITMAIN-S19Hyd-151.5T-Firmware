// FUN_00bcce08 @ 00bcce08 size=632 calls_out=10 calls_in=0
// strings: 

undefined4 FUN_00bcce08(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = param_1[2];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871d48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871d48);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x61)) {
    case 0:
      iVar4 = param_1[0x14];
      uVar1 = param_1[0x15];
      uVar7 = *(undefined8 *)(param_1 + 4);
      goto LAB_00bcced8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871ec8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x4d)) {
      case 0:
        iVar4 = param_1[0xf];
        uVar7 = *(undefined8 *)(param_1 + 6);
        goto LAB_00bccf3c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(0x1872228);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(0x1872228);
      }
    }
    goto switchD_00bcd04c_caseD_3;
  }
  FUN_00bd2dc0(&local_40,param_1 + 5);
  if ((local_40 & 1) == 0) {
    uVar7 = CONCAT44(uStack_34,local_38);
    iVar4 = param_1[4];
    uVar1 = 0x80000000;
    *(undefined8 *)(param_1 + 4) = uVar7;
    param_1[0x14] = iVar4;
    param_1[0x15] = 0x80000000;
    *(undefined1 *)((int)param_1 + 0x61) = 0;
LAB_00bcced8:
    uVar5 = param_1[0x16];
    uVar6 = param_1[0x17];
    *(undefined1 *)(param_1 + 0x18) = 1;
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b3614((int)uVar7,DAT_018d8008);
    }
    iVar4 = *(int *)(iVar4 + 0x2f4);
    *(undefined1 *)((int)param_1 + 0x4d) = 0;
    iVar4 = iVar4 + 8;
    param_1[0xf] = iVar4;
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar6;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 6) = uVar7;
LAB_00bccf3c:
    *(undefined1 *)(param_1 + 0x13) = 1;
    param_1[10] = iVar4;
    *(undefined8 *)(param_1 + 8) = uVar7;
    param_1[0xb] = 0xffffffff;
    param_1[0xc] = param_1[0x10];
    param_1[0xd] = param_1[0x11];
    param_1[0xe] = param_1[0x12];
switchD_00bcd04c_caseD_3:
    iVar4 = FUN_00c81384(param_1 + 10,param_2);
    if (iVar4 == 0) {
      uVar3 = 4;
      *(undefined1 *)((int)param_1 + 0x61) = 3;
      *(undefined1 *)((int)param_1 + 0x4d) = 3;
      uVar1 = 1;
    }
    else {
      iVar2 = param_1[10];
      if (iVar2 != 0) {
        FUN_00c81a4c(iVar2,param_1[0xb],1);
      }
      *(undefined8 *)(iVar4 + 0x80) = *(undefined8 *)(param_1 + 8);
      local_40 = param_1[0xc];
      uStack_3c = param_1[0xd];
      local_38 = param_1[0xe];
      *(undefined1 *)(param_1 + 0x13) = 0;
      if ((*(uint *)(iVar4 + 0x88) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x8c));
      }
      *(uint *)(iVar4 + 0x88) = local_40;
      *(undefined4 *)(iVar4 + 0x8c) = uStack_3c;
      *(undefined4 *)(iVar4 + 0x90) = local_38;
      FUN_00bd4644(iVar4 + 0x20);
      FUN_00c822ec(iVar4);
      *(undefined2 *)(param_1 + 0x13) = 0x100;
      FUN_00b214e8(param_1 + 6);
      *(undefined2 *)(param_1 + 0x18) = 0x100;
      uVar1 = 0;
      uVar3 = 1;
    }
  }
  else {
    uVar1 = 1;
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 3) = uVar3;
  return uVar1;
}

