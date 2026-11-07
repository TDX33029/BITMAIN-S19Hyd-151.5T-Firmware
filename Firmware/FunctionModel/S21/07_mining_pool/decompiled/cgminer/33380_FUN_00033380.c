// FUN_00033380 @ 00033380  size=672  callers=2
// program: cgminer


void FUN_00033380(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *param10;
  char *param11;
  size_t sVar3;
  int *piVar4;
  uint param9;
  ulong param3;
  int iVar5;
  undefined4 uVar6;
  char acStack_c28 [1023];
  undefined1 local_829;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined2 local_814;
  
  if (DAT_00068910 == (FILE *)0x0) {
    return;
  }
  param9 = *(uint *)(param_2 + 0x100);
  iVar1 = FUN_0002f6e8(param9);
  param3 = *(ulong *)(param_2 + 0x1b0);
  iVar1 = *(int *)(iVar1 + 0x24);
  iVar5 = *(int *)(param_2 + 0x104);
  pcVar2 = (char *)FUN_0001fac8(param_2 + 0xa0,0x20);
  param10 = (char *)FUN_0001fac8(param_2 + 0xc0,0x20);
  param11 = (char *)FUN_0001fac8(param_2,0x80);
  sVar3 = snprintf(acStack_c28,0x400,"%lu,%s,%s,%s,%s%u,%u,%s,%s\n",param3,param_1,pcVar2,
                   *(char **)(iVar5 + 0xa4),*(char **)(*(int *)(iVar1 + 4) + 8),*(uint *)(iVar1 + 8)
                   ,param9,param10,param11);
  free(pcVar2);
  free(param10);
  free(param11);
  if ((int)sVar3 < 0x400) {
    if ((int)sVar3 < 0) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
        return;
      }
      pcVar2 = "sharelog printf error";
      goto LAB_00033504;
    }
  }
  else {
    local_829 = 0;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c8c);
  if (iVar1 == 0) {
    sVar3 = fwrite(acStack_c28,sVar3,1,DAT_00068910);
    fflush(DAT_00068910);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c8c);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      if (sVar3 == 1) {
        return;
      }
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
        return;
      }
      pcVar2 = "sharelog fwrite error";
LAB_00033504:
      local_828 = *(undefined4 *)pcVar2;
      uStack_824 = *(undefined4 *)(pcVar2 + 4);
      uStack_820 = *(undefined4 *)(pcVar2 + 8);
      uStack_81c = *(undefined4 *)(pcVar2 + 0xc);
      uStack_818 = *(undefined4 *)(pcVar2 + 0x10);
      local_814 = (undefined2)*(undefined4 *)(pcVar2 + 0x14);
      FUN_0001dd98(3,&local_828,0);
      return;
    }
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    uVar6 = 0x2b2;
    pcVar2 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  }
  else {
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    pcVar2 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar6 = 0x2af;
  }
  snprintf((char *)&local_828,0x800,pcVar2,iVar1,"cgminer.c","sharelog",uVar6);
  FUN_0001dd98(3,&local_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

