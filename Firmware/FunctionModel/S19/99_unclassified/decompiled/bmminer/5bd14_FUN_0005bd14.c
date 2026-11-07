// FUN_0005bd14 @ 0005bd14  size=700  callers=0
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0005bd14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int *__pointer;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar3 = param_7;
  }
  uVar2 = param_7 & 7;
  if (-1 < (int)-param_7) {
    uVar2 = -(-param_7 & 7);
  }
  if (((int)(uint)*(byte *)(param_1 + ((int)uVar3 >> 3) + 0x408) >> (7 - uVar2 & 0xff) & 1U) == 0) {
    return;
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x2b6,"never call zlog_init() or dzlog_init() before");
    goto LAB_0005bed8;
  }
  __pointer = pthread_getspecific(DAT_0071a0c4);
  if (__pointer == (int *)0x0) {
    __pointer = (int *)FUN_00064990(DAT_0071a0d4,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                                    *(undefined4 *)(DAT_00b2d318 + 0x420),
                                    *(undefined4 *)(DAT_00b2d318 + 0x244c));
    if (__pointer == (int *)0x0) {
      FUN_000658a8(2,"src/zlog.c",0x2ba,"zlog_thread_new fail");
      goto LAB_0005bed8;
    }
    iVar1 = pthread_setspecific(DAT_0071a0c4,__pointer);
    if (iVar1 != 0) {
      FUN_000648bc(__pointer);
      FUN_000658a8(2,"src/zlog.c",0x2ba,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_0005bed8;
    }
  }
  if (*__pointer != DAT_0071a0d4) {
    iVar1 = FUN_00064ba4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                         *(undefined4 *)(DAT_00b2d318 + 0x420));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_00064cc4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x244c)), iVar1 != 0)) {
      FUN_000658a8(2,"src/zlog.c",0x2ba,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_0005bed8;
    }
    *__pointer = DAT_0071a0d4;
  }
  FUN_0005eeb0(__pointer[2],param_1,*(undefined4 *)(param_1 + 0x404),param_2,param_3,param_4,param_5
               ,param_6,param_7,param_8,param_9);
  iVar1 = FUN_0005d590(param_1,__pointer);
  if (iVar1 == 0) {
    if ((*(uint *)(DAT_00b2d318 + 0x243c) != 0) &&
       (DAT_0071a0fc = DAT_0071a0fc + 1, *(uint *)(DAT_00b2d318 + 0x243c) < DAT_0071a0fc)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
      iVar1 = FUN_0005ac28(0xffffffff);
      if (iVar1 == 0) {
        return;
      }
      FUN_000658a8(2,"src/zlog.c",0x2d3,
                   "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail")
      ;
      return;
    }
  }
  else {
    FUN_000658a8(2,"src/zlog.c",0x2c2,"zlog_output fail, srcfile[%s], srcline[%ld]",param_2,param_6)
    ;
  }
LAB_0005bed8:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  return;
}

