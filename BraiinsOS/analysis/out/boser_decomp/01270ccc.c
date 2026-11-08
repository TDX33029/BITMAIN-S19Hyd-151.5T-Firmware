// FUN_01270ccc @ 01270ccc size=120 calls_out=2 calls_in=1
// strings: 

void FUN_01270ccc(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_01965170(&local_30);
  if ((char)local_30 != '\x01') {
    if (local_30._1_1_ == '\0') {
      uVar1 = 7;
      goto LAB_01270d38;
    }
    FUN_012733cc(&local_30,*param_2);
    if ((char)local_30 != '\a') {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = uStack_28;
      param_1[3] = uStack_24;
      param_1[4] = uStack_20;
      param_1[5] = uStack_1c;
      return;
    }
  }
  param_1[1] = local_2c;
  uVar1 = 8;
LAB_01270d38:
  *(undefined1 *)param_1 = uVar1;
  return;
}

