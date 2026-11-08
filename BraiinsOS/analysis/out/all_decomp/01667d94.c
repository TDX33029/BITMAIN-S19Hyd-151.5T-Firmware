// FUN_01667d94 @ 01667d94 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_01667d94(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = 4;
  if (1 < *param_1) {
    iVar5 = *param_1 - 2;
  }
  if (3 < iVar5 - 1U) {
    if (iVar5 == 0) {
      if (param_1[1] != 0) {
        uVar11 = param_1[2];
        goto LAB_014b47f4;
      }
    }
    else {
      if (iVar5 != 5) {
        FUN_016676ec(param_1 + 1);
        return;
      }
      uVar11 = param_1[2];
      FUN_01667914(uVar11,param_1[3]);
      if (param_1[1] != 0) {
LAB_014b47f4:
        if (uVar11 == 0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar13 = *(byte *)(uVar11 - 3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar8 = (uint)(*(byte *)(uVar11 - 3) >> 5);
        iVar12 = *(int *)(iVar5 + 8) + 0x10;
        iVar9 = iVar6 * uVar13 + iVar6 + -4;
        iVar6 = iVar12 + iVar9;
        if (4 < uVar8) {
          if (uVar8 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar8 = *(uint *)(iVar6 + -4);
          if (uVar8 < 5) {
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
        if (iVar6 - uVar11 < uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar5 + 0x14);
        uVar8 = 1 << uVar13;
        *(undefined1 *)(uVar11 - 3) = 0xff;
        *(undefined2 *)(uVar11 - 2) = 0;
        do {
          uVar10 = *(uint *)(iVar5 + 0x10);
          uVar11 = *(uint *)(iVar5 + 0xc) | uVar10;
          if ((uVar8 & uVar11) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar10 == 0) || (uVar11 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar13);
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
            *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
            return;
          }
          puVar14 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar14);
            uVar11 = *puVar14;
            if (uVar10 != uVar11) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar3);
          *puVar14 = uVar8 + uVar10;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar10 == uVar11) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

