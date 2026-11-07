// FUN_012fa650 @ 012fa650 size=436 calls_out=0 calls_in=6
// strings: 

int FUN_012fa650(char *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint *puVar14;
  uint *puVar13;
  
  iVar8 = 0;
  puVar4 = (uint *)((uint)(param_1 + 3) & 0xfffffffc);
  iVar6 = 0;
  iVar11 = (int)param_1 - (int)puVar4;
  uVar3 = param_2 + iVar11;
  uVar10 = uVar3 & 3;
  if (iVar11 != 0) {
    do {
      if (-0x41 < *param_1) {
        iVar6 = iVar6 + 1;
      }
      bVar12 = iVar11 != -1;
      iVar11 = iVar11 + 1;
      param_1 = param_1 + 1;
    } while (bVar12);
  }
  if (uVar10 != 0) {
    iVar8 = 0;
    pcVar2 = (char *)((int)puVar4 + (uVar3 & 0x7ffffffc));
    do {
      if (-0x41 < *pcVar2) {
        iVar8 = iVar8 + 1;
      }
      uVar10 = uVar10 - 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar10 != 0);
  }
  iVar8 = iVar8 + iVar6;
  uVar3 = uVar3 >> 2;
  do {
    puVar5 = puVar4;
    if (uVar3 == 0) {
      return iVar8;
    }
    uVar10 = uVar3;
    if (0xbf < uVar3) {
      uVar10 = 0xc0;
    }
    if ((uVar10 & 0xfc) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar4 = puVar5;
      do {
        uVar9 = *puVar4;
        puVar13 = puVar4 + 1;
        puVar14 = puVar4 + 2;
        puVar1 = puVar4 + 3;
        puVar4 = puVar4 + 4;
        uVar7 = ((~*puVar1 >> 7 | *puVar1 >> 6) & 0x1010101) +
                ((~*puVar14 >> 7 | *puVar14 >> 6) & 0x1010101) +
                ((~*puVar13 >> 7 | *puVar13 >> 6) & 0x1010101) +
                ((~uVar9 >> 7 | uVar9 >> 6) & 0x1010101) + uVar7;
      } while (puVar4 != puVar5 + (uVar10 & 0xfc));
    }
    uVar3 = uVar3 - uVar10;
    iVar8 = iVar8 + (((uVar7 >> 8 & 0xff00ff) + (uVar7 & 0xff00ff)) * 0x10001 >> 0x10);
    puVar4 = puVar5 + uVar10;
  } while ((uVar10 & 3) == 0);
  iVar6 = (uVar10 & 3) << 2;
  uVar3 = 0;
  puVar4 = puVar5 + (uVar10 & 0xfc);
  do {
    iVar6 = iVar6 + -4;
    uVar3 = ((~*puVar4 >> 7 | *puVar4 >> 6) & 0x1010101) + uVar3;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0);
  return iVar8 + (((uVar3 >> 8 & 0xff00ff) + (uVar3 & 0xff00ff)) * 0x10001 >> 0x10);
}

