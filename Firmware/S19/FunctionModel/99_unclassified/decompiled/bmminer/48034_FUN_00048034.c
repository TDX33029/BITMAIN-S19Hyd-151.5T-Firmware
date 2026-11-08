// FUN_00048034 @ 00048034  size=12  callers=2
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x00047e18) */
/* WARNING: Removing unreachable block (ram,0x00047e20) */
/* WARNING: Removing unreachable block (ram,0x00047e54) */
/* WARNING: Removing unreachable block (ram,0x00047e60) */
/* WARNING: Removing unreachable block (ram,0x00047e74) */
/* WARNING: Removing unreachable block (ram,0x00047e9c) */

undefined4 FUN_00048034(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_818 [2052];
  
  iVar1 = FUN_00047c38(2);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    builtin_strncpy(acStack_818,"unsuported gpio port\n",0x16);
    FUN_00032218(0,acStack_818,0);
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f93c);
    if (iVar2 == 0) {
      FUN_00047a30(iVar1,DAT_0050f954);
      uVar3 = FUN_00046784(iVar1,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f93c);
    }
    else {
      uVar3 = 0xffffffff;
      builtin_strncpy(acStack_818,"failed to api lock\n",0x14);
      FUN_00032218(0,acStack_818);
    }
  }
  return uVar3;
}

