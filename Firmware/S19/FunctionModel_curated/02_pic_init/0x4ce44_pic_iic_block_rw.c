// FUN_0004ce44 @ 0004ce44  size=696
// callers: []

uint FUN_0004ce44(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 local_84c;
  char local_848 [5];
  undefined1 local_843;
  char local_842 [2078];
  
  if (0xf < param_1) {
    snprintf(local_842 + 0x1a,0x800,"%s: Bad pic param, input chain is %d\n",DAT_0004d100,param_1);
    FUN_00032218(0,local_842 + 0x1a);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_00b2d29c + param_1 * 8) == 0) && (uVar10 = FUN_0004b97c(), (int)uVar10 < 0)) {
    snprintf(local_842 + 0x1a,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_0004d100,param_1);
    FUN_00032218(0,local_842 + 0x1a,0);
    return uVar10;
  }
  uVar11 = *(undefined4 *)(&DAT_00b2d298 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  pcVar2 = DAT_0004d0fc;
  uVar10 = param_5;
  if (0xf < (int)param_5) {
    uVar10 = 0x10;
  }
  local_843 = (undefined1)param_3;
  local_848[2] = (char)(param_5 + 6);
  local_848[4] = (char)param_2;
  uVar7 = (param_5 + 6 & 0xff) + param_3 + 0x35 + param_2;
  uVar6 = (undefined2)uVar7;
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
    pbVar9 = (byte *)(param_4 + -1);
    uVar5 = 0;
    do {
      pbVar9 = pbVar9 + 1;
      uVar3 = (uint)*pbVar9;
      if (((uVar5 & 1) == 0) && (0x3f < uVar3)) {
        snprintf(local_842 + 0x1a,0x800,"%s: the data[%d] must less than 0x3f\n",pcVar2,uVar5);
        FUN_00032218(0,local_842 + 0x1a,0);
        uVar3 = (uint)*pbVar9;
      }
      uVar8 = uVar7 + uVar3;
      uVar4 = uVar5 + 1;
      local_842[uVar5] = (char)uVar3;
      uVar7 = uVar8 & 0xffff;
      uVar6 = (undefined2)uVar8;
      uVar5 = uVar4;
    } while ((int)uVar4 < (int)uVar10);
  }
  uVar7 = uVar10 & 0xffff;
  uVar5 = uVar7 + 8 & 0xffff;
  local_848[uVar7 + 6 & 0xffff] = (char)((ushort)uVar6 >> 8);
  local_848[uVar7 + 7 & 0xffff] = (char)uVar6;
  uVar7 = FUN_00050d00(uVar11,local_848,uVar5);
  if (uVar7 == uVar5) {
    usleep(300000);
    iVar1 = FUN_00050c78(uVar11,&local_84c,2);
    if (iVar1 == 2) {
      if (((byte)local_84c != 0x35) || (local_84c._1_1_ != 1)) {
        uVar10 = 0;
        snprintf(local_842 + 0x1a,0x800,
                 "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 DAT_0004d0fc,(uint)(byte)local_84c,(uint)local_84c._1_1_);
        FUN_00032218(0,local_842 + 0x1a,0);
      }
      goto LAB_0004cfe8;
    }
    pcVar2 = "%s read iic 2 err\n";
  }
  else {
    pcVar2 = "%s write iic 2 err\n";
  }
  snprintf(local_842 + 0x1a,0x800,pcVar2,DAT_0004d0fc);
  uVar10 = 0;
  FUN_00032218(0,local_842 + 0x1a);
LAB_0004cfe8:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return uVar10;
}


