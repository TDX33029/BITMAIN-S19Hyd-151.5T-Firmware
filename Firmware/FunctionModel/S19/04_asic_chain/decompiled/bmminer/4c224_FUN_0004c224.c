// FUN_0004c224 @ 0004c224  size=452  callers=0
// program: bmminer


int FUN_0004c224(uint param_1)

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
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n","disable_dc_dc",param_1);
    FUN_00032218(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (iVar1 = FUN_0004b97c(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             "disable_dc_dc",param_1);
    FUN_00032218(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  local_828 = 0x1505aa55;
  local_820 = 0;
  local_81c = 0;
  local_82c = 0;
  local_824 = 0x1a0000;
  iVar1 = FUN_00050d00(uVar3,&local_828,7);
  if (iVar1 == 7) {
    usleep(300000);
    iVar1 = FUN_00050c78(uVar3,&local_82c,2);
    if (iVar1 != 2) {
      __format = "%s read iic err\n";
      goto LAB_0004c354;
    }
    if (((byte)local_82c == 0x15) && (local_82c._1_1_ == 1)) goto LAB_0004c2f0;
    snprintf(acStack_818,0x800,
             "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
             "_bitmain_pic_disable_dc_dc_common",(uint)(byte)local_82c,(uint)local_82c._1_1_);
    FUN_00032218(0,acStack_818);
  }
  else {
    __format = "%s write iic err\n";
LAB_0004c354:
    snprintf(acStack_818,0x800,__format,"_bitmain_pic_disable_dc_dc_common");
    FUN_00032218(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_0004c2f0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return iVar2;
}

