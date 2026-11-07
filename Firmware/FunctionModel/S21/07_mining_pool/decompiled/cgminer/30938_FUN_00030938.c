// FUN_00030938 @ 00030938  size=364  callers=1
// program: cgminer


void FUN_00030938(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_814;
  char local_810 [2052];
  
  local_814 = 0;
  if (param_1 != 0) {
    iVar1 = pthread_rwlock_trywrlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar1 == 0) {
      local_814 = *(int *)(param_1 + 0x164);
      *(undefined4 *)(param_1 + 0x164) = 0;
      iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
      if (iVar1 != 0) {
        piVar2 = __errno_location();
        snprintf(local_810,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
                 "cgminer.c","flush_queue",0x25f9);
        FUN_0001dd98(3,local_810,1);
                    /* WARNING: Subroutine does not return */
        FUN_0002c290(1);
      }
      (*DAT_0006796c)();
      if (((local_814 != 0) &&
          (FUN_0002a76c(&local_814,"cgminer.c","flush_queue",0x25fd), DAT_000686f1 != '\0')) &&
         ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
        builtin_strncpy(local_810,"Discarded queued work item",0x1b);
        FUN_0001dd98(7,local_810,0);
      }
    }
  }
  return;
}

