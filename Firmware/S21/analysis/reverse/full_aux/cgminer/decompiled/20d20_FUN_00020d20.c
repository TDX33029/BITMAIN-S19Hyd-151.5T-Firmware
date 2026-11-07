// FUN_00020d20 @ 00020d20  size=192  callers=1
// program: cgminer


uint FUN_00020d20(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  sbyte *psVar4;
  sbyte *psVar3;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  sbyte local_28 [24];
  
  uVar2 = 0;
  uVar1 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  local_28[0xc] = 0;
  local_28[0xd] = 0;
  local_28[0xe] = 0;
  local_28[0xf] = 0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = 0;
  local_28[0x13] = 0;
  local_28[0x14] = 0;
  local_28[0x15] = 0;
  local_28[0x16] = 0;
  do {
    if ((param_1 & 1 << (uVar2 & 0xff)) != 0) {
      local_28[uVar1] = (sbyte)uVar2;
      uVar1 = uVar1 + 1;
    }
    uVar2 = uVar2 + 1;
    bVar7 = 0x1e < uVar2;
    bVar6 = uVar2 == 0x1f;
    if (uVar2 < 0x20) {
      bVar7 = 0x15 < uVar1;
      bVar6 = uVar1 == 0x16;
    }
  } while (!bVar7 || bVar6);
  uVar2 = 0;
  uVar5 = *param_2;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else if (0 < (int)uVar5) {
    psVar4 = local_28;
    do {
      psVar3 = psVar4 + 1;
      uVar2 = uVar2 | 1 << *psVar4;
      if (local_28 + uVar1 == psVar3) break;
      psVar4 = psVar3;
    } while (local_28 + uVar5 != psVar3);
  }
  if (uVar1 < uVar5) {
    *param_2 = uVar1;
  }
  return uVar2;
}

