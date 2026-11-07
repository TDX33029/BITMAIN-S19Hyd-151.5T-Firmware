// FUN_0004d104 @ 0004d104  size=720  callers=0
// program: bmminer


size_t FUN_0004d104(uint param_1,int param_2,int param_3,void *param_4,size_t param_5)

{
  byte *__ptr;
  int iVar1;
  size_t sVar2;
  uint uVar3;
  char *__format;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  size_t __size;
  undefined4 uVar8;
  undefined4 local_834;
  undefined1 local_830;
  undefined1 local_82f;
  undefined1 local_82e;
  undefined1 local_82d;
  undefined1 local_82c;
  char acStack_828 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_828,0x800,"%s: Bad pic param, input chain is %d\n","app_read_data_from_flash",
             param_1);
    FUN_00032218(0,acStack_828);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (sVar7 = FUN_0004b97c(), (int)sVar7 < 0)) {
    snprintf(acStack_828,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             "app_read_data_from_flash",param_1);
    FUN_00032218(0,acStack_828,0);
    return sVar7;
  }
  __size = param_5 + 5;
  uVar8 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  __ptr = malloc(__size);
  sVar7 = param_5;
  if (0xf < (int)param_5) {
    sVar7 = 0x10;
  }
  local_834 = 0x3607aa55;
  uVar4 = sVar7 + 0x3d + param_3 + param_2 & 0xffff;
  local_830 = (undefined1)param_2;
  local_82f = (undefined1)param_3;
  local_82e = (undefined1)sVar7;
  local_82c = (undefined1)uVar4;
  local_82d = (undefined1)(uVar4 >> 8);
  iVar1 = FUN_00050d00(uVar8,&local_834,9);
  if (iVar1 == 9) {
    usleep(300000);
    sVar2 = FUN_00050c78(uVar8,__ptr,__size);
    if (__size == sVar2) {
      uVar4 = (uint)*__ptr;
      if (((__ptr[1] == 0x36) && (__ptr[2] == 1)) && (__size == uVar4)) {
        if ((int)(param_5 + 3) < 1) {
          uVar5 = 0;
          uVar3 = uVar5;
        }
        else {
          uVar5 = 0;
          uVar6 = 0;
          uVar3 = uVar4;
          while( true ) {
            uVar6 = uVar6 + 1 & 0xffff;
            uVar5 = uVar5 + uVar3 & 0xffff;
            if ((int)(param_5 + 3) <= (int)uVar6) break;
            uVar3 = (uint)__ptr[uVar6];
          }
          uVar3 = uVar5 >> 8;
        }
        if ((__ptr[param_5 + 3] == uVar3) && ((uint)__ptr[param_5 + 4] == (uVar5 & 0xff))) {
          memcpy(param_4,__ptr + 3,sVar7);
        }
        else {
          sVar7 = 0;
          snprintf(acStack_828,0x800,"%s failed 2!\n","_app_read_data_from_flash_1704_v8");
          FUN_00032218(0,acStack_828,0);
          FUN_0004c908(__ptr,uVar4);
        }
      }
      else {
        snprintf(acStack_828,0x800,
                 "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n"
                 ,"_app_read_data_from_flash_1704_v8",uVar4,(uint)__ptr[1],(uint)__ptr[2]);
        sVar7 = 0;
        FUN_00032218(0,acStack_828);
        FUN_0004c908(__ptr,__size);
      }
      goto LAB_0004d1e8;
    }
    __format = "%s read iic 2 err\n";
  }
  else {
    __format = "%s write iic 2 err\n";
  }
  sVar7 = 0;
  snprintf(acStack_828,0x800,__format,"_app_read_data_from_flash_1704_v8");
  FUN_00032218(0,acStack_828,0);
LAB_0004d1e8:
  free(__ptr);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return sVar7;
}

