// FUN_00094428 @ 00094428  size=428  callers=7
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x000945bc) */

undefined4 FUN_00094428(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/thread.c",0x83,"a_thread is null or 0");
    uVar3 = 0xffffffff;
  }
  else if ((param_2 == *(int *)(*(int *)(param_1 + 0x1c) + 0x10)) &&
          (param_3 == *(int *)(*(int *)(param_1 + 0x1c) + 0x14))) {
    FUN_00095b4c(0,"src/thread.c",0x87,"buf size not changed, no need rebuild");
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_0009656c(param_2,param_3,&DAT_000ac738);
    if (iVar1 == 0) {
      FUN_00095b4c(2,"src/thread.c",0x8d,"zlog_buf_new fail");
    }
    else {
      iVar2 = FUN_0009656c(param_2,param_3,&DAT_000ac738);
      if (iVar2 != 0) {
        FUN_00096504(*(undefined4 *)(param_1 + 0x18));
        *(int *)(param_1 + 0x18) = iVar1;
        FUN_00096504(*(undefined4 *)(param_1 + 0x1c));
        *(int *)(param_1 + 0x1c) = iVar2;
        return 0;
      }
      FUN_00095b4c(2,"src/thread.c",0x93,"zlog_buf_new fail");
    }
    if (iVar1 != 0) {
      FUN_00096504(iVar1);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

