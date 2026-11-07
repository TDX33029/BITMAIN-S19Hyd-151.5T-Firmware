// FUN_01282a50 @ 01282a50 size=364 calls_out=0 calls_in=4
// strings: 

int FUN_01282a50(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_2 < 4) {
    iVar6 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      if (-0x41 < *param_1) {
        iVar6 = iVar6 + 1;
      }
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar7 = 0;
    iVar1 = 0;
    iVar6 = 0;
    if (0x3fb < param_2) {
      iVar1 = 0;
      pcVar4 = param_1;
      do {
        uVar3 = 0;
        iVar2 = 0;
        do {
          bVar8 = iVar2 != -0xfe;
          uVar3 = ((~*(uint *)(pcVar4 + iVar2 * -4) >> 7 | *(uint *)(pcVar4 + iVar2 * -4) >> 6) &
                  0x1010101) + uVar3;
          iVar2 = iVar2 + -1;
        } while (bVar8);
        pcVar4 = pcVar4 + 0x3fc;
        iVar6 = iVar6 + (((uVar3 >> 8 & 0xff00ff) + (uVar3 & 0xff00ff)) * 0x10001 >> 0x10);
        uVar3 = iVar1 + 0x7f8;
        iVar1 = iVar1 + 0x3fc;
      } while (uVar3 <= param_2);
      iVar1 = (((param_2 - 0x3fc) / 0x3fc) * 0x100 - (param_2 - 0x3fc) / 0x3fc) * 4 + 0x3fc;
    }
    uVar3 = param_2 - iVar1 >> 2;
    if (uVar3 != 0) {
      uVar7 = 0;
      puVar5 = (uint *)(param_1 + iVar1);
      do {
        uVar3 = uVar3 - 1;
        uVar7 = ((~*puVar5 >> 7 | *puVar5 >> 6) & 0x1010101) + uVar7;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
    if ((param_2 & 7) != 0) {
      uVar7 = ((~*(uint *)(param_1 + (param_2 - 4)) >> 7 | *(uint *)(param_1 + (param_2 - 4)) >> 6)
              & ~(0xffffffffU >> ((param_2 & 3) << 3)) & 0x1010100) + uVar7;
    }
    iVar6 = iVar6 + (((uVar7 >> 8 & 0xff00ff) + (uVar7 & 0xff00ff)) * 0x10001 >> 0x10);
  }
  return iVar6;
}

