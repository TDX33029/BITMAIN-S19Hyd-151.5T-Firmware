// FUN_016139d4 @ 016139d4 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_016139d4(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int local_30;
  undefined1 *puStack_2c;
  int local_28;
  undefined4 local_24 [3];
  
  if (param_2[1] == 0) {
    *param_1 = -0x7ffffff6;
    param_1[1] = 0;
    return;
  }
  puVar2 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  puVar3 = (undefined1 *)*puVar2;
  if ((undefined1 *)puVar2[1] == puVar3) {
    local_30 = -0x7ffffffb;
    local_28 = 1;
    puStack_2c = puVar3;
  }
  else {
    local_24[0] = 0x80000005;
    FUN_00f2cc28(local_24);
    uVar1 = *puVar3;
    *puVar2 = puVar3 + 1;
    FUN_0161b9e4(&local_30,puVar2,uVar1);
    if (local_30 == -0x7ffffff6) {
      local_30 = -0x7ffffff6;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)puStack_2c;
  param_1[2] = local_28;
  return;
}

