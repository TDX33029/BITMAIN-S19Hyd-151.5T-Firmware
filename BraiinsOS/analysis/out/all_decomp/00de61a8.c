// FUN_00de61a8 @ 00de61a8 size=680 calls_out=6 calls_in=2
// strings: 

void FUN_00de61a8(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x3e);
    if (cVar1 == '\x04') {
      FUN_00de5f68(param_1 + 0x10);
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        iVar4 = param_1[0xc];
        piVar6 = (int *)(iVar4 + 0x48);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          FUN_00e46e30(iVar4 + 8);
        }
        piVar6 = (int *)param_1[0xc];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(param_1[0xc]);
        }
        iVar4 = param_1[0xd];
        piVar6 = (int *)(iVar4 + 0x44);
        do {
          iVar7 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          FUN_00e46e30(iVar4 + 8);
        }
        piVar6 = (int *)param_1[0xd];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(param_1[0xd]);
        }
        param_1 = param_1 + 0xe;
        FUN_01663cc4(*param_1);
        piVar6 = (int *)*param_1;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(param_1);
          return;
        }
        return;
      }
      FUN_00de5ee0(param_1 + 0x12);
    }
    piVar15 = param_1 + 8;
    FUN_01663cc4(*piVar15);
    piVar6 = (int *)*piVar15;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(piVar15);
    }
    iVar4 = param_1[7];
    piVar6 = (int *)(iVar4 + 0x44);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      FUN_00e46e30(iVar4 + 8);
    }
    piVar6 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[7]);
    }
    iVar4 = param_1[6];
    piVar6 = (int *)(iVar4 + 0x48);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      FUN_00e46e30(iVar4 + 8);
    }
    piVar6 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[6]);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    puVar14 = (undefined4 *)param_1[4];
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (puVar14 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de6334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar14)(puVar14);
        return;
      }
    }
    else if (puVar14 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)param_1[5];
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(puVar14);
      }
      if (puVar9[1] != 0) {
        if (puVar14 == (undefined4 *)0x0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar17 = *(byte *)((int)puVar14 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)((int)puVar14 + -3) >> 5);
        iVar16 = *(int *)(iVar4 + 8) + 0x10;
        iVar12 = iVar7 * uVar17 + iVar7 + -4;
        iVar7 = iVar16 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar5)();
          }
          uVar11 = *(uint *)(iVar7 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar5)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar5)();
          }
        }
        if ((uint)(iVar7 - (int)puVar14) < uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar5)();
        }
        if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar5)();
        }
        if (*(char *)(iVar16 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar5)();
        }
        bVar3 = *(byte *)(iVar4 + 0x14);
        uVar11 = 1 << uVar17;
        *(undefined1 *)((int)puVar14 + -3) = 0xff;
        *(undefined2 *)((int)puVar14 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar4 + 0x10);
          uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar5)();
          }
          if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar17);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar14 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar14;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar14 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar18 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar18);
            uVar8 = *puVar18;
            if (uVar13 != uVar8) goto LAB_016d409c;
            bVar2 = (bool)hasExclusiveAccess(puVar18);
          } while (!bVar2);
          *puVar18 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar8) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

