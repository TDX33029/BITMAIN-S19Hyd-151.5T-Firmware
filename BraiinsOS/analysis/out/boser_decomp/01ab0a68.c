// FUN_01ab0a68 @ 01ab0a68 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_01ab0a68(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 8);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*(char *)(puVar1 + 2) == '\x01') {
      FUN_0134aee0(puVar1[-1],*puVar1,4,4);
    }
    puVar1 = puVar1 + 5;
  }
  FUN_0134aee0(*param_1,iVar2,4,0x14);
  return;
}

