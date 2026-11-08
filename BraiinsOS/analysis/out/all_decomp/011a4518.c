// FUN_011a4518 @ 011a4518 size=212 calls_out=2 calls_in=4
// strings: 

void FUN_011a4518(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  iVar15 = param_1[1];
  if (iVar15 != 0) {
    iVar16 = param_1[3];
    if (iVar16 != 0) {
      puVar14 = (uint *)*param_1;
      puVar17 = puVar14 + 1;
      uVar12 = ~*puVar14 & 0x80808080;
      do {
        puVar9 = puVar17;
        if (uVar12 == 0) {
          do {
            puVar17 = puVar9 + 1;
            uVar12 = *puVar9;
            puVar14 = puVar14 + -0x20;
            puVar9 = puVar17;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8
                        | uVar12 >> 0x18) & 0x38;
        if (puVar14[-8 - uVar4] != 0) {
          thunk_FUN_016d3fb4(puVar14[-7 - uVar4]);
        }
        iVar16 = iVar16 + -1;
        uVar12 = uVar12 - 1 & uVar12;
        FUN_0115ccf0(puVar14 + (-5 - uVar4));
      } while (iVar16 != 0);
    }
    if (iVar15 * 0x21 != -0x25) {
      iVar15 = *param_1 + iVar15 * -0x20;
      if (iVar15 + -0x20 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar12 = *(byte *)(iVar15 + -0x23) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar6 = uVar4 - 0x10, uVar4 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar4 = (uint)(*(byte *)(iVar15 + -0x23) >> 5);
      iVar13 = *(int *)(iVar16 + 8) + 0x10;
      iVar10 = iVar6 * uVar12 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar4 = *(uint *)(iVar6 + -4);
        if (uVar4 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar6 - (iVar15 + -0x20)) < uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar16 + 0x14);
      uVar4 = 1 << uVar12;
      *(undefined1 *)(iVar15 + -0x23) = 0xff;
      *(undefined2 *)(iVar15 + -0x22) = 0;
      do {
        uVar11 = *(uint *)(iVar16 + 0x10);
        uVar7 = *(uint *)(iVar16 + 0xc) | uVar11;
        if ((uVar4 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar16,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar4 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar4 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

