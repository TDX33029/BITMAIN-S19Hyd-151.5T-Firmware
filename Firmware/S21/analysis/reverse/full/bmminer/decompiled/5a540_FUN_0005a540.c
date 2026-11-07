// FUN_0005a540 @ 0005a540  size=284  callers=4
// program: bmminer


undefined4 FUN_0005a540(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *param4;
  char local_2010 [8192];
  
  if (4 < DAT_000be63c) {
    iVar2 = *(int *)(DAT_00944b84 + (param_1 + 2) * 4);
    if (iVar2 == 0) {
      param4 = "BLOCK";
    }
    else if (iVar2 == 1) {
      param4 = "READY";
    }
    else {
      param4 = "UNKNOWN";
      if (iVar2 == 2) {
        param4 = "DONE";
      }
    }
    snprintf(local_2010,0x2000,"[DEBUG] chain = %d, status = %s\n",param_1,param4);
    FUN_0004948c(4,local_2010,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"Handle is NULL.\n",0x11);
      FUN_0004948c(3,local_2010,0);
      return 2;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_00944b84 + (param_1 + 2) * 4);
  }
  return uVar1;
}

