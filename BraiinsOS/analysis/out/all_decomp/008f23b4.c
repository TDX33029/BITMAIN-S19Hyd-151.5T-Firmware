// FUN_008f23b4 @ 008f23b4 size=300 calls_out=2 calls_in=40
// strings: 

void FUN_008f23b4(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar12 = *(char **)(param_1 + 0xc);
  do {
    if (pcVar12 == (char *)0x0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
      }
      if (param_1 != -1) {
        piVar7 = (int *)(param_1 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          if (param_1 == 0) {
            return;
          }
          iVar8 = FUN_016d3bc8();
          uVar18 = *(byte *)(param_1 + -3) & 0x1f;
          if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
             (uVar14 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar9 = uVar14 - 0x10, uVar14 == 0)) {
            iVar9 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar14 = (uint)(*(byte *)(param_1 + -3) >> 5);
          iVar17 = *(int *)(iVar8 + 8) + 0x10;
          iVar15 = iVar9 * uVar18 + iVar9 + -4;
          iVar9 = iVar17 + iVar15;
          if (4 < uVar14) {
            if (uVar14 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar3)();
            }
            uVar14 = *(uint *)(iVar9 + -4);
            if (uVar14 < 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar3)();
            }
            if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar3)();
            }
          }
          if ((uint)(iVar9 - param_1) < uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar3)();
          }
          if (*(char *)(iVar9 - uVar14) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar3)();
          }
          if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar3)();
          }
          bVar4 = *(byte *)(iVar8 + 0x14);
          uVar14 = 1 << uVar18;
          *(undefined1 *)(param_1 + -3) = 0xff;
          *(undefined2 *)(param_1 + -2) = 0;
          do {
            uVar16 = *(uint *)(iVar8 + 0x10);
            uVar10 = *(uint *)(iVar8 + 0xc) | uVar16;
            if ((uVar14 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar3)();
            }
            if ((uVar16 == 0) || (uVar10 + uVar14 == (2 << (bVar4 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar8,uVar18);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar5 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar5;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar5 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar8 + 0x10) = uVar14 + uVar16;
              return;
            }
            puVar19 = (uint *)(iVar8 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar19);
              uVar10 = *puVar19;
              if (uVar16 != uVar10) goto LAB_016d409c;
              bVar2 = (bool)hasExclusiveAccess(puVar19);
            } while (!bVar2);
            *puVar19 = uVar14 + uVar16;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar16 == uVar10) {
              return;
            }
          } while( true );
        }
      }
      return;
    }
    pcVar13 = *(char **)(pcVar12 + 0xc);
    cVar1 = *pcVar12;
    if (cVar1 != '\x06') {
      if (cVar1 == '\x02') {
        pcVar6 = pcVar12 + 8;
        piVar7 = *(int **)pcVar6;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
      }
      else if (cVar1 == '\x03') {
        pcVar6 = pcVar12 + 4;
        piVar7 = *(int **)pcVar6;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
      }
      else {
        if (cVar1 != '\x04') goto LAB_008f23c4;
        pcVar6 = pcVar12 + 4;
        piVar7 = *(int **)pcVar6;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar8 + -1;
      }
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba06c(*(undefined4 *)pcVar6);
      }
    }
LAB_008f23c4:
    thunk_FUN_016d3fb4(pcVar12);
    pcVar12 = pcVar13;
  } while( true );
}

