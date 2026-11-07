// FUN_01211ae8 @ 01211ae8 size=88 calls_out=2 calls_in=0
// strings: 

bool FUN_01211ae8(undefined4 param_1,undefined4 param_2)

{
  uint local_14;
  undefined4 local_10;
  
  FUN_00fdb110(&local_14,&DAT_0038c9cf,param_1,param_2);
  if ((local_14 & 0x7fffffff) == 0) {
    return local_14 != 0x80000000;
  }
  thunk_FUN_016d3fb4(local_10);
  return local_14 != 0x80000000;
}

