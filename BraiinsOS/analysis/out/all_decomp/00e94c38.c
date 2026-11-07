// FUN_00e94c38 @ 00e94c38 size=360 calls_out=3 calls_in=1
// strings: 

void FUN_00e94c38(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *(int *)(param_1 + 0x10);
  if (iVar13 != -0x80000000) {
    iVar4 = *(int *)(param_1 + 0x20);
    if ((iVar4 != 0) && (iVar6 = iVar4 * 4 + 4, iVar4 + iVar6 != -5)) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x1c) - iVar6);
    }
    iVar12 = *(int *)(param_1 + 0x14);
    iVar6 = *(int *)(param_1 + 0x18) + 1;
    iVar4 = iVar12;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_00f174cc(iVar4 + 0x70);
      FUN_00f17590(iVar4);
      iVar4 = iVar4 + 0xc0;
    }
    if (iVar13 != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
    if (*(int *)(param_1 + 0x30) != -0x80000000) {
      if (*(int *)(param_1 + 0x30) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
      }
      iVar13 = *(int *)(param_1 + 0x3c);
      if (((iVar13 != -0x7ffffffd) && (-1 < iVar13)) && (iVar13 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
      }
      iVar13 = *(int *)(param_1 + 0x48);
      if (((iVar13 != -0x7ffffffd) && (-1 < iVar13)) && (iVar13 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
      }
      iVar13 = *(int *)(param_1 + 0x54);
      if (((iVar13 != -0x7ffffffd) && (-1 < iVar13)) && (iVar13 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
      }
      iVar13 = *(int *)(param_1 + 0x60);
      if (((iVar13 != -0x7ffffffd) && (-1 < iVar13)) && (iVar13 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
      }
      iVar13 = *(int *)(param_1 + 0x6c);
      if (iVar13 != -0x7ffffffd) {
        if (iVar13 < 0) {
          return;
        }
        if (iVar13 != 0) {
          iVar13 = *(int *)(param_1 + 0x70);
          if (iVar13 == 0) {
            return;
          }
          iVar4 = FUN_016d3bc8();
          uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
          if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
             (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
            iVar6 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar9 = (uint)(*(byte *)(iVar13 + -3) >> 5);
          iVar11 = *(int *)(iVar4 + 8) + 0x10;
          iVar12 = iVar6 * uVar14 + iVar6 + -4;
          iVar6 = iVar11 + iVar12;
          if (4 < uVar9) {
            if (uVar9 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar9 = *(uint *)(iVar6 + -4);
            if (uVar9 < 5) {
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
          if ((uint)(iVar6 - iVar13) < uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar11 + iVar12) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar4 + 0x14);
          uVar9 = 1 << uVar14;
          *(undefined1 *)(iVar13 + -3) = 0xff;
          *(undefined2 *)(iVar13 + -2) = 0;
          do {
            uVar10 = *(uint *)(iVar4 + 0x10);
            uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
            if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar10 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar4,uVar14);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar5 = (undefined4 *)FUN_016d2bc8();
              uVar8 = *puVar5;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar5 = uVar8;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar4 + 0x10) = uVar9 + uVar10;
              return;
            }
            puVar15 = (uint *)(iVar4 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar15);
              uVar7 = *puVar15;
              if (uVar10 != uVar7) goto LAB_016d409c;
              bVar3 = (bool)hasExclusiveAccess(puVar15);
            } while (!bVar3);
            *puVar15 = uVar9 + uVar10;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar10 == uVar7) {
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

