// FUN_01133a58 @ 01133a58 size=124 calls_out=1 calls_in=0
// strings: 

void FUN_01133a58(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int *local_14;
  int **local_10;
  undefined1 *local_c;
  
  local_14 = (int *)*param_1 + 1;
  iVar3 = *(int *)*param_1;
  if (iVar3 == 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar4 = &DAT_00572f17;
  }
  else if (iVar3 == 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar4 = &DAT_005973ac;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar4 = &DAT_00581b47;
  }
  local_c = &LAB_01110b14;
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar4,&local_10);
  return;
}

