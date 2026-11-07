// FUN_0002cd24 @ 0002cd24  size=252  callers=1
// program: bmminer


void FUN_0002cd24(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  if ((DAT_0071c838 != (char *)0x0) && (*DAT_0071c838 != '\0')) {
    strcpy(param_1,DAT_0071c838);
    return;
  }
  pcVar1 = getenv("HOME");
  if ((pcVar1 == (char *)0x0) || (pcVar1 = getenv("HOME"), *pcVar1 == '\0')) {
    *param_1 = '\0';
  }
  else {
    pcVar1 = getenv("HOME");
    pcVar1 = stpcpy(param_1,pcVar1);
    pcVar1[0] = '/';
    pcVar1[1] = '\0';
  }
  sVar2 = strlen(param_1);
  builtin_strncpy(param_1 + sVar2,".bmminer/",10);
  mkdir(param_1,0x1ff);
  sVar2 = strlen(param_1);
  builtin_strncpy(param_1 + sVar2,"bmminer.conf",0xd);
  return;
}

