// FUN_011a3e60 @ 011a3e60 size=220 calls_out=1 calls_in=0
// strings: 

void FUN_011a3e60(int *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar17 = param_1[1];
  if (iVar17 != 0) {
    iVar18 = param_1[3];
    if (iVar18 != 0) {
      puVar16 = (uint *)*param_1;
      puVar19 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar11 = puVar19;
        if (uVar14 == 0) {
          do {
            puVar19 = puVar11 + 1;
            uVar14 = *puVar11;
            puVar16 = puVar16 + -0x20;
            puVar11 = puVar19;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar14 >> 8;
        uVar9 = uVar14 >> 0x10;
        uVar13 = uVar14 >> 0x18;
        uVar1 = uVar14 << 0x18;
        uVar14 = uVar14 - 1 & uVar14;
        uVar5 = LZCOUNT(uVar1 | (uVar5 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar13) & 0x38;
        iVar18 = iVar18 + -1;
        piVar7 = (int *)puVar16[-8 - uVar5];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(puVar16[-8 - uVar5]);
        }
      } while (iVar18 != 0);
    }
    if (iVar17 * 0x21 != -0x25) {
      iVar17 = *param_1 + iVar17 * -0x20;
      if (iVar17 + -0x20 == 0) {
        return;
      }
      iVar18 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar17 + -0x23) & 0x1f;
      if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar8 = uVar5 - 0x10, uVar5 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar5 = (uint)(*(byte *)(iVar17 + -0x23) >> 5);
      iVar15 = *(int *)(iVar18 + 8) + 0x10;
      iVar12 = iVar8 * uVar14 + iVar8 + -4;
      iVar8 = iVar15 + iVar12;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar5 = *(uint *)(iVar8 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar8 - (iVar17 + -0x20)) < uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar8 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar18 + 0x14);
      uVar5 = 1 << uVar14;
      *(undefined1 *)(iVar17 + -0x23) = 0xff;
      *(undefined2 *)(iVar17 + -0x22) = 0;
      do {
        uVar13 = *(uint *)(iVar18 + 0x10);
        uVar9 = *(uint *)(iVar18 + 0xc) | uVar13;
        if ((uVar5 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar13 == 0) || (uVar9 + uVar5 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar18,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar18 + 0x10) = uVar5 + uVar13;
          return;
        }
        puVar19 = (uint *)(iVar18 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar9 = *puVar19;
          if (uVar13 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar2);
        *puVar19 = uVar5 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

