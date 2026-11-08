// FUN_01582c38 @ 01582c38 size=96 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01582c38(int *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_24 [12];
  int *local_18;
  undefined *local_14;
  
  local_14 = &DAT_01603224;
  local_18 = param_1;
  FUN_00600d2c(auStack_24,&DAT_00590e71,&local_18);
  uVar1 = FUN_01584334(auStack_24);
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  return uVar1;
}

