// FUN_0003e948 @ 0003e948  size=372  callers=2
// program: bmminer


void FUN_0003e948(int param_1,int param_2)

{
  int iVar1;
  char *param4;
  int iVar2;
  char local_818 [2052];
  
  if (DAT_00087bbc < 4) {
    if ((DAT_0050748c != 0) && (*(int *)(DAT_0050748c + 4) != 0)) goto LAB_0003ea30;
  }
  else {
    if (param_2 == 0) {
      param4 = "BLOCK";
    }
    else if (param_2 == 1) {
      param4 = "READY";
    }
    else {
      param4 = "DONE";
      if (param_2 != 2) {
        param4 = "UNKNOWN";
      }
    }
    snprintf(local_818,0x800,"chain = %d, status = %s\n",param_1,param4);
    FUN_00032218(3,local_818,0);
    if ((DAT_0050748c != 0) && (*(int *)(DAT_0050748c + 4) != 0)) {
LAB_0003ea30:
      iVar2 = 0;
      do {
        iVar1 = FUN_000201d8(iVar2);
        if (iVar1 != 0) {
          if (param_1 == 0xff) {
            *(int *)(DAT_0050748c + (iVar2 + 2) * 4) = param_2;
          }
          else if (param_1 == iVar2) {
            *(int *)(DAT_0050748c + (param_1 + 2) * 4) = param_2;
            return;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      return;
    }
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_818,"Handle is NULL.\n",0x11);
      FUN_00032218(3,local_818,0);
    }
  }
  return;
}

