// FUN_00f4bf18 @ 00f4bf18 size=180 calls_out=2 calls_in=0
// strings: 

void FUN_00f4bf18(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    FUN_00f47a28(param_1 + 1);
    if ((param_1[4] & 0x7fffffffU) != 0) {
      iVar4 = param_1[5];
      goto LAB_014b47f4;
    }
  }
  else {
    switch((char)param_1[2]) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x06':
      break;
    case '\x03':
      if (param_1[3] != 0) {
        iVar4 = param_1[4];
LAB_014b47f4:
        if (iVar4 == 0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
          iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
        iVar12 = *(int *)(iVar5 + 8) + 0x10;
        iVar10 = iVar13 * uVar14 + iVar13 + -4;
        iVar13 = iVar12 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar9 = *(uint *)(iVar13 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar13 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar5 + 0x14);
        uVar9 = 1 << uVar14;
        *(undefined1 *)(iVar4 + -3) = 0xff;
        *(undefined2 *)(iVar4 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar5 + 0x10);
          uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
          if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar6 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar6;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar6 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar15 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar7 = *puVar15;
            if (uVar11 != uVar7) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar7) {
            return;
          }
        } while( true );
      }
      break;
    case '\x04':
      iVar4 = param_1[4];
      iVar13 = param_1[5] + 1;
      iVar5 = iVar4;
      while (iVar13 = iVar13 + -1, iVar13 != 0) {
        FUN_00f3a7d0(iVar5);
        iVar5 = iVar5 + 0x18;
      }
      if (param_1[3] != 0) goto LAB_014b47f4;
      break;
    default:
      FUN_00f47a28(param_1 + 3);
      return;
    }
  }
  return;
}

