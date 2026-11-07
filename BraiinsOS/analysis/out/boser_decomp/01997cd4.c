// FUN_01997cd4 @ 01997cd4 size=168 calls_out=0 calls_in=2
// strings: 

void FUN_01997cd4(undefined1 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint3 *puVar3;
  uint uVar4;
  
  if (param_3 == '\b') {
    puVar3 = (uint3 *)*param_2;
    if (7 < (uint)param_2[1]) {
      cVar1 = *(char *)((int)puVar3 + 7);
      uVar4 = *(uint *)((int)puVar3 + 3);
      *param_2 = puVar3 + 2;
      param_2[1] = param_2[1] - 8;
      uVar2 = 0x38;
      if (cVar1 == '\0' && uVar4 >> 8 == 0) {
        *(uint *)(param_1 + 4) = uVar4 << 0x18 | (uint)*puVar3;
        uVar2 = 0x52;
      }
      *param_1 = uVar2;
      return;
    }
  }
  else {
    puVar3 = (uint3 *)*param_2;
    uVar4 = param_2[1];
    if (3 < uVar4) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)puVar3;
      *param_2 = puVar3 + 1;
      param_2[1] = uVar4 - 4;
      *param_1 = 0x52;
      return;
    }
  }
  *(uint3 **)(param_1 + 8) = puVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint3 **)(param_1 + 4) = puVar3;
  *param_1 = 0x13;
  return;
}

