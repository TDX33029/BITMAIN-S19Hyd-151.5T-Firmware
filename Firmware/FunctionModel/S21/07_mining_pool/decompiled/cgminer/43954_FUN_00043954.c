// FUN_00043954 @ 00043954  size=904  callers=1
// program: cgminer


void FUN_00043954(void)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_82c [4];
  char local_828 [20];
  uint local_814;
  char acStack_810 [2028];
  
  pvVar1 = calloc(1,0x188);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cgpu","driver-btm-c5_socketa.c",0x33,"bitmain_c5_detect");
  }
  *(undefined **)((int)pvVar1 + 4) = &DAT_00068500;
  *(undefined4 *)((int)pvVar1 + 0x20) = 0;
  *(undefined4 *)((int)pvVar1 + 0x94) = 1;
  iVar2 = FUN_0004294c();
  if (iVar2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      builtin_strncpy(local_828,"cgminer socket init ",0x14);
      local_814._0_1_ = 's';
      local_814._1_1_ = 'u';
      local_814._2_1_ = 'c';
      local_814._3_1_ = 'c';
      builtin_strncpy(acStack_810,"eeds.",6);
      FUN_0001dd98(6,local_828,0);
    }
  }
  else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
    builtin_strncpy(local_828,"cgminer socket init ",0x14);
    local_814._0_1_ = 'f';
    local_814._1_1_ = 'a';
    local_814._2_1_ = 'i';
    local_814._3_1_ = 'l';
    builtin_strncpy(acStack_810,"es.",4);
    FUN_0001dd98(3,local_828,0);
  }
  if (DAT_00068908 != 0) {
    FUN_0003daf0();
  }
  local_82c[0] = 0;
  FUN_0002090c(2000);
  while( true ) {
    FUN_000427b4(local_82c,1);
    FUN_0002090c(1000);
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      snprintf(local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar3,
               "driver-btm-c5_socketa.c","bitmain_c5_detect",0x4d);
      FUN_0001dd98(3,local_828,1);
      FUN_0003c34c(1);
    }
    if (DAT_00076330 != 0) break;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      snprintf(local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar3,
               "driver-btm-c5_socketa.c","bitmain_c5_detect",0x53);
      FUN_0001dd98(3,local_828,1);
      FUN_0003c34c(1);
    }
    (*DAT_0006796c)();
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar3,
             "driver-btm-c5_socketa.c","bitmain_c5_detect",0x4f);
    FUN_0001dd98(3,local_828,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    builtin_strncpy(local_828,"bmminer init done!!!",0x14);
    local_814 = local_814 & 0xffffff00;
    FUN_0001dd98(5,local_828,0);
  }
  iVar2 = FUN_0003c780(pvVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("add_cgpu(cgpu)","driver-btm-c5_socketa.c",0x55,"bitmain_c5_detect");
  }
  return;
}

