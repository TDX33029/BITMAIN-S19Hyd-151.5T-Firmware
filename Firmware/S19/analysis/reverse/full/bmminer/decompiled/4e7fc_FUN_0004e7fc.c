// FUN_0004e7fc @ 0004e7fc  size=352  callers=0
// program: bmminer


uint FUN_0004e7fc(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_838;
  undefined2 local_834;
  undefined1 auStack_830 [4];
  byte local_82c;
  byte local_82b;
  byte local_82a;
  byte local_829;
  uint local_828;
  char local_810 [2048];
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    local_828 = 0xffffffff;
  }
  else {
    local_838 = 0xe04aa55;
    local_834 = 0xe04;
    memset(auStack_830,0,0x20);
    if (param_1 != 0) {
      local_834 = CONCAT11(0x8e,(undefined1)local_834);
      local_838 = CONCAT13(0x8e,(undefined3)local_838);
    }
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_838,6,auStack_830,0xe);
    if (iVar1 != 0) {
      builtin_strncpy(local_810,"Get power error code failed\n",0x1d);
      FUN_00032218(3,local_810,0);
      return 0xffffffff;
    }
    if (param_2 != 0) {
      snprintf(local_810,0x800,
               "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n"
               ,(uint)local_82c,(uint)local_82b,(uint)local_82a,(uint)local_829,local_828 & 0xff,
               local_828 >> 8 & 0xff,local_828 >> 0x10 & 0xff,local_828 >> 0x18,local_828);
      FUN_00032218(3,local_810,0);
      return local_828;
    }
  }
  return local_828;
}

