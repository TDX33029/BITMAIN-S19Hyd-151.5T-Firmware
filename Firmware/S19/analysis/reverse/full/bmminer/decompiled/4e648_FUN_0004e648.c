// FUN_0004e648 @ 0004e648  size=204  callers=0
// program: bmminer


uint FUN_0004e648(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  char local_824;
  char local_808 [2048];
  
  bVar3 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar3 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar3 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_830 = 0x504aa55;
    local_82c = 0x504;
    memset(auStack_828,0,0x20);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,8);
    if (iVar1 != 0) {
      builtin_strncpy(local_808,"power 0x05 cmd failed\n",0x17);
      FUN_00032218(3,local_808,0);
      return 0xffffffff;
    }
    uVar2 = (uint)(local_824 == '\x01');
  }
  return uVar2;
}

