// FUN_0004da28 @ 0004da28  size=800
// callers: []

size_t FUN_0004da28(uint param_1,uint param_2,uint param_3,void *param_4,size_t param_5)

{
  size_t sVar1;
  int iVar2;
  uint param5;
  char *__format;
  uint uVar3;
  uint param4;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_848;
  undefined1 local_844;
  undefined1 local_843;
  undefined1 local_842;
  undefined1 local_841;
  undefined4 local_840;
  byte local_83c [20];
  char acStack_828 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_828,0x800,"%s: Bad pic param, input chain is %d\n",DAT_0004dd4c,param_1);
    FUN_00032218(0,acStack_828);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (sVar1 = FUN_0004b97c(), (int)sVar1 < 0)) {
    snprintf(acStack_828,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_0004dd4c,param_1);
    FUN_00032218(0,acStack_828,0);
    return sVar1;
  }
  uVar4 = 0;
  sVar1 = FUN_0004c5c0(*(undefined4 *)(&DAT_00b2d298 + param_1 * 8),param_2,param_3,0,0);
  if ((int)sVar1 < 0) {
    snprintf(acStack_828,0x800,"%s: select slave: 0x%02x, reg/command: 0x%02x is failed",
             DAT_0004dd4c,param_2,param_3);
    FUN_00032218(0,acStack_828,0);
    return sVar1;
  }
  usleep(10000);
  uVar5 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  if (0xf < (int)param_5) {
    param_5 = 0x10;
  }
  uVar3 = param_5 + 0x42 + param_2 & 0xffff;
  local_843 = (undefined1)param_5;
  local_841 = (undefined1)uVar3;
  local_840 = 0;
  local_844 = (undefined1)param_2;
  local_83c[0] = 0;
  local_83c[1] = 0;
  local_83c[2] = 0;
  local_83c[3] = 0;
  local_842 = (undefined1)(uVar3 >> 8);
  local_83c[4] = 0;
  local_83c[5] = 0;
  local_83c[6] = 0;
  local_83c[7] = 0;
  local_83c[8] = 0;
  local_83c[9] = 0;
  local_83c[10] = 0;
  local_83c[0xb] = 0;
  local_83c[0xc] = 0;
  local_83c[0xd] = 0;
  local_83c[0xe] = 0;
  local_83c[0xf] = 0;
  local_83c[0x10] = 0;
  local_83c[0x11] = 0;
  local_848 = 0x3c06aa55;
  iVar2 = FUN_00050d00(uVar5,&local_848);
  if (iVar2 == 8) {
    uVar6 = param_5 + 5;
    usleep(10000);
    uVar3 = FUN_00050c78(uVar5,&local_840,uVar6);
    if (uVar6 == uVar3) {
      param4 = local_840 & 0xff;
      param5 = local_840 >> 8 & 0xff;
      uVar3 = local_840 >> 0x10 & 0xff;
      if (((uVar6 == param4) && (param5 == 0x3c)) && (uVar3 == 1)) {
        uVar3 = 0;
        if (0 < (int)(param_5 + 3)) {
          while( true ) {
            uVar4 = uVar4 + 1 & 0xffff;
            uVar3 = uVar3 + param4 & 0xffff;
            if ((int)(param_5 + 3) <= (int)uVar4) break;
            param4 = (uint)local_83c[uVar4 - 4];
          }
          uVar4 = uVar3 >> 8;
        }
        if ((local_83c[param_5 - 1] == uVar4) && ((uint)local_83c[param_5] == (uVar3 & 0xff))) {
          memcpy(param_4,(void *)((int)&local_840 + 3),param_5);
        }
        else {
          snprintf(acStack_828,0x800,"%s failed 2!\n",DAT_0004dd48);
          param_5 = 0;
          FUN_00032218(0,acStack_828);
        }
      }
      else {
        param_5 = 0;
        snprintf(acStack_828,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n"
                 ,DAT_0004dd48,param4,param5,uVar3);
        FUN_00032218(0,acStack_828,0);
      }
      goto LAB_0004db38;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  param_5 = 0;
  snprintf(acStack_828,0x800,__format,DAT_0004dd48);
  FUN_00032218(0,acStack_828,0);
LAB_0004db38:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return param_5;
}


