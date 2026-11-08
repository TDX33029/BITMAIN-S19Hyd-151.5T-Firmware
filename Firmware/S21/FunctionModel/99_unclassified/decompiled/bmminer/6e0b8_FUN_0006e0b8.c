// FUN_0006e0b8 @ 0006e0b8  size=668  callers=1
// program: bmminer


undefined4 FUN_0006e0b8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char acStack_82c [2048];
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  ushort local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_c = 0x80000200;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_009451bc);
  local_11 = 4;
  local_1c = 0;
  local_18 = 0;
  local_2c = 0;
  local_28 = 0;
  local_e = 0x1a;
  local_24 = 0x55;
  local_20 = 0;
  local_10 = 6;
  uVar1 = FUN_0006295c(param_1,&local_24,6);
  if (uVar1 == local_10) {
    usleep(10000);
    iVar2 = FUN_000628b0(param_1,&local_2c,6);
    if (iVar2 == 6) {
      if ((local_2c._1_1_ == '\x16') && (local_2c._2_1_ == '\x01')) {
        local_c = 0;
      }
      else {
        snprintf(acStack_82c,0x800,"%s failed!\n","_bitmain_pic_heart_beat_common");
        FUN_0004948c(0,acStack_82c,0);
        FUN_0006d0d0("read return data",&local_2c,6);
      }
    }
    else {
      snprintf(acStack_82c,0x800,"%s read iic err\n","_bitmain_pic_heart_beat_common");
      FUN_0004948c(0,acStack_82c,0);
    }
  }
  else {
    snprintf(acStack_82c,0x800,"%s write iic err\n","_bitmain_pic_heart_beat_common");
    FUN_0004948c(0,acStack_82c,0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451bc);
  return local_c;
}

