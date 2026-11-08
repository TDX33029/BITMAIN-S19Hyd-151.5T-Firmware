// FUN_01381c1c @ 01381c1c size=388 calls_out=2 calls_in=0
// strings: 

void FUN_01381c1c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  
  local_2c = param_1[1];
  local_20 = param_1[2];
  param_1[2] = 0;
  local_28 = local_2c + local_20 * 0xc;
  local_1c = 0;
  local_24 = param_1;
  FUN_013602fc(param_1 + 3,&local_2c);
  iVar4 = param_1[2];
  if (param_1[5] == 0) {
    if (iVar4 == *param_1) {
      FUN_013c402c(param_1);
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)(iVar1 + iVar4 * 0xc);
    *puVar2 = 0;
    puVar2[1] = 4;
  }
  else {
    iVar1 = param_1[5] + -1;
    param_1[5] = iVar1;
    puVar2 = (undefined4 *)(param_1[4] + iVar1 * 0xc);
    uVar5 = *puVar2;
    uVar3 = puVar2[1];
    if (iVar4 == *param_1) {
      FUN_013c402c(param_1);
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)(iVar1 + iVar4 * 0xc);
    *puVar2 = uVar5;
    puVar2[1] = uVar3;
  }
  iVar6 = iVar4 + 1;
  param_1[2] = iVar6;
  *(undefined4 *)(iVar1 + iVar4 * 0xc + 8) = 0;
  if (param_1[5] == 0) {
    if (iVar6 == *param_1) {
      FUN_013c402c(param_1);
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)(iVar1 + iVar6 * 0xc);
    *puVar2 = 0;
    puVar2[1] = 4;
  }
  else {
    iVar1 = param_1[5] + -1;
    param_1[5] = iVar1;
    puVar2 = (undefined4 *)(param_1[4] + iVar1 * 0xc);
    uVar5 = *puVar2;
    uVar3 = puVar2[1];
    if (iVar6 == *param_1) {
      FUN_013c402c(param_1);
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)(iVar1 + iVar6 * 0xc);
    *puVar2 = uVar5;
    puVar2[1] = uVar3;
  }
  param_1[2] = iVar4 + 2;
  *(undefined4 *)(iVar1 + iVar6 * 0xc + 8) = 0;
  return;
}

