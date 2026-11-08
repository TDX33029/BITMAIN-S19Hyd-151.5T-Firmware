// FUN_00046e6c @ 00046e6c  size=828  callers=1
// program: bmminer


void FUN_00046e6c(uint *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint param3;
  uint param4;
  byte bVar7;
  char local_2018 [16];
  undefined4 local_2008;
  char acStack_2004 [8172];
  
  uVar4 = *param_1;
  if (((byte)uVar4 & 0x40) == 0) {
    if ((*param_1 & 0x60000000) == 0) {
      uVar4 = (uint)*(byte *)((int)param_1 + 1);
      if (DAT_000c9658 == '\0') {
        puVar5 = (undefined4 *)0xa67414;
        do {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
        } while (puVar5 != (undefined4 *)0xa67810);
        DAT_00a67658 = FUN_000458a8;
        DAT_00a67638 = FUN_000458a8;
        DAT_00a6763c = FUN_000458a8;
        DAT_00a67640 = FUN_000458a8;
        DAT_00a67644 = FUN_000458a8;
        DAT_000c9658 = '\x01';
      }
      if (((uVar4 == 0xff) || ((code *)(&DAT_00a67418)[uVar4] == (code *)0x0)) ||
         (DAT_000bfb68 != 1)) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
        uVar4 = DAT_00a5f358;
        bVar7 = DAT_000c9648;
        if (DAT_00a5f358 < 0xfff) {
          uVar6 = DAT_00a5f350 + 1;
          iVar3 = uVar6 * 8;
          (&DAT_00a5f354)[uVar6 * 2] = param_1[1];
          *(byte *)(&DAT_00a5f358 + uVar6 * 2) = *(byte *)((int)param_1 + 3) & 0x1f;
          *(byte *)((int)&DAT_00a5f358 + iVar3 + 1) = *(byte *)((int)param_1 + 2);
          if (*(byte *)((int)param_1 + 1) != 0x40) {
            bVar7 = bVar7 | 1;
          }
          *(byte *)((int)&DAT_00a5f358 + iVar3 + 2) = *(byte *)((int)param_1 + 1);
          *(byte *)((int)&DAT_00a5f358 + iVar3 + 3) = (byte)*param_1 & 0xf;
          if ((bVar7 != 0) && (DAT_00a5f358 = uVar4 + 1, DAT_00a5f350 = uVar6, 0xffe < uVar6)) {
            DAT_00a5f350 = 0;
          }
        }
        else {
          if (3 < DAT_000be63c) {
            builtin_strncpy(local_2018,"reg_value_buf bu",0x10);
            local_2008._0_1_ = 'f';
            local_2008._1_1_ = 'f';
            local_2008._2_1_ = 'e';
            local_2008._3_1_ = 'r';
            builtin_strncpy(acStack_2004," is full! will clear it!",0x19);
            FUN_0004948c(3,local_2018,0);
          }
          DAT_00a5f350 = 0;
          DAT_00a5f354 = 0;
          DAT_00a5f358 = 0;
        }
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        return;
      }
      if ((uVar4 == 0x90) || ((uVar4 + 0x78 & 0xff) < 4)) {
        (*(code *)(&DAT_00a67418)[uVar4])(param_1);
      }
    }
    else {
      uVar6 = DAT_000c9654 + 1;
      bVar1 = DAT_000c9654 < 0x15;
      DAT_000c9654 = uVar6;
      if ((bVar1) && (3 < DAT_000be63c)) {
        bVar7 = *(byte *)((int)param_1 + 2);
        uVar6 = *param_1;
        uVar2 = FUN_0002a584();
        iVar3 = FUN_00098658(bVar7,uVar2);
        snprintf(local_2018,0x2000,"!!! REG_TYPE = 1. %u asic %d",uVar6,iVar3);
        FUN_0004948c(3,local_2018,(byte)uVar4 & 0x40);
      }
    }
  }
  else {
    uVar4 = DAT_000c9654 + 1;
    bVar1 = DAT_000c9654 < 0x15;
    DAT_000c9654 = uVar4;
    if ((bVar1) && (3 < DAT_000be63c)) {
      builtin_strncpy(local_2018,"!!! reg crc erro",0x10);
      local_2008 = CONCAT22(local_2008._2_2_,0x72);
      FUN_0004948c(3,local_2018,0);
      if (3 < DAT_000be63c) {
        bVar7 = *(byte *)((int)param_1 + 2);
        param3 = *param_1;
        param4 = param_1[1];
        uVar6 = param_1[2];
        uVar2 = FUN_0002a584();
        uVar4 = (uint)*(byte *)((int)param_1 + 1);
        iVar3 = FUN_00098658(bVar7,uVar2);
        snprintf(local_2018,0x2000,"!!!  %0x %0x %0x %0x asic %d  core 0x%02x ",param3,param4,uVar6,
                 uVar6,iVar3,uVar4);
        FUN_0004948c(3,local_2018,0);
      }
    }
    DAT_00a67354 = DAT_00a67354 + 1;
  }
  return;
}

