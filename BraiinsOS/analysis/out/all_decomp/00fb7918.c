// FUN_00fb7918 @ 00fb7918 size=276 calls_out=0 calls_in=1
// strings: 

uint FUN_00fb7918(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0x12;
  if (param_1 < 0x11ef3) {
    uVar2 = 0;
  }
  uVar5 = 0;
  if ((uint)(*(int *)(&UNK_003691b8 + (uVar2 | 9) * 4) * 0x800) <= param_1 * 0x800) {
    uVar2 = uVar2 | 9;
  }
  if ((uint)(*(int *)(&UNK_003691b8 + (uVar2 | 4) * 4) * 0x800) <= param_1 * 0x800) {
    uVar2 = uVar2 | 4;
  }
  if ((uint)(*(int *)(&UNK_003691b8 + (uVar2 + 2) * 4) * 0x800) <= param_1 * 0x800) {
    uVar2 = uVar2 + 2;
  }
  if ((uint)(*(int *)(&UNK_003691b8 + (uVar2 + 1) * 4) * 0x800) <= param_1 * 0x800) {
    uVar2 = uVar2 + 1;
  }
  if ((uint)(*(int *)(&UNK_003691b8 + (uVar2 + 1) * 4) * 0x800) <= param_1 * 0x800) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = 0x397;
  uVar3 = (uint)((uint)(*(int *)(&UNK_003691b8 + uVar2 * 4) * 0x800) < param_1 * 0x800);
  if (*(int *)(&UNK_003691b8 + uVar2 * 4) * 0x800 == param_1 * 0x800) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 + uVar2;
  iVar1 = uVar3 * 4;
  uVar2 = *(uint *)(&UNK_003691b8 + iVar1) >> 0x15;
  if ((0x22 < uVar3) || (uVar4 = *(uint *)(&UNK_003691bc + iVar1) >> 0x15, uVar3 != 0)) {
    uVar5 = *(uint *)(&UNK_003691b4 + iVar1) & 0x1fffff;
  }
  if (uVar4 + ~uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + (byte)(&UNK_0035ecaf)[uVar2];
      if (param_1 - uVar5 < uVar3) break;
      uVar2 = uVar2 + 1;
    } while (uVar4 - 1 != uVar2);
  }
  return uVar2 & 1;
}

