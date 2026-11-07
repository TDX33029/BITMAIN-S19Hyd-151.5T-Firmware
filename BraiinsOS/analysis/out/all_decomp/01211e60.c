// FUN_01211e60 @ 01211e60 size=220 calls_out=3 calls_in=0
// strings: 

bool FUN_01211e60(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint local_28;
  undefined4 local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00fdb110(&local_1c,&DAT_0038c1c7,param_1,param_2);
  if (local_1c == -0x80000000) {
    FUN_00601e84(&local_1c,param_1,param_2);
    FUN_00fdb110(&local_28,&DAT_0038c1c7,local_18,local_14);
    bVar1 = local_28 != 0x80000000;
    if ((local_28 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_24);
    }
    if (local_1c != 0) {
      thunk_FUN_016d3fb4(local_18);
      return bVar1;
    }
  }
  else {
    if (local_1c != 0) {
      thunk_FUN_016d3fb4(local_18);
    }
    bVar1 = true;
  }
  return bVar1;
}

