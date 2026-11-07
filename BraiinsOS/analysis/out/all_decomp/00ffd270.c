// FUN_00ffd270 @ 00ffd270 size=328 calls_out=5 calls_in=2
// strings: 

void FUN_00ffd270(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = 0x16;
  if (1 < *param_1) {
    uVar6 = *param_1 - 2;
  }
  if (uVar6 < 0x16) {
    if ((1 << (uVar6 & 0xff) & 0x37ffefU) != 0) {
      return;
    }
    if (uVar6 == 4) {
      if (param_1[1] != 0) {
        uVar6 = param_1[2];
LAB_014b47f4:
        if (uVar6 == 0) {
          return;
        }
        iVar7 = FUN_016d3bc8();
        uVar14 = *(byte *)(uVar6 - 3) & 0x1f;
        if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
          iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(uVar6 - 3) >> 5);
        iVar13 = *(int *)(iVar7 + 8) + 0x10;
        iVar11 = iVar8 * uVar14 + iVar8 + -4;
        iVar8 = iVar13 + iVar11;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar10 = *(uint *)(iVar8 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if (iVar8 - uVar6 < uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar7 + 0x14);
        uVar10 = 1 << uVar14;
        *(undefined1 *)(uVar6 - 3) = 0xff;
        *(undefined2 *)(uVar6 - 2) = 0;
        do {
          uVar12 = *(uint *)(iVar7 + 0x10);
          uVar6 = *(uint *)(iVar7 + 0xc) | uVar12;
          if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar7,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar5;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar5 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
            return;
          }
          puVar15 = (uint *)(iVar7 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar6 = *puVar15;
            if (uVar12 != uVar6) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar1);
          *puVar15 = uVar10 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar6) {
            return;
          }
        } while( true );
      }
    }
    else {
      piVar4 = (int *)param_1[7];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013c3e44(param_1[7]);
      }
      FUN_00ffd590(param_1[8]);
      if (param_1[4] != 0) {
        uVar6 = param_1[5];
        goto LAB_014b47f4;
      }
    }
  }
  else {
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    piVar4 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0100161c(param_1[6]);
    }
    FUN_00ffd42c(param_1[7]);
    piVar4 = (int *)param_1[8];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013c3e44(param_1[8]);
      }
      FUN_00ffd590(param_1[9]);
      return;
    }
  }
  return;
}

