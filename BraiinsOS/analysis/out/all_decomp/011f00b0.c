// FUN_011f00b0 @ 011f00b0 size=428 calls_out=7 calls_in=1
// strings: 

int FUN_011f00b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_8) {
  case 0:
    uVar1 = 0;
    break;
  default:
    local_a8 = *param_8;
    local_a4 = param_8[1];
    local_a0 = param_8[2];
    local_9c = param_8[3];
    uStack_98 = param_8[4];
    uStack_94 = param_8[5];
    goto LAB_011f01b8;
  case 3:
    iVar3 = param_8[3];
    uVar4 = param_8[2];
    if (iVar3 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar3);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar3);
      }
    }
    FUN_016dd1aa(iVar2,uVar4,iVar3);
    uVar1 = 3;
    local_a4 = iVar3;
    local_a0 = iVar2;
    local_9c = iVar3;
    break;
  case 4:
    FUN_0115c22c((uint)&local_a8 | 4,param_8 + 1);
    uVar1 = 4;
    break;
  case 5:
    if (param_8[3] == 0) {
      local_9c = 0;
      local_a4 = 0;
    }
    else {
      if (param_8[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c((uint)&local_a8 | 4,param_8[1],param_8[2]);
    }
    uVar1 = 5;
  }
  local_a8 = CONCAT31(local_a8._1_3_,uVar1);
LAB_011f01b8:
  puVar5 = (undefined4 *)((uint)&local_c8 | 4);
  *puVar5 = local_a8;
  puVar5[1] = local_a4;
  puVar5[2] = local_a0;
  puVar5[3] = local_9c;
  puVar5[4] = uStack_98;
  puVar5[5] = uStack_94;
  local_4c = param_7;
  local_50 = 6;
  local_88 = &DAT_80000013;
  local_84 = local_c8;
  uStack_80 = uStack_c4;
  uStack_7c = uStack_c0;
  local_78 = local_bc;
  uStack_74 = uStack_b8;
  uStack_70 = uStack_b4;
  uStack_6c = uStack_b0;
  local_34 = param_6;
  local_a8 = 1;
  local_38 = param_5;
  local_a4 = param_3;
  local_a0 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar3 = thunk_FUN_016d4a50(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar3,&local_a8,0x80);
  return iVar3;
}

