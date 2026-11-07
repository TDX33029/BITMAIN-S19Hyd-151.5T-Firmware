// FUN_0001d618 @ 0001d618  size=428  callers=1
// program: bmminer


int FUN_0001d618(void)

{
  size_t __nmemb;
  int *__ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar5;
  int iVar7;
  char local_820 [2048];
  
  __nmemb = FUN_0002002c();
  __ptr = calloc(__nmemb,4);
  if (__ptr == (int *)0x0) {
    iVar3 = 0;
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_820,"malloc buf failed!\n",0x14);
      FUN_00032218(3,local_820,0);
    }
  }
  else {
    iVar3 = 0;
    if (DAT_00087dec == 2) {
      iVar4 = 0;
      iVar1 = FUN_000201d8(0);
      while( true ) {
        if (iVar1 != 0) {
          iVar7 = (&DAT_000891dc)[iVar4];
          iVar1 = FUN_0002002c();
          iVar2 = FUN_0002006c();
          iVar3 = iVar2 * iVar1 * iVar7 + iVar3;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 4) break;
        iVar1 = FUN_000201d8(iVar4);
      }
    }
    else {
      iVar4 = 0;
      do {
        iVar1 = FUN_000201d8(iVar4);
        if (iVar1 != 0) {
          FUN_0001ba18(iVar4,(undefined1)DAT_0008a848,__ptr);
          iVar1 = FUN_0002002c();
          if (0 < iVar1) {
            piVar5 = __ptr;
            do {
              piVar6 = piVar5 + 1;
              iVar7 = *piVar5;
              iVar2 = FUN_0002006c();
              iVar3 = iVar7 * iVar2 + iVar3;
              piVar5 = piVar6;
            } while (piVar6 != __ptr + iVar1);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
    DAT_000891ec = iVar3 / 1000;
    if (4 < DAT_00087bbc) {
      snprintf(local_820,0x800,"max_hash_rate = %d\n",DAT_000891ec);
      FUN_00032218(4,local_820,0);
    }
    iVar3 = DAT_000891ec;
    free(__ptr);
  }
  return iVar3;
}

