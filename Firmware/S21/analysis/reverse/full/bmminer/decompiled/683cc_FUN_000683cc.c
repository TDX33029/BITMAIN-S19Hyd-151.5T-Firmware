// FUN_000683cc @ 000683cc  size=212  callers=3
// program: bmminer


undefined4 FUN_000683cc(undefined4 *param_1,undefined4 param_2)

{
  void *local_14;
  void *local_10;
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 == (undefined4 *)0x0) {
    local_c = 0x1f5;
  }
  else {
    local_10 = (void *)FUN_000694f4(*param_1,param_2);
    if (local_10 != (void *)0x0) {
      FUN_00069eec(*(undefined4 *)((int)local_10 + 0x10),&local_14);
      free(local_14);
      FUN_00069fcc(*(undefined4 *)((int)local_10 + 0x10));
      FUN_00069eec(*(undefined4 *)((int)local_10 + 0x14),&local_14);
      free(local_14);
      FUN_00069fcc(*(undefined4 *)((int)local_10 + 0x14));
      free(local_10);
    }
  }
  return local_c;
}

