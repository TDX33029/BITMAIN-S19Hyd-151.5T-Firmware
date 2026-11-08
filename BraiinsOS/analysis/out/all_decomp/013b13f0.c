// FUN_013b13f0 @ 013b13f0 size=356 calls_out=0 calls_in=1
// strings: 

longlong FUN_013b13f0(uint param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = 0;
  if (param_3 <= param_2) {
    return ZEXT48(param_2) << 0x20;
  }
  uVar5 = (int)param_3 - (int)param_2;
  param_1 = param_1 & 0xff;
  if (uVar5 < 4) {
    pbVar2 = (byte *)((int)param_2 + uVar5);
    while (param_1 != (byte)*param_2) {
      param_2 = (uint *)((int)param_2 + 1);
      if (param_2 == param_3) {
        return ZEXT48(pbVar2) << 0x20;
      }
    }
  }
  else {
    uVar4 = param_1 * 0x1010101;
    if ((~(0x1010100 - (*param_2 ^ uVar4) | *param_2 ^ uVar4) & 0x80808080) == 0) {
      puVar3 = (uint *)(((uint)param_2 & 0xfffffffc) + 4);
      if (8 < uVar5) {
        for (; puVar3 <= param_3 + -2; puVar3 = puVar3 + 2) {
          uVar5 = ~(0x1010100 - (*puVar3 ^ uVar4) | *puVar3 ^ uVar4);
          bVar6 = (uVar5 & 0x80808080) == 0;
          if (bVar6) {
            uVar5 = ~(0x1010100 - (puVar3[1] ^ uVar4) | puVar3[1] ^ uVar4);
          }
          if (!bVar6 || (uVar5 & 0x80808080) != 0) break;
        }
        if (puVar3 < param_3) {
          while (param_1 != (byte)*puVar3) {
            puVar3 = (uint *)((int)puVar3 + 1);
            if (puVar3 == param_3) {
              return ZEXT48(param_3) << 0x20;
            }
          }
LAB_013b1548:
          uVar1 = 1;
        }
LAB_013b154c:
        return CONCAT44(puVar3,uVar1);
      }
      if (param_3 <= puVar3) goto LAB_013b154c;
      param_2 = (uint *)((int)param_2 + uVar5);
      do {
        if (param_1 == (byte)*puVar3) goto LAB_013b1548;
        puVar3 = (uint *)((int)puVar3 + 1);
      } while (puVar3 != param_3);
      goto LAB_013b14d0;
    }
    pbVar2 = (byte *)((int)param_2 + uVar5);
    while (param_1 != (byte)*param_2) {
      param_2 = (uint *)((int)param_2 + 1);
      if (param_2 == param_3) {
        return ZEXT48(pbVar2) << 0x20;
      }
    }
  }
  uVar1 = 1;
LAB_013b14d0:
  return CONCAT44(param_2,uVar1);
}

