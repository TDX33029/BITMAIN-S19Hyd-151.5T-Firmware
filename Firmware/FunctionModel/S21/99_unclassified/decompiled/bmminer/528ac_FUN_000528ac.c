// FUN_000528ac @ 000528ac  size=344  callers=1
// program: bmminer


undefined4 FUN_000528ac(void)

{
  int iVar1;
  char *pcVar2;
  char *__s1;
  int iVar3;
  char *param5;
  char acStack_2018 [8192];
  
  __s1 = &DAT_000be91d;
  iVar3 = 0;
  do {
    pcVar2 = strstr(*(char **)(__s1 + -0x11),"str");
    if (pcVar2 == (char *)0x0) {
      if ((uint)**(byte **)(__s1 + -5) != (uint)(byte)__s1[-1]) {
        if (DAT_000be63c < 4) {
          return 1;
        }
        snprintf(acStack_2018,0x2000,"droa,%s intcmp different, %d",
                 (char *)(&DAT_000be908)[iVar3 * 0x16],(uint)(byte)__s1[-1]);
        FUN_0004948c(3,acStack_2018,0);
        return 1;
      }
    }
    else {
      param5 = *(char **)(__s1 + -9);
      pcVar2 = param5;
      if (*param5 == '\0') {
        pcVar2 = "None";
      }
      iVar1 = strcmp(__s1,pcVar2);
      if (iVar1 != 0) {
        if (DAT_000be63c < 4) {
          return 1;
        }
        snprintf(acStack_2018,0x2000,"droa,%s strcmp different, %s,%s",
                 (char *)(&DAT_000be908)[iVar3 * 0x16],__s1,param5);
        FUN_0004948c(3,acStack_2018,0);
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    __s1 = __s1 + 0x58;
    if (iVar3 == 0xc) {
      return 0;
    }
  } while( true );
}

