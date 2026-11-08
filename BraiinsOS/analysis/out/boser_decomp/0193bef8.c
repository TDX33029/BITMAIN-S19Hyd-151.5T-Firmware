// FUN_0193bef8 @ 0193bef8 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_0193bef8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  
  FUN_019a6040(local_88);
  puVar2 = (undefined4 *)((uint)local_88 | 4);
  if (local_88[0] == 0) {
    uVar3 = puVar2[0x1a];
    param_1[2] = puVar2[0x19];
    param_1[3] = uVar3;
    param_1[4] = param_2;
    uVar1 = 0;
  }
  else {
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    FUN_01bf01d6(param_2);
    uVar1 = 2;
    local_80 = uVar3;
    local_7c = uVar4;
  }
  *(undefined1 *)(param_1 + 5) = uVar1;
  *param_1 = local_80;
  param_1[1] = local_7c;
  return;
}

