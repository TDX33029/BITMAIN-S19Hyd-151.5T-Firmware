// FUN_00a326d8 @ 00a326d8 size=164 calls_out=1 calls_in=5
// strings: 

void FUN_00a326d8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = *param_1;
  switch(iVar6 + 0x80000001U & iVar6 >> 0x1f) {
  case 0:
    if (iVar6 != 0) {
      iVar6 = param_1[1];
LAB_014b47f4:
      if (iVar6 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar7 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar8 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar12 = iVar9 * uVar7 + iVar9 + -4;
      iVar9 = iVar14 + iVar12;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar9 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar9 - iVar6) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar8 = 1 << uVar7;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar4 + 0x10);
        uVar10 = *(uint *)(iVar4 + 0xc) | uVar13;
        if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar10 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar13;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar10 = *puVar15;
          if (uVar13 != uVar10) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar8 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar10) {
          return;
        }
      } while( true );
    }
    break;
  case 1:
    if (param_1[1] != 0) {
      iVar6 = param_1[2];
      goto LAB_014b47f4;
    }
    break;
  case 2:
    if (param_1[1] != 0) {
      iVar6 = param_1[2];
      goto LAB_014b47f4;
    }
    break;
  case 4:
    if (param_1[1] != 0) {
      iVar6 = param_1[2];
      goto LAB_014b47f4;
    }
    break;
  case 7:
    uVar7 = param_1[1];
    uVar8 = 8;
    if ((int)uVar7 < 0) {
      uVar8 = uVar7 ^ 0x80000000;
    }
    if (7 < uVar8) {
      if (uVar8 != 8) {
        FUN_009b8520(param_1 + 2);
        return;
      }
      if (uVar7 == 0) {
        return;
      }
      iVar6 = param_1[2];
      goto LAB_014b47f4;
    }
  }
  return;
}

