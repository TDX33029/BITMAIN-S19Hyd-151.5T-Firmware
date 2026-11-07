// FUN_014afb6c @ 014afb6c size=148 calls_out=3 calls_in=5
// strings: 

bool FUN_014afb6c(undefined4 param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined *local_28;
  undefined2 *local_24;
  undefined *local_20;
  code *local_1c;
  
  local_20 = &DAT_0056cf0c;
  local_24 = &DAT_0132b6a0;
  local_1c = FUN_012fbb84;
  local_28 = &DAT_01cf973c;
  FUN_00664898(&local_34,&DAT_0059d815,&local_28);
  bVar2 = false;
  if (local_2c <= param_2) {
    iVar1 = thunk_FUN_01bed842(local_30,param_1);
    bVar2 = iVar1 == 0;
  }
  FUN_019bb7e0(local_34,local_30);
  return bVar2;
}

