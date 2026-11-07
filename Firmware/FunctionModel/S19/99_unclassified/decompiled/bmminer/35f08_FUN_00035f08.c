// FUN_00035f08 @ 00035f08  size=240  callers=1
// program: bmminer


void FUN_00035f08(void)

{
  pthread_t pVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  char acStack_810 [2056];
  
  FUN_00018510();
  sleep(2);
  FUN_0002b880();
  FUN_0002b7e0();
  pcVar2 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar2,"HHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar2,"HHB28602");
    if (iVar3 != 0) {
      return;
    }
  }
  pvVar4 = DAT_0071c780;
  if ((DAT_0071c780 != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar4 + 0xc) != pVar1)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(acStack_810,"cancel thread\n",0xf);
      FUN_00032218(3,acStack_810,0);
      pvVar4 = DAT_0071c780;
    }
    FUN_0003440c(pvVar4);
    free(DAT_0071c780);
    DAT_0071c780 = (void *)0x0;
  }
  return;
}

