// FUN_0003e99c @ 0003e99c  size=160  callers=2
// program: cgminer


char * FUN_0003e99c(uint *param_1,size_t *param_2)

{
  size_t sVar1;
  char *__s;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  *param_1 = 0;
  if (DAT_000762fc == 0) {
LAB_0003ea34:
    __s = (char *)0x0;
  }
  else {
    piVar3 = DAT_00076304;
    if (DAT_00076304[1] == 8) {
      iVar2 = 0x1c;
      uVar4 = 1;
      do {
        *param_1 = uVar4;
        if (DAT_000762fc <= uVar4) goto LAB_0003ea34;
        piVar3 = (int *)((int)DAT_00076304 + iVar2);
        iVar2 = iVar2 + 0x1c;
        uVar4 = uVar4 + 1;
      } while (piVar3[1] == 8);
    }
    __s = (char *)(*piVar3 + 1);
    sVar1 = strcspn(__s,"|= ");
    *param_2 = sVar1;
  }
  return __s;
}

