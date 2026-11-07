// FUN_016dccf8 @ 016dccf8 size=140 calls_out=1 calls_in=2
// strings: 

void FUN_016dccf8(int param_1,int param_2,code *param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10c [58];
  
  iVar4 = 1;
  local_10c[0] = param_1;
  while( true ) {
    iVar2 = local_10c[0];
    iVar3 = param_1 + -param_2;
    if (param_5 < 2) break;
    param_1 = param_1 + (-param_2 - *(int *)(param_6 + (param_5 + 0x3ffffffe) * 4));
    iVar1 = (*param_3)(local_10c[0],param_1,param_4);
    if ((-1 < iVar1) && (iVar2 = (*param_3)(iVar2,iVar3,param_4), -1 < iVar2)) break;
    iVar2 = (*param_3)(param_1,iVar3,param_4);
    if (iVar2 < 0) {
      param_5 = param_5 + -2;
    }
    else {
      param_5 = param_5 + -1;
      iVar3 = param_1;
    }
    local_10c[iVar4] = iVar3;
    iVar4 = iVar4 + 1;
    param_1 = iVar3;
  }
  FUN_016dcc9c(param_2,local_10c,iVar4);
  return;
}

