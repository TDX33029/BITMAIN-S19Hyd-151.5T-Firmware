// FUN_00020bbc @ 00020bbc  size=212  callers=2
// program: cgminer


char * FUN_00020bbc(char *param_1,int param_2)

{
  int iVar1;
  char *__dest;
  char *__src;
  char *pcVar2;
  int iVar3;
  size_t __n;
  
  iVar3 = 0;
  pcVar2 = "http:";
  __n = 5;
  *(undefined4 *)(param_2 + 0xb8) = 0;
  while( true ) {
    iVar1 = strncmp(param_1,pcVar2,__n);
    if (iVar1 == 0) {
      pcVar2 = strchr(param_1,0x7c);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        __dest = (char *)FUN_0001f860(pcVar2 + ((1 - __n) - (int)param_1),"util.c","get_proxy",0x2ec
                                     );
        __src = param_1 + __n;
        *(char **)(param_2 + 0xb8) = __dest;
        param_1 = pcVar2 + 1;
        strcpy(__dest,__src);
        FUN_00020a48(*(undefined4 *)(param_2 + 0xb8),param_2 + 0x26c,param_2 + 0x270);
        *(undefined4 *)(param_2 + 0xb4) = (&DAT_0004c864)[iVar3 * 2];
      }
      return param_1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = *(char **)(&UNK_0004c860 + iVar3 * 8);
    if (pcVar2 == (char *)0x0) break;
    __n = strlen(pcVar2);
  }
  return param_1;
}

