// FUN_00058c9c @ 00058c9c  size=128  callers=1
// program: bmminer


void FUN_00058c9c(void)

{
  int iVar1;
  void *pvVar2;
  void *__ptr;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = FUN_0002a514();
  pvVar2 = DAT_00944b80;
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      puVar3 = &DAT_003fea2a + iVar4;
      iVar4 = iVar4 + 1;
      __ptr = *(void **)((int)pvVar2 + (int)puVar3 * 4 + 4);
      if (__ptr != (void *)0x0) {
        free(__ptr);
        pvVar2 = DAT_00944b80;
        *(undefined4 *)((int)DAT_00944b80 + (int)puVar3 * 4 + 4) = 0;
      }
    } while (iVar1 != iVar4);
  }
  free(pvVar2);
  DAT_00944b80 = (void *)0x0;
  return;
}

