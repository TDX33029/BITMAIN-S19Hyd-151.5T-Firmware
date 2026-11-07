// FUN_00bad054 @ 00bad054 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_00bad054(int *param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_24;
  undefined1 *local_20;
  undefined4 *local_18;
  undefined1 uStack_11;
  
  DataMemoryBarrier(0xb);
  if (*param_1 == 0) {
    return;
  }
  local_18 = &local_38;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uStack_28 = param_2[4];
  local_20 = &uStack_11;
  local_24 = param_1 + 1;
  FUN_015eedc4(param_1,1,&local_18,&DAT_01870f1c,&DAT_018ac9b8);
  return;
}

