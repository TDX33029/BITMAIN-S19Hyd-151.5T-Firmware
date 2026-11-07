// FUN_018c4060 @ 018c4060 size=388 calls_out=0 calls_in=3
// strings: 

uint FUN_018c4060(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = 1;
  if ((param_2 < 0xfe) && (param_2 != 0)) {
    uVar2 = 0;
    do {
      uVar5 = (uint)*param_1;
      if (uVar5 == 0x2e) {
        uVar1 = 3;
        uVar4 = 1;
        uVar3 = unaff_r4;
        if (uVar2 != 2) {
          if (uVar2 != 4) goto LAB_018c41dc;
          uVar1 = 1;
        }
      }
      else {
        if (((uVar2 == 2) || (uVar2 == 4 || uVar2 == 5)) && (0x3e < unaff_r4)) {
          uVar4 = 1;
          goto LAB_018c41dc;
        }
        if (uVar5 - 0x30 < 10) {
          uVar1 = 2;
          uVar3 = 1;
          if ((1 << uVar2 & 0xbU) == 0) {
            if ((1 << uVar2 & 0x30U) != 0) goto LAB_018c4100;
            uVar3 = unaff_r4 + 1;
          }
        }
        else {
          if ((uVar2 < 4) && (uVar2 != 2)) {
            uVar3 = 1;
            uVar1 = 4;
            if (((uVar5 & 0xdf) - 0x41 < 0x1a) || (uVar5 == 0x5f)) goto LAB_018c41a0;
          }
          uVar4 = 1;
          if (uVar5 == 0x2d) {
            if ((5 < uVar2) || ((1 << uVar2 & 0x34U) == 0)) goto LAB_018c41dc;
            uVar3 = unaff_r4 + 1;
            uVar1 = 5;
          }
          else {
            if (uVar2 == 2) {
              uVar2 = uVar5 - 0x61;
              if (0x19 < uVar2) {
                bVar6 = 0x5e < uVar5;
                if (uVar5 != 0x5f) {
                  uVar2 = uVar5 - 0x41;
                  bVar6 = 0x18 < uVar2;
                }
                if (bVar6 && (uVar5 != 0x5f && uVar2 != 0x19)) goto LAB_018c41dc;
              }
            }
            else if ((uVar2 != 4 && uVar2 != 5) ||
                    (((0x19 < uVar5 - 0x61 && (uVar5 != 0x5f)) && (0x19 < uVar5 - 0x41))))
            goto LAB_018c41dc;
LAB_018c4100:
            uVar3 = unaff_r4 + 1;
            uVar1 = 4;
          }
        }
      }
LAB_018c41a0:
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
      unaff_r4 = uVar3;
    } while (param_2 != 0);
    uVar4 = 0x2c >> uVar1;
  }
LAB_018c41dc:
  return uVar4 & 1;
}

