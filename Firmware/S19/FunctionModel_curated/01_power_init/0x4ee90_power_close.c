// FUN_0004ee90 @ 0004ee90  size=128
// callers: [FUN_0004f1d4, FUN_0004f024]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ee90(void)

{
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [4];
  char acStack_7fc [4];
  char acStack_7f8 [4];
  char acStack_7f4 [4];
  undefined1 local_7f0;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc28);
  local_810[0] = s_bitmain_power_close_____________00072cf4[0];
  local_810[1] = s_bitmain_power_close_____________00072cf4[1];
  local_810[2] = s_bitmain_power_close_____________00072cf4[2];
  local_810[3] = s_bitmain_power_close_____________00072cf4[3];
  acStack_80c[0] = s_bitmain_power_close_____________00072cf4[4];
  acStack_80c[1] = s_bitmain_power_close_____________00072cf4[5];
  acStack_80c[2] = s_bitmain_power_close_____________00072cf4[6];
  acStack_80c[3] = s_bitmain_power_close_____________00072cf4[7];
  acStack_808[0] = s_bitmain_power_close_____________00072cf4[8];
  acStack_808[1] = s_bitmain_power_close_____________00072cf4[9];
  acStack_808[2] = s_bitmain_power_close_____________00072cf4[10];
  acStack_808[3] = s_bitmain_power_close_____________00072cf4[0xb];
  acStack_804[0] = s_bitmain_power_close_____________00072cf4[0xc];
  acStack_804[1] = s_bitmain_power_close_____________00072cf4[0xd];
  acStack_804[2] = s_bitmain_power_close_____________00072cf4[0xe];
  acStack_804[3] = s_bitmain_power_close_____________00072cf4[0xf];
  local_800[0] = s_bitmain_power_close_____________00072cf4[0x10];
  local_800[1] = s_bitmain_power_close_____________00072cf4[0x11];
  local_800[2] = s_bitmain_power_close_____________00072cf4[0x12];
  local_800[3] = s_bitmain_power_close_____________00072cf4[0x13];
  acStack_7fc[0] = s_bitmain_power_close_____________00072cf4[0x14];
  acStack_7fc[1] = s_bitmain_power_close_____________00072cf4[0x15];
  acStack_7fc[2] = s_bitmain_power_close_____________00072cf4[0x16];
  acStack_7fc[3] = s_bitmain_power_close_____________00072cf4[0x17];
  acStack_7f8[0] = s_bitmain_power_close_____________00072cf4[0x18];
  acStack_7f8[1] = s_bitmain_power_close_____________00072cf4[0x19];
  acStack_7f8[2] = s_bitmain_power_close_____________00072cf4[0x1a];
  acStack_7f8[3] = s_bitmain_power_close_____________00072cf4[0x1b];
  acStack_7f4[0] = s_bitmain_power_close_____________00072cf4[0x1c];
  acStack_7f4[1] = s_bitmain_power_close_____________00072cf4[0x1d];
  acStack_7f4[2] = s_bitmain_power_close_____________00072cf4[0x1e];
  acStack_7f4[3] = s_bitmain_power_close_____________00072cf4[0x1f];
  local_7f0 = (undefined1)ram0x00072d14;
  FUN_00032218(3,local_810,0);
  FUN_00050c08(DAT_0050fab8);
  memset(&DAT_0050fab8,0,0x170);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc28);
  return;
}


