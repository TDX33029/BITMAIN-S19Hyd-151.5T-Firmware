// FUN_015efa68 @ 015efa68 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_015efa68(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == uVar1) {
    FUN_015ef848(param_1);
    uVar1 = *param_1;
    uVar2 = param_1[3];
  }
  uVar3 = param_1[2] + uVar2;
  param_1[3] = uVar2 + 1;
  uVar2 = uVar3 - uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  puVar4 = (undefined4 *)(param_1[1] + uVar2 * 0x10);
  *puVar4 = param_3;
  puVar4[1] = param_4;
  *(undefined1 *)(puVar4 + 2) = param_5;
  return;
}

