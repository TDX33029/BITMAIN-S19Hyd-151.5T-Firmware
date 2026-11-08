// FUN_00f122b8 @ 00f122b8 size=296 calls_out=2 calls_in=0
// strings: 

void FUN_00f122b8(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 5) {
    switch(*param_1) {
    case 0:
      piVar4 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010599d0(param_1[1]);
        return;
      }
      break;
    case 1:
      if ((char)param_1[1] == '\x03') {
        puVar8 = (undefined4 *)param_1[2];
        uVar12 = *puVar8;
        puVar14 = (undefined4 *)puVar8[1];
        if ((code *)*puVar14 != (code *)0x0) {
          (*(code *)*puVar14)(uVar12);
        }
LAB_00f123d0:
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
        if (puVar8 == (undefined4 *)0x0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar15 = *(byte *)((int)puVar8 + -3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
        iVar13 = *(int *)(iVar5 + 8) + 0x10;
        iVar10 = iVar6 * uVar15 + iVar6 + -4;
        iVar6 = iVar13 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar9 = *(uint *)(iVar6 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar6 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar5 + 0x14);
        uVar9 = 1 << uVar15;
        *(undefined1 *)((int)puVar8 + -3) = 0xff;
        *(undefined2 *)((int)puVar8 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar5 + 0x10);
          uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
          if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar15);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar12 = *puVar8;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar8 = uVar12;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar16 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar7 = *puVar16;
            if (uVar11 != uVar7) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar1);
          *puVar16 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar7) {
            return;
          }
        } while( true );
      }
      break;
    case 2:
      if ((char)param_1[1] == '\x03') {
        puVar8 = (undefined4 *)param_1[2];
        uVar12 = *puVar8;
        puVar14 = (undefined4 *)puVar8[1];
        if ((code *)*puVar14 != (code *)0x0) {
          (*(code *)*puVar14)(uVar12);
        }
        goto LAB_00f123d0;
      }
      break;
    case 3:
      if ((char)param_1[1] == '\x03') {
        puVar8 = (undefined4 *)param_1[2];
        uVar12 = *puVar8;
        puVar14 = (undefined4 *)puVar8[1];
        if ((code *)*puVar14 != (code *)0x0) {
          (*(code *)*puVar14)(uVar12);
        }
        goto LAB_00f123d0;
      }
      break;
    default:
      if ((char)param_1[1] == '\x03') {
        puVar8 = (undefined4 *)param_1[2];
        uVar12 = *puVar8;
        puVar14 = (undefined4 *)puVar8[1];
        if ((code *)*puVar14 != (code *)0x0) {
          (*(code *)*puVar14)(uVar12);
        }
        goto LAB_00f123d0;
      }
    }
  }
  return;
}

