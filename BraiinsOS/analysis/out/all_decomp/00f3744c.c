// FUN_00f3744c @ 00f3744c size=264 calls_out=1 calls_in=2
// strings: 

void FUN_00f3744c(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_r2;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int unaff_r8;
  uint *puVar16;
  int iVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[0x18] != 0) {
    thunk_FUN_016d3fb4(param_1[0x19]);
    param_3 = extraout_r2;
  }
  if (*param_1 != 0) {
    iVar6 = param_1[1];
    iVar17 = 0;
    if (iVar6 != 0) {
      param_3 = iVar6 * 3;
      iVar17 = iVar6 * 0xd;
    }
    if (iVar6 != 0 && iVar17 != -0x11) {
      thunk_FUN_016d3fb4(*param_1 + param_3 * -4 + -0xc);
    }
  }
  puVar16 = (uint *)param_1[0xc];
  if (puVar16 != (uint *)0x0) {
    unaff_r8 = param_1[0xd];
  }
  if (puVar16 != (uint *)0x0 && unaff_r8 != 0) {
    iVar17 = param_1[0xf];
    if (iVar17 != 0) {
      puVar15 = puVar16 + 1;
      uVar8 = ~*puVar16 & 0x80808080;
      puVar10 = puVar16;
      do {
        puVar14 = puVar15;
        if (uVar8 == 0) {
          do {
            puVar15 = puVar14 + 1;
            uVar8 = *puVar14;
            puVar10 = puVar10 + -0x10;
            puVar14 = puVar15;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                        uVar8 >> 0x18) & 0x38;
        if (*(int *)((int)puVar10 + uVar4 * -2 + -0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar10 + uVar4 * -2 + -0xc));
        }
        iVar17 = iVar17 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (iVar17 != 0);
    }
    if (unaff_r8 * 0x11 != -0x15) {
      if (puVar16 + unaff_r8 * -4 + -4 == (uint *)0x0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      bVar2 = *(byte *)((int)puVar16 + unaff_r8 * -0x10 + -0x13);
      uVar8 = bVar2 & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar6 = uVar4 - 0x10, uVar4 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar4 = (uint)(bVar2 >> 5);
      iVar13 = *(int *)(iVar17 + 8) + 0x10;
      iVar11 = iVar6 * uVar8 + iVar6 + -4;
      iVar6 = iVar13 + iVar11;
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
      if ((uint)(iVar6 - (int)(puVar16 + unaff_r8 * -4 + -4)) < uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar4 = 1 << uVar8;
      *(undefined1 *)((int)puVar16 + unaff_r8 * -0x10 + -0x13) = 0xff;
      *(undefined2 *)((int)puVar16 + unaff_r8 * -0x10 + -0x12) = 0;
      do {
        uVar12 = *(uint *)(iVar17 + 0x10);
        uVar7 = *(uint *)(iVar17 + 0xc) | uVar12;
        if ((uVar4 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar4 + uVar12;
          return;
        }
        puVar16 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar4 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

