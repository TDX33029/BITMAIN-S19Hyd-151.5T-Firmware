// FUN_0098e77c @ 0098e77c size=576 calls_out=2 calls_in=0
// strings: 

void FUN_0098e77c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_3f [39];
  
  puVar10 = (uint *)*param_1;
  iVar13 = ((uint)puVar10 % 0x43) * 0x20;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(&DAT_018dd084 + iVar13) == 1) {
LAB_0098e7f4:
    piVar11 = (int *)(&DAT_018dd084 + iVar13);
    do {
      iVar13 = *piVar11;
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
    if (iVar13 == 1) {
      uVar8 = 0;
      do {
        while (*piVar11 == 1) {
          if (uVar8 < 5) {
            uVar6 = 1;
            do {
              uVar2 = uVar6 >> (uVar8 & 0xff);
              uVar6 = uVar6 + 1;
              HintYield();
            } while (uVar2 == 0);
            uVar8 = uVar8 + 1;
          }
          else if ((uVar8 & 0x1f) != 0x1f) {
            iVar13 = 1 << (uVar8 & 0x1f);
            do {
              iVar13 = iVar13 + -1;
              HintYield();
            } while (iVar13 != 0);
          }
        }
        do {
          iVar13 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 1;
        DataMemoryBarrier(0xb);
      } while (iVar13 == 1);
    }
    DataMemoryBarrier(0xb);
    uVar2 = *puVar10;
    uVar4 = puVar10[1];
    uVar6 = puVar10[2];
    uVar8 = puVar10[3];
    DataMemoryBarrier(0xb);
    *piVar11 = iVar13;
  }
  else {
    uVar2 = *puVar10;
    uVar4 = puVar10[1];
    uVar6 = puVar10[2];
    uVar8 = puVar10[3];
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    if (*(int *)(&DAT_018dd080 + iVar13) != *(int *)(&DAT_018dd080 + ((uint)puVar10 % 0x43) * 0x20)
        || *(int *)(&DAT_018dd084 + iVar13) != *(int *)(&DAT_018dd084 + iVar13)) goto LAB_0098e7f4;
  }
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar13 = FUN_00fab440();
      iVar5 = 0x27 - iVar13;
      puVar3 = auStack_3f + iVar13;
      pcVar7 = (char *)0x1;
      uVar9 = 0;
      goto LAB_0098e9a4;
    }
    iVar13 = 0x1f;
    do {
      iVar14 = iVar13;
      uVar15 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4 | uVar4 << 0x1c;
      auStack_3f[iVar14] = (&DAT_005642f0)[uVar15];
      uVar12 = uVar6 >> 4 | uVar8 << 0x1c;
      uVar4 = uVar4 >> 4 | uVar6 << 0x1c;
      uVar15 = uVar8 >> 4;
      uVar8 = uVar8 >> 4;
      uVar6 = uVar12;
      iVar13 = iVar14 + -1;
    } while ((uVar2 != 0 || uVar12 != 0) || (uVar4 != 0 || uVar15 != 0));
  }
  else {
    iVar13 = 0x1f;
    do {
      iVar14 = iVar13;
      uVar15 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4 | uVar4 << 0x1c;
      auStack_3f[iVar14] = (&DAT_00563e90)[uVar15];
      uVar12 = uVar6 >> 4 | uVar8 << 0x1c;
      uVar4 = uVar4 >> 4 | uVar6 << 0x1c;
      uVar15 = uVar8 >> 4;
      uVar8 = uVar8 >> 4;
      uVar6 = uVar12;
      iVar13 = iVar14 + -1;
    } while ((uVar2 != 0 || uVar12 != 0) || (uVar4 != 0 || uVar15 != 0));
  }
  iVar5 = 0x21 - (iVar14 + 1);
  puVar3 = auStack_3f + iVar14;
  pcVar7 = "0x";
  uVar9 = 2;
LAB_0098e9a4:
  FUN_00fa9698(param_2,1,pcVar7,uVar9,puVar3,iVar5);
  return;
}

