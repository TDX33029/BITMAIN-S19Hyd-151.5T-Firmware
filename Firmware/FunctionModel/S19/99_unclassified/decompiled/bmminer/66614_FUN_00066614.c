// FUN_00066614 @ 00066614  size=544  callers=0
// program: bmminer


void * FUN_00066614(int *param_1,undefined4 param_2,uint param_3,int param_4,char *param_5)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  char extraout_r2;
  uint uVar4;
  size_t __n;
  undefined4 uVar5;
  char *__src;
  char *__n_00;
  size_t __n_01;
  char *pcVar6;
  bool bVar7;
  longlong lVar8;
  char local_25 [9];
  
  lVar8 = CONCAT44(param_4,param_3);
  if (*param_1 == 0) {
    FUN_000658a8(2,"src/buf.c",0x156,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return (void *)0xffffffff;
  }
  __src = local_25 + 1;
  if (param_4 == 0) {
    __src = local_25 + 1;
    do {
      uVar4 = param_3 / 10;
      __src = __src + -1;
      *__src = (char)(param_3 % 10) + '0';
      param_3 = uVar4;
    } while (uVar4 != 0);
  }
  else {
    do {
      uVar5 = (undefined4)((ulonglong)lVar8 >> 0x20);
      FUN_00067ad0((int)lVar8,uVar5,10,0);
      __src = __src + -1;
      *__src = extraout_r2 + '0';
      lVar8 = FUN_00067ad0((int)lVar8,uVar5,10,0);
    } while (lVar8 != 0);
  }
  __n_00 = local_25 + (1 - (int)__src);
  pvVar1 = (void *)param_1[1];
  pcVar3 = (char *)param_1[2];
  if (__n_00 < param_5) {
    pcVar6 = (char *)((int)pvVar1 + (int)param_5);
    __n = (int)param_5 - (int)__n_00;
    if (pcVar3 < pcVar6) goto LAB_00066734;
  }
  else {
    pcVar6 = (char *)((int)pvVar1 + (int)__n_00);
    if (pcVar6 <= pcVar3) {
      __n = 0;
      goto LAB_000666b4;
    }
    __n = 0;
    param_5 = __n_00;
LAB_00066734:
    iVar2 = FUN_00065e68(param_1,(int)param_5 - ((int)pcVar3 - (int)pvVar1));
    if (0 < iVar2) {
      FUN_000658a8(2,"src/buf.c",0x189,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      pvVar1 = (void *)param_1[1];
      uVar4 = param_1[2] - (int)pvVar1;
      if (__n < uVar4) {
        __n_01 = uVar4 - __n;
      }
      else {
        __n_01 = 0;
        __n = uVar4;
      }
      if (__n != 0) {
        memset(pvVar1,0x30,__n);
        pvVar1 = (void *)param_1[1];
      }
      pvVar1 = memcpy((void *)((int)pvVar1 + __n),__src,__n_01);
      bVar7 = (char)param_1[7] == '\0';
      if (bVar7) {
        pvVar1 = (void *)0x1;
      }
      param_1[1] = param_1[1] + uVar4;
      if (!bVar7) {
        FUN_00065f90(param_1);
        return (void *)0x1;
      }
      return pvVar1;
    }
    if (iVar2 != 0) {
      FUN_000658a8(2,"src/buf.c",0x199,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar1 = (void *)param_1[1];
    pcVar6 = (char *)((int)pvVar1 + (int)param_5);
  }
  if (__n != 0) {
    memset(pvVar1,0x30,__n);
    pvVar1 = (void *)param_1[1];
  }
LAB_000666b4:
  memcpy((void *)((int)pvVar1 + __n),__src,(size_t)__n_00);
  param_1[1] = (int)pcVar6;
  return (void *)0x0;
}

