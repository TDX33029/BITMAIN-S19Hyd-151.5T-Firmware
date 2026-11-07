// FUN_006eb9b4 @ 006eb9b4 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_006eb9b4(undefined4 *param_1,uint *param_2)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*param_2 & 1) == 0) {
    *(undefined1 *)param_1 = 6;
    return;
  }
  FUN_0157a2e8((int)*(undefined8 *)(param_2 + 4),&local_30);
  if ((char)local_30 == '\x06') {
    *(undefined1 *)param_1 = 6;
    FUN_011e1b28((uint)&local_30 | 4);
    return;
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  return;
}

