// FUN_0005f9d4 @ 0005f9d4  size=240  callers=1
// program: bmminer


undefined4 FUN_0005f9d4(undefined4 *param_1,char *param_2,char *param_3)

{
  char *param0;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  param0 = calloc(1,0x808);
  if (param0 == (char *)0x0) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/mdc.c",0x36,"calloc fail, errno[%d]",*piVar2);
    FUN_000658a8(2,"src/mdc.c",0x60,"zlog_mdc_kv_new failed");
    uVar3 = 0xffffffff;
  }
  else {
    snprintf(param0,0x401,"%s",param_2);
    iVar1 = snprintf(param0 + 0x401,0x401,"%s",param_3);
    *(int *)(param0 + 0x804) = iVar1;
    iVar1 = FUN_000653d0(*param_1,param0,param0);
    uVar3 = 0;
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/mdc.c",0x65,"zc_hashtable_put fail");
      FUN_0005f7ac(param0);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

