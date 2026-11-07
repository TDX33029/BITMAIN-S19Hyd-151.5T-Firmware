// FUN_00066834 @ 00066834  size=432  callers=0
// program: bmminer


void * FUN_00066834(int *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  char *__src;
  size_t sVar4;
  uint uVar5;
  bool bVar6;
  char local_22 [6];
  
  if (*param_1 == 0) {
    FUN_000658a8(2,"src/buf.c",0x1b2,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return (void *)0xffffffff;
  }
  __src = local_22 + 1;
  do {
    uVar3 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    __src = __src + -1;
    *__src = "0123456789abcdef"[uVar3];
  } while (param_2 != 0);
  sVar4 = (int)(local_22 + 1) - (int)__src;
  pvVar1 = (void *)param_1[1];
  uVar3 = param_1[2];
  if (sVar4 < param_3) {
    uVar5 = (int)pvVar1 + param_3;
    __n = param_3 - sVar4;
    if (uVar3 < uVar5) goto LAB_000668e4;
  }
  else {
    uVar5 = (int)pvVar1 + sVar4;
    __n = 0;
    if (uVar5 <= uVar3) goto LAB_000668c0;
    param_3 = sVar4;
LAB_000668e4:
    iVar2 = FUN_00065e68(param_1,param_3 - (uVar3 - (int)pvVar1));
    if (0 < iVar2) {
      FUN_000658a8(2,"src/buf.c",0x1d9,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      pvVar1 = (void *)param_1[1];
      uVar3 = param_1[2] - (int)pvVar1;
      if (__n < uVar3) {
        sVar4 = uVar3 - __n;
      }
      else {
        sVar4 = 0;
        __n = uVar3;
      }
      if (__n != 0) {
        memset(pvVar1,0x30,__n);
        pvVar1 = (void *)param_1[1];
      }
      pvVar1 = memcpy((void *)((int)pvVar1 + __n),__src,sVar4);
      bVar6 = (char)param_1[7] == '\0';
      if (bVar6) {
        pvVar1 = (void *)0x1;
      }
      param_1[1] = param_1[1] + uVar3;
      if (bVar6) {
        return pvVar1;
      }
      FUN_00065f90(param_1);
      return (void *)0x1;
    }
    if (iVar2 != 0) {
      FUN_000658a8(2,"src/buf.c",0x1e9,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar1 = (void *)param_1[1];
    uVar5 = (int)pvVar1 + param_3;
  }
  if (__n != 0) {
    memset(pvVar1,0x30,__n);
    pvVar1 = (void *)param_1[1];
  }
LAB_000668c0:
  memcpy((void *)((int)pvVar1 + __n),__src,sVar4);
  param_1[1] = uVar5;
  return (void *)0x0;
}

