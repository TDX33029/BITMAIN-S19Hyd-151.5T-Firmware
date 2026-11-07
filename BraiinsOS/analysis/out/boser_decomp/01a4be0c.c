// FUN_01a4be0c @ 01a4be0c size=480 calls_out=3 calls_in=7
// strings: 

int FUN_01a4be0c(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *(int *)(param_1 + 0x48);
  uVar9 = *(uint *)(param_1 + 0x4c);
  uVar4 = *(uint *)(iVar8 + 0x10);
  puVar3 = *(uint **)(iVar8 + 0xc);
  uVar2 = uVar4 & uVar9;
  uVar5 = *(uint *)(iVar8 + 0x18);
  uVar6 = *(uint *)((int)puVar3 + uVar2) & 0x80808080;
  if (uVar6 == 0) {
    iVar7 = 4;
    do {
      uVar2 = uVar2 + iVar7 & uVar4;
      iVar7 = iVar7 + 4;
      uVar6 = *(uint *)((int)puVar3 + uVar2) & 0x80808080;
    } while (uVar6 == 0);
  }
  uVar2 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                 (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar4;
  bVar1 = *(byte *)((int)puVar3 + uVar2);
  if (-1 < (char)bVar1) {
    uVar2 = *puVar3 & 0x80808080;
    uVar2 = LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                    uVar2 >> 0x18);
    bVar1 = *(byte *)((int)puVar3 + (uVar2 >> 3));
    uVar2 = uVar2 >> 3;
  }
  uVar6 = bVar1 & 1;
  if ((*(int *)(iVar8 + 0x14) == 0) && (uVar6 = 0, (bVar1 & 1) != 0)) {
    FUN_01a528c8((undefined4 *)(iVar8 + 0xc),1,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8)
                );
    puVar3 = *(uint **)(iVar8 + 0xc);
    uVar4 = *(uint *)(iVar8 + 0x10);
    uVar2 = uVar4 & uVar9;
    uVar6 = *(uint *)((int)puVar3 + uVar2) & 0x80808080;
    if (uVar6 == 0) {
      iVar7 = 4;
      do {
        uVar2 = uVar2 + iVar7;
        iVar7 = iVar7 + 4;
        uVar2 = uVar2 & uVar4;
        uVar6 = *(uint *)((int)puVar3 + uVar2) & 0x80808080;
      } while (uVar6 == 0);
    }
    uVar2 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                   (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar4;
    uVar6 = (uint)*(char *)((int)puVar3 + uVar2);
    if (-1 < (int)uVar6) {
      uVar2 = *puVar3 & 0x80808080;
      uVar2 = LZCOUNT((*puVar3 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                      (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
      uVar6 = (uint)*(byte *)((int)puVar3 + (uVar2 >> 3));
      uVar2 = uVar2 >> 3;
    }
    iVar7 = *(int *)(iVar8 + 0x14) - (uVar6 & 1);
  }
  else {
    iVar7 = *(int *)(iVar8 + 0x14) - uVar6;
  }
  bVar1 = (byte)(uVar9 >> 0x19);
  *(byte *)((int)puVar3 + uVar2) = bVar1;
  *(int *)(iVar8 + 0x14) = iVar7;
  *(byte *)((int)puVar3 + (uVar2 - 4 & uVar4) + 4) = bVar1;
  *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
  puVar3[-1 - uVar2] = uVar5;
  FUN_01a49e20(iVar8,uVar9,param_1,param_2);
  if (*(uint *)(iVar8 + 8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,*(uint *)(iVar8 + 8),&DAT_01d2c0c4);
  }
  return *(int *)(iVar8 + 4) + uVar5 * 0xc0;
}

