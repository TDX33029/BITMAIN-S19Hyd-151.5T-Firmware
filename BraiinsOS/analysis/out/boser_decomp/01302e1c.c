// FUN_01302e1c @ 01302e1c size=128 calls_out=0 calls_in=73
// strings: 

uint FUN_01302e1c(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    return (uint)*(byte *)(param_1 + 1);
  }
  uVar1 = 1;
  if (*(byte *)(param_1 + 1) == 0) {
    puVar2 = (undefined4 *)*param_1;
    if ((*(byte *)((int)puVar2 + 10) & 0x80) == 0) {
      uVar3 = *puVar2;
      uVar5 = 2;
      pcVar6 = *(code **)(puVar2[1] + 0xc);
      pcVar4 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
    }
    else {
      uVar3 = *puVar2;
      uVar5 = 1;
      pcVar6 = *(code **)(puVar2[1] + 0xc);
      pcVar4 = "}";
    }
    uVar1 = (*pcVar6)(uVar3,pcVar4,uVar5);
  }
  *(char *)(param_1 + 1) = (char)uVar1;
  return uVar1;
}

