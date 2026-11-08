// FUN_01938820 @ 01938820 size=356 calls_out=0 calls_in=5
// strings: 

uint FUN_01938820(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 1;
  if (0xffffff02 < param_2 - 0xfeU) {
    uVar1 = 0;
    do {
      uVar5 = (uint)*param_1;
      if (uVar5 == 0x2e) {
        uVar2 = 3;
        uVar4 = 1;
        uVar3 = unaff_r4;
        if (uVar1 != 2) {
          if (uVar1 != 4) goto LAB_0193897c;
          uVar2 = 1;
        }
      }
      else {
        if (((uVar1 == 2) || (uVar1 == 4 || uVar1 == 5)) && (0x3e < unaff_r4)) {
          uVar4 = 1;
          goto LAB_0193897c;
        }
        if (uVar5 - 0x30 < 10) {
          uVar2 = 2;
          uVar3 = 1;
          if ((1 << uVar1 & 0xbU) == 0) {
            if ((1 << uVar1 & 0x30U) != 0) goto LAB_0193894c;
            uVar3 = unaff_r4 + 1;
          }
        }
        else {
          if ((uVar1 < 4) && (uVar1 != 2)) {
            uVar3 = 1;
            uVar2 = 4;
            if (((uVar5 & 0xdf) - 0x41 < 0x1a) || (uVar5 == 0x5f)) goto LAB_01938954;
          }
          uVar4 = 1;
          if (uVar5 == 0x2d) {
            if ((5 < uVar1) || ((1 << uVar1 & 0x34U) == 0)) goto LAB_0193897c;
            uVar3 = unaff_r4 + 1;
            uVar2 = 5;
          }
          else {
            if (((uVar1 != 2 && uVar1 != 4) && (uVar1 != 5)) ||
               ((0x19 < uVar5 - 0x61 && ((uVar5 < 0x41 || ((0x5a < uVar5 && (uVar5 != 0x5f))))))))
            goto LAB_0193897c;
LAB_0193894c:
            uVar3 = unaff_r4 + 1;
            uVar2 = 4;
          }
        }
      }
LAB_01938954:
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar1 = uVar2;
      unaff_r4 = uVar3;
    } while (param_2 != 0);
    uVar4 = 0x2c >> uVar2;
  }
LAB_0193897c:
  return uVar4 & 1;
}

