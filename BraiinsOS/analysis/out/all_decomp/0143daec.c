// FUN_0143daec @ 0143daec size=76 calls_out=0 calls_in=143
// strings: 

void FUN_0143daec(int param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 != -1) {
    piVar13 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar15 + -1;
    if (iVar15 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (3 < param_2 + 0xbU) {
      if (param_1 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar12 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar11 = *(int *)(iVar15 + 8) + 0x10;
      iVar9 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar11 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar8 = *(uint *)(iVar5 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar5 - param_1) < uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar15 + 0x14);
      uVar8 = 1 << uVar12;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar15 + 0x10);
        uVar6 = *(uint *)(iVar15 + 0xc) | uVar10;
        if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar1);
        *puVar14 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

