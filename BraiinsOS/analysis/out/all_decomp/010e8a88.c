// FUN_010e8a88 @ 010e8a88 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_010e8a88(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *local_14;
  int **local_10;
  undefined1 *local_c;
  
  if (*param_1 == -0x80000000) {
    local_14 = param_1 + 1;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_008b9b38;
    puVar3 = &DAT_00590e71;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_01110b14;
    puVar3 = &DAT_00578991;
    local_14 = param_1;
  }
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar3,&local_10);
  return;
}

