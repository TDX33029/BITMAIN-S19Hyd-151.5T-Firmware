// FUN_0148f36c @ 0148f36c size=276 calls_out=1 calls_in=3
// strings: 

void FUN_0148f36c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  uint *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int *local_28;
  
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    iVar17 = param_1[3];
    local_28 = param_1;
    if (iVar17 != 0) {
      puVar14 = (uint *)*param_1;
      puVar18 = puVar14 + 1;
      uVar16 = ~*puVar14 & 0x80808080;
      do {
        puVar9 = puVar18;
        if (uVar16 == 0) {
          do {
            puVar18 = puVar9 + 1;
            uVar16 = *puVar9;
            puVar14 = puVar14 + -0x18;
            puVar9 = puVar18;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8
                        | uVar16 >> 0x18);
        iVar5 = (uVar4 >> 3) * -2 - (uVar4 >> 3);
        if (1 < (byte)puVar14[iVar5 * 2 + -6]) {
          piVar11 = (int *)puVar14[iVar5 * 2 + -5];
          (**(code **)(*piVar11 + 0x10))(piVar11 + 3,piVar11[1],piVar11[2]);
          thunk_FUN_016d3fb4(piVar11);
        }
        uVar16 = uVar16 - 1 & uVar16;
        iVar17 = iVar17 + -1;
        (**(code **)(puVar14[iVar5 * 2 + -4] + 0x10))
                  (puVar14 + iVar5 * 2 + -1,puVar14[iVar5 * 2 + -3],puVar14[iVar5 * 2 + -2]);
      } while (iVar17 != 0);
    }
    if (iVar7 * 0x19 != -0x1d) {
      iVar7 = *local_28 + iVar7 * -0x18;
      if (iVar7 + -0x18 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar7 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar5 = uVar4 - 0x10, uVar4 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar4 = (uint)(*(byte *)(iVar7 + -0x1b) >> 5);
      iVar15 = *(int *)(iVar17 + 8) + 0x10;
      iVar12 = iVar5 * uVar16 + iVar5 + -4;
      iVar5 = iVar15 + iVar12;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar4 = *(uint *)(iVar5 + -4);
        if (uVar4 < 5) {
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
      if ((uint)(iVar5 - (iVar7 + -0x18)) < uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar4 = 1 << uVar16;
      *(undefined1 *)(iVar7 + -0x1b) = 0xff;
      *(undefined2 *)(iVar7 + -0x1a) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar8 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar4 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar17,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar6;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar6 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar4 + uVar13;
          return;
        }
        puVar18 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar8 = *puVar18;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar3);
        *puVar18 = uVar4 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

