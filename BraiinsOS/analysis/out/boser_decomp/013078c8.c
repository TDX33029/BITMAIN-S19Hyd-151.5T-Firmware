// FUN_013078c8 @ 013078c8 size=256 calls_out=0 calls_in=1
// strings: 

uint FUN_013078c8(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0xb;
  if (param_1 < 0x10780) {
    iVar1 = 0;
  }
  uVar5 = 0;
  if ((uint)(*(int *)(&UNK_0042c2a8 + (iVar1 + 5) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 5;
  }
  if ((uint)(*(int *)(&UNK_0042c2a8 + (iVar1 + 3) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 3;
  }
  if ((uint)(*(int *)(&UNK_0042c2a8 + (iVar1 + 1) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 1;
  }
  if ((uint)(*(int *)(&UNK_0042c2a8 + (iVar1 + 1) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 1;
  }
  uVar4 = 0x139;
  uVar3 = (uint)((uint)(*(int *)(&UNK_0042c2a8 + iVar1 * 4) * 0x800) < param_1 * 0x800);
  if (*(int *)(&UNK_0042c2a8 + iVar1 * 4) * 0x800 == param_1 * 0x800) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 + iVar1;
  iVar1 = uVar3 * 4;
  uVar2 = *(uint *)(&UNK_0042c2a8 + iVar1) >> 0x15;
  if ((0x14 < uVar3) || (uVar4 = *(uint *)(&UNK_0042c2ac + iVar1) >> 0x15, uVar3 != 0)) {
    uVar5 = *(uint *)(&UNK_0042c2a4 + iVar1) & 0x1fffff;
  }
  if (uVar4 + ~uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + (byte)(&UNK_004222b9)[uVar2];
      if (param_1 - uVar5 < uVar3) break;
      uVar2 = uVar2 + 1;
    } while (uVar4 - 1 != uVar2);
  }
  return uVar2 & 1;
}

