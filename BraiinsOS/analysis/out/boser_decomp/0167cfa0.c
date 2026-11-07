// FUN_0167cfa0 @ 0167cfa0 size=80 calls_out=0 calls_in=0
// strings: 

void FUN_0167cfa0(undefined4 *param_1,char *param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_5 < param_4) {
    cVar1 = *(char *)(param_3 + param_5);
    cVar2 = *param_2;
    bVar4 = cVar2 != cVar1;
    if (bVar4) {
      cVar2 = param_2[1];
    }
    if ((!bVar4 || cVar2 == cVar1) || (param_2[2] == cVar1)) {
      uVar3 = 1;
      param_1[1] = param_5;
      param_1[2] = param_5 + 1;
    }
  }
  *param_1 = uVar3;
  return;
}

