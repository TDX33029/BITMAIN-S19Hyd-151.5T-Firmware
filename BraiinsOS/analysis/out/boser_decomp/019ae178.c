// FUN_019ae178 @ 019ae178 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_019ae178(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_28;
  undefined1 *local_24;
  int iStack_20;
  
  FUN_00666814(&local_28);
  if (local_28 == -0x80000000) {
    uVar1 = FUN_01be2d48(local_24);
    param_1[1] = uVar1;
    *(undefined1 *)param_1 = 4;
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

