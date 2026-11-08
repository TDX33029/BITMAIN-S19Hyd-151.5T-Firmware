// FUN_015f6600 @ 015f6600 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_015f6600(undefined4 *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 **local_14;
  
  local_28 = CONCAT31(local_28._1_3_,4);
  DataMemoryBarrier(0xb);
  if (DAT_018d91f8 != 0) {
    local_18 = &local_28;
    local_1c = &DAT_018d91fc;
    local_14 = &local_1c;
    FUN_015eedc4(&DAT_018d91f8,1,&local_14,&DAT_018ab050,&DAT_018ab018);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

