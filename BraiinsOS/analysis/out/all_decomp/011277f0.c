// FUN_011277f0 @ 011277f0 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_011277f0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *local_14;
  int **local_10;
  undefined1 *local_c;
  
  local_14 = (int *)*param_1 + 1;
  if (*(int *)*param_1 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_0059124c;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_00581ded;
  }
  local_c = &LAB_01110b14;
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar3,&local_10);
  return;
}

