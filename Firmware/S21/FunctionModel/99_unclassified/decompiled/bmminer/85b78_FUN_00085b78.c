// FUN_00085b78 @ 00085b78  size=984  callers=0
// program: bmminer


undefined4 FUN_00085b78(int param_1,int param_2)

{
  int iVar1;
  int *local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1ce,"key is null or 0");
    return 0xffffffff;
  }
  if (param_2 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1cf,"value is null or 0");
    return 0xffffffff;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 != 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1d3,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return 0xffffffff;
  }
  if (DAT_00a4e810 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1d8,"never call zlog_init() or dzlog_init() before");
    goto LAB_00085ef8;
  }
  local_c = pthread_getspecific(DAT_00a4e7fc);
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_00094184(DAT_00a4e814,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                                  *(undefined4 *)(DAT_012a29e4 + 0x420),
                                  *(undefined4 *)(DAT_012a29e4 + 0x244c));
    if (local_c == (int *)0x0) {
      FUN_00095b4c(2,"src/zlog.c",0x1dc,"zlog_thread_new fail");
      goto LAB_00085ef8;
    }
    iVar1 = pthread_setspecific(DAT_00a4e7fc,local_c);
    if (iVar1 != 0) {
      FUN_00094030(local_c);
      FUN_00095b4c(2,"src/zlog.c",0x1dc,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_00085ef8;
    }
  }
  if (*local_c != DAT_00a4e814) {
    iVar1 = FUN_00094428(local_c,*(undefined4 *)(DAT_012a29e4 + 0x41c),
                         *(undefined4 *)(DAT_012a29e4 + 0x420));
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x1dc,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00085ef8;
    }
    iVar1 = FUN_000945d4(local_c,*(undefined4 *)(DAT_012a29e4 + 0x244c));
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x1dc,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00085ef8;
    }
    *local_c = DAT_00a4e814;
  }
  iVar1 = FUN_0008c5d8(local_c[1],param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00095b4c(2,"src/zlog.c",0x1e5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    return 0xffffffff;
  }
  FUN_00095b4c(2,"src/zlog.c",0x1df,"zlog_mdc_put fail, key[%s], value[%s]",param_1,param_2);
LAB_00085ef8:
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 != 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1ec,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  }
  return 0xffffffff;
}

