// FUN_000667c0 @ 000667c0  size=184  callers=0
// program: bmminer


undefined4 FUN_000667c0(int param_1)

{
  int iVar1;
  char local_80c [2048];
  undefined4 local_c;
  
  local_c = 0;
  if (DAT_0094507c != 0) {
    iVar1 = close(param_1);
    if (iVar1 != 0) {
      builtin_strncpy(local_80c,"lcd close failed!!!\n",0x15);
      FUN_0004948c(0,local_80c,0);
      local_c = 0xffffffff;
    }
    DAT_0094507c = 0;
  }
  return local_c;
}

