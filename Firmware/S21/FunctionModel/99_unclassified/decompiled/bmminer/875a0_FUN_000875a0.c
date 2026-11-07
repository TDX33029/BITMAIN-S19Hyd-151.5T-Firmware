// FUN_000875a0 @ 000875a0  size=1044  callers=10
// program: bmminer


void FUN_000875a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
                 undefined1 param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *local_c;
  
  if (param_1 != 0) {
    uVar2 = param_7 + 7;
    if (-1 < (int)param_7) {
      uVar2 = param_7;
    }
    uVar3 = param_7 & 7;
    if (-1 < (int)-param_7) {
      uVar3 = -(-param_7 & 7);
    }
    if (((int)(uint)*(byte *)(param_1 + ((int)uVar2 >> 3) + 0x408) >> (7 - uVar3 & 0xff) & 1U) == 0)
    {
      return;
    }
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (DAT_00a4e810 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x352,"never call zlog_init() or dzlog_init() before");
    goto LAB_00087948;
  }
  local_c = pthread_getspecific(DAT_00a4e7fc);
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00094184(DAT_00a4e814,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                                  *(undefined4 *)(DAT_012a29e4 + 0x420),
                                  *(undefined4 *)(DAT_012a29e4 + 0x244c));
    if (local_c == (int *)0x0) {
      FUN_00095b4c(2,"src/zlog.c",0x356,"zlog_thread_new fail");
      goto LAB_00087948;
    }
    iVar1 = pthread_setspecific(DAT_00a4e7fc,local_c);
    if (iVar1 != 0) {
      FUN_00094030(local_c);
      FUN_00095b4c(2,"src/zlog.c",0x356,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_00087948;
    }
  }
  if (*local_c != DAT_00a4e814) {
    iVar1 = FUN_00094428(local_c,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                         *(undefined4 *)(DAT_012a29e4 + 0x420));
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x356,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00087948;
    }
    iVar1 = FUN_000945d4(local_c,*(undefined4 *)(DAT_012a29e4 + 0x244c));
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x356,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00087948;
    }
    *local_c = DAT_00a4e814;
  }
  FUN_0008b4b4(local_c[2],param_1,*(undefined4 *)(param_1 + 0x404),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,&param_9);
  iVar1 = FUN_00088c70(param_1,local_c);
  if (iVar1 == 0) {
    if ((*(int *)(DAT_012a29e4 + 0x243c) != 0) &&
       (DAT_00a4e80c = DAT_00a4e80c + 1, *(uint *)(DAT_012a29e4 + 0x243c) < DAT_00a4e80c)) {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      iVar1 = FUN_00085138(0xffffffff);
      if (iVar1 == 0) {
        return;
      }
      FUN_00095b4c(2,"src/zlog.c",0x370,
                   "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail")
      ;
      return;
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0x35d,"zlog_output fail, srcfile[%s], srcline[%ld]",param_2,param_6)
    ;
  }
LAB_00087948:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  return;
}

