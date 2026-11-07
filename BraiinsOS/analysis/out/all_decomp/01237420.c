// FUN_01237420 @ 01237420 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_01237420(undefined4 param_1)

{
  undefined4 *local_18;
  undefined4 **local_14;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d8a30 != 0) {
    local_14 = &local_18;
    local_18 = &DAT_018d8a30;
    FUN_015eedc4(&DAT_018d8a30,1,&local_14,&DAT_0188ac48,&DAT_018ac9b8);
  }
  FUN_0123749c(param_1,DAT_018d8a34 + 8);
  return;
}

