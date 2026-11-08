// FUN_01845208 @ 01845208 size=378 calls_out=3 calls_in=2
// strings: unknown personality routine | getInfoFromEHABISection | libunwind: %s - %s  | index inlined table detected but pr function requires extra words | getInfoFromEHABISection | libunwind: %s - %s 

undefined4 FUN_01845208(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = *(uint *)(param_3 + 0xc) >> 3;
  if (uVar8 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_3 + 8);
  uVar10 = 0;
  uVar3 = uVar8;
  do {
    while( true ) {
      uVar5 = uVar3 >> 1;
      iVar11 = uVar5 + uVar10;
      uVar12 = *(uint *)(iVar6 + iVar11 * 8);
      if (((uVar12 & 0x40000000) << 1 | uVar12) + iVar6 + iVar11 * 8 <= param_2) break;
      if (uVar5 == 0) goto LAB_01845250;
      uVar3 = uVar5;
    }
    uVar10 = iVar11 + 1;
    uVar3 = (uVar3 - 1) - uVar5;
  } while (uVar3 != 0);
LAB_01845250:
  if (uVar10 == 0) {
    return 0;
  }
  iVar11 = iVar6 + (uVar10 - 1) * 8;
  if (uVar8 != uVar10) {
    uVar3 = *(uint *)(iVar6 + uVar10 * 8);
  }
  uVar5 = *(uint *)(iVar6 + (uVar10 - 1) * 8);
  if (uVar8 != uVar10) {
    iVar6 = ((uVar3 & 0x40000000) << 1 | uVar3) + iVar6 + uVar10 * 8;
  }
  else {
    iVar6 = -1;
  }
  puVar2 = (uint *)(iVar11 + 4);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  uVar8 = *(uint *)(iVar11 + 4);
  if (uVar8 == 1) {
    return 0;
  }
  if ((int)uVar8 < 0) {
    bVar1 = true;
  }
  else {
    puVar2 = (uint *)((int)puVar2 + (uVar8 | (uVar8 & 0x40000000) << 1));
    uVar8 = *puVar2;
    if (-1 < (int)uVar8) {
      uVar3 = 0;
      pcVar7 = (code *)(((uVar8 & 0x40000000) << 1 | uVar8) + (int)puVar2);
      puVar9 = puVar2 + *(byte *)((int)puVar2 + 7) + 2;
      goto LAB_018452b8;
    }
    bVar1 = false;
  }
  uVar3 = (uVar8 & 0xfffffff) >> 0x18;
  if (uVar3 == 1) {
    uVar10 = 0;
    pcVar7 = (code *)&LAB_0184340c_1;
LAB_01845338:
    uVar8 = (uVar8 & 0xffffff) >> 0x10;
    puVar9 = puVar2 + uVar8 + 1;
    if (bVar1) {
      if (uVar8 != 0) {
        pcVar4 = "index inlined table detected but pr function requires extra words";
LAB_01845312:
        FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","getInfoFromEHABISection",pcVar4,param_4);
        FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      goto LAB_018452b8;
    }
  }
  else {
    uVar10 = uVar3;
    if (uVar3 == 2) {
      pcVar7 = FUN_018434c4 + 1;
      uVar3 = 3;
      goto LAB_01845338;
    }
    if (uVar3 != 0) {
      pcVar4 = "unknown personality routine";
      goto LAB_01845312;
    }
    puVar9 = puVar2 + 1;
    pcVar7 = FUN_01843468 + 1;
    if (bVar1) {
      uVar3 = 1;
      puVar9 = (uint *)0x0;
      goto LAB_018452b8;
    }
  }
  uVar3 = uVar10;
LAB_018452b8:
  *(uint **)(param_1 + 0x178) = puVar2;
  *(int *)(param_1 + 0x15c) = iVar6;
  *(code **)(param_1 + 0x164) = pcVar7;
  *(uint **)(param_1 + 0x160) = puVar9;
  *(uint *)(param_1 + 0x16c) = uVar3;
  *(uint *)(param_1 + 0x158) = ((uVar5 & 0x40000000) << 1 | uVar5) + iVar11;
  return 1;
}

