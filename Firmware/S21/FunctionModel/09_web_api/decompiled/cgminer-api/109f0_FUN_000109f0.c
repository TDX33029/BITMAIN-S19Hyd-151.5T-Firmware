// FUN_000109f0 @ 000109f0  size=404  callers=1
// program: cgminer-api


void FUN_000109f0(char *param_1)

{
  char *pcVar1;
  ushort **ppuVar2;
  char *param2;
  char *__s;
  char *pcVar3;
  int param1;
  char *param2_00;
  
joined_r0x000109fc:
  __s = param_1;
  if (__s != (char *)0x0) {
    pcVar1 = strchr(__s,0x7c);
    if (pcVar1 != (char *)0x0) goto code_r0x00010a30;
    if (*__s != '\0') {
      param_1 = (char *)0x0;
      goto LAB_00010a6c;
    }
  }
  return;
code_r0x00010a30:
  param_1 = pcVar1 + 1;
  *pcVar1 = '\0';
  if (*__s != '\0') {
LAB_00010a6c:
    param1 = 0;
    do {
      pcVar1 = strchr(__s,0x2c);
      if (pcVar1 == (char *)0x0) {
        if (*__s == '\0') break;
        pcVar3 = (char *)0x0;
LAB_00010a90:
        pcVar1 = strchr(__s,0x3d);
        if (pcVar1 == (char *)0x0) {
          if (param1 == 0) {
LAB_00010b70:
            printf("[%s%s] =>\n(\n",__s,"");
          }
LAB_00010b50:
          printf("   [%d] => %s\n",param1,__s);
        }
        else {
          *pcVar1 = '\0';
          param2_00 = pcVar1 + 1;
          if (param1 == 0) {
            if (param2_00 == (char *)0x0) goto LAB_00010b70;
            ppuVar2 = __ctype_b_loc();
            param2 = param2_00;
            if (((*ppuVar2)[(byte)pcVar1[1]] & 0x800) == 0) {
              param2 = "";
            }
            printf("[%s%s] =>\n(\n",__s,param2);
          }
          else if (param2_00 == (char *)0x0) goto LAB_00010b50;
          printf("   [%s] => %s\n",__s,param2_00);
        }
      }
      else {
        pcVar3 = pcVar1 + 1;
        *pcVar1 = '\0';
        if (*__s != '\0') goto LAB_00010a90;
      }
      __s = pcVar3;
      param1 = param1 + 1;
    } while (__s != (char *)0x0);
    puts(")");
  }
  goto joined_r0x000109fc;
}

