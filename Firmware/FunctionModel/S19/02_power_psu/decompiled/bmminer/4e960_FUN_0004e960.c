// FUN_0004e960 @ 0004e960  size=196  callers=0
// program: bmminer


undefined4 FUN_0004e960(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  undefined4 local_824;
  char local_808 [2048];
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    local_824 = 0xffffffff;
  }
  else {
    local_830 = 0xc04aa55;
    local_82c = 0xc04;
    memset(auStack_828,0,0x20);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
    if (iVar1 != 0) {
      builtin_strncpy(local_808,"Get power reset root cause failed\n",0x23);
      FUN_00032218(3,local_808,0);
      return 0xffffffff;
    }
  }
  return local_824;
}

