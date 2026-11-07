// FUN_0008df8c @ 0008df8c  size=368  callers=1
// program: bmminer


undefined4 FUN_0008df8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x43c) = param_4;
  iVar1 = FUN_0008db9c(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0008d26c(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x438) == 1) {
        iVar1 = FUN_0008d798(param_1);
        if (iVar1 == 0) {
LAB_0008e0d4:
          FUN_0008ded8(param_1);
          return 0;
        }
        FUN_00095b4c(2,"src/rotater.c",0x1c2,"zlog_rotater_roll_files fail");
      }
      else {
        if ((*(int *)(param_1 + 0x438) != 2) || (iVar1 = FUN_0008d43c(param_1), iVar1 == 0))
        goto LAB_0008e0d4;
        FUN_00095b4c(2,"src/rotater.c",0x1c8,"zlog_rotater_seq_files fail");
      }
    }
    else {
      FUN_00095b4c(2,"src/rotater.c",0x1bb,"zlog_rotater_add_archive_files fail");
    }
  }
  else {
    FUN_00095b4c(2,"src/rotater.c",0x1b5,"zlog_rotater_parse_archive_path fail");
  }
  FUN_0008ded8(param_1);
  return 0xffffffff;
}

