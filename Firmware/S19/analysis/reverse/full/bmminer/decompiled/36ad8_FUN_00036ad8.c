// FUN_00036ad8 @ 00036ad8  size=64  callers=1
// program: bmminer


bool FUN_00036ad8(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar1,"HHB28601");
  if (iVar2 == 0) {
    return true;
  }
  pcVar1 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar1,"HHB28602");
  return iVar2 == 0;
}

