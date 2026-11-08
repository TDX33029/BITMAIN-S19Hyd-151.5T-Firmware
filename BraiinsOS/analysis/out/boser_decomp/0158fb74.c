// FUN_0158fb74 @ 0158fb74 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_0158fb74(undefined4 param_1)

{
  undefined4 *local_18;
  undefined4 **local_14;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ef30 != 0) {
    local_14 = &local_18;
    local_18 = &DAT_01d4ef30;
    FUN_019a768c(&DAT_01d4ef30,1,&local_14,&DAT_01cfc210,&DAT_01d293e0);
  }
  FUN_0158fbf0(param_1,DAT_01d4ef34 + 8);
  return;
}

