// FUN_0008bfb8 @ 0008bfb8  size=216  callers=2
// program: bmminer


undefined4 FUN_0008bfb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00097f80(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00095b4c(2,"src/level_list.c",0x55,"zlog_level_new fail");
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00094990(param_1,*puVar1,puVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00095b4c(2,"src/level_list.c",0x5a,"zc_arraylist_set fail");
      FUN_00095b4c(2,"src/level_list.c",0x60,"line[%s]",param_2);
      FUN_00097d78(puVar1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

