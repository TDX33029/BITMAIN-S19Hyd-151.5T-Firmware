// FUN_01961644 @ 01961644 size=208 calls_out=3 calls_in=4
// strings: 

void FUN_01961644(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == (undefined4 *)0x0) {
    *(undefined1 *)param_1 = 6;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    local_30 = *param_2;
    uStack_2c = param_2[1];
    local_28 = param_2[2];
    uStack_24 = param_2[3];
    uStack_20 = param_2[4];
    uStack_1c = param_2[5];
    goto LAB_01961718;
  case 2:
    local_28 = param_2[2];
    uStack_24 = param_2[3];
    uStack_20 = param_2[4];
    uStack_1c = param_2[5];
    uVar1 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_30 | 4,param_2[2],param_2[3]);
    uVar1 = 3;
    break;
  case 4:
    FUN_01961458((uint)&local_30 | 4,param_2[2],param_2[3]);
    uVar1 = 4;
    break;
  case 5:
    FUN_01960d00((uint)&local_30 | 4,param_2 + 1);
    uVar1 = 5;
  }
  local_30 = CONCAT31(local_30._1_3_,uVar1);
LAB_01961718:
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = local_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  return;
}

