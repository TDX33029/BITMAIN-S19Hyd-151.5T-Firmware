// FUN_01440f70 @ 01440f70 size=176 calls_out=1 calls_in=5
// strings: 

void FUN_01440f70(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 != 0) {
    puVar3 = (uint *)(param_1 + 0x18);
    do {
      uVar7 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar7 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar7 & 10) == 8) {
      (**(code **)(*(int *)(param_1 + 8) + 8))(*(undefined4 *)(param_1 + 0xc));
    }
    if ((uVar7 & 2) != 0) {
      piVar8 = *(int **)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 != (int *)0x0) {
        iVar10 = *piVar8;
        if (iVar10 != 0) {
          puVar15 = (undefined4 *)piVar8[1];
          pcVar4 = (code *)*puVar15;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(iVar10);
          }
          if (puVar15[1] != 0) {
            thunk_FUN_016d3fb4(iVar10);
          }
        }
        if (piVar8 == (int *)0x0) {
          return;
        }
        iVar10 = FUN_016d3bc8();
        uVar7 = *(byte *)((int)piVar8 + -3) & 0x1f;
        if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar5 = uVar11 - 0x10, uVar11 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)((int)piVar8 + -3) >> 5);
        iVar14 = *(int *)(iVar10 + 8) + 0x10;
        iVar12 = iVar5 * uVar7 + iVar5 + -4;
        iVar5 = iVar14 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar11 = *(uint *)(iVar5 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar5 - (int)piVar8) < uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar2 = *(byte *)(iVar10 + 0x14);
        uVar11 = 1 << uVar7;
        *(undefined1 *)((int)piVar8 + -3) = 0xff;
        *(undefined2 *)((int)piVar8 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar10 + 0x10);
          uVar6 = *(uint *)(iVar10 + 0xc) | uVar13;
          if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar13 == 0) || (uVar6 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar10,uVar7);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar15 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar15;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar15 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar3 = (uint *)(iVar10 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar3);
            uVar6 = *puVar3;
            if (uVar13 != uVar6) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar1);
          *puVar3 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

