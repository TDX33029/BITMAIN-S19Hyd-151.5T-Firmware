// FUN_0198245c @ 0198245c size=156 calls_out=2 calls_in=4
// strings: 

void FUN_0198245c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int local_28;
  undefined1 *local_24;
  int iStack_20;
  
  FUN_00666814(&local_28);
  if (local_28 == -0x80000000) {
    (*param_4)(param_1,1,local_24,iStack_20);
    *local_24 = 0;
    local_28 = iStack_20;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 2;
    param_1[2] = &DAT_01d27a70;
  }
  if (local_28 == 0) {
    return;
  }
  thunk_FUN_01be4678(local_24);
  return;
}

