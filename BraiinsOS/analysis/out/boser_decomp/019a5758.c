// FUN_019a5758 @ 019a5758 size=152 calls_out=2 calls_in=5
// strings: 

void FUN_019a5758(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5)

{
  int local_28;
  undefined1 *local_24;
  int iStack_20;
  
  FUN_00666814(&local_28);
  if (local_28 == -0x80000000) {
    (*param_5)(param_1,param_4,local_24,iStack_20);
    *local_24 = 0;
    local_28 = iStack_20;
  }
  else {
    *param_1 = 2;
    param_1[1] = &DAT_01d27a70;
  }
  if (local_28 == 0) {
    return;
  }
  thunk_FUN_01be4678(local_24);
  return;
}

