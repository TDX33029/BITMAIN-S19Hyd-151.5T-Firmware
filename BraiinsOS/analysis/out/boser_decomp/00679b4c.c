// FUN_00679b4c @ 00679b4c size=132 calls_out=2 calls_in=1
// strings: 

void FUN_00679b4c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  FUN_00679a0c(&local_28);
  if ((char)local_28 != '\x01') {
    if (local_28._1_1_ == '\0') {
      *(undefined1 *)(param_1 + 3) = 3;
      return;
    }
    FUN_00679f40(&local_28,*param_2);
    if ((char)local_1c != '\x03') {
      *param_1 = local_28;
      param_1[1] = local_24;
      param_1[2] = uStack_20;
      param_1[3] = local_1c;
      param_1[4] = uStack_18;
      return;
    }
    local_24 = local_28;
  }
  *param_1 = local_24;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

