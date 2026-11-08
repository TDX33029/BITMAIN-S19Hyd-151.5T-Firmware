// FUN_00f015fc @ 00f015fc size=164 calls_out=1 calls_in=6
// strings: 

void FUN_00f015fc(uint *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  uVar6 = 4;
  if ((int)uVar3 < 0) {
    uVar6 = uVar3 ^ 0x80000000;
  }
  switch(uVar6) {
  case 0:
  case 3:
    break;
  case 1:
    uVar3 = param_1[1];
    puVar14 = (undefined4 *)param_1[2];
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar3);
    }
    if (puVar14[1] != 0) {
LAB_014b47f4:
      if (uVar3 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar6 = *(byte *)(uVar3 - 3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar3 - 3) >> 5);
      iVar13 = *(int *)(iVar7 + 8) + 0x10;
      iVar11 = iVar8 * uVar6 + iVar8 + -4;
      iVar8 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if (iVar8 - uVar3 < uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar2 = *(byte *)(iVar7 + 0x14);
      uVar10 = 1 << uVar6;
      *(undefined1 *)(uVar3 - 3) = 0xff;
      *(undefined2 *)(uVar3 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar7 + 0x10);
        uVar3 = *(uint *)(iVar7 + 0xc) | uVar12;
        if ((uVar10 & uVar3) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar12 == 0) || (uVar3 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar14;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar14 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar3 = *puVar15;
          if (uVar12 != uVar3) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar3) {
          return;
        }
      } while( true );
    }
    break;
  case 2:
    piVar5 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[1],param_1[2]);
      return;
    }
    return;
  default:
    if (uVar3 != 0) {
      uVar3 = param_1[1];
      goto LAB_014b47f4;
    }
  }
  return;
}

