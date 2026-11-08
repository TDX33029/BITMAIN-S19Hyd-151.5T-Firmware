// FUN_00aa8150 @ 00aa8150 size=368 calls_out=2 calls_in=2
// strings: inconsistent in drop

void FUN_00aa8150(int param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar11 = (int *)(param_1 + 0x18);
  do {
    piVar7 = *(int **)(param_1 + 0x1c);
    piVar4 = (int *)piVar7[0x21];
    DataMemoryBarrier(0xb);
    piVar16 = *(int **)(param_1 + 8);
    if (piVar7 == piVar16 + 2) {
      if (piVar4 == (int *)0x0) {
        if (*(int *)(param_1 + 0xc) != 0) {
          (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa8008(*(undefined4 *)(param_1 + 8));
        }
        if (param_1 != -1) {
          piVar11 = (int *)(param_1 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar11;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            if (param_1 == 0) {
              return;
            }
            iVar6 = FUN_016d3bc8();
            uVar17 = *(byte *)(param_1 + -3) & 0x1f;
            if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
               (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0))
            {
              iVar8 = (uint)*(ushort *)
                             (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
            }
            uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
            iVar15 = *(int *)(iVar6 + 8) + 0x10;
            iVar13 = iVar8 * uVar17 + iVar8 + -4;
            iVar8 = iVar15 + iVar13;
            if (4 < uVar12) {
              if (uVar12 != 5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar1)();
              }
              uVar12 = *(uint *)(iVar8 + -4);
              if (uVar12 < 5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar1)();
              }
              if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar1)();
              }
            }
            if ((uint)(iVar8 - param_1) < uVar12) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar1)();
            }
            if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar1)();
            }
            if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar1)();
            }
            bVar3 = *(byte *)(iVar6 + 0x14);
            uVar12 = 1 << uVar17;
            *(undefined1 *)(param_1 + -3) = 0xff;
            *(undefined2 *)(param_1 + -2) = 0;
            do {
              uVar14 = *(uint *)(iVar6 + 0x10);
              uVar9 = *(uint *)(iVar6 + 0xc) | uVar14;
              if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar1)();
              }
              if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&uStack_28,iVar6,uVar17);
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
                *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
                return;
              }
              puVar18 = (uint *)(iVar6 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar18);
                uVar9 = *puVar18;
                if (uVar14 != uVar9) goto LAB_016d409c;
                bVar2 = (bool)hasExclusiveAccess(puVar18);
              } while (!bVar2);
              *puVar18 = uVar12 + uVar14;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar14 == uVar9) {
                return;
              }
            } while( true );
          }
        }
        return;
      }
      *(int **)(param_1 + 0x1c) = piVar4;
      DataMemoryBarrier(0xb);
      piVar7 = piVar4;
      piVar4 = (int *)piVar4[0x21];
    }
    if (piVar4 == (int *)0x0) {
      DataMemoryBarrier(0xb);
      if ((int *)*piVar11 != piVar7) {
LAB_00aa82ac:
        FUN_0100ec74("inconsistent in drop",0x14);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xaa82bc);
        (*pcVar1)();
      }
      iVar6 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      iVar6 = iVar6 + 8;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar6;
      DataMemoryBarrier(0xb);
      *(int *)(iVar8 + 0x84) = iVar6;
      piVar4 = (int *)piVar7[0x21];
      DataMemoryBarrier(0xb);
      if (piVar4 == (int *)0x0) goto LAB_00aa82ac;
    }
    piVar7 = piVar7 + -2;
    *(int **)(param_1 + 0x1c) = piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa8008();
    }
  } while( true );
}

