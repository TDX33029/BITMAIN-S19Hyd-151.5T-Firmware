// FUN_0003eabc @ 0003eabc  size=284  callers=4
// program: bmminer


undefined4 FUN_0003eabc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *param4;
  char local_810 [2048];
  
  if (4 < DAT_00087bbc) {
    iVar2 = *(int *)(DAT_0050748c + (param_1 + 2) * 4);
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
    snprintf(local_810,0x800,"[DEBUG] chain = %d, status = %s\n",param_1,param4);
    FUN_00032218(4,local_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"Handle is NULL.\n",0x11);
      FUN_00032218(3,local_810,0);
      return 2;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_0050748c + (param_1 + 2) * 4);
  }
  return uVar1;
}

