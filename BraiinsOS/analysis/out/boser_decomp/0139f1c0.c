// FUN_0139f1c0 @ 0139f1c0 size=496 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_0139f1c0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = FUN_013ba558(param_1[3]);
  iVar9 = *param_1;
  uVar11 = param_1[1];
  iVar3 = param_1[2];
  uVar6 = *(uint *)(iVar9 + 0x10);
  puVar5 = *(uint **)(iVar9 + 0xc);
  uVar4 = uVar6 & uVar11;
  uVar10 = *(uint *)(iVar9 + 0x18);
  uVar7 = *(uint *)((int)puVar5 + uVar4) & 0x80808080;
  if (uVar7 == 0) {
    iVar8 = 4;
    do {
      uVar4 = uVar4 + iVar8 & uVar6;
      iVar8 = iVar8 + 4;
      uVar7 = *(uint *)((int)puVar5 + uVar4) & 0x80808080;
    } while (uVar7 == 0);
  }
  uVar4 = uVar4 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                 (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6;
  bVar1 = *(byte *)((int)puVar5 + uVar4);
  if (-1 < (char)bVar1) {
    uVar4 = *puVar5 & 0x80808080;
    uVar4 = LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                    uVar4 >> 0x18);
    bVar1 = *(byte *)((int)puVar5 + (uVar4 >> 3));
    uVar4 = uVar4 >> 3;
  }
  uVar7 = bVar1 & 1;
  if ((*(int *)(iVar9 + 0x14) == 0) && (uVar7 = 0, (bVar1 & 1) != 0)) {
    FUN_0137c2a8((undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
    puVar5 = *(uint **)(iVar9 + 0xc);
    uVar6 = *(uint *)(iVar9 + 0x10);
    uVar4 = uVar6 & uVar11;
    uVar7 = *(uint *)((int)puVar5 + uVar4) & 0x80808080;
    if (uVar7 == 0) {
      iVar8 = 4;
      do {
        uVar4 = uVar4 + iVar8;
        iVar8 = iVar8 + 4;
        uVar4 = uVar4 & uVar6;
        uVar7 = *(uint *)((int)puVar5 + uVar4) & 0x80808080;
      } while (uVar7 == 0);
    }
    uVar4 = uVar4 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                   (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6;
    uVar7 = (uint)*(char *)((int)puVar5 + uVar4);
    if (-1 < (int)uVar7) {
      uVar4 = *puVar5 & 0x80808080;
      uVar4 = LZCOUNT((*puVar5 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
      uVar7 = (uint)*(byte *)((int)puVar5 + (uVar4 >> 3));
      uVar4 = uVar4 >> 3;
    }
    iVar8 = *(int *)(iVar9 + 0x14) - (uVar7 & 1);
  }
  else {
    iVar8 = *(int *)(iVar9 + 0x14) - uVar7;
  }
  bVar1 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)puVar5 + uVar4) = bVar1;
  *(int *)(iVar9 + 0x14) = iVar8;
  *(byte *)((int)puVar5 + (uVar4 - 4 & uVar6) + 4) = bVar1;
  *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + 1;
  puVar5[-1 - uVar4] = uVar10;
  FUN_013b1240(iVar9,uVar11,iVar3,uVar2);
  if (*(uint *)(iVar9 + 8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar10,*(uint *)(iVar9 + 8),&DAT_01d2c0c4);
  }
  return uVar2;
}

