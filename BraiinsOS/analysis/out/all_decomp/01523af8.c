// FUN_01523af8 @ 01523af8 size=264 calls_out=3 calls_in=1
// strings: 

void FUN_01523af8(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar6 = 0xb;
  if (0x80000012 < *param_1) {
    iVar6 = *param_1 + 0x7fffffed;
  }
  switch(iVar6) {
  case 0:
  case 1:
  case 0xd:
    if (param_1[1] != 0) {
      uVar4 = param_1[2];
LAB_014b47f4:
      if (uVar4 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar11 = *(byte *)(uVar4 - 3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar9 - 0x10, uVar9 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar4 - 3) >> 5);
      iVar13 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar8 * uVar11 + iVar8 + -4;
      iVar8 = iVar13 + iVar12;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar8 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar8 - uVar4 < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar9 = 1 << uVar11;
      *(undefined1 *)(uVar4 - 3) = 0xff;
      *(undefined2 *)(uVar4 - 2) = 0;
      do {
        uVar4 = *(uint *)(iVar6 + 0x10);
        uVar14 = *(uint *)(iVar6 + 0xc) | uVar4;
        if ((uVar9 & uVar14) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar4 == 0) || (uVar14 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar9 + uVar4;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar14 = *puVar15;
          if (uVar4 != uVar14) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar4;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar4 == uVar14) {
          return;
        }
      } while( true );
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    break;
  case 8:
    uVar11 = param_1[1];
    if (-0x7fffffeb < (int)uVar11) {
      uVar4 = param_1[2];
      uVar9 = uVar4;
      for (uVar14 = param_1[3]; uVar14 != 0; uVar14 = uVar14 - 1) {
        FUN_01496be4(uVar9);
        uVar9 = uVar9 + 0x3c;
      }
      if (uVar11 != 0) goto LAB_014b47f4;
    }
    break;
  case 0xb:
    FUN_01523c54();
    return;
  case 0xc:
    if (param_1[1] == 5) {
      piVar7 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(param_1[2],param_1[3]);
        return;
      }
    }
    break;
  default:
    piVar7 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[1],param_1[2]);
      return;
    }
  }
  return;
}

