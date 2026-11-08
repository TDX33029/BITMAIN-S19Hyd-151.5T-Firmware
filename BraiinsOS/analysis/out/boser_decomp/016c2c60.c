// FUN_016c2c60 @ 016c2c60 size=140 calls_out=0 calls_in=2
// strings: 

uint FUN_016c2c60(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  uVar5 = param_1[2];
  uVar4 = uVar5;
  if (uVar5 < 0x101) {
    uVar4 = 0x100;
  }
  uVar2 = uVar5;
  do {
    uVar3 = uVar2;
    if (uVar4 == uVar3) {
      if (uVar5 < 0x101) {
        param_1[2] = 0x101;
        uVar3 = 1;
        uVar4 = (uVar6 & 1) << 0x18;
        if ((uVar6 & 1) == 0) {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 2;
        uVar4 = 0;
      }
      goto LAB_016c2ce0;
    }
    bVar1 = *(byte *)(param_1[1] + uVar3);
    param_1[2] = uVar3 + 1;
    uVar2 = uVar3 + 1;
  } while ((uint)bVar1 != (uVar6 & 0xffff) >> 8 || (uVar6 & 1) != 0);
  uVar3 = uVar3 << 8;
  uVar4 = uVar3;
LAB_016c2ce0:
  return uVar3 & 3 | uVar4;
}

