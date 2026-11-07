// FUN_00030aa8 @ 00030aa8  size=1032  callers=1
// program: cgminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030aa8(void)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar8;
  undefined4 *puVar7;
  uint param3;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  sysinfo local_860;
  char acStack_820 [2048];
  
  iVar1 = sysinfo(&local_860);
  if (iVar1 == 0) {
    DAT_000761a4 = local_860.uptime;
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      puVar2 = (uint *)__errno_location();
      param3 = *puVar2;
      pcVar3 = strerror(param3);
      snprintf(acStack_820,0x800,"Failed to get sysinfo, errno:%u, reason:%s\n",param3,pcVar3);
      FUN_0001dd98(6,acStack_820,0);
    }
    DAT_000761a4 = time((time_t *)0x0);
  }
  FUN_000206d8(&DAT_00068b40);
  FUN_00023634(&DAT_00068ba4);
  _DAT_000761d8 = 0;
  DAT_000761dc = 0;
  _DAT_000762e8 = 0;
  DAT_000762ec = 0;
  _DAT_000762e0 = 0;
  DAT_000762e4 = 0;
  _DAT_00072ed0 = 0;
  DAT_00072ed4 = 0;
  DAT_00072d98._0_4_ = 0;
  DAT_00072d98._4_4_ = 0;
  DAT_00072ee0 = 0;
  DAT_00072ee4 = 0;
  puVar7 = (undefined4 *)&DAT_00068bb0;
  do {
    puVar8 = puVar7 + 2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7 = puVar8;
  } while (puVar8 != &DAT_00068c10);
  DAT_00076074 = 0;
  DAT_00072f24 = 0;
  DAT_00076084 = 0;
  DAT_00074f98 = 0;
  DAT_00074f9c = 0;
  DAT_00072f00 = 0;
  DAT_00072f04 = 0;
  DAT_00074fc8 = 0;
  DAT_00074fcc = 0;
  DAT_000762d8 = 0;
  DAT_000762dc = 0;
  DAT_00075018 = 0;
  DAT_0007501c = 0;
  DAT_00072dd8 = 0;
  DAT_00074f38._0_4_ = 0;
  DAT_00074f38._4_4_ = 0;
  DAT_00072ddc = 0;
  DAT_00068c10 = 0;
  DAT_000761ec = 0;
  DAT_00076070 = 0;
  _DAT_00074fc0 = 0;
  DAT_00074fc4 = 0;
  DAT_00072f08._0_4_ = 0;
  DAT_00072f08._4_4_ = 0;
  DAT_00072f18 = 0;
  DAT_00072dbc = 0;
  DAT_000681d0._0_4_ = 0;
  DAT_000681d0._4_4_ = 0x3ff00000;
  DAT_000681e8 = 0;
  DAT_000681ec = 0x3ff00000;
  _DAT_000681f0 = 0;
  DAT_000681f4 = 0x3ff00000;
  if (0 < DAT_00072e70) {
    piVar10 = DAT_00072f14 + DAT_00072e70;
    piVar6 = DAT_00072f14;
    do {
      piVar9 = piVar6 + 1;
      iVar1 = *piVar6;
      *(undefined4 *)(iVar1 + 0x74) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x78) = 0;
      *(undefined4 *)(iVar1 + 0x7c) = 0;
      *(undefined4 *)(iVar1 + 0x80) = 0;
      *(undefined4 *)(iVar1 + 0x84) = 0;
      *(undefined4 *)(iVar1 + 0x160) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      *(undefined4 *)(iVar1 + 0x58) = 0;
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      *(undefined4 *)(iVar1 + 0x168) = 0;
      *(undefined4 *)(iVar1 + 0x16c) = 0;
      piVar6 = piVar9;
    } while (piVar10 != piVar9);
  }
  FUN_0002b344();
  if (0 < DAT_00074ff0) {
    iVar1 = 0;
    do {
      iVar4 = FUN_0002e054(iVar1);
      FUN_00023634(iVar4 + 0x170,&DAT_00068b40);
      iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072ee8);
      if (iVar5 != 0) {
        piVar6 = __errno_location();
        iVar1 = *piVar6;
        pcVar3 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
        uVar11 = 0x1868;
LAB_00030e44:
        snprintf(acStack_820,0x800,pcVar3,iVar1,"cgminer.c","zero_stats",uVar11);
        FUN_0001dd98(3,acStack_820,1);
                    /* WARNING: Subroutine does not return */
        FUN_0002c290(1);
      }
      *(undefined4 *)(iVar4 + 0x50) = 0;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0xdc) = 0;
      *(undefined4 *)(iVar4 + 200) = 0;
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      *(undefined4 *)(iVar4 + 0xd0) = 0;
      *(undefined4 *)(iVar4 + 0xd4) = 0;
      *(undefined4 *)(iVar4 + 0xe0) = 0;
      *(undefined4 *)(iVar4 + 0xe4) = 0;
      *(undefined4 *)(iVar4 + 0xc0) = 0;
      *(undefined4 *)(iVar4 + 0xc4) = 0;
      iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072ee8);
      if (iVar5 != 0) {
        piVar6 = __errno_location();
        iVar1 = *piVar6;
        pcVar3 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
        uVar11 = 0x1875;
        goto LAB_00030e44;
      }
      iVar1 = iVar1 + 1;
      (*DAT_0006796c)();
      (**(code **)(*(int *)(iVar4 + 4) + 0x60))(iVar4);
    } while (iVar1 < DAT_00074ff0);
  }
  return;
}

