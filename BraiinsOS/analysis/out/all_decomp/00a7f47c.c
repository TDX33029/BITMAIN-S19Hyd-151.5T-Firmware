// FUN_00a7f47c @ 00a7f47c size=100 calls_out=1 calls_in=0
// strings: 

void FUN_00a7f47c(undefined4 *param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*param_4 == 1) && (*param_2 <= (uint)param_4[0xb])) {
    uVar1 = FUN_00ac0588(&DAT_005656e0,0x10);
    *param_1 = 2;
    param_1[1] = uVar1;
    return;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  param_1[8] = param_3[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  return;
}

