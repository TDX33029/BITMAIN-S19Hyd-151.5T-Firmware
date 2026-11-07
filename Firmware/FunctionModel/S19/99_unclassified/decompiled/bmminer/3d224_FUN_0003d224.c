// FUN_0003d224 @ 0003d224  size=128  callers=1
// program: bmminer


void FUN_0003d224(void)

{
  int iVar1;
  void *pvVar2;
  void *__ptr;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = FUN_0002002c();
  pvVar2 = DAT_00507488;
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      puVar3 = &DAT_00202a2a + iVar4;
      iVar4 = iVar4 + 1;
      __ptr = *(void **)((int)pvVar2 + (int)puVar3 * 4 + 4);
      if (__ptr != (void *)0x0) {
        free(__ptr);
        pvVar2 = DAT_00507488;
        *(undefined4 *)((int)DAT_00507488 + (int)puVar3 * 4 + 4) = 0;
      }
    } while (iVar1 != iVar4);
  }
  free(pvVar2);
  DAT_00507488 = (void *)0x0;
  return;
}

