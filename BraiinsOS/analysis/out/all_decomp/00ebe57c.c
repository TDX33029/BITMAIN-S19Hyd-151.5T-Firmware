// FUN_00ebe57c @ 00ebe57c size=188 calls_out=2 calls_in=2
// strings: 

void FUN_00ebe57c(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0x1d || param_1[1] != 0) {
    FUN_00ebe668();
    return;
  }
  uVar5 = param_1[2];
  uVar8 = 4;
  if ((int)uVar5 < 0) {
    uVar8 = uVar5 ^ 0x80000000;
  }
  switch(uVar8) {
  case 0:
  case 3:
    break;
  case 1:
    iVar3 = param_1[3];
    puVar15 = (undefined4 *)param_1[4];
    pcVar6 = (code *)*puVar15;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar3);
    }
    if (puVar15[1] != 0) {
LAB_014b47f4:
      if (iVar3 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar5 = *(byte *)(iVar3 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar8 = (uint)(*(byte *)(iVar3 + -3) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar12 = iVar9 * uVar5 + iVar9 + -4;
      iVar9 = iVar14 + iVar12;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar8 = *(uint *)(iVar9 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar9 - iVar3) < uVar8) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar8 = 1 << uVar5;
      *(undefined1 *)(iVar3 + -3) = 0xff;
      *(undefined2 *)(iVar3 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar4 + 0x10);
        uVar10 = *(uint *)(iVar4 + 0xc) | uVar13;
        if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar13 == 0) || (uVar10 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar15 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar15;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar15 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar10 = *puVar16;
          if (uVar13 != uVar10) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar8 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar10) {
          return;
        }
      } while( true );
    }
    break;
  case 2:
    piVar7 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[3],param_1[4]);
      return;
    }
    return;
  default:
    if (uVar5 != 0) {
      iVar3 = param_1[3];
      goto LAB_014b47f4;
    }
  }
  return;
}

