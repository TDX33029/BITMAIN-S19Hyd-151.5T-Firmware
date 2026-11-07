// FUN_014bbe4c @ 014bbe4c size=392 calls_out=3 calls_in=0
// strings: 

void FUN_014bbe4c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    FUN_014bc24c(param_1 + 0xb4);
    FUN_014bc04c(param_1);
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      FUN_014bc24c(param_1 + 2);
      uVar7 = param_1[0xc3];
      iVar4 = 0;
      if (uVar7 == 0) {
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        uVar6 = param_1[0xc0];
        uVar8 = param_1[0xc2];
        uVar5 = uVar8 - uVar6;
        if (uVar8 < uVar6) {
          uVar5 = uVar8;
        }
        if (uVar6 - uVar5 < uVar7) {
          iVar4 = uVar7 - (uVar6 - uVar5);
        }
        else {
          uVar6 = uVar5 + uVar7;
        }
      }
      iVar14 = param_1[0xc1];
      puVar9 = (undefined4 *)(iVar14 + uVar5 * 0xc + 4);
      for (iVar12 = uVar6 - uVar5; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      puVar9 = (undefined4 *)(iVar14 + 4);
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (param_1[0xc0] != 0) {
        thunk_FUN_016d3fb4(param_1[0xc1]);
      }
      if ((char)param_1[0xbc] == '\x03') {
        puVar9 = (undefined4 *)param_1[0xbd];
        uVar10 = *puVar9;
        puVar13 = (undefined4 *)puVar9[1];
        if ((code *)*puVar13 != (code *)0x0) {
          (*(code *)*puVar13)(uVar10);
        }
LAB_014bbfb0:
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        if (puVar9 == (undefined4 *)0x0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar7 = *(byte *)((int)puVar9 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar5 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar5 - 0x10, uVar5 == 0)) {
          iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar5 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
        iVar11 = *(int *)(iVar4 + 8) + 0x10;
        iVar14 = iVar12 * uVar7 + iVar12 + -4;
        iVar12 = iVar11 + iVar14;
        if (4 < uVar5) {
          if (uVar5 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar5 = *(uint *)(iVar12 + -4);
          if (uVar5 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar12 - (int)puVar9) < uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 - uVar5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar5 = 1 << uVar7;
        *(undefined1 *)((int)puVar9 + -3) = 0xff;
        *(undefined2 *)((int)puVar9 + -2) = 0;
        do {
          uVar8 = *(uint *)(iVar4 + 0x10);
          uVar6 = *(uint *)(iVar4 + 0xc) | uVar8;
          if ((uVar5 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar8 == 0) || (uVar6 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar7);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar9 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar9;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar9 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar5 + uVar8;
            return;
          }
          puVar15 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar6 = *puVar15;
            if (uVar8 != uVar6) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar5 + uVar8;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar8 == uVar6) {
            return;
          }
        } while( true );
      }
    }
    else {
      FUN_014bc24c(param_1 + 2);
      if ((char)param_1[0xbc] == '\x03') {
        puVar9 = (undefined4 *)param_1[0xbd];
        uVar10 = *puVar9;
        puVar13 = (undefined4 *)puVar9[1];
        if ((code *)*puVar13 != (code *)0x0) {
          (*(code *)*puVar13)(uVar10);
        }
        goto LAB_014bbfb0;
      }
    }
  }
  return;
}

