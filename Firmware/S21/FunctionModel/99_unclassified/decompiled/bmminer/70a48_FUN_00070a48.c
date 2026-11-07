// FUN_00070a48 @ 00070a48  size=508  callers=1
// program: bmminer


uint FUN_00070a48(char param_1,char param_2)

{
  int iVar1;
  undefined1 auStack_84c [4];
  byte local_848;
  byte local_847;
  byte local_846;
  byte local_845;
  uint local_844;
  char local_82c [2048];
  uint local_2c;
  undefined4 local_28;
  undefined2 local_24;
  int local_20;
  undefined2 local_1a;
  
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_2c = 0xffffffff;
  }
  else {
    local_28 = 0xe04aa55;
    local_24 = 0xe04;
    memset(auStack_84c,0,0x20);
    local_1a = 0;
    if (param_1 != '\0') {
      local_24 = CONCAT11(0x8e,(undefined1)local_24);
      local_28 = CONCAT13(0x8e,(undefined3)local_28);
    }
    local_20 = FUN_0006f67c(DAT_009451f0,&local_28,6,auStack_84c,0xe);
    if (local_20 == 0) {
      local_2c = local_844;
      if (param_2 != '\0') {
        snprintf(local_82c,0x800,
                 "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n"
                 ,(uint)local_848,(uint)local_847,(uint)local_846,(uint)local_845,local_844 & 0xff,
                 local_844 >> 8 & 0xff,local_844 >> 0x10 & 0xff,local_844 >> 0x18,local_844);
        FUN_0004948c(3,local_82c,0);
      }
    }
    else {
      builtin_strncpy(local_82c,"Get power error code failed\n",0x1d);
      FUN_0004948c(3,local_82c,0);
      local_2c = 0xffffffff;
    }
  }
  return local_2c;
}

