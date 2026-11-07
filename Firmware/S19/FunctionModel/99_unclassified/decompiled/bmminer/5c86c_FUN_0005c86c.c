// FUN_0005c86c @ 0005c86c  size=704  callers=0
// program: bmminer


void FUN_0005c86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined1 param_8)

{
  int *__pointer;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x380,"never call zlog_init() or dzlog_init() before");
  }
  else if (DAT_0071a0cc == 0) {
    FUN_000658a8(2,"src/zlog.c",0x387,
                 "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above"
                );
  }
  else {
    uVar2 = param_6 + 7;
    if (-1 < (int)param_6) {
      uVar2 = param_6;
    }
    uVar3 = param_6 & 7;
    if (-1 < (int)-param_6) {
      uVar3 = -(-param_6 & 7);
    }
    if (((int)(uint)*(byte *)(DAT_0071a0cc + ((int)uVar2 >> 3) + 0x408) >> (7 - uVar3 & 0xff) & 1U)
        != 0) {
      __pointer = pthread_getspecific(DAT_0071a0c4);
      if (__pointer == (int *)0x0) {
        __pointer = (int *)FUN_00064990(DAT_0071a0d4,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                                        *(undefined4 *)(DAT_00b2d318 + 0x420),
                                        *(undefined4 *)(DAT_00b2d318 + 0x244c));
        if (__pointer == (int *)0x0) {
          FUN_000658a8(2,"src/zlog.c",0x38d,"zlog_thread_new fail");
          goto LAB_0005c8e4;
        }
        iVar1 = pthread_setspecific(DAT_0071a0c4,__pointer);
        if (iVar1 != 0) {
          FUN_000648bc(__pointer);
          FUN_000658a8(2,"src/zlog.c",0x38d,"pthread_setspecific fail, rd[%d]",iVar1);
          goto LAB_0005c8e4;
        }
      }
      if (*__pointer != DAT_0071a0d4) {
        iVar1 = FUN_00064ba4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x41c),
                             *(undefined4 *)(DAT_00b2d318 + 0x420));
        if ((iVar1 != 0) ||
           (iVar1 = FUN_00064cc4(__pointer,*(undefined4 *)(DAT_00b2d318 + 0x244c)), iVar1 != 0)) {
          FUN_000658a8(2,"src/zlog.c",0x38d,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
          goto LAB_0005c8e4;
        }
        *__pointer = DAT_0071a0d4;
      }
      FUN_0005ee54(__pointer[2],DAT_0071a0cc,*(undefined4 *)(DAT_0071a0cc + 0x404),param_1,param_2,
                   param_3,param_4,param_5,param_6,param_7,&param_8);
      iVar1 = FUN_0005d590(DAT_0071a0cc,__pointer);
      if (iVar1 == 0) {
        if ((*(uint *)(DAT_00b2d318 + 0x243c) != 0) &&
           (DAT_0071a0fc = DAT_0071a0fc + 1, *(uint *)(DAT_00b2d318 + 0x243c) < DAT_0071a0fc)) {
          pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
          iVar1 = FUN_0005ac28(0xffffffff);
          if (iVar1 == 0) {
            return;
          }
          FUN_000658a8(2,"src/zlog.c",0x3a9,
                       "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail"
                      );
          return;
        }
      }
      else {
        FUN_000658a8(2,"src/zlog.c",0x396,"zlog_output fail, srcfile[%s], srcline[%ld]",param_1,
                     param_5);
      }
    }
  }
LAB_0005c8e4:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  return;
}

