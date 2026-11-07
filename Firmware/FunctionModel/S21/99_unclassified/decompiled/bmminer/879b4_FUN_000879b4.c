// FUN_000879b4 @ 000879b4  size=1120  callers=0
// program: bmminer


void FUN_000879b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *local_c;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (DAT_00a4e810 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x380,"never call zlog_init() or dzlog_init() before");
  }
  else if (DAT_00a4e808 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x387,
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
    if (((int)(uint)*(byte *)(DAT_00a4e808 + ((int)uVar2 >> 3) + 0x408) >> (7 - uVar3 & 0xff) & 1U)
        != 0) {
      local_c = pthread_getspecific(DAT_00a4e7fc);
      if (local_c == (int *)0x0) {
        local_c = (int *)FUN_00094184(DAT_00a4e814,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                                      *(undefined4 *)(DAT_012a29e4 + 0x420),
                                      *(undefined4 *)(DAT_012a29e4 + 0x244c));
        if (local_c == (int *)0x0) {
          FUN_00095b4c(2,"src/zlog.c",0x38d,"zlog_thread_new fail");
          goto LAB_00087db4;
        }
        iVar1 = pthread_setspecific(DAT_00a4e7fc,local_c);
        if (iVar1 != 0) {
          FUN_00094030(local_c);
          FUN_00095b4c(2,"src/zlog.c",0x38d,"pthread_setspecific fail, rd[%d]",iVar1);
          goto LAB_00087db4;
        }
      }
      if (*local_c != DAT_00a4e814) {
        iVar1 = FUN_00094428(local_c,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                             *(undefined4 *)(DAT_012a29e4 + 0x420));
        if (iVar1 != 0) {
          FUN_00095b4c(2,"src/zlog.c",0x38d,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
          goto LAB_00087db4;
        }
        iVar1 = FUN_000945d4(local_c,*(undefined4 *)(DAT_012a29e4 + 0x244c));
        if (iVar1 != 0) {
          FUN_00095b4c(2,"src/zlog.c",0x38d,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
          goto LAB_00087db4;
        }
        *local_c = DAT_00a4e814;
      }
      FUN_0008b4b4(local_c[2],DAT_00a4e808,*(undefined4 *)(DAT_00a4e808 + 0x404),param_1,param_2,
                   param_3,param_4,param_5,param_6,param_7,&param_8);
      iVar1 = FUN_00088c70(DAT_00a4e808,local_c);
      if (iVar1 == 0) {
        if ((*(int *)(DAT_012a29e4 + 0x243c) != 0) &&
           (DAT_00a4e80c = DAT_00a4e80c + 1, *(uint *)(DAT_012a29e4 + 0x243c) < DAT_00a4e80c)) {
          pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
          iVar1 = FUN_00085138(0xffffffff);
          if (iVar1 == 0) {
            return;
          }
          FUN_00095b4c(2,"src/zlog.c",0x3a9,
                       "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail"
                      );
          return;
        }
      }
      else {
        FUN_00095b4c(2,"src/zlog.c",0x396,"zlog_output fail, srcfile[%s], srcline[%ld]",param_1,
                     param_5);
      }
    }
  }
LAB_00087db4:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  return;
}

