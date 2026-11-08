// FUN_013cc7b4 @ 013cc7b4 size=84 calls_out=0 calls_in=0
// strings: 

void FUN_013cc7b4(undefined4 *param_1,char *param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  if (param_5 < param_4) {
    cVar1 = *(char *)(param_3 + param_5);
    cVar2 = *param_2;
    bVar3 = cVar2 != cVar1;
    if (bVar3) {
      cVar2 = param_2[1];
    }
    if ((!bVar3 || cVar2 == cVar1) || (param_2[2] == cVar1)) {
      param_1[1] = param_5;
      param_1[2] = param_5 + 1;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}

