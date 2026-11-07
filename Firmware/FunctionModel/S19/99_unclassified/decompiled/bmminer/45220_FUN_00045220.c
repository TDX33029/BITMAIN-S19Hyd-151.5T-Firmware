// FUN_00045220 @ 00045220  size=108  callers=1
// program: bmminer


undefined4 FUN_00045220(int param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  bVar4 = SBORROW4(param_1,3);
  iVar2 = param_1 + -3;
  bVar3 = param_1 == 3;
  if (param_1 < 4) {
    bVar4 = SBORROW4(param_2,0xff);
    iVar2 = param_2 + -0xff;
    bVar3 = param_2 == 0xff;
  }
  if (!bVar3 && iVar2 < 0 == bVar4) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050749c);
  dVar5 = 0.0;
  pdVar1 = (double *)(&DAT_005074b8 + (param_2 + param_1 * 0x100) * 0x20);
  iVar2 = 4;
  do {
    dVar6 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + -1;
    dVar5 = dVar5 + dVar6;
  } while (iVar2 != 0);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050749c);
  return SUB84(dVar5,0);
}

