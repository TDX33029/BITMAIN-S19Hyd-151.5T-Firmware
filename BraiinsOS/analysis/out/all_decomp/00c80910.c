// FUN_00c80910 @ 00c80910 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_00c80910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  
  FUN_00c63a28(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      param_1[2] = &DAT_3b9aca00;
      return;
    }
    FUN_00c4ceb8(&local_20,*param_2);
    if (local_18 != &DAT_3b9aca00) {
      param_1[2] = local_18;
      *param_1 = local_20;
      param_1[1] = local_1c;
      return;
    }
    local_1c = local_20;
  }
  param_1[2] = 0x3b9aca01;
  *param_1 = local_1c;
  return;
}

