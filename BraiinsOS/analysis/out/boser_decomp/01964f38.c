// FUN_01964f38 @ 01964f38 size=120 calls_out=2 calls_in=4
// strings: 

void FUN_01964f38(undefined4 *param_1,undefined4 *param_2)

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
      uVar1 = 6;
      goto LAB_01964fa4;
    }
    FUN_019646d0(&local_30,*param_2);
    if ((char)local_30 != '\x06') {
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
  uVar1 = 7;
LAB_01964fa4:
  *(undefined1 *)param_1 = uVar1;
  return;
}

