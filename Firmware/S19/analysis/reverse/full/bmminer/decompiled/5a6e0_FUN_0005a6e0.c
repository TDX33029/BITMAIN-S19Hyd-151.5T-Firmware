// FUN_0005a6e0 @ 0005a6e0  size=336  callers=2
// program: bmminer


undefined4 FUN_0005a6e0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0071a0d4 == 0) {
    iVar1 = pthread_key_create(&DAT_0071a0c4,FUN_000648bc);
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/zlog.c",0x4c,"pthread_key_create fail, rc[%d]",iVar1);
      goto LAB_0005a79c;
    }
    iVar1 = FUN_00067cc8(&LAB_0005a658);
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/zlog.c",0x55,"atexit fail, rc[%d]",iVar1);
      goto LAB_0005a79c;
    }
    DAT_0071a0d4 = 1;
  }
  DAT_00b2d318 = FUN_0005e7cc(param_1);
  if (DAT_00b2d318 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x5d,"zlog_conf_new[%s] fail",param_1);
  }
  else {
    DAT_0071a0c8 = FUN_0005d6cc();
    if (DAT_0071a0c8 == 0) {
      FUN_000658a8(2,"src/zlog.c",99,"zlog_category_table_new fail");
    }
    else {
      DAT_0071a0d0 = FUN_0005fe14();
      if (DAT_0071a0d0 != 0) {
        return 0;
      }
      FUN_000658a8(2,"src/zlog.c",0x69,"zlog_record_table_new fail");
    }
  }
LAB_0005a79c:
  FUN_0005a67c();
  return 0xffffffff;
}

