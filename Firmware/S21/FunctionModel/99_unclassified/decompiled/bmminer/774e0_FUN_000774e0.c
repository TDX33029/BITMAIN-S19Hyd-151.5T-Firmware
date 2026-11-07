// FUN_000774e0 @ 000774e0  size=196  callers=1
// program: bmminer


undefined1 FUN_000774e0(ushort param_1)

{
  uint uVar1;
  undefined1 local_9;
  
  uVar1 = (uint)param_1;
  if (uVar1 == 0x71) {
    return 0x40;
  }
  if (0x71 < uVar1) {
    if (uVar1 < 0x79) {
      if (0x74 < uVar1) {
        return 0x40;
      }
      if (uVar1 == 0x73) {
        return 0x40;
      }
    }
    else if (uVar1 - 0xc1 < 2) goto LAB_0007756c;
    goto LAB_00077584;
  }
  if (uVar1 == 0x62) {
LAB_0007756c:
    local_9 = 0;
  }
  else {
    if (uVar1 < 99) {
      if (uVar1 == 0x1a) goto LAB_0007756c;
      if (uVar1 == 0x41) {
        return 0x40;
      }
    }
    else if (uVar1 - 100 < 3) goto LAB_0007756c;
LAB_00077584:
    local_9 = 0xff;
  }
  return local_9;
}

