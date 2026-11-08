// FUN_01783eac @ 01783eac size=92 calls_out=1 calls_in=0
// strings: 

void FUN_01783eac(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *local_14;
  int **local_10;
  code *local_c;
  
  local_14 = param_1 + 1;
  if (*param_1 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_005ac729;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar3 = &DAT_005b4978;
  }
  local_c = FUN_0140ce74;
  local_10 = &local_14;
  FUN_012fa178(uVar1,uVar2,puVar3,&local_10);
  return;
}

