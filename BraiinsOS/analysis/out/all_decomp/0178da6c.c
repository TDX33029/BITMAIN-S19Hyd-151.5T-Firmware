// FUN_0178da6c @ 0178da6c size=144 calls_out=3 calls_in=1
// strings: 

int FUN_0178da6c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_0178d9b0();
  if (iVar1 == 0) {
    local_c = 1;
    if ((param_2 & 8) == 0) {
      local_c = FUN_0178d638(param_1,param_2 | 0x10);
    }
    iVar1 = FUN_0178da20(local_c);
  }
  return iVar1;
}

