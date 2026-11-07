// FUN_0002998c @ 0002998c  size=488  callers=15
// program: bmminer


undefined4 FUN_0002998c(char *param_1)

{
  uint uVar1;
  void *__ptr;
  size_t sVar2;
  char *__dest;
  undefined4 uVar3;
  char local_2020 [8196];
  
  DAT_00a4eda8 = 4;
  DAT_00a4ee00 = 0;
  __ptr = calloc(4,0x210);
  DAT_00a4ee10 = __ptr;
  if (__ptr == (void *)0x0) {
    if (3 < DAT_000be63c) {
      snprintf(local_2020,0x2000,"malloc %d runtime_chain failed\n",4);
      FUN_0004948c(3,local_2020,0);
      return 0x80000400;
    }
    uVar3 = 0x80000400;
  }
  else {
    DAT_00a4ee18 = calloc(0,8);
    if (DAT_00a4ee18 == (void *)0x0) {
      if (3 < DAT_000be63c) {
        snprintf(local_2020,0x2000,"malloc %d runtime_fan failed\n",0);
        FUN_0004948c(3,local_2020,0);
        __ptr = DAT_00a4ee10;
      }
      free(__ptr);
      uVar3 = 0x80000400;
    }
    else {
      if (param_1 != (char *)0x0) {
        sVar2 = strlen(param_1);
        __dest = calloc(sVar2 + 1,1);
        uVar1 = DAT_000be63c;
        DAT_00a4ed98 = __dest;
        if (__dest == (char *)0x0) {
          if (DAT_000be63c < 4) {
            return 0xffffffff;
          }
          builtin_strncpy(local_2020,"get machine failed, Cannot allocate space\n",0x2b);
          FUN_0004948c(3,local_2020,0);
          return 0xffffffff;
        }
        strcpy(__dest,param_1);
        if (4 < uVar1) {
          snprintf(local_2020,0x2000,"initial machine : %s \n",__dest);
          FUN_0004948c(4,local_2020,0);
        }
      }
      uVar3 = 0;
      DAT_00a4ee08 = 1;
    }
  }
  return uVar3;
}

