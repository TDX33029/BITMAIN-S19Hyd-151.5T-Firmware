// FUN_000608e4 @ 000608e4  size=352  callers=2
// program: bmminer


undefined4 FUN_000608e4(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_830 [8];
  undefined4 local_828;
  char acStack_30 [18];
  undefined1 auStack_1e [14];
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_10 = socket(2,1,0);
  if (local_10 < 0) {
    builtin_strncpy(local_830,"error so",8);
    local_828 = CONCAT13(local_828._3_1_,0x6b63);
    FUN_0004948c(0,local_830,0);
    uVar2 = 0xffffffff;
  }
  else {
    strcpy(acStack_30,param_1);
    iVar1 = ioctl(local_10,0x8927,acStack_30);
    if (iVar1 < 0) {
      builtin_strncpy(local_830,"error io",8);
      local_828._0_1_ = 'c';
      local_828._1_1_ = 't';
      local_828._2_1_ = 'l';
      local_828._3_1_ = '\0';
      FUN_0004948c(0,local_830,0);
      close(local_10);
      uVar2 = 0xfffffffe;
    }
    else {
      for (local_c = 0; local_c < 6; local_c = local_c + 1) {
        *(undefined1 *)(param_2 + local_c) = auStack_1e[local_c];
      }
      close(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}

