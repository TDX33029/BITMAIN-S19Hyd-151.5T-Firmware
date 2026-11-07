// FUN_0004c5c0 @ 0004c5c0  size=532  callers=1
// program: bmminer


int FUN_0004c5c0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *__format;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_834;
  byte local_830 [5];
  undefined1 local_82b;
  undefined4 local_82a;
  undefined4 local_826;
  undefined4 local_822;
  undefined4 local_81e;
  undefined2 local_81a;
  char acStack_818 [2048];
  
  uVar8 = 0x4c5ec;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa9c);
  local_830[4] = (byte)param_2;
  iVar5 = param_5;
  if (0xf < param_5) {
    iVar5 = 0x10;
  }
  uVar2 = 0;
  uVar7 = param_3 + 0x3b + param_2 + (param_5 + 6U & 0xff);
  uVar6 = (undefined2)uVar7;
  local_830[2] = (byte)(param_5 + 6U);
  local_82b = (undefined1)param_3;
  local_830[0] = 0x55;
  local_830[1] = 0xaa;
  if (0 < param_5) {
    uVar8 = 6;
  }
  local_826 = 0;
  local_822 = 0;
  local_81e = 0;
  local_81a = 0;
  local_82a = 0;
  local_834 = 0;
  local_830[3] = 0x3b;
  if (param_5 < 1) {
    uVar2 = 8;
    uVar8 = 7;
    uVar4 = 6;
  }
  else {
    while( true ) {
      pbVar1 = (byte *)(param_4 + uVar2);
      uVar2 = uVar2 + 1 & 0xffff;
      uVar4 = uVar7 + *pbVar1;
      local_830[uVar8] = *pbVar1;
      uVar7 = uVar4 & 0xffff;
      uVar6 = (undefined2)uVar4;
      uVar4 = uVar8 + 1 & 0xffff;
      if (iVar5 <= (int)uVar2) break;
      uVar8 = uVar4;
    }
    uVar2 = uVar8 + 3 & 0xffff;
    uVar8 = uVar8 + 2 & 0xffff;
  }
  local_830[uVar4] = (byte)((ushort)uVar6 >> 8);
  local_830[uVar8] = (byte)uVar6;
  uVar8 = FUN_00050d00(param_1,local_830,uVar2);
  if (uVar8 == uVar2) {
    usleep(10000);
    iVar3 = FUN_00050c78(param_1,&local_834,2);
    if (iVar3 == 2) {
      if (((byte)local_834 != 0x3b) || (local_834._1_1_ != 1)) {
        snprintf(acStack_818,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 "_pic_write_iic",(uint)(byte)local_834,(uint)local_834._1_1_);
        iVar5 = -0x7ffffe00;
        FUN_00032218(0,acStack_818);
      }
      goto LAB_0004c714;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  snprintf(acStack_818,0x800,__format,"_pic_write_iic");
  iVar5 = -0x7ffffe00;
  FUN_00032218(0,acStack_818);
LAB_0004c714:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa9c);
  return iVar5;
}

