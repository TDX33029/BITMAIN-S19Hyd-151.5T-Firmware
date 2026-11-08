// FUN_0003dd0c @ 0003dd0c  size=380  callers=1
// program: bmminer


void FUN_0003dd0c(pthread_t param_1)

{
  int iVar1;
  int iVar2;
  pthread_t pVar3;
  pthread_t *__s;
  pthread_t local_830 [4];
  pthread_t local_820;
  char local_81c [2048];
  
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      local_820._0_1_ = 'H';
      local_820._1_1_ = 'a';
      local_820._2_1_ = 'n';
      local_820._3_1_ = 'd';
      builtin_strncpy(local_81c,"le is NULL.\n",0xd);
      FUN_00032218(3,local_830 + 4,0);
      return;
    }
  }
  else {
    __s = local_830 + 4;
    pVar3 = 0;
    local_830[0] = 0;
    local_830[1] = 0;
    local_830[2] = 0;
    local_830[3] = 0;
    memset(__s,0,0x30);
    do {
      iVar1 = FUN_000201d8(pVar3);
      if ((iVar1 != 0) && (*(int *)(DAT_0050748c + (pVar3 + 2) * 4) == 1)) {
        *__s = pVar3;
        __s[1] = 0;
        __s[2] = param_1;
        pthread_create(local_830 + pVar3,(pthread_attr_t *)0x0,FUN_0003db58,__s);
        pthread_detach(local_830[pVar3]);
      }
      pVar3 = pVar3 + 1;
      __s = __s + 3;
    } while (pVar3 != 4);
    iVar1 = 0;
    do {
      while( true ) {
        iVar2 = FUN_000201d8(iVar1);
        if (((iVar2 == 0) || (local_830[iVar1] == 0)) || (local_830[iVar1 * 3 + 5] != 0)) break;
        usleep(100000);
        iVar1 = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
  }
  return;
}

