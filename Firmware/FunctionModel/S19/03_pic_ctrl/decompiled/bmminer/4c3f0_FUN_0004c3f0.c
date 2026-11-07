// FUN_0004c3f0 @ 0004c3f0  size=456  callers=1
// program: bmminer


int FUN_0004c3f0(uint param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n","send_pic_heart_beat",
             param_1);
    FUN_00032218(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (iVar1 = FUN_0004b97c(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             "send_pic_heart_beat",param_1);
    FUN_00032218(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  local_828 = 0x1604aa55;
  local_820 = 0;
  local_81c = 0;
  local_830 = 0;
  local_82c = 0;
  local_824 = 0x1a00;
  iVar1 = FUN_00050d00(uVar3,&local_828,6);
  if (iVar1 == 6) {
    usleep(10000);
    iVar1 = FUN_00050c78(uVar3,&local_830,6);
    if (iVar1 != 6) {
      __format = "%s read iic err\n";
      goto LAB_0004c520;
    }
    if ((local_830._1_1_ == '\x16') && (local_830._2_1_ == '\x01')) goto LAB_0004c4bc;
    snprintf(acStack_818,0x800,"%s failed!\n","_bitmain_pic_heart_beat_common");
    FUN_00032218(0,acStack_818);
    FUN_0004b828(&local_830,6);
  }
  else {
    __format = "%s write iic err\n";
LAB_0004c520:
    snprintf(acStack_818,0x800,__format,"_bitmain_pic_heart_beat_common");
    FUN_00032218(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_0004c4bc:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return iVar2;
}

