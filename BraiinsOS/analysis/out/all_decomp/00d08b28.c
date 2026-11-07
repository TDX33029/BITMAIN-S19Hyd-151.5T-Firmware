// FUN_00d08b28 @ 00d08b28 size=340 calls_out=3 calls_in=2
// strings: 

void FUN_00d08b28(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x48) == '\x03') {
    if (*(int *)(param_1 + 0x30) == -0x80000000) {
      iVar12 = *(int *)(param_1 + 0xc);
      if (iVar12 != 0) {
        iVar9 = *(int *)(param_1 + 8);
        iVar5 = 0;
        do {
          iVar15 = iVar5 + 1;
          piVar7 = (int *)(iVar9 + iVar5 * 0x14);
          if (*piVar7 == 0) {
            if ((char)piVar7[4] == '\0') {
              piVar7 = piVar7 + 1;
              piVar4 = (int *)*piVar7;
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar5 + -1;
            }
            else {
              if ((char)piVar7[4] != '\x03') goto LAB_00d08b64;
              piVar4 = (int *)piVar7[3];
              if (*piVar4 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar1 = (bool)hasExclusiveAccess(piVar4);
                if (!bVar1) goto LAB_00d08be0;
                *piVar4 = 0x84;
              }
              else {
                ClearExclusiveLocal();
LAB_00d08be0:
                (**(code **)(piVar4[2] + 0x10))();
              }
              piVar7 = piVar7 + 2;
              piVar4 = (int *)*piVar7;
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar5 + -1;
            }
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f31e8(*piVar7);
            }
          }
LAB_00d08b64:
          iVar5 = iVar15;
        } while (iVar12 != iVar15);
LAB_00d08c6c:
        if (iVar9 == 0) {
          return;
        }
        iVar12 = FUN_016d3bc8();
        uVar16 = *(byte *)(iVar9 + -3) & 0x1f;
        if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
        iVar14 = *(int *)(iVar12 + 8) + 0x10;
        iVar15 = iVar5 * uVar16 + iVar5 + -4;
        iVar5 = iVar14 + iVar15;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar10 = *(uint *)(iVar5 + -4);
          if (uVar10 < 5) {
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
        if ((uint)(iVar5 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar14 + iVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar12 + 0x14);
        uVar10 = 1 << uVar16;
        *(undefined1 *)(iVar9 + -3) = 0xff;
        *(undefined2 *)(iVar9 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar12 + 0x10);
          uVar6 = *(uint *)(iVar12 + 0xc) | uVar11;
          if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar11 == 0) || (uVar6 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar12,uVar16);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar13 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar13;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar13 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar12 + 0x10) = uVar10 + uVar11;
            return;
          }
          puVar17 = (uint *)(iVar12 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar17);
            uVar6 = *puVar17;
            if (uVar11 != uVar6) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar1);
          *puVar17 = uVar10 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar6) {
            return;
          }
        } while( true );
      }
    }
    else {
      puVar13 = (undefined4 *)(param_1 + 0x18);
      FUN_00ceccf8(puVar13);
      piVar7 = (int *)*puVar13;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d05f64(*puVar13);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar9 = *(int *)(param_1 + 0x28);
        goto LAB_00d08c6c;
      }
    }
  }
  return;
}

