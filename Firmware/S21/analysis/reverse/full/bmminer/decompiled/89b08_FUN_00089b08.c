// FUN_00089b08 @ 00089b08  size=472  callers=1
// program: bmminer


undefined4 FUN_00089b08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0008b77c(param_1 + 0x142c,param_1 + 0x244c);
  *(undefined4 *)(param_1 + 0x2430) = uVar1;
  if (*(int *)(param_1 + 0x2430) == 0) {
    FUN_00095b4c(2,"src/conf.c",0xb7,"zlog_format_new fail");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0008ce74(param_1 + 0x424);
    *(undefined4 *)(param_1 + 0x1428) = uVar1;
    if (*(int *)(param_1 + 0x1428) == 0) {
      FUN_00095b4c(2,"src/conf.c",0xbd,"zlog_rotater_new fail");
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = FUN_0009052c("*.*        >stdout",*(undefined4 *)(param_1 + 0x2440),
                           *(undefined4 *)(param_1 + 0x2430),*(undefined4 *)(param_1 + 0x2444),
                           *(undefined4 *)(param_1 + 0x2434),*(undefined4 *)(param_1 + 0x2438),
                           param_1 + 0x244c);
      if (iVar2 == 0) {
        FUN_00095b4c(2,"src/conf.c",0xca,"zlog_rule_new fail");
        uVar1 = 0xffffffff;
      }
      else {
        iVar3 = FUN_00094aa4(*(undefined4 *)(param_1 + 0x2448),iVar2);
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        else {
          FUN_00091a74(iVar2);
          FUN_00095b4c(2,"src/conf.c",0xd1,"zc_arraylist_add fail");
          uVar1 = 0xffffffff;
        }
      }
    }
  }
  return uVar1;
}

