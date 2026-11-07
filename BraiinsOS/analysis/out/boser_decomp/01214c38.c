// FUN_01214c38 @ 01214c38 size=92 calls_out=1 calls_in=3
// strings: 

void FUN_01214c38(undefined4 *param_1,int param_2,int param_3)

{
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_01ab440c(&local_1c,param_2 + 0x480,param_3 + -1);
  if (local_1c == 0) {
    param_2 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = local_1c;
    param_1[3] = local_18;
    param_1[4] = local_14;
  }
  param_1[5] = param_2;
  return;
}

