// FUN_011e5e98 @ 011e5e98 size=148 calls_out=1 calls_in=3
// strings: 

void FUN_011e5e98(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    local_28 = param_2[2];
    iStack_24 = param_2[3];
    local_20 = param_2[4];
    iStack_1c = param_2[5];
    FUN_0128371c(&local_38,&local_28,local_20);
    (**(code **)(local_28 + 0x10))(&iStack_1c,iStack_24,local_20);
    param_1[2] = local_38;
    param_1[3] = iStack_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    iVar4 = param_2[4];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    iVar1 = param_2[6];
    iVar2 = param_2[7];
    iVar3 = param_2[8];
    iVar4 = param_2[9];
    param_1[5] = param_2[5];
    param_1[6] = iVar1;
    param_1[7] = iVar2;
    param_1[8] = iVar3;
    param_1[9] = iVar4;
    iVar1 = param_2[0xb];
    iVar2 = param_2[0xc];
    iVar3 = param_2[0xd];
    iVar4 = param_2[0xe];
    iVar5 = param_2[0xf];
    param_1[10] = param_2[10];
    param_1[0xb] = iVar1;
    param_1[0xc] = iVar2;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar4;
    param_1[0xf] = iVar5;
  }
  return;
}

