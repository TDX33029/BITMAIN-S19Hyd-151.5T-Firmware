// FUN_00085138 @ 00085138  size=1148  callers=6
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x000854ac) */

undefined4 FUN_00085138(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  int local_c;
  
  FUN_00095b4c(0,"src/zlog.c",0xdb,"------zlog_reload start------");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 != 0) {
    FUN_00095b4c(2,"src/zlog.c",0xde,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return 0xffffffff;
  }
  if (DAT_00a4e810 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0xe3,"never call zlog_init() or dzlog_init() before");
LAB_00085540:
    FUN_00095b4c(0,"src/zlog.c",0x123,"------zlog_reload do nothing------");
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x126,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      uVar3 = 0xffffffff;
    }
  }
  else {
    local_24 = param_1;
    if (param_1 == 0) {
      local_24 = DAT_012a29e4;
    }
    if (local_24 == -1) {
      if (DAT_00a4e80c <= *(uint *)(DAT_012a29e4 + 0x243c)) goto LAB_00085540;
      local_24 = DAT_012a29e4;
    }
    DAT_00a4e80c = 0;
    iVar1 = FUN_000896e0(local_24);
    if (iVar1 == 0) {
      FUN_00095b4c(2,"src/zlog.c",0xfa,"zlog_conf_new fail");
    }
    else {
      for (local_c = 0; local_c < *(int *)(*(int *)(iVar1 + 0x2448) + 4); local_c = local_c + 1) {
        FUN_00091f8c(*(undefined4 *)(**(int **)(iVar1 + 0x2448) + local_c * 4),DAT_00a4e804);
      }
      iVar2 = FUN_00088ec0(DAT_00a4e800,*(undefined4 *)(iVar1 + 0x2448));
      if (iVar2 == 0) {
        DAT_00a4e814 = DAT_00a4e814 + 1;
        FUN_00088f88(DAT_00a4e800);
        FUN_000895ac(DAT_012a29e4);
        DAT_012a29e4 = iVar1;
        FUN_00095b4c(0,"src/zlog.c",0x10f,"------zlog_reload success, total init verison[%d] ------"
                     ,DAT_00a4e814);
        iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
        if (iVar1 == 0) {
          return 0;
        }
        FUN_00095b4c(2,"src/zlog.c",0x112,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
        return 0xffffffff;
      }
      FUN_00095b4c(2,"src/zlog.c",0x104,"zlog_category_table_update fail");
    }
    FUN_00095b4c(1,"src/zlog.c",0x118,"zlog_reload fail, use old conf file, still working");
    if (iVar1 != 0) {
      FUN_000895ac(iVar1);
    }
    FUN_00095b4c(2,"src/zlog.c",0x11b,"------zlog_reload fail, total init version[%d] ------",
                 DAT_00a4e814);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x11e,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

