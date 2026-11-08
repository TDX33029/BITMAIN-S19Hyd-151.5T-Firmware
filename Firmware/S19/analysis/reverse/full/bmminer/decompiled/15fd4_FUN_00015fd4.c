// FUN_00015fd4 @ 00015fd4  size=88  callers=3
// program: bmminer


undefined4 FUN_00015fd4(__time_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  timespec local_18;
  
  iVar1 = clock_gettime(1,&local_18);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = local_18.tv_sec;
    param_1[1] = local_18.tv_nsec / 1000;
  }
  return uVar2;
}

