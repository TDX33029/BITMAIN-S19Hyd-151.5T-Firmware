// FUN_00fa9978 @ 00fa9978 size=492 calls_out=0 calls_in=5
// strings: 

int FUN_00fa9978(char *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  
  uVar7 = 0;
  puVar12 = (uint *)((uint)(param_1 + 3) & 0xfffffffc);
  iVar6 = 0;
  iVar9 = (int)param_1 - (int)puVar12;
  uVar5 = param_2 + iVar9;
  uVar8 = uVar5 & 3;
  if (iVar9 != 0) {
    do {
      if (-0x41 < *param_1) {
        iVar6 = iVar6 + 1;
      }
      bVar13 = iVar9 != -1;
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 1;
    } while (bVar13);
  }
  if (uVar8 != 0) {
    pcVar4 = (char *)((int)puVar12 + (uVar5 & 0x7ffffffc));
    uVar7 = (uint)(-0x41 < *pcVar4);
    if (uVar8 != 1) {
      if (-0x41 < pcVar4[1]) {
        uVar7 = uVar7 + 1;
      }
      if ((uVar8 != 2) && (-0x41 < pcVar4[2])) {
        uVar7 = uVar7 + 1;
      }
    }
  }
  iVar6 = uVar7 + iVar6;
  uVar5 = uVar5 >> 2;
  do {
    puVar11 = puVar12;
    if (uVar5 == 0) {
      return iVar6;
    }
    uVar7 = uVar5;
    if (0xbf < uVar5) {
      uVar7 = 0xc0;
    }
    if ((uVar7 & 0xfc) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      puVar12 = puVar11;
      do {
        puVar1 = puVar12 + 1;
        uVar10 = *puVar12;
        puVar2 = puVar12 + 2;
        puVar3 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        uVar8 = ((~*puVar3 >> 7 | *puVar3 >> 6) & 0x1010101) +
                ((~*puVar2 >> 7 | *puVar2 >> 6) & 0x1010101) +
                ((~*puVar1 >> 7 | *puVar1 >> 6) & 0x1010101) +
                ((~uVar10 >> 7 | uVar10 >> 6) & 0x1010101) + uVar8;
      } while (puVar12 != puVar11 + (uVar7 & 0xfc));
    }
    uVar5 = uVar5 - uVar7;
    uVar10 = uVar7 & 3;
    iVar6 = iVar6 + (((uVar8 >> 8 & 0xff00ff) + (uVar8 & 0xff00ff)) * 0x10001 >> 0x10);
    puVar12 = puVar11 + uVar7;
  } while (uVar10 == 0);
  puVar11 = puVar11 + (uVar7 & 0xfc);
  uVar5 = (~*puVar11 >> 7 | *puVar11 >> 6) & 0x1010101;
  if ((uVar10 != 1) &&
     (uVar5 = ((~puVar11[1] >> 7 | puVar11[1] >> 6) & 0x1010101) + uVar5, uVar10 != 2)) {
    uVar5 = ((~puVar11[2] >> 7 | puVar11[2] >> 6) & 0x1010101) + uVar5;
  }
  return iVar6 + (((uVar5 >> 8 & 0xff00ff) + (uVar5 & 0xff00ff)) * 0x10001 >> 0x10);
}

