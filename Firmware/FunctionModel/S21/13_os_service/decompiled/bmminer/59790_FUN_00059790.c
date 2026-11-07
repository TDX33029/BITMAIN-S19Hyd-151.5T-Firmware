// FUN_00059790 @ 00059790  size=380  callers=1
// program: bmminer


void FUN_00059790(pthread_t param_1)

{
  int iVar1;
  int iVar2;
  pthread_t pVar3;
  pthread_t *__s;
  pthread_t local_2030 [4];
  pthread_t local_2020;
  char local_201c [8192];
  
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      local_2020._0_1_ = 'H';
      local_2020._1_1_ = 'a';
      local_2020._2_1_ = 'n';
      local_2020._3_1_ = 'd';
      builtin_strncpy(local_201c,"le is NULL.\n",0xd);
      FUN_0004948c(3,local_2030 + 4,0);
      return;
    }
  }
  else {
    __s = local_2030 + 4;
    pVar3 = 0;
    local_2030[1] = 0;
    local_2030[2] = 0;
    local_2030[3] = 0;
    local_2030[0] = 0;
    memset(__s,0,0x30);
    do {
      iVar1 = FUN_0002a6f0(pVar3);
      if ((iVar1 != 0) && (*(int *)(DAT_00944b84 + (pVar3 + 2) * 4) == 1)) {
        *__s = pVar3;
        __s[1] = 0;
        __s[2] = param_1;
        pthread_create(local_2030 + pVar3,(pthread_attr_t *)0x0,FUN_000595dc,__s);
        pthread_detach(local_2030[pVar3]);
      }
      pVar3 = pVar3 + 1;
      __s = __s + 3;
    } while (pVar3 != 4);
    iVar1 = 0;
    do {
      while( true ) {
        iVar2 = FUN_0002a6f0(iVar1);
        if (((iVar2 == 0) || (local_2030[iVar1] == 0)) || (local_2030[iVar1 * 3 + 5] != 0)) break;
        usleep(100000);
        iVar1 = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
  }
  return;
}

