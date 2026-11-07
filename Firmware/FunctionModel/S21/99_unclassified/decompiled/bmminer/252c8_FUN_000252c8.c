// FUN_000252c8 @ 000252c8  size=428  callers=1
// program: bmminer


int FUN_000252c8(void)

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
  char local_2020 [8192];
  
  __nmemb = FUN_0002a514();
  __ptr = calloc(__nmemb,4);
  if (__ptr == (int *)0x0) {
    iVar3 = 0;
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2020,"malloc buf failed!\n",0x14);
      FUN_0004948c(3,local_2020,0);
    }
  }
  else {
    iVar3 = 0;
    if (DAT_000be8e8 == 2) {
      iVar4 = 0;
      iVar1 = FUN_0002a6f0(0);
      while( true ) {
        if (iVar1 != 0) {
          iVar7 = (&DAT_000c0430)[iVar4];
          iVar1 = FUN_0002a514();
          iVar2 = FUN_0002a554();
          iVar3 = iVar2 * iVar1 * iVar7 + iVar3;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 4) break;
        iVar1 = FUN_0002a6f0(iVar4);
      }
    }
    else {
      iVar4 = 0;
      do {
        iVar1 = FUN_0002a6f0(iVar4);
        if (iVar1 != 0) {
          FUN_0001c934(iVar4,(undefined1)DAT_000c94e8,__ptr);
          iVar1 = FUN_0002a514();
          if (0 < iVar1) {
            piVar5 = __ptr;
            do {
              piVar6 = piVar5 + 1;
              iVar7 = *piVar5;
              iVar2 = FUN_0002a554();
              iVar3 = iVar7 * iVar2 + iVar3;
              piVar5 = piVar6;
            } while (piVar6 != __ptr + iVar1);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
    DAT_000c0440 = iVar3 / 1000;
    if (4 < DAT_000be63c) {
      snprintf(local_2020,0x2000,"max_hash_rate = %d\n",DAT_000c0440);
      FUN_0004948c(4,local_2020,0);
    }
    iVar3 = DAT_000c0440;
    free(__ptr);
  }
  return iVar3;
}

