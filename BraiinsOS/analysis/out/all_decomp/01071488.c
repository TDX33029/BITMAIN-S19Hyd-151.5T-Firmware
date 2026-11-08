// FUN_01071488 @ 01071488 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_01071488(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar11 = *param_1;
  if (iVar11 != 0) {
    iVar13 = param_1[1];
    FUN_010875e4(iVar11,iVar13);
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
    piVar4 = (int *)param_1[8];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      iVar11 = param_1[8];
      iVar13 = *(int *)(iVar11 + 0x14);
      uStack_20 = unaff_r4;
      if (iVar13 != 0) {
        iVar14 = *(int *)(iVar11 + 0x10);
        iVar7 = 0;
        do {
          puVar12 = (undefined4 *)(iVar14 + iVar7 * 0x20);
          if (puVar12[4] != 0) {
            thunk_FUN_016d3fb4(puVar12[5]);
          }
          piVar4 = (int *)*puVar12;
          iVar7 = iVar7 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(*puVar12,puVar12[1]);
          }
        } while (iVar7 != iVar13);
      }
      if (*(int *)(iVar11 + 0xc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x10));
      }
      if (iVar11 != -1) {
        piVar4 = (int *)(iVar11 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          if (iVar11 == 0) {
            return;
          }
          uStack_1c = uStack_20;
          iVar13 = FUN_016d3bc8();
          uVar15 = *(byte *)(iVar11 + -3) & 0x1f;
          if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
             (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
            iVar7 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar9 = (uint)(*(byte *)(iVar11 + -3) >> 5);
          iVar5 = *(int *)(iVar13 + 8) + 0x10;
          iVar14 = iVar7 * uVar15 + iVar7 + -4;
          iVar7 = iVar5 + iVar14;
          if (4 < uVar9) {
            if (uVar9 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar9 = *(uint *)(iVar7 + -4);
            if (uVar9 < 5) {
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
          if ((uint)(iVar7 - iVar11) < uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar5 + iVar14) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar13 + 0x14);
          uVar9 = 1 << uVar15;
          *(undefined1 *)(iVar11 + -3) = 0xff;
          *(undefined2 *)(iVar11 + -2) = 0;
          do {
            uVar10 = *(uint *)(iVar13 + 0x10);
            uVar6 = *(uint *)(iVar13 + 0xc) | uVar10;
            if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar13,uVar15);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar12 = (undefined4 *)FUN_016d2bc8();
              uVar8 = *puVar12;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar12 = uVar8;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar13 + 0x10) = uVar9 + uVar10;
              return;
            }
            puVar16 = (uint *)(iVar13 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar16);
              uVar6 = *puVar16;
              if (uVar10 != uVar6) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar1);
            *puVar16 = uVar9 + uVar10;
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
  }
  return;
}

