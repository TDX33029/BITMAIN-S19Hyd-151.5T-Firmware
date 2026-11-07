// FUN_01ab69e4 @ 01ab69e4 size=116 calls_out=0 calls_in=2
// strings: 

uint FUN_01ab69e4(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  uVar5 = *(uint *)(param_1 + 0x310);
  if (uVar5 < 9) {
    iVar4 = param_1 + 0x1d0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1d4);
    uVar5 = *(uint *)(param_1 + 0x1d0);
  }
  if (uVar5 != 0) {
    iVar6 = iVar4 + uVar5 * 0x28;
    do {
      puVar1 = (undefined4 *)(iVar4 + 8);
      piVar3 = (int *)(iVar4 + 0xc);
      iVar4 = iVar4 + 0x28;
      iVar7 = *piVar3 << 5;
      pcVar8 = (char *)*puVar1;
      while (iVar7 != 0) {
        cVar2 = *pcVar8;
        iVar7 = iVar7 + -0x20;
        pcVar8 = pcVar8 + 0x20;
        if (cVar2 != '\a') {
          return 0;
        }
      }
    } while (iVar4 != iVar6);
  }
  uVar5 = *(uint *)(param_1 + 0x314);
  if (*(uint *)(param_1 + 0x1c8) < *(uint *)(param_1 + 0x314)) {
    uVar5 = *(uint *)(param_1 + 0x1c8);
  }
  return uVar5;
}

