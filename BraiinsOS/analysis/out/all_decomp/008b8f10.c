// FUN_008b8f10 @ 008b8f10 size=432 calls_out=0 calls_in=2
// strings: 

uint FUN_008b8f10(byte *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      do {
        bVar1 = *param_1;
        uVar3 = (uint)bVar1;
        uVar4 = (param_3 & 0xf) << 1;
        if (((param_3 ^ bVar1 >> 3) & 0x10) != 0) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = ((uVar4 ^ bVar1 >> 4 & 8) & 0xf) << 1;
        if (0xf < (uVar4 ^ (uVar3 & 0x7f) >> 2)) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = ((uVar2 ^ bVar1 >> 3 & 8) & 0xf) << 1;
        if (0xf < (uVar2 ^ (uVar3 & 0x3f) >> 1)) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = ((uVar4 ^ bVar1 >> 2 & 8) & 0xf) << 1;
        if (((uVar4 ^ uVar3) & 0x10) != 0) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = uVar3 & 0x10 ^ (uVar2 & 0xf) << 1;
        if (0xf < (uVar2 ^ (uVar3 & 8) << 1)) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = ((uVar4 ^ uVar3 & 8) & 0xf) << 1;
        if (0xf < (uVar4 ^ (uVar3 & 7) << 2)) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = ((uVar2 ^ (uVar3 & 4) << 1) & 0xf) << 1;
        if (0xf < (uVar2 ^ (uVar3 & 3) << 3)) {
          uVar4 = uVar4 ^ 5;
        }
        param_3 = ((uVar4 ^ (uVar3 & 2) << 2) & 0xf) << 1;
        if ((uVar4 & 0x10) != (uVar3 & 1) * 0x10) {
          param_3 = param_3 ^ 5;
        }
        param_2 = param_2 + -1;
        param_3 = param_3 ^ (uVar3 & 1) << 3;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    else {
      do {
        bVar1 = *param_1;
        uVar3 = (uint)bVar1;
        uVar4 = (param_3 & 0xf) << 1;
        if (((param_3 ^ bVar1 >> 3) & 0x10) != 0) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = (uVar4 & 0xf) << 1;
        if (0xf < (uVar4 ^ bVar1 >> 2 & 0x10)) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = (uVar2 & 0xf) << 1;
        if (0xf < (uVar2 ^ bVar1 >> 1 & 0x10)) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = (uVar4 & 0xf) << 1;
        if (((uVar4 ^ uVar3) & 0x10) != 0) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = (uVar2 & 0xf) << 1;
        if (0xf < (uVar2 ^ (uVar3 & 8) << 1)) {
          uVar4 = uVar4 ^ 5;
        }
        uVar2 = (uVar4 & 0xf) << 1;
        if (0xf < (uVar4 ^ (uVar3 & 4) << 2)) {
          uVar2 = uVar2 ^ 5;
        }
        uVar4 = (uVar2 & 0xf) << 1;
        if (0xf < (uVar2 ^ (uVar3 & 2) << 3)) {
          uVar4 = uVar4 ^ 5;
        }
        param_3 = (uVar4 & 0xf) << 1;
        if (((uVar4 ^ uVar3 << 4) & 0x10) != 0) {
          param_3 = param_3 ^ 5;
        }
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  return param_3;
}

