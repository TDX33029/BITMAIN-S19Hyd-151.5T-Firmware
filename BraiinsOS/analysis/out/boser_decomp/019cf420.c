// FUN_019cf420 @ 019cf420 size=128 calls_out=1 calls_in=0
// strings: 

void FUN_019cf420(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *local_14;
  int **local_10;
  undefined1 *local_c;
  
  local_14 = param_1 + 1;
  if (*param_1 == 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_019cf5b8;
    puVar3 = &DAT_0058f5a1;
  }
  else {
    local_c = &LAB_006e1cd8;
    if (*param_1 == 1) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_00573cf4;
    }
    else {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      puVar3 = &DAT_005a7379;
    }
  }
  local_10 = &local_14;
  FUN_012fa178(uVar1,uVar2,puVar3,&local_10);
  return;
}

