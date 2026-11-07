// FUN_00042b5c @ 00042b5c  size=184  callers=4
// program: bmminer


char * FUN_00042b5c(int param_1,uint *param_2,size_t *param_3)

{
  char *pcVar1;
  size_t sVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  if (uVar4 < DAT_00b2d274) {
    do {
      piVar3 = (int *)(DAT_00b2d26c + uVar4 * 0x1c);
      if (piVar3[1] != 8) {
        if (param_1 == 0) {
          pcVar1 = (char *)(*piVar3 + 1);
          sVar2 = strcspn(pcVar1,"|= ");
          *param_3 = sVar2;
          return pcVar1;
        }
        pcVar1 = (char *)FUN_00042b14(param_1,param_3);
        if (pcVar1 != (char *)0x0) {
          return pcVar1;
        }
        uVar4 = *param_2;
        param_1 = 0;
      }
      uVar4 = uVar4 + 1;
      *param_2 = uVar4;
    } while (uVar4 < DAT_00b2d274);
  }
  return (char *)0x0;
}

