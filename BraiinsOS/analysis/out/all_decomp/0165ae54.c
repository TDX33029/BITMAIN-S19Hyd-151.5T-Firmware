// FUN_0165ae54 @ 0165ae54 size=188 calls_out=3 calls_in=0
// strings: 

void FUN_0165ae54(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar13 = (int *)param_1[1];
    piVar3 = piVar13 + 0x28;
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_0163b708(piVar13 + 0x22);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(param_1[1]);
      return;
    }
  }
  else if ((char)param_1[1] == '\x03') {
    puVar8 = (undefined4 *)param_1[2];
    uVar12 = *puVar8;
    puVar15 = (undefined4 *)puVar8[1];
    pcVar4 = (code *)*puVar15;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar12);
    }
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar16 = *(byte *)((int)puVar8 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
    iVar14 = *(int *)(iVar5 + 8) + 0x10;
    iVar10 = iVar6 * uVar16 + iVar6 + -4;
    iVar6 = iVar14 + iVar10;
    if (4 < uVar9) {
      if (uVar9 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar9 = *(uint *)(iVar6 + -4);
      if (uVar9 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar6 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar2 = *(byte *)(iVar5 + 0x14);
    uVar9 = 1 << uVar16;
    *(undefined1 *)((int)puVar8 + -3) = 0xff;
    *(undefined2 *)((int)puVar8 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar5 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
      if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar16);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar8;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar8 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
        return;
      }
      puVar17 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar7 = *puVar17;
        if (uVar11 != uVar7) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar1);
      *puVar17 = uVar9 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar7) {
        return;
      }
    } while( true );
  }
  return;
}

