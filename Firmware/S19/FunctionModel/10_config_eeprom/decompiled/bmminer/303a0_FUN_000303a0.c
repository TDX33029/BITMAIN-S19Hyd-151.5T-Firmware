// FUN_000303a0 @ 000303a0  size=616  callers=1
// program: bmminer


void FUN_000303a0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char local_818 [16];
  undefined4 local_808;
  char acStack_804 [2032];
  
  if ((*param_1 & 0x40) != 0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_818,"!!! reg crc erro",0x10);
      local_808 = CONCAT13(local_808._3_1_,0xa72);
      FUN_00032218(3,local_818,0);
    }
    DAT_00723a04 = DAT_00723a04 + 1;
    return;
  }
  pcVar3 = (char *)FUN_0001fffc();
  iVar4 = strcmp(pcVar3,"HHB28601");
  if (iVar4 != 0) {
    pcVar3 = (char *)FUN_0001fffc();
    iVar4 = strcmp(pcVar3,"HHB28602");
    if (iVar4 != 0) goto LAB_0003044c;
  }
  if (*(byte *)((int)param_1 + 1) == 0x44) {
    FUN_000171b4(param_1);
    return;
  }
LAB_0003044c:
  uVar6 = *(byte *)((int)param_1 + 3) & 0x60;
  if ((*(byte *)((int)param_1 + 3) & 0x60) == 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
    uVar1 = DAT_00722a08;
    bVar2 = DAT_0008a9a4;
    if (DAT_00722a08 < 0x1ff) {
      uVar7 = DAT_00722a00 + 1;
      iVar4 = uVar7 * 8;
      (&DAT_00722a04)[uVar7 * 2] = param_1[1];
      *(byte *)(&DAT_00722a08 + uVar7 * 2) = *(byte *)((int)param_1 + 3) & 0x1f;
      *(byte *)((int)&DAT_00722a08 + iVar4 + 1) = *(byte *)((int)param_1 + 2);
      if (*(byte *)((int)param_1 + 1) != 0x40) {
        bVar2 = bVar2 | 1;
      }
      *(byte *)((int)&DAT_00722a08 + iVar4 + 2) = *(byte *)((int)param_1 + 1);
      *(byte *)((int)&DAT_00722a08 + iVar4 + 3) = (byte)*param_1 & 0xf;
      if ((bVar2 != 0) && (DAT_00722a08 = uVar1 + 1, DAT_00722a00 = uVar7, 0x1fe < uVar7)) {
        DAT_00722a00 = uVar6;
      }
    }
    else if (3 < DAT_00087bbc) {
      builtin_strncpy(local_818,"reg_value_buf bu",0x10);
      local_808._0_1_ = 'f';
      local_808._1_1_ = 'f';
      local_808._2_1_ = 'e';
      local_808._3_1_ = 'r';
      builtin_strncpy(acStack_804," is full!\n",0xb);
      FUN_00032218(3,local_818,uVar6);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
    return;
  }
  bVar2 = *(byte *)((int)param_1 + 2);
  uVar6 = *param_1;
  uVar5 = FUN_0002009c();
  iVar4 = FUN_00067408(bVar2,uVar5);
  uVar6 = (byte)uVar6 & 3;
  if ((DAT_00087bb0 == uVar6) && (DAT_00087bb4 == iVar4)) {
    return;
  }
  if (3 < DAT_00087bbc) {
    snprintf(local_818,0x800,"!!! REG_TYPE = 1.%08x from chain:%d asic:%d\n",*param_1,uVar6,iVar4);
    FUN_00032218(3,local_818,0);
  }
  DAT_00087bb0 = uVar6;
  DAT_00087bb4 = iVar4;
  return;
}

