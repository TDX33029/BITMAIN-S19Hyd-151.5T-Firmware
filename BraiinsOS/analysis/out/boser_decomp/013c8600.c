// FUN_013c8600 @ 013c8600 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_013c8600(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    do {
      if (*(short *)(puVar1 + -1) != 0) {
        FUN_019bb7e0(*puVar1,puVar1[1]);
      }
      puVar1 = puVar1 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01af7af8(*param_1,iVar2,4,0x1c);
  return;
}

