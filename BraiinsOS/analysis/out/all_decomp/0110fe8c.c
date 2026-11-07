// FUN_0110fe8c @ 0110fe8c size=136 calls_out=1 calls_in=0
// strings: 

void FUN_0110fe8c(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *local_14;
  uint **local_10;
  undefined1 *local_c;
  
  uVar3 = 2;
  if ((int)*param_1 < 0) {
    uVar3 = *param_1 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    local_c = &LAB_0074e490;
  }
  else {
    if (uVar3 != 1) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      local_c = &LAB_01110b14;
      puVar4 = &DAT_0056fb6d;
      local_14 = param_1;
      goto LAB_0110fef8;
    }
    local_c = &LAB_0110f258;
  }
  local_14 = param_1 + 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar4 = &DAT_00590e71;
LAB_0110fef8:
  local_10 = &local_14;
  FUN_00fa948c(uVar1,uVar2,puVar4,&local_10);
  return;
}

