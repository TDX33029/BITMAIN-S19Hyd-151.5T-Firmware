// FUN_0005ac28 @ 0005ac28  size=748  callers=6
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0005ac28(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_000658a8(0,"src/zlog.c",0xdb,"------zlog_reload start------");
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar2 == 0) {
    uVar5 = 0;
    if (DAT_0071a0f8 == 0) {
      FUN_000658a8(2,"src/zlog.c",0xe3,"never call zlog_init() or dzlog_init() before");
    }
    else {
      if (param_1 == 0) {
        param_1 = DAT_00b2d318;
      }
      if ((param_1 != -1) ||
         (param_1 = DAT_00b2d318, *(uint *)(DAT_00b2d318 + 0x243c) < DAT_0071a0fc)) {
        iVar4 = 0;
        DAT_0071a0fc = 0;
        iVar2 = FUN_0005e7cc(param_1);
        if (iVar2 == 0) {
          FUN_000658a8(2,"src/zlog.c",0xfa,"zlog_conf_new fail");
          FUN_000658a8(1,"src/zlog.c",0x118,"zlog_reload fail, use old conf file, still working");
        }
        else {
          piVar3 = *(int **)(iVar2 + 0x2448);
          if (0 < piVar3[1]) {
            do {
              iVar1 = iVar4 * 4;
              iVar4 = iVar4 + 1;
              FUN_000635e0(*(undefined4 *)(*piVar3 + iVar1),DAT_0071a0d0);
              piVar3 = *(int **)(iVar2 + 0x2448);
            } while (iVar4 < piVar3[1]);
          }
          iVar4 = FUN_0005d738(DAT_0071a0c8);
          if (iVar4 == 0) {
            DAT_0071a0d4 = DAT_0071a0d4 + 1;
            FUN_0005d7d0(DAT_0071a0c8);
            FUN_0005e720(DAT_00b2d318);
            DAT_00b2d318 = iVar2;
            FUN_000658a8(0,"src/zlog.c",0x10f,
                         "------zlog_reload success, total init verison[%d] ------",DAT_0071a0d4);
            iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
            if (iVar2 == 0) {
              return 0;
            }
            FUN_000658a8(2,"src/zlog.c",0x112,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
            return 0xffffffff;
          }
          FUN_000658a8(2,"src/zlog.c",0x104,"zlog_category_table_update fail");
          FUN_000658a8(1,"src/zlog.c",0x118,"zlog_reload fail, use old conf file, still working");
          FUN_0005e720(iVar2);
        }
        FUN_000658a8(2,"src/zlog.c",0x11b,"------zlog_reload fail, total init version[%d] ------",
                     DAT_0071a0d4);
        iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        FUN_000658a8(2,"src/zlog.c",0x11e,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
        return 0xffffffff;
      }
    }
    FUN_000658a8(0,"src/zlog.c",0x123,"------zlog_reload do nothing------");
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      FUN_000658a8(2,"src/zlog.c",0x126,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
    }
  }
  else {
    uVar5 = 0xffffffff;
    FUN_000658a8(2,"src/zlog.c",0xde,"pthread_rwlock_wrlock fail, rc[%d]",iVar2);
  }
  return uVar5;
}

