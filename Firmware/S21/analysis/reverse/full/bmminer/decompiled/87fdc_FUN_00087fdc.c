// FUN_00087fdc @ 00087fdc  size=672  callers=0
// program: bmminer


int FUN_00087fdc(int param_1,int param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x3d2,"rname is null or 0");
    local_c = -1;
  }
  else if (param_2 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x3d3,"record_output is null or 0");
    local_c = -1;
  }
  else {
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      if (DAT_00a4e810 == 0) {
        FUN_00095b4c(2,"src/zlog.c",0x3dc,"never call zlog_init() or dzlog_init() before");
      }
      else {
        iVar1 = FUN_0008c8c8(param_1,param_2);
        if (iVar1 == 0) {
          local_c = -1;
          FUN_00095b4c(2,"src/zlog.c",0x3e3,"zlog_record_new fail");
        }
        else {
          local_c = FUN_00095390(DAT_00a4e804,iVar1,iVar1);
          if (local_c == 0) {
            for (local_10 = 0; local_10 < *(int *)(*(int *)(DAT_012a29e4 + 0x2448) + 4);
                local_10 = local_10 + 1) {
              FUN_00091f8c(*(undefined4 *)(**(int **)(DAT_012a29e4 + 0x2448) + local_10 * 4),
                           DAT_00a4e804);
            }
          }
          else {
            FUN_0008c854(iVar1);
            FUN_00095b4c(2,"src/zlog.c",0x3ea,"zc_hashtable_put fail");
          }
        }
      }
      iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/zlog.c",0x3f5,"pthread_rwlock_unlock fail, rd=[%d]",iVar1);
        local_c = -1;
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x3d7,"pthread_rwlock_rdlock fail, rd[%d]",iVar1);
      local_c = -1;
    }
  }
  return local_c;
}

