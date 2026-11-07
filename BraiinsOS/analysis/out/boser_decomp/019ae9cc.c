// FUN_019ae9cc @ 019ae9cc size=128 calls_out=1 calls_in=1
// strings: 

void FUN_019ae9cc(undefined4 *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 **local_14;
  
  local_28 = CONCAT31(local_28._1_3_,4);
  DataMemoryBarrier(0xb);
  if (DAT_01d5034c != 0) {
    local_18 = &local_28;
    local_1c = &DAT_01d50350;
    local_14 = &local_1c;
    FUN_019a768c(&DAT_01d5034c,1,&local_14,&DAT_01d27c88,&DAT_01d27c50);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

