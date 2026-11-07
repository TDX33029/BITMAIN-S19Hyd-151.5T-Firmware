// FUN_0130743c @ 0130743c size=276 calls_out=0 calls_in=6
// strings: 

uint FUN_0130743c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0x19;
  if (param_1 < 0x16a39) {
    iVar1 = 0;
  }
  uVar5 = 0;
  if ((uint)(*(int *)(&UNK_00425d14 + (iVar1 + 0xd) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 0xd;
  }
  if ((uint)(*(int *)(&UNK_00425d14 + (iVar1 + 6) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 6;
  }
  if ((uint)(*(int *)(&UNK_00425d14 + (iVar1 + 3) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 3;
  }
  if ((uint)(*(int *)(&UNK_00425d14 + (iVar1 + 2) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 2;
  }
  if ((uint)(*(int *)(&UNK_00425d14 + (iVar1 + 1) * 4) * 0x800) <= param_1 * 0x800) {
    iVar1 = iVar1 + 1;
  }
  uVar4 = 0x5ef;
  uVar3 = (uint)((uint)(*(int *)(&UNK_00425d14 + iVar1 * 4) * 0x800) < param_1 * 0x800);
  if (*(int *)(&UNK_00425d14 + iVar1 * 4) * 0x800 == param_1 * 0x800) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 + iVar1;
  iVar1 = uVar3 * 4;
  uVar2 = *(uint *)(&UNK_00425d14 + iVar1) >> 0x15;
  if ((0x31 < uVar3) || (uVar4 = *(uint *)(&UNK_00425d18 + iVar1) >> 0x15, uVar3 != 0)) {
    uVar5 = *(uint *)("called `Option::unwrap()` on a `None` value" + iVar1 + 0x2a) & 0x1fffff;
  }
  if (uVar4 + ~uVar2 != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + (byte)(&UNK_00421511)[uVar2];
      if (param_1 - uVar5 < uVar3) break;
      uVar2 = uVar2 + 1;
    } while (uVar4 - 1 != uVar2);
  }
  return uVar2 & 1;
}

