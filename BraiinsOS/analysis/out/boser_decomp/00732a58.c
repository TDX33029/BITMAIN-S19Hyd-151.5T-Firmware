// FUN_00732a58 @ 00732a58 size=128 calls_out=1 calls_in=2
// strings: 

void FUN_00732a58(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_2 + 0x10) == 0x2f && *(int *)(param_2 + 0x14) == 0) {
    *(undefined1 *)param_1 = 0x4f;
    param_1[1] = 0;
  }
  else {
    FUN_007215f4(&local_20,param_2 + 0x118,param_3,param_2,(int *)(param_2 + 0x10));
    if ((char)local_20 == 'O') {
      param_1[1] = local_1c;
      *(undefined1 *)param_1 = 0x4f;
    }
    else {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = uStack_18;
      param_1[3] = uStack_14;
    }
  }
  return;
}

