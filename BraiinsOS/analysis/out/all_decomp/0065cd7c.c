// FUN_0065cd7c @ 0065cd7c size=180 calls_out=2 calls_in=1
// strings: 

void FUN_0065cd7c(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x12] == '\x03') {
      FUN_0065a568(param_1 + 4);
      return;
    }
    if ((char)param_1[0x12] == '\0') {
      piVar3 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar15 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar15);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007846b4(param_1[2],param_1[3]);
        return;
      }
      return;
    }
  }
  else if (*param_1 == 1) {
    bVar15 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar15 = unaff_r4 == 0;
    }
    if (!bVar15) {
      puVar11 = (undefined4 *)param_1[5];
      pcVar2 = (code *)*puVar11;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(unaff_r4);
      }
      if (puVar11[1] != 0) {
        if (unaff_r4 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar13 = *(byte *)(unaff_r4 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar8 = (uint)(*(byte *)(unaff_r4 + -3) >> 5);
        iVar12 = *(int *)(iVar4 + 8) + 0x10;
        iVar9 = iVar5 * uVar13 + iVar5 + -4;
        iVar5 = iVar12 + iVar9;
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
        if ((uint)(iVar5 - unaff_r4) < uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar4 + 0x14);
        uVar8 = 1 << uVar13;
        *(undefined1 *)(unaff_r4 + -3) = 0xff;
        *(undefined2 *)(unaff_r4 + -2) = 0;
        do {
          uVar10 = *(uint *)(iVar4 + 0x10);
          uVar6 = *(uint *)(iVar4 + 0xc) | uVar10;
          if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar13);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar11 = (undefined4 *)FUN_016d2bc8();
            uVar7 = *puVar11;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar11 = uVar7;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
            return;
          }
          puVar14 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar14);
            uVar6 = *puVar14;
            if (uVar10 != uVar6) goto LAB_016d409c;
            bVar15 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar15);
          *puVar14 = uVar8 + uVar10;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar10 == uVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

