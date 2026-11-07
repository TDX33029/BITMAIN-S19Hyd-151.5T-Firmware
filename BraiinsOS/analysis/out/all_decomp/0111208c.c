// FUN_0111208c @ 0111208c size=332 calls_out=8 calls_in=2
// strings: 

void FUN_0111208c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_19;
  
  uVar1 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  case 0:
    break;
  default:
    uVar3 = *param_2;
    local_34 = param_2[1];
    local_30 = param_2[2];
    local_2c = param_2[3];
    uStack_28 = param_2[4];
    uStack_24 = param_2[5];
    local_38._0_1_ = (char)uVar3;
    bVar5 = (char)local_38 == '\x01';
    local_38 = uVar3;
    if (bVar5) {
      local_38._1_1_ = (undefined1)((uint)uVar3 >> 8);
      uVar1 = local_38._1_1_;
      FUN_01111ad8(&local_38);
      *(undefined1 *)(param_1 + 1) = uVar1;
      *param_1 = &DAT_8000000c;
      return;
    }
    goto LAB_011121a4;
  case 3:
    uVar3 = param_2[2];
    iVar4 = param_2[3];
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
    }
    FUN_016dd1aa(iVar2,uVar3,iVar4);
    uVar1 = 3;
    local_34 = iVar4;
    local_30 = iVar2;
    local_2c = iVar4;
    break;
  case 4:
    FUN_01126e90((uint)&local_38 | 4,param_2 + 1);
    uVar1 = 4;
    break;
  case 5:
    if (param_2[3] == 0) {
      local_2c = 0;
      local_34 = 0;
    }
    else {
      if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_01123828((uint)&local_38 | 4,param_2[1],param_2[2]);
    }
    uVar1 = 5;
  }
  local_38 = CONCAT31(local_38._1_3_,uVar1);
LAB_011121a4:
  uVar3 = FUN_00f36124(&local_38,&uStack_19,&DAT_01887588);
  FUN_01111ad8(&local_38);
  param_1[1] = uVar3;
  *param_1 = 0x80000003;
  return;
}

