// FUN_00ead77c @ 00ead77c size=176 calls_out=2 calls_in=1
// strings: 

void FUN_00ead77c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    iVar1 = param_2[2];
    iVar2 = param_2[3];
    iVar3 = param_2[4];
    FUN_019b9f84(&local_40);
    local_40 = param_3;
    local_3c = param_4;
    local_38 = iVar1;
    local_34 = iVar2;
    local_30 = iVar3;
    uVar4 = FUN_00eac934(&local_40);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = uVar4;
    return;
  }
  FUN_01bed4e2(param_1,param_2,0x1d8);
  return;
}

