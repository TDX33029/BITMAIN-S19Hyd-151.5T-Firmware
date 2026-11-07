// FUN_00084a7c @ 00084a7c  size=472  callers=2
// program: bmminer


undefined4 FUN_00084a7c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00a4e814 == 0) {
    iVar1 = pthread_key_create(&DAT_00a4e7fc,FUN_00094030);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x4c,"pthread_key_create fail, rc[%d]",iVar1);
      goto LAB_00084c40;
    }
    iVar1 = FUN_00099138(FUN_00084a30);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x55,"atexit fail, rc[%d]",iVar1);
      goto LAB_00084c40;
    }
    DAT_00a4e814 = DAT_00a4e814 + 1;
  }
  DAT_012a29e4 = FUN_000896e0(param_1);
  if (DAT_012a29e4 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x5d,"zlog_conf_new[%s] fail",param_1);
  }
  else {
    DAT_00a4e800 = FUN_00088e3c();
    if (DAT_00a4e800 == 0) {
      FUN_00095b4c(2,"src/zlog.c",99,"zlog_category_table_new fail");
    }
    else {
      DAT_00a4e804 = FUN_0008cb3c();
      if (DAT_00a4e804 != 0) {
        return 0;
      }
      FUN_00095b4c(2,"src/zlog.c",0x69,"zlog_record_table_new fail");
    }
  }
LAB_00084c40:
  FUN_00084968();
  return 0xffffffff;
}

