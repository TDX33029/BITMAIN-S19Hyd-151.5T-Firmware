// FUN_000707bc @ 000707bc  size=288  callers=1
// program: bmminer


uint FUN_000707bc(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_838 [4];
  char local_834;
  char local_818 [2048];
  undefined4 local_18;
  undefined2 local_14;
  int local_10;
  undefined2 local_a;
  
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = 0x504aa55;
    local_14 = 0x504;
    memset(auStack_838,0,0x20);
    local_a = 0;
    local_10 = FUN_0006f67c(DAT_009451f0,&local_18,6,auStack_838,8);
    if (local_10 == 0) {
      uVar2 = (uint)(local_834 == '\x01');
    }
    else {
      builtin_strncpy(local_818,"power 0x05 cmd failed\n",0x17);
      FUN_0004948c(3,local_818,0);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

