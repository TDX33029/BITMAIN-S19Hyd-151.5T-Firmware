// FUN_00c80890 @ 00c80890 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_00c80890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00c63a28(&local_18);
  if ((char)local_18 != '\x01') {
    if (local_18._1_1_ == '\0') {
      *param_1 = 0;
      return;
    }
    FUN_00c8063c(&local_18,*param_2);
    if (local_18 != 1) {
      *param_1 = 1;
      param_1[1] = local_14;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = local_14;
  return;
}

