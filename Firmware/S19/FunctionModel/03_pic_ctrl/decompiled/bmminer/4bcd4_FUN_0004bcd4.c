// FUN_0004bcd4 @ 0004bcd4  size=412  callers=1
// program: bmminer


int FUN_0004bcd4(uint param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n","reset_pic",param_1);
    FUN_00032218(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (iVar1 = FUN_0004b97c(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             "reset_pic",param_1);
    FUN_00032218(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  local_828 = 0x704aa55;
  local_820 = 0;
  local_81c = 0;
  local_82c = 0;
  local_824 = 0xb00;
  iVar1 = FUN_00050d00(uVar3,&local_828,6);
  if (iVar1 == 6) {
    usleep(300000);
    iVar1 = FUN_00050c78(uVar3,&local_82c,2);
    if (iVar1 != 2) {
      __format = "%s read iic err\n";
      goto LAB_0004be10;
    }
    if (((char)local_82c == '\a') && (local_82c._1_1_ == '\x01')) goto LAB_0004bda0;
  }
  else {
    __format = "%s write iic err\n";
LAB_0004be10:
    snprintf(acStack_818,0x800,__format,"_bitmain_pic_reset_common");
    FUN_00032218(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_0004bda0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  usleep(500000);
  return iVar2;
}

