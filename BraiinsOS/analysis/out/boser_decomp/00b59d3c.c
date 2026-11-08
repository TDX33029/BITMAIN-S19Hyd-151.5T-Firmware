// FUN_00b59d3c @ 00b59d3c size=168 calls_out=2 calls_in=4
// strings: 

void FUN_00b59d3c(undefined4 param_1)

{
  undefined *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined **local_18;
  undefined1 *local_14;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ebc8 != 2) {
    FUN_01265410();
  }
  DataMemoryBarrier(0xb);
  local_28 = &DAT_01d4ebb0;
  if (DAT_01d4ebc8 != 2) {
    FUN_01265410();
  }
  local_24 = &DAT_01d4ebbc;
  local_18 = &local_24;
  local_14 = &LAB_0193a90c;
  local_1c = &LAB_0193a90c;
  local_20 = (undefined1 *)&local_28;
  FUN_00664898(param_1,&DAT_0058ac1e,&local_20);
  return;
}

