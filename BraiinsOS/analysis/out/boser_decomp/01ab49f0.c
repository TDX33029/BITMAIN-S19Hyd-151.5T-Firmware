// FUN_01ab49f0 @ 01ab49f0 size=228 calls_out=1 calls_in=2
// strings: 

uint FUN_01ab49f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(param_1 + 0x148);
  if (uVar7 < 9) {
    iVar8 = param_1 + 8;
  }
  else {
    uVar7 = *(uint *)(param_1 + 4);
    iVar8 = *(int *)(param_1 + 8);
  }
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    if (uVar7 * 0x28 == iVar3) {
      return *(uint *)(param_1 + 0x150);
    }
    iVar5 = iVar8 + iVar3;
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar5 + 0x24) != '\0') break;
    iVar2 = FUN_01ac1214(iVar5);
    iVar1 = iVar3 + 0x28;
  } while (iVar2 == 0);
  uVar4 = *(uint *)(iVar8 + iVar3 + 0x20);
  if (iVar8 + iVar3 + 0x28 != iVar8 + uVar7 * 0x28) {
    pcVar6 = (char *)(iVar5 + 0x4c);
    uVar7 = ((uVar7 * 0x28 + -0x28) - iVar3) / 0x28;
    do {
      DataMemoryBarrier(0xb);
      if (((*pcVar6 != '\0') || (iVar8 = FUN_01ac1214(pcVar6 + -0x24), iVar8 != 0)) &&
         (*(uint *)(pcVar6 + -4) < uVar4)) {
        uVar4 = *(uint *)(pcVar6 + -4);
      }
      pcVar6 = pcVar6 + 0x28;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return uVar4;
}

