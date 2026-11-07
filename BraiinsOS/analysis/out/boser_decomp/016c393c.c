// FUN_016c393c @ 016c393c size=924 calls_out=18 calls_in=2
// strings: adding one state after cache clear must work | cannot save sentinel state

void FUN_016c393c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  puVar15 = (undefined4 *)param_1[1];
  uVar6 = puVar15[0x25];
  puVar15[0x22] = 0;
  puVar15[0x1f] = 0;
  puVar15[0x25] = 0;
  FUN_016c3d90(puVar15[0x24],uVar6);
  if (puVar15[3] != 0) {
    FUN_016c9160(*puVar15);
    uVar10 = puVar15[1];
    uVar13 = 0;
    if (uVar10 != 0) {
      FUN_01bed93e(*puVar15,0xff,uVar10 + 5);
      if (7 < uVar10) {
        uVar10 = (uVar10 + 1 & 0xfffffff8) - (uVar10 + 1 >> 3);
      }
      uVar13 = uVar10;
    }
    puVar15[2] = uVar13;
    puVar15[3] = 0;
  }
  puVar15[0x1b] = puVar15[0x1b] + 1;
  puVar15[0x1a] = 0;
  if (puVar15[0x2c] == 1) {
    puVar15[0x2d] = puVar15[0x2e];
  }
  puVar15[0x1c] = 0;
  FUN_016c3df0(param_1);
  uVar13 = puVar15[9];
  piVar11 = (int *)puVar15[10];
  iVar4 = puVar15[8];
  iVar7 = puVar15[0xb];
  puVar15[8] = 0;
  if (iVar4 == 1) {
    iVar12 = *param_1;
    iVar4 = FUN_016c4790(iVar12,uVar13);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("cannot save sentinel state",0x35,&DAT_01d09380);
    }
    iVar4 = FUN_016c47d4(puVar15);
    if (((*(uint *)(iVar12 + 0x280) <
          iVar4 + iVar7 + (4 << (*(uint *)(iVar12 + 0x27c) & 0x1f)) + 0x14U) &&
        (iVar4 = FUN_016c4838(param_1), iVar4 != 0)) ||
       (uVar16 = FUN_016c48d0(param_1), (uVar16 & 1) != 0)) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar11;
        bVar3 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar3);
      *piVar11 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar11,iVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("adding one state after cache clear must work",0x2c,&uStack_25,&DAT_01d09450,
                   &DAT_01d09370);
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d0785c);
    }
    bVar2 = *(byte *)(piVar11 + 2);
    FUN_016c29d4(puVar15 + 0x1d,1 << (*(uint *)(iVar12 + 0x27c) & 0x1f));
    uVar13 = (uint)(uVar16 >> 0x20) | uVar13 & 0x10000000 | (bVar2 & 1) << 0x1b;
    iVar4 = thunk_FUN_01bed842(iVar12 + 600,"",0x20);
    if ((iVar4 != 0) && (iVar4 = FUN_016c4790(iVar12,uVar13), iVar4 == 0)) {
      uVar6 = FUN_016c4958(*(undefined4 *)(iVar12 + 0x27c));
      uVar10 = 0;
      while( true ) {
        uVar8 = uVar10;
        if (uVar10 < 0x101) {
          uVar8 = 0x100;
        }
        do {
          uVar14 = uVar10;
          if (uVar8 == uVar14) goto LAB_016c3ae0;
          puVar9 = (uint *)(iVar12 + 600 + (uVar14 >> 3 & 0xfffffff0));
          local_48[3] = puVar9[3];
          local_48[0] = *puVar9;
          local_48[1] = puVar9[1];
          local_48[2] = puVar9[2];
          local_2c = 0;
          uVar10 = uVar14 + 1;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
        } while ((*(uint *)((int)local_48 + ((uVar14 & 0x60) >> 3)) >> (uVar14 & 0x1f) & 1) == 0);
        if (0xff < uVar14) break;
        FUN_016c49b8(iVar12,puVar15,uVar13,uVar14 << 8,uVar6);
      }
    }
LAB_016c3ae0:
    puVar15[0x1a] = puVar15[0x1a] + iVar7;
    do {
      iVar4 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16c3cd8);
      (*pcVar1)();
    }
    iVar4 = puVar15[0x25];
    if (iVar4 == puVar15[0x23]) {
      FUN_015f5ab8(puVar15 + 0x23);
    }
    puVar5 = (undefined4 *)(puVar15[0x24] + iVar4 * 8);
    *puVar5 = piVar11;
    puVar5[1] = iVar7;
    puVar15[0x25] = iVar4 + 1;
    FUN_016c920c(puVar15,piVar11,iVar7,uVar13);
    if (puVar15[8] == 1) {
      piVar11 = (int *)puVar15[10];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar11;
        bVar3 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar3);
      *piVar11 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(puVar15[10],puVar15[0xb]);
      }
    }
    puVar15[8] = 2;
    puVar15[9] = uVar13;
  }
  return;
}

