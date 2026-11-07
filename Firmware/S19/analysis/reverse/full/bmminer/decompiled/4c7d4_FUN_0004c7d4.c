// FUN_0004c7d4 @ 0004c7d4  size=304  callers=0
// program: bmminer


undefined4 FUN_0004c7d4(undefined4 param_1)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  undefined2 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  char acStack_810 [2048];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  local_81c = 0xd000006;
  local_814 = 0;
  local_818 = 0;
  local_820 = 0x106aa55;
  local_824 = 0;
  iVar1 = FUN_00050d00(param_1,&local_820,8);
  if (iVar1 == 8) {
    usleep(300000);
    iVar1 = FUN_00050c78(param_1,&local_824,2);
    if (iVar1 == 2) {
      if (((byte)local_824 == 1) && (local_824._1_1_ == 1)) {
        uVar2 = 0;
      }
      else {
        snprintf(acStack_810,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 "_bitmain_pic_seek_1704",(uint)(byte)local_824,(uint)local_824._1_1_);
        uVar2 = 0x80000200;
        FUN_00032218(0,acStack_810);
      }
      goto LAB_0004c87c;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  snprintf(acStack_810,0x800,__format,"_bitmain_pic_seek_1704");
  FUN_00032218(0,acStack_810,0);
  uVar2 = 0x80000200;
LAB_0004c87c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return uVar2;
}

