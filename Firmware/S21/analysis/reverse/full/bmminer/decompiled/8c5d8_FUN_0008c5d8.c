// FUN_0008c5d8 @ 0008c5d8  size=184  callers=1
// program: bmminer


undefined4 FUN_0008c5d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0008c434(param_2,param_3);
  if (iVar1 == 0) {
    FUN_00095b4c(2,"src/mdc.c",0x60,"zlog_mdc_kv_new failed");
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00095390(*param_1,iVar1,iVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00095b4c(2,"src/mdc.c",0x65,"zc_hashtable_put fail");
      FUN_0008c3ec(iVar1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

