// FUN_0134a290 @ 0134a290 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_0134a290(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int unaff_r8;
  uint *puVar16;
  int iVar17;
  undefined4 uStack_28;
  
  if (*param_1 != 0) {
    FUN_01343b74(param_1 + 1);
    return;
  }
  puVar16 = (uint *)param_1[2];
  if (puVar16 != (uint *)0x0) {
    unaff_r8 = param_1[3];
  }
  if (puVar16 != (uint *)0x0 && unaff_r8 != 0) {
    iVar17 = param_1[5];
    if (iVar17 != 0) {
      puVar15 = puVar16 + 1;
      uVar12 = ~*puVar16 & 0x80808080;
      puVar7 = puVar16;
      do {
        puVar14 = puVar15;
        if (uVar12 == 0) {
          do {
            puVar15 = puVar14 + 1;
            uVar12 = *puVar14;
            puVar7 = puVar7 + -0x28;
            puVar14 = puVar15;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        if (puVar7[uVar9 * -10 + -10] != 0) {
          thunk_FUN_016d3fb4(puVar7[uVar9 * -10 + -9]);
        }
        iVar17 = iVar17 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (iVar17 != 0);
    }
    if (unaff_r8 * 0x29 != -0x2d) {
      if (puVar16 + unaff_r8 * -10 + -10 == (uint *)0x0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      bVar2 = *(byte *)((int)puVar16 + unaff_r8 * -0x28 + -0x2b);
      uVar12 = bVar2 & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(bVar2 >> 5);
      iVar13 = *(int *)(iVar17 + 8) + 0x10;
      iVar10 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar5 - (int)(puVar16 + unaff_r8 * -10 + -10)) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar9 = 1 << uVar12;
      *(undefined1 *)((int)puVar16 + unaff_r8 * -0x28 + -0x2b) = 0xff;
      *(undefined2 *)((int)puVar16 + unaff_r8 * -0x28 + -0x2a) = 0;
      do {
        uVar11 = *(uint *)(iVar17 + 0x10);
        uVar6 = *(uint *)(iVar17 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

