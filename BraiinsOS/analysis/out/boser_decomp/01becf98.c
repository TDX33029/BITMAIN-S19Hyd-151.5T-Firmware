// FUN_01becf98 @ 01becf98 size=60 calls_out=0 calls_in=3
// strings: 

int FUN_01becf98(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    while( true ) {
      uVar2 = param_3 >> 1;
      if (param_3 == 0) {
        return 0;
      }
      iVar3 = param_4 * uVar2 + param_2;
      iVar1 = (*param_5)(param_1,iVar3);
      if (-1 < iVar1) break;
      param_3 = uVar2;
    }
    if (iVar1 == 0) break;
    param_2 = iVar3 + param_4;
    param_3 = (param_3 - 1) - uVar2;
  }
  return iVar3;
}

