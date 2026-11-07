// FUN_011ae4dc @ 011ae4dc size=592 calls_out=14 calls_in=1
// strings: 

void FUN_011ae4dc(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  FUN_011ae014(param_1 + 0x14);
  iVar8 = param_1[1];
  if (iVar8 != 0) {
    iVar9 = param_1[3];
    if (iVar9 != 0) {
      puVar7 = (uint *)*param_1;
      puVar5 = puVar7 + 1;
      uVar6 = ~*puVar7 & 0x80808080;
      do {
        puVar4 = puVar5;
        if (uVar6 == 0) {
          do {
            puVar5 = puVar4 + 1;
            uVar6 = *puVar4;
            puVar7 = puVar7 + -0x28;
            puVar4 = puVar5;
          } while ((uVar6 & 0x80808080) == 0x80808080);
          uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        if (puVar7[uVar1 * -10 + -10] != 0) {
          thunk_FUN_016d3fb4(puVar7[uVar1 * -10 + -9]);
        }
        iVar9 = iVar9 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (iVar9 != 0);
    }
    if (iVar8 * 0x29 != -0x2d) {
      thunk_FUN_016d3fb4(*param_1 + iVar8 * -0x28 + -0x28);
    }
  }
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[0xe],param_1[0xf]);
  }
  piVar3 = (int *)param_1[0x10];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[0x10],param_1[0x11]);
  }
  iVar8 = *(int *)param_1[0x17] + -1;
  *(int *)param_1[0x17] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a5e4();
  }
  iVar8 = *(int *)param_1[0x18] + -1;
  *(int *)param_1[0x18] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a6f0();
  }
  iVar8 = *(int *)param_1[0x19] + -1;
  *(int *)param_1[0x19] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a754();
  }
  iVar8 = *(int *)param_1[0x1a] + -1;
  *(int *)param_1[0x1a] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a860();
  }
  iVar8 = *(int *)param_1[0x1b] + -1;
  *(int *)param_1[0x1b] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a8c4();
  }
  iVar8 = *(int *)param_1[0x1c] + -1;
  *(int *)param_1[0x1c] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a928();
  }
  iVar8 = *(int *)param_1[0x1d] + -1;
  *(int *)param_1[0x1d] = iVar8;
  if (iVar8 == 0) {
    FUN_0125a98c();
  }
  iVar8 = *(int *)param_1[0x1e] + -1;
  *(int *)param_1[0x1e] = iVar8;
  if (iVar8 == 0) {
    FUN_0125aabc();
  }
  iVar8 = *(int *)param_1[0x1f] + -1;
  *(int *)param_1[0x1f] = iVar8;
  if (iVar8 == 0) {
    FUN_0125ab20();
  }
  iVar8 = *(int *)param_1[0x20] + -1;
  *(int *)param_1[0x20] = iVar8;
  if (iVar8 == 0) {
    FUN_0125ac50();
  }
  iVar8 = *(int *)param_1[0x21] + -1;
  *(int *)param_1[0x21] = iVar8;
  if (iVar8 == 0) {
    FUN_013cd780();
    return;
  }
  return;
}

