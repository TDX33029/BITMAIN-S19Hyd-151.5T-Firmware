// FUN_019a3308 @ 019a3308 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_019a3308(undefined4 *param_1)

{
  int local_28;
  undefined1 *local_24;
  int iStack_20;
  
  FUN_00666814(&local_28);
  if (local_28 == -0x80000000) {
    FUN_019a31b0(param_1,local_24);
    *local_24 = 0;
    local_28 = iStack_20;
  }
  else {
    *param_1 = 0x80000001;
    param_1[1] = 2;
    param_1[2] = &DAT_01d27a70;
  }
  if (local_28 == 0) {
    return;
  }
  thunk_FUN_01be4678(local_24);
  return;
}

