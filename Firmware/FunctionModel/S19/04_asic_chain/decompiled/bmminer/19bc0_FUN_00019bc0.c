// FUN_00019bc0 @ 00019bc0  size=520  callers=1
// program: bmminer


undefined4 FUN_00019bc0(void)

{
  int iVar1;
  void *pvVar2;
  size_t __nmemb;
  int iVar3;
  int *piVar4;
  void *__ptr;
  char local_818 [2048];
  
  if ((DAT_00089088 != (void *)0x0) || (DAT_00089088 = calloc(1,0x20), DAT_00089088 != (void *)0x0))
  {
    iVar3 = 0;
    do {
      iVar1 = FUN_000201d8(iVar3);
      __ptr = DAT_00089088;
      if ((iVar1 != 0) && (*(int *)((int)DAT_00089088 + iVar3 * 4) == 0)) {
        pvVar2 = calloc(1,0x45);
        *(void **)((int)__ptr + iVar3 * 4) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          if (3 < DAT_00087bbc) {
            snprintf(local_818,0x800,"No memory for configuraion for chain %d.\n",iVar3);
            FUN_00032218(3,local_818,0);
            __ptr = DAT_00089088;
          }
          goto LAB_00019ca0;
        }
        __nmemb = FUN_0002002c();
        __ptr = DAT_00089088;
        iVar1 = *(int *)((int)DAT_00089088 + iVar3 * 4);
        pvVar2 = calloc(__nmemb,1);
        *(void **)(iVar1 + 0x3c) = pvVar2;
        if (*(int *)(*(int *)((int)__ptr + iVar3 * 4) + 0x3c) == 0) {
          if (3 < DAT_00087bbc) {
            snprintf(local_818,0x800,"No memory for configuraion for chain %d.\n",iVar3);
            FUN_00032218(3,local_818,0);
            __ptr = DAT_00089088;
          }
          goto LAB_00019ca0;
        }
      }
      iVar3 = iVar3 + 1;
      if (iVar3 == 4) {
        return 0;
      }
    } while( true );
  }
  if (3 < DAT_00087bbc) {
    builtin_strncpy(local_818,"No memory for configuraion.\n",0x1d);
    FUN_00032218(3,local_818,0);
    __ptr = DAT_00089088;
LAB_00019ca0:
    if (__ptr != (void *)0x0) {
      piVar4 = (int *)((int)__ptr + -4);
      do {
        piVar4 = piVar4 + 1;
        pvVar2 = (void *)*piVar4;
        if (pvVar2 != (void *)0x0) {
          if (*(void **)((int)pvVar2 + 0x3c) != (void *)0x0) {
            free(*(void **)((int)pvVar2 + 0x3c));
            iVar3 = *piVar4;
            *(undefined1 *)(iVar3 + 0x3c) = 0;
            *(undefined1 *)(iVar3 + 0x3d) = 0;
            *(undefined1 *)(iVar3 + 0x3e) = 0;
            *(undefined1 *)(iVar3 + 0x3f) = 0;
            pvVar2 = (void *)*piVar4;
          }
          free(pvVar2);
          *piVar4 = 0;
        }
      } while (piVar4 != (int *)((int)__ptr + 0xc));
      free(__ptr);
      DAT_00089088 = (void *)0x0;
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

