// FUN_014317d0 @ 014317d0 size=140 calls_out=0 calls_in=2
// strings: 

void FUN_014317d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (-param_1[1] < (uint)(uVar2 < 10)) {
    uVar1 = param_1[9];
    uVar3 = param_1[2];
    param_1[9] = uVar1 + 1;
    if (uVar1 + 1 < 2) {
      return;
    }
    param_1[9] = 0;
    uVar1 = (uint)((ulonglong)uVar3 * 0x44b82fa1 >> 0x3a);
    *param_1 = uVar2 * 4 + uVar1;
    param_1[1] = (param_1[1] << 2 | uVar2 >> 0x1e) + (uint)CARRY4(uVar2 * 4,uVar1);
    param_1[2] = uVar3 * 4 +
                 (uint)((ulonglong)((uVar3 & 0x3fffffff) >> 7) * 0x44b83 >> 0x27) * -1000000000;
  }
  return;
}

