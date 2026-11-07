// FUN_014bdbbc @ 014bdbbc size=436 calls_out=4 calls_in=1
// strings: 

void FUN_014bdbbc(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    FUN_005e6cdc();
    if (param_1[3] != -1) {
      FUN_016dffb2();
    }
    FUN_00f02ff8(param_1);
    FUN_014bc04c(param_1 + 4);
    return;
  }
  if (iVar4 != 1) {
    piVar9 = param_1 + 1;
    if (iVar4 == 2) {
      FUN_005e6cdc(piVar9);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar9);
      uVar6 = param_1[10];
      iVar4 = 0;
      uVar14 = param_1[7];
      if (uVar6 == 0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar7 = param_1[9];
        uVar5 = uVar7 - uVar14;
        if (uVar7 < uVar14) {
          uVar5 = uVar7;
        }
        if (uVar14 - uVar5 < uVar6) {
          iVar4 = uVar6 - (uVar14 - uVar5);
          uVar6 = uVar14;
        }
        else {
          uVar6 = uVar5 + uVar6;
        }
      }
      iVar15 = param_1[8];
      puVar8 = (undefined4 *)(iVar15 + uVar5 * 0xc + 4);
      for (iVar10 = uVar6 - uVar5; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar8[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
      }
      puVar8 = (undefined4 *)(iVar15 + 4);
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar8[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
      }
      if (uVar14 != 0) {
        thunk_FUN_016d3fb4(iVar15);
      }
      if ((char)param_1[0xc] == '\x03') {
        puVar8 = (undefined4 *)param_1[0xd];
        uVar11 = *puVar8;
        puVar13 = (undefined4 *)puVar8[1];
        if ((code *)*puVar13 != (code *)0x0) {
          (*(code *)*puVar13)(uVar11);
        }
LAB_014bdd4c:
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
        if (puVar8 == (undefined4 *)0x0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar6 = *(byte *)((int)puVar8 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar14 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
          iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar14 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
        iVar12 = *(int *)(iVar4 + 8) + 0x10;
        iVar15 = iVar10 * uVar6 + iVar10 + -4;
        iVar10 = iVar12 + iVar15;
        if (4 < uVar14) {
          if (uVar14 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar14 = *(uint *)(iVar10 + -4);
          if (uVar14 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar10 - (int)puVar8) < uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + iVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar14 = 1 << uVar6;
        *(undefined1 *)((int)puVar8 + -3) = 0xff;
        *(undefined2 *)((int)puVar8 + -2) = 0;
        do {
          uVar7 = *(uint *)(iVar4 + 0x10);
          uVar5 = *(uint *)(iVar4 + 0xc) | uVar7;
          if ((uVar14 & uVar5) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar7 == 0) || (uVar5 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar6);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar11 = *puVar8;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar8 = uVar11;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar14 + uVar7;
            return;
          }
          puVar16 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar5 = *puVar16;
            if (uVar7 != uVar5) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar3);
          *puVar16 = uVar14 + uVar7;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar7 == uVar5) {
            return;
          }
        } while( true );
      }
    }
    else {
      FUN_005e6cdc(piVar9);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar9);
      if ((char)param_1[5] == '\x03') {
        puVar8 = (undefined4 *)param_1[6];
        uVar11 = *puVar8;
        puVar13 = (undefined4 *)puVar8[1];
        if ((code *)*puVar13 != (code *)0x0) {
          (*(code *)*puVar13)(uVar11);
        }
        goto LAB_014bdd4c;
      }
    }
  }
  return;
}

