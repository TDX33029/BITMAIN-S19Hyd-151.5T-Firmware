// FUN_000305c0 @ 000305c0  size=236  callers=0
// program: cgminer


undefined4 FUN_000305c0(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  char *__haystack;
  char acStack_810 [2052];
  
  piVar1 = (int *)FUN_00030574();
  FUN_0002a4dc(piVar1,param_1);
  __haystack = (char *)piVar1[0x29];
  pcVar2 = strstr(__haystack,".nicehash.com");
  if ((((pcVar2 != (char *)0x0) || (pcVar2 = strstr(__haystack,"#xnsub"), pcVar2 != (char *)0x0)) &&
      (*(undefined1 *)(piVar1 + 0x91) = 1, DAT_000686f1 != '\0')) &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_810,0x800,"Pool %d extranonce subscribing enabled.",*piVar1);
    FUN_0001dd98(7,acStack_810,0);
  }
  return 0;
}

