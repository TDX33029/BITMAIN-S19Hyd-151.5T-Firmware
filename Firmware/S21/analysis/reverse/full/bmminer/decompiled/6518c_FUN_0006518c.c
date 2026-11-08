// FUN_0006518c @ 0006518c  size=172  callers=1
// program: bmminer


undefined4 FUN_0006518c(int param_1)

{
  int iVar1;
  char acStack_80c [2048];
  undefined4 local_c;
  
  local_c = 0x103;
  iVar1 = FUN_00067d24();
  if (param_1 == iVar1) {
    local_c = 0x100;
  }
  else {
    iVar1 = FUN_00067d64();
    if (param_1 == iVar1) {
      local_c = 0x101;
    }
    else {
      snprintf(acStack_80c,0x800,"unmaped port = %d\n",param_1);
      FUN_0004948c(0,acStack_80c,0);
    }
  }
  return local_c;
}

