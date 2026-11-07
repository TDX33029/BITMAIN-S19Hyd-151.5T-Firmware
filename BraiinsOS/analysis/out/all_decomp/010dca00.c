// FUN_010dca00 @ 010dca00 size=516 calls_out=3 calls_in=2
// strings: 

ulonglong FUN_010dca00(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint3 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  
  iVar13 = 1;
  uVar1 = ((param_2 & 0xffff) >> 0xd) + 1;
  uVar2 = 0;
  puVar11 = (undefined1 *)0xfffd;
  if ((!CARRY4(param_3,uVar1)) && (param_3 + uVar1 <= param_5)) {
    puVar8 = (uint3 *)(param_4 + param_3 * 3);
    puVar6 = (undefined1 *)(uint)*puVar8;
    if (puVar6 != &DAT_00110000) {
      iVar13 = (int)puVar8 + 3;
      uVar2 = (param_2 & 0xffff) >> 0xd;
      puVar11 = puVar6;
    }
  }
  if ((param_2 & 0x1000) == 0) {
    if (uVar2 == 0) {
      return ZEXT48(puVar11);
    }
    iVar16 = 0;
    iVar15 = 0;
    puVar3 = (uint *)(param_1 + 4);
    do {
      puVar14 = *(uint **)(param_1 + 0x60);
      pbVar17 = (byte *)(iVar13 + iVar16 * 3);
      uVar12 = (uint)pbVar17[1] << 8 | (uint)pbVar17[2] << 0x10 | (uint)*pbVar17;
      uVar1 = 0xffff;
      if ((char)puVar14[0xb] != '\0') {
        uVar1 = 0xfff;
      }
      if (uVar1 < uVar12) {
        if (uVar12 < puVar14[7]) {
          uVar1 = FUN_010dcf74(puVar14,uVar12);
        }
        else {
          uVar1 = puVar14[5] - 2;
        }
      }
      else if (uVar12 >> 6 < puVar14[2]) {
        uVar1 = (*pbVar17 & 0x3f) + (uint)*(ushort *)(puVar14[1] + (uVar12 >> 6) * 2);
      }
      else {
        uVar1 = puVar14[5] - 1;
      }
      uVar9 = *(uint *)(param_1 + 0x48);
      if (uVar1 < puVar14[5]) {
        puVar14 = (uint *)(puVar14[4] + uVar1 * 4);
      }
      uVar1 = *puVar14;
      if ((uVar1 & 0xffffff00) == 0xd800) {
        uVar12 = uVar12 | uVar1 << 0x18;
      }
      if (uVar9 < 0x12) {
        uVar10 = 0x11;
        uVar5 = uVar9;
        puVar14 = puVar3;
        puVar7 = (uint *)(param_1 + 0x48);
      }
      else {
        uVar5 = *(uint *)(param_1 + 4);
        puVar14 = *(uint **)(param_1 + 8);
        puVar7 = puVar3;
        uVar10 = uVar9;
      }
      if (uVar5 == uVar10) {
        FUN_010d9b58(param_1);
        uVar5 = *(uint *)(param_1 + 4);
        puVar14 = *(uint **)(param_1 + 8);
        puVar7 = puVar3;
      }
      puVar14[uVar5] = uVar12;
      iVar16 = iVar16 + 1;
      *puVar7 = *puVar7 + 1;
      iVar4 = iVar16;
      if ((uVar1 & 0xffffff00) == 0xd800) {
        iVar4 = iVar15;
      }
      if (uVar1 != 2) {
        iVar15 = iVar4;
      }
    } while (pbVar17 + 3 != (byte *)(iVar13 + uVar2 * 3));
  }
  else {
    FUN_010d9be4(param_1,iVar13,iVar13 + uVar2 * 3);
    iVar15 = 0;
  }
  return CONCAT44(iVar15,puVar11);
}

