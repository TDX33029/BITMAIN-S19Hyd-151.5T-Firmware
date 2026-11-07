// FUN_0004ce44 @ 0004ce44  size=696  callers=0
// program: bmminer


uint FUN_0004ce44(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  char *__format;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined2 local_84c;
  char local_848 [5];
  undefined1 local_843;
  char local_842 [2078];
  
  if (0xf < param_1) {
    snprintf(local_842 + 0x1a,0x800,"%s: Bad pic param, input chain is %d\n",
             "app_write_data_into_flash",param_1);
    FUN_00032218(0,local_842 + 0x1a);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (uVar9 = FUN_0004b97c(), (int)uVar9 < 0)) {
    snprintf(local_842 + 0x1a,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             "app_write_data_into_flash",param_1);
    FUN_00032218(0,local_842 + 0x1a,0);
    return uVar9;
  }
  uVar10 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  uVar9 = param_5;
  if (0xf < (int)param_5) {
    uVar9 = 0x10;
  }
  local_843 = (undefined1)param_3;
  local_848[2] = (char)(param_5 + 6);
  local_848[4] = (char)param_2;
  uVar6 = (param_5 + 6 & 0xff) + param_3 + 0x35 + param_2;
  uVar5 = (undefined2)uVar6;
  local_848[0] = 'U';
  local_848[1] = -0x56;
  local_84c = 0;
  local_842[0] = '\0';
  local_842[1] = '\0';
  local_842[2] = '\0';
  local_842[3] = '\0';
  local_842[4] = '\0';
  local_842[5] = '\0';
  local_842[6] = '\0';
  local_842[7] = '\0';
  local_842[8] = '\0';
  local_842[9] = '\0';
  local_842[10] = '\0';
  local_842[0xb] = '\0';
  local_842[0xc] = '\0';
  local_842[0xd] = '\0';
  local_842[0xe] = '\0';
  local_842[0xf] = '\0';
  local_842[0x10] = '\0';
  local_842[0x11] = '\0';
  local_842[0x12] = '\0';
  local_842[0x13] = '\0';
  local_842[0x14] = '\0';
  local_842[0x15] = '\0';
  local_842[0x16] = '\0';
  local_842[0x17] = '\0';
  local_842[0x18] = '\0';
  local_842[0x19] = '\0';
  local_848[3] = 0x35;
  if (0 < (int)param_5) {
    pbVar8 = (byte *)(param_4 + -1);
    uVar4 = 0;
    do {
      pbVar8 = pbVar8 + 1;
      uVar2 = (uint)*pbVar8;
      if (((uVar4 & 1) == 0) && (0x3f < uVar2)) {
        snprintf(local_842 + 0x1a,0x800,"%s: the data[%d] must less than 0x3f\n",
                 "_app_write_data_into_flash_1704_v8",uVar4);
        FUN_00032218(0,local_842 + 0x1a,0);
        uVar2 = (uint)*pbVar8;
      }
      uVar7 = uVar6 + uVar2;
      uVar3 = uVar4 + 1;
      local_842[uVar4] = (char)uVar2;
      uVar6 = uVar7 & 0xffff;
      uVar5 = (undefined2)uVar7;
      uVar4 = uVar3;
    } while ((int)uVar3 < (int)uVar9);
  }
  uVar6 = uVar9 & 0xffff;
  uVar4 = uVar6 + 8 & 0xffff;
  local_848[uVar6 + 6 & 0xffff] = (char)((ushort)uVar5 >> 8);
  local_848[uVar6 + 7 & 0xffff] = (char)uVar5;
  uVar6 = FUN_00050d00(uVar10,local_848,uVar4);
  if (uVar6 == uVar4) {
    usleep(300000);
    iVar1 = FUN_00050c78(uVar10,&local_84c,2);
    if (iVar1 == 2) {
      if (((byte)local_84c != 0x35) || (local_84c._1_1_ != 1)) {
        uVar9 = 0;
        snprintf(local_842 + 0x1a,0x800,
                 "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 "_app_write_data_into_flash_1704_v8",(uint)(byte)local_84c,(uint)local_84c._1_1_);
        FUN_00032218(0,local_842 + 0x1a,0);
      }
      goto LAB_0004cfe8;
    }
    __format = "%s read iic 2 err\n";
  }
  else {
    __format = "%s write iic 2 err\n";
  }
  snprintf(local_842 + 0x1a,0x800,__format,"_app_write_data_into_flash_1704_v8");
  uVar9 = 0;
  FUN_00032218(0,local_842 + 0x1a);
LAB_0004cfe8:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return uVar9;
}

