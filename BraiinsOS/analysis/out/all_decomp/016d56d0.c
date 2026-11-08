// FUN_016d56d0 @ 016d56d0 size=418 calls_out=0 calls_in=1
// strings: 

uint FUN_016d56d0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double in_d0;
  double in_d1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  
  local_28 = SUB84(in_d1,0);
  uStack_24 = (uint)((ulonglong)in_d1 >> 0x20);
  uVar3 = local_28 * 2;
  uVar5 = uStack_24 * 2 + (uint)CARRY4(local_28,local_28);
  if (uVar3 != 0 || uVar5 != 0) {
    local_20 = SUB84(in_d0,0);
    uStack_1c = (uint)((ulonglong)in_d0 >> 0x20);
    uVar1 = (uStack_1c & 0x7fffffff) >> 0x14;
    if (uVar1 != 0x7ff &&
        ((uStack_24 & 0x7fffffff) < 0x7ff00001 &&
        (uint)(local_28 != 0) <= (uStack_24 & 0x7fffffff) + 0x80100000)) {
      uVar6 = uStack_1c * 2 + (uint)CARRY4(local_20,local_20);
      if (uVar6 < uVar5 || uVar5 - uVar6 < (uint)(local_20 * 2 <= uVar3)) {
        if (uVar5 != uVar6 || uVar3 != local_20 * 2) {
          return local_20;
        }
LAB_016d580a:
        return SUB84(in_d0 * 0.0,0);
      }
      if (uVar1 == 0) {
        uVar5 = local_20 << 0xc;
        for (uVar3 = uStack_1c << 0xc | local_20 >> 0x14; -1 < (int)uVar3;
            uVar3 = uVar3 * 2 + (uint)bVar7) {
          bVar7 = CARRY4(uVar5,uVar5);
          uVar5 = uVar5 * 2;
          uVar1 = uVar1 - 1;
        }
        uVar6 = -uVar1 + 1;
        uVar3 = local_20 << (-uVar1 - 0x1f & 0xff);
        uVar5 = local_20 >> (0x20 - uVar6 & 0xff);
        local_20 = local_20 << (uVar6 & 0xff);
        uVar5 = uStack_1c << (uVar6 & 0xff) | uVar3 | uVar5;
      }
      else {
        uVar5 = uStack_1c & 0xfffff | 0x100000;
      }
      uVar3 = (uStack_24 & 0x7fffffff) >> 0x14;
      if (uVar3 == 0) {
        uVar6 = local_28 << 0xc;
        for (uVar4 = uStack_24 << 0xc | local_28 >> 0x14; -1 < (int)uVar4;
            uVar4 = uVar4 * 2 + (uint)bVar7) {
          bVar7 = CARRY4(uVar6,uVar6);
          uVar6 = uVar6 * 2;
          uVar3 = uVar3 - 1;
        }
        uVar4 = -uVar3 + 1;
        uVar6 = uStack_24 << (uVar4 & 0xff) | local_28 << (-uVar3 - 0x1f & 0xff) |
                local_28 >> (0x20 - uVar4 & 0xff);
        local_28 = local_28 << (uVar4 & 0xff);
      }
      else {
        uVar6 = uStack_24 & 0xfffff | 0x100000;
      }
      while( true ) {
        uVar2 = local_20 - local_28;
        uVar4 = (uVar5 - uVar6) - (uint)(local_20 < local_28);
        if ((int)uVar1 <= (int)uVar3) break;
        uVar1 = uVar1 - 1;
        if (-1 < (int)uVar4) {
          uVar5 = uVar4;
          local_20 = uVar2;
          if (uVar2 == 0 && uVar4 == 0) goto LAB_016d580a;
        }
        bVar7 = CARRY4(local_20,local_20);
        local_20 = local_20 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar7;
      }
      if (-1 < (int)uVar4) {
        if (uVar2 == 0 && uVar4 == 0) goto LAB_016d580a;
        local_20 = uVar2;
        uVar5 = uVar4;
      }
      for (; uVar5 >> 0x14 == 0; uVar5 = uVar5 * 2 + (uint)bVar7) {
        bVar7 = CARRY4(local_20,local_20);
        local_20 = local_20 * 2;
        uVar1 = uVar1 - 1;
      }
      if ((int)uVar1 < 1) {
        local_20 = local_20 >> (-uVar1 + 1 & 0xff) | uVar5 << (uVar1 + 0x1f & 0xff) |
                   uVar5 >> (-uVar1 - 0x1f & 0xff);
      }
      return local_20;
    }
  }
  return SUB84((in_d0 * in_d1) / (in_d0 * in_d1),0);
}

