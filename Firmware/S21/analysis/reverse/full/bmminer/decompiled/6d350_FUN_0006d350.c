// FUN_0006d350 @ 0006d350  size=888  callers=1
// program: bmminer


uint FUN_0006d350(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char acStack_82c [2048];
  undefined4 local_2c;
  byte local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  ushort local_10;
  ushort local_e;
  uint local_c;
  
  local_c = 0x80000200;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_009451bc);
  local_11 = 4;
  local_1c = 0;
  local_18 = 0;
  local_2c = 0;
  local_28 = 0;
  local_e = 0x1b;
  local_24 = 0x55;
  local_20 = 0;
  local_10 = 6;
  uVar1 = FUN_0006295c(param_1,&local_24,6);
  if (uVar1 == local_10) {
    usleep(300000);
    iVar2 = FUN_000628b0(param_1,&local_2c,5);
    if (iVar2 == 5) {
      if ((local_2c._1_1_ == '\x17') && ((char)local_2c == '\x05')) {
        local_e = 0;
        for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
          local_e = (byte)acStack_82c[local_10 + 0x800] + local_e;
        }
        if ((local_e >> 8 == (ushort)local_2c._3_1_) && ((local_e & 0xff) == (ushort)local_28)) {
          local_c = local_2c >> 0x10 & 0xff;
        }
        else {
          snprintf(acStack_82c,0x800,"%s failed 2!\n","_bitmain_pic_get_sw_ver_common");
          FUN_0004948c(0,acStack_82c,0);
          FUN_0006d0d0("read return data",&local_2c,5);
        }
      }
      else {
        snprintf(acStack_82c,0x800,"%s failed!\n","_bitmain_pic_get_sw_ver_common");
        FUN_0004948c(0,acStack_82c,0);
        FUN_0006d0d0("read return data",&local_2c,5);
      }
    }
    else {
      snprintf(acStack_82c,0x800,"%s read iic err\n","_bitmain_pic_get_sw_ver_common");
      FUN_0004948c(0,acStack_82c,0);
    }
  }
  else {
    snprintf(acStack_82c,0x800,"%s write iic err\n","_bitmain_pic_get_sw_ver_common");
    FUN_0004948c(0,acStack_82c,0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451bc);
  return local_c;
}

