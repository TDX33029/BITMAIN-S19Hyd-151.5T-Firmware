// FUN_00679e40 @ 00679e40 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_00679e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00679a0c(&local_20);
  if ((char)local_20 == '\x01') {
LAB_00679e68:
    *param_1 = 2;
    param_1[1] = local_1c;
  }
  else {
    if (local_20._1_1_ == '\0') {
      uVar1 = 0;
    }
    else {
      FUN_0067a608(&local_20,*param_2);
      if (local_20 != 0) goto LAB_00679e68;
      uVar1 = 1;
      param_1[1] = local_1c;
      param_1[2] = uStack_18;
      param_1[3] = uStack_14;
    }
    *param_1 = uVar1;
  }
  return;
}

