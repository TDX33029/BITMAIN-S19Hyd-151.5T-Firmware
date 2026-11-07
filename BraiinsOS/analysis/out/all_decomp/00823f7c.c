// FUN_00823f7c @ 00823f7c size=208 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_00823f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  char local_28;
  undefined1 local_24;
  char local_23;
  char local_22;
  
  FUN_00873008(&local_38,param_1,param_2,param_3);
  uVar2 = local_34;
  iVar1 = local_38;
  if (local_38 != -0x80000000) {
    FUN_00822174(&local_38,param_3);
    if ((char)local_38 != '\x01') {
      if (local_28 == local_38._1_1_) {
        if (iVar1 != 0) {
          thunk_FUN_016d3fb4(uVar2);
        }
        return 0;
      }
      local_22 = local_38._1_1_;
      local_23 = local_28;
      local_24 = 4;
      local_34 = FUN_0080b0cc(&local_24);
    }
    if (iVar1 == 0) {
      return local_34;
    }
    thunk_FUN_016d3fb4(uVar2);
  }
  return local_34;
}

