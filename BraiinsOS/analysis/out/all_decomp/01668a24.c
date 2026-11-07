// FUN_01668a24 @ 01668a24 size=312 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01668a24(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_1c;
  int **local_18;
  code *local_14;
  
  if ((short)param_1[4] == 1) {
    local_1c = (int *)((int)param_1 + 0x12);
    local_14 = FUN_01668b78;
    local_18 = &local_1c;
    iVar1 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_18);
    if (iVar1 != 0) {
      return 1;
    }
    if (*param_1 == 0) goto LAB_01668b14;
    local_1c = param_1 + 1;
    iVar1 = (**(code **)(param_3 + 0xc))(param_2,&DAT_0041414e,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (*param_1 == 0) goto LAB_01668b14;
    local_1c = param_1 + 1;
  }
  local_18 = &local_1c;
  local_14 = FUN_01668be0;
  iVar1 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_18);
  if (iVar1 != 0) {
    return 1;
  }
LAB_01668b14:
  local_1c = param_1 + 3;
  uVar2 = 0;
  if ((short)*local_1c != 2) {
    local_14 = (code *)&LAB_01668da4;
    local_18 = &local_1c;
    uVar2 = FUN_00fa948c(param_2,param_3,&DAT_00590e71,&local_18);
  }
  return uVar2;
}

