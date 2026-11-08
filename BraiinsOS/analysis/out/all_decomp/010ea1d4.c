// FUN_010ea1d4 @ 010ea1d4 size=292 calls_out=2 calls_in=8
// strings: internal error: entered unreachable code: invalid Once state

void FUN_010ea1d4(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  uint *local_28;
  
  if ((*param_1 != 3) && (1 < *param_1)) {
    uVar5 = param_1[5];
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        return;
      }
      if (uVar5 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874);
      }
    }
    uVar5 = param_1[3];
    uVar11 = param_1[2];
    local_28 = param_1;
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        iVar9 = uVar11 + uVar7 * 0x1c;
        iVar12 = *(int *)(iVar9 + 0x14);
        iVar13 = *(int *)(iVar9 + 0x18);
        if (iVar13 != 0) {
          piVar10 = (int *)(iVar12 + 0x14);
          do {
            while( true ) {
              if ((piVar10[3] & 0x7fffffffU) != 0) {
                thunk_FUN_016d3fb4(piVar10[4]);
              }
              iVar3 = piVar10[-1];
              bVar15 = iVar3 != 2;
              if (bVar15) {
                iVar3 = *piVar10;
              }
              if (bVar15 && iVar3 != 0) break;
              piVar10 = piVar10 + 0xb;
              iVar13 = iVar13 + -1;
              if (iVar13 == 0) goto LAB_010ea2a0;
            }
            thunk_FUN_016d3fb4(piVar10[1]);
            piVar10 = piVar10 + 0xb;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
LAB_010ea2a0:
        if (*(int *)(iVar9 + 0x10) != 0) {
          thunk_FUN_016d3fb4(iVar12);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
    }
    if (local_28[1] != 0) {
      if (uVar11 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar5 = *(byte *)(uVar11 - 3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar12 = uVar7 - 0x10, uVar7 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(uVar11 - 3) >> 5);
      iVar3 = *(int *)(iVar9 + 8) + 0x10;
      iVar13 = iVar12 * uVar5 + iVar12 + -4;
      iVar12 = iVar3 + iVar13;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar12 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar12 - uVar11 < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar9 + 0x14);
      uVar7 = 1 << uVar5;
      *(undefined1 *)(uVar11 - 3) = 0xff;
      *(undefined2 *)(uVar11 - 2) = 0;
      do {
        uVar8 = *(uint *)(iVar9 + 0x10);
        uVar11 = *(uint *)(iVar9 + 0xc) | uVar8;
        if ((uVar7 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar8 == 0) || (uVar11 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar9,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar4;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar4 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar7 + uVar8;
          return;
        }
        puVar14 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar11 = *puVar14;
          if (uVar8 != uVar11) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar7 + uVar8;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar8 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

