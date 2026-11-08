// FUN_0143ee24 @ 0143ee24 size=236 calls_out=2 calls_in=3
// strings: 

void FUN_0143ee24(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *(uint *)(param_1 + 0x80);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x78) + 0xc))(*(undefined4 *)(param_1 + 0x7c));
  }
  if ((uVar8 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 4 || *(int *)(param_1 + 0xc) != 0) {
    if (iVar3 == 3 && *(int *)(param_1 + 0xc) == 0) {
      piVar13 = *(int **)(param_1 + 0x10);
      iVar3 = *piVar13;
      if (iVar3 != 0) {
        puVar9 = (undefined4 *)piVar13[1];
        pcVar4 = (code *)*puVar9;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(iVar3);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
      thunk_FUN_016d3fb4(piVar13);
    }
    else {
      FUN_0141c8d4((int *)(param_1 + 8));
    }
  }
  if (param_1 != -1) {
    piVar13 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar8 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar3 + 8) + 0x10;
      iVar11 = iVar5 * uVar8 + iVar5 + -4;
      iVar5 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar10 = *(uint *)(iVar5 + -4);
        if (uVar10 < 5) {
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
      if ((uint)(iVar5 - param_1) < uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar2 = *(byte *)(iVar3 + 0x14);
      uVar10 = 1 << uVar8;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar3 + 0x10);
        uVar6 = *(uint *)(iVar3 + 0xc) | uVar12;
        if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar9;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar9 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar3 + 0x10);
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
  return;
}

