// FUN_01523c54 @ 01523c54 size=352 calls_out=2 calls_in=1
// strings: 

void FUN_01523c54(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar9 = *param_1;
  uVar4 = 0xe;
  if ((int)uVar9 < 0) {
    uVar4 = uVar9 ^ 0x80000000;
  }
  if (uVar4 < 0xe) {
    return;
  }
  switch(uVar4) {
  case 0xe:
    if (((char)param_1[3] == '\0') && ((param_1[4] & 0x7fffffff) != 0)) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar4 = param_1[1];
    puVar10 = (undefined4 *)(uVar4 + 4);
    for (uVar14 = param_1[2]; uVar14 != 0; uVar14 = uVar14 - 1) {
      if (puVar10[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 3;
    }
    if (uVar9 != 0) {
LAB_014b47f4:
      if (uVar4 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar9 = *(byte *)(uVar4 - 3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar14 - 0x10, uVar14 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar14 = (uint)(*(byte *)(uVar4 - 3) >> 5);
      iVar13 = *(int *)(iVar6 + 8) + 0x10;
      iVar11 = iVar7 * uVar9 + iVar7 + -4;
      iVar7 = iVar13 + iVar11;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar7 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar7 - uVar4 < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar14 = 1 << uVar9;
      *(undefined1 *)(uVar4 - 3) = 0xff;
      *(undefined2 *)(uVar4 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar6 + 0x10);
        uVar4 = *(uint *)(iVar6 + 0xc) | uVar12;
        if ((uVar14 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar4 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar10 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar10;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar10 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar14 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar4 = *puVar15;
          if (uVar12 != uVar4) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar14 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar4) {
          return;
        }
      } while( true );
    }
    break;
  case 0xf:
  case 0x11:
    break;
  case 0x10:
    if ((-0x7fffffff < (int)param_1[4]) && (param_1[4] != 0)) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    if (uVar9 != 0) {
      puVar10 = (undefined4 *)(uVar4 + 4);
      do {
        if ((-0x7fffffff < (int)puVar10[-1]) && (puVar10[-1] != 0)) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (param_1[1] != 0) goto LAB_014b47f4;
    break;
  default:
    piVar5 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[1],param_1[2]);
      return;
    }
  }
  return;
}

