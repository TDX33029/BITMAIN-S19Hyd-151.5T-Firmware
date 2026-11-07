// memmem @ 00044024  size=744  callers=0
// program: bmminer


void * memmem(void *__haystack,size_t __haystacklen,void *__needle,size_t __needlelen)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  uint __n;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int local_2c [2];
  
  if (__needlelen != 0) {
    if (__needlelen <= __haystacklen) {
      if (0x1f < __needlelen) {
        pvVar1 = (void *)FUN_00043cf8();
        return pvVar1;
      }
      pvVar1 = memchr(__haystack,(uint)*(byte *)__needle,__haystacklen);
      if (pvVar1 == (void *)0x0 || __needlelen == 1) {
        return pvVar1;
      }
      uVar10 = __haystacklen - ((int)pvVar1 - (int)__haystack);
      if (__needlelen <= uVar10) {
        if (__needlelen < 3) {
          __n = __needlelen - 1;
          local_2c[0] = 1;
        }
        else {
          __n = FUN_00043be8(__needle,__needlelen,local_2c);
        }
        iVar9 = local_2c[0];
        iVar2 = memcmp(__needle,(void *)((int)__needle + local_2c[0]),__n);
        if (iVar2 == 0) {
          uVar6 = __n - 1;
          uVar3 = 0;
          uVar11 = 0;
          do {
            if (__n < uVar11) {
              uVar7 = uVar11;
            }
            else {
              uVar7 = __n;
            }
            if (uVar7 < __needlelen) {
              pcVar12 = (char *)((int)__needle + uVar7);
              pcVar4 = (char *)((int)pvVar1 + uVar7 + uVar3);
              if (*(char *)((int)__needle + uVar7) == *(char *)((int)pvVar1 + uVar7 + uVar3)) {
                do {
                  uVar7 = uVar7 + 1;
                  if (__needlelen == uVar7) goto LAB_0004413c;
                  pcVar12 = pcVar12 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (*pcVar12 == *pcVar4);
              }
              uVar3 = (1 - __n) + uVar3 + uVar7;
              uVar11 = 0;
            }
            else {
LAB_0004413c:
              if ((uVar11 < __n) &&
                 (pcVar4 = (char *)((int)pvVar1 + uVar6 + uVar3),
                 *(char *)((int)__needle + uVar6) == *(char *)((int)pvVar1 + uVar6 + uVar3))) {
                pcVar12 = (char *)((int)__needle + uVar6);
                uVar7 = uVar6;
                while (uVar7 - 1 != uVar11 - 1) {
                  pcVar12 = pcVar12 + -1;
                  pcVar4 = pcVar4 + -1;
                  if (*pcVar12 != *pcVar4) break;
                  uVar7 = uVar7 - 1;
                }
              }
              else {
                uVar7 = __n;
              }
              if (uVar7 < uVar11 + 1) {
                return (void *)((int)pvVar1 + uVar3);
              }
              uVar3 = uVar3 + iVar9;
              uVar11 = __needlelen - iVar9;
            }
          } while (uVar3 <= uVar10 - __needlelen);
        }
        else {
          uVar3 = __needlelen - __n;
          if (__needlelen - __n < __n) {
            uVar3 = __n;
          }
          uVar11 = 0;
          pcVar4 = (char *)((int)__needle + (__n - 1));
          do {
            if (__n < __needlelen) {
              pcVar12 = (char *)((int)pvVar1 + __n + uVar11);
              sVar8 = __n;
              if (*(char *)((int)pvVar1 + __n + uVar11) == *(char *)((int)__needle + __n)) {
                pcVar5 = (char *)((int)__needle + __n);
                do {
                  sVar8 = sVar8 + 1;
                  if (__needlelen == sVar8) goto LAB_00044268;
                  pcVar5 = pcVar5 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (*pcVar5 == *pcVar12);
              }
              uVar11 = (1 - __n) + uVar11 + sVar8;
            }
            else {
LAB_00044268:
              if (__n == 0) {
LAB_000442ac:
                return (void *)((int)pvVar1 + uVar11);
              }
              iVar9 = (__n - 1) + uVar11;
              pcVar12 = (char *)((int)pvVar1 + iVar9);
              if (*(char *)((int)pvVar1 + iVar9) == *pcVar4) {
                pcVar5 = pcVar4;
                do {
                  if (pcVar5 == __needle) goto LAB_000442ac;
                  pcVar5 = pcVar5 + -1;
                  pcVar12 = pcVar12 + -1;
                } while (*pcVar5 == *pcVar12);
              }
              uVar11 = uVar11 + uVar3 + 1;
            }
          } while (uVar11 <= uVar10 - __needlelen);
        }
      }
    }
    __haystack = (void *)0x0;
  }
  return __haystack;
}

