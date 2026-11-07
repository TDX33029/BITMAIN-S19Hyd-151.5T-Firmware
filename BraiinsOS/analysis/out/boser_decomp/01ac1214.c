// FUN_01ac1214 @ 01ac1214 size=160 calls_out=0 calls_in=1
// strings: 

bool FUN_01ac1214(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  puVar2 = (uint *)*param_1;
  puVar4 = puVar2 + 1;
  uVar5 = ~*puVar2 & 0x80808080;
  iVar1 = param_1[3];
  do {
    iVar6 = iVar1;
    if (iVar6 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 9) = 1;
      break;
    }
    puVar3 = puVar4;
    if (uVar5 == 0) {
      do {
        puVar4 = puVar3 + 1;
        uVar5 = *puVar3;
        puVar2 = puVar2 + -0x30;
        puVar3 = puVar4;
      } while ((uVar5 & 0x80808080) == 0x80808080);
      uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
    }
    uVar7 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18);
    uVar5 = uVar5 - 1 & uVar5;
    DataMemoryBarrier(0xb);
    iVar1 = iVar6 + -1;
  } while ((char)puVar2[((uVar7 >> 3) * -2 - (uVar7 >> 3)) * 4 + -2] != '\0');
  return iVar6 == 0;
}

