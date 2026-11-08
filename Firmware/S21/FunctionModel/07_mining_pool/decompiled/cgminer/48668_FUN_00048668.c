// FUN_00048668 @ 00048668  size=320  callers=1
// program: cgminer


uint FUN_00048668(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  lconv *plVar3;
  char *pcVar4;
  char *pcVar5;
  size_t __n;
  
  if (param_3 == 0) {
    param_3 = 0x11;
  }
  uVar2 = snprintf(param_1,param_2,"%.*g",param_3);
  if (param_2 <= uVar2) {
    return 0xffffffff;
  }
  plVar3 = localeconv();
  if (((byte)*plVar3->decimal_point != 0x2e) &&
     (pcVar4 = strchr(param_1,(uint)(byte)*plVar3->decimal_point), pcVar4 != (char *)0x0)) {
    *pcVar4 = '.';
  }
  pcVar5 = strchr(param_1,0x2e);
  pcVar4 = strchr(param_1,0x65);
  if (pcVar5 == (char *)0x0) {
    if (pcVar4 != (char *)0x0) goto LAB_000486f4;
    if (param_2 <= uVar2 + 3) {
      return 0xffffffff;
    }
    pcVar4 = param_1 + uVar2;
    *pcVar4 = '.';
    uVar2 = uVar2 + 2;
    pcVar4[1] = '0';
    param_1[uVar2] = '\0';
    pcVar4 = strchr(param_1,0x65);
  }
  if (pcVar4 == (char *)0x0) {
    return uVar2;
  }
LAB_000486f4:
  pcVar5 = pcVar4 + 2;
  cVar1 = pcVar4[2];
  if (pcVar4[1] == '-') {
    pcVar4 = pcVar5;
    if (cVar1 == '0') goto LAB_00048714;
  }
  else {
    pcVar4 = pcVar4 + 1;
    while (cVar1 == '0') {
LAB_00048714:
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    if (pcVar5 != pcVar4) {
      __n = uVar2 - ((int)pcVar5 - (int)param_1);
      uVar2 = uVar2 - ((int)pcVar5 - (int)pcVar4);
      memmove(pcVar4,pcVar5,__n);
    }
  }
  return uVar2;
}

