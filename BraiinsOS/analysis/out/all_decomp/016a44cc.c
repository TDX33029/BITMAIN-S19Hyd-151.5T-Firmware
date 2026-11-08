// FUN_016a44cc @ 016a44cc size=164 calls_out=0 calls_in=1
// strings: 

bool FUN_016a44cc(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = (uint *)*param_1;
  puVar3 = puVar2 + 1;
  uVar5 = ~*puVar2 & 0x80808080;
  iVar1 = param_1[3];
  do {
    iVar7 = iVar1;
    if (iVar7 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 9) = 1;
      break;
    }
    puVar4 = puVar3;
    if (uVar5 == 0) {
      do {
        puVar3 = puVar4 + 1;
        uVar5 = *puVar4;
        puVar2 = puVar2 + -0x30;
        puVar4 = puVar3;
      } while ((uVar5 & 0x80808080) == 0x80808080);
      uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
    }
    uVar6 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18);
    uVar5 = uVar5 - 1 & uVar5;
    DataMemoryBarrier(0xb);
    iVar1 = iVar7 + -1;
  } while ((char)puVar2[((uVar6 >> 3) * -2 - (uVar6 >> 3)) * 4 + -2] != '\0');
  return iVar7 == 0;
}

