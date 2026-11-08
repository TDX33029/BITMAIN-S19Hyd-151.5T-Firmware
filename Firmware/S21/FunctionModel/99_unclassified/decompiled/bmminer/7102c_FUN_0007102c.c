// FUN_0007102c @ 0007102c  size=288  callers=1
// program: bmminer


undefined4 FUN_0007102c(void)

{
  int iVar1;
  undefined1 auStack_83c [4];
  undefined4 local_838;
  char local_81c [2052];
  undefined4 local_18;
  undefined2 local_14;
  int local_10;
  undefined2 local_a;
  
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_838 = 0xffffffff;
  }
  else {
    local_18 = 0xd04aa55;
    local_14 = 0xd04;
    memset(auStack_83c,0,0x20);
    local_a = 0;
    local_10 = FUN_0006f67c(DAT_009451f0,&local_18,6,auStack_83c,10);
    if (local_10 != 0) {
      builtin_strncpy(local_81c,"Get power update time failed\n",0x1e);
      FUN_0004948c(3,local_81c,0);
      local_838 = 0xffffffff;
    }
  }
  return local_838;
}

