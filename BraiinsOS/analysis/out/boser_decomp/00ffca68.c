// FUN_00ffca68 @ 00ffca68 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_00ffca68(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    FUN_00ffafc8(param_3);
    return;
  }
  if (*param_2 == 1) {
    uVar1 = FUN_00ffcae8(param_3,param_2[1],param_2[2]);
    uVar3 = 1;
    puVar2 = &DAT_01c1bda8;
  }
  else {
    uVar1 = FUN_011d9954(param_2[1],param_2[2]);
    uVar3 = 2;
    puVar2 = &DAT_01c21f74;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = puVar2;
  return;
}

