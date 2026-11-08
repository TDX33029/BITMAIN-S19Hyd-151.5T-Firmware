// FUN_0005f494 @ 0005f494  size=176  callers=2
// program: bmminer


undefined4 FUN_0005f494(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00066de8(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_000658a8(2,"src/level_list.c",0x55,"zlog_level_new fail");
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00064f04(param_1,*puVar1,puVar1);
    uVar3 = 0;
    if (iVar2 != 0) {
      FUN_000658a8(2,"src/level_list.c",0x5a,"zc_arraylist_set fail");
      FUN_000658a8(2,"src/level_list.c",0x60,"line[%s]",param_2);
      FUN_00066d84(puVar1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

