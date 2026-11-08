// FUN_00d9cfd8 @ 00d9cfd8 size=916 calls_out=6 calls_in=2
// strings: 

void FUN_00d9cfd8(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_2f8;
  int iStack_2f4;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x8b);
  if (cVar1 == '\0') {
    uVar16 = *(uint *)(param_1 + 0x20);
    uVar8 = 0xf;
    if ((int)uVar16 < 0) {
      uVar8 = uVar16 ^ 0x80000000;
    }
    if (uVar8 == 0x17) {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar5 = *(int *)(param_1 + 0x28);
LAB_014b47f4:
        if (iVar5 == 0) {
          return;
        }
        iVar7 = FUN_016d3bc8();
        uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
        if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar8 - 0x10, uVar8 == 0)) {
          iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar8 = (uint)(*(byte *)(iVar5 + -3) >> 5);
        iVar17 = *(int *)(iVar7 + 8) + 0x10;
        iVar14 = iVar10 * uVar16 + iVar10 + -4;
        iVar10 = iVar17 + iVar14;
        if (4 < uVar8) {
          if (uVar8 != 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar3)();
          }
          uVar8 = *(uint *)(iVar10 + -4);
          if (uVar8 < 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar3)();
          }
          if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar3)();
          }
        }
        if ((uint)(iVar10 - iVar5) < uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar3)();
        }
        if (*(char *)(iVar10 - uVar8) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar3)();
        }
        if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar3)();
        }
        bVar4 = *(byte *)(iVar7 + 0x14);
        uVar8 = 1 << uVar16;
        *(undefined1 *)(iVar5 + -3) = 0xff;
        *(undefined2 *)(iVar5 + -2) = 0;
        do {
          uVar15 = *(uint *)(iVar7 + 0x10);
          uVar11 = *(uint *)(iVar7 + 0xc) | uVar15;
          if ((uVar8 & uVar11) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar3)();
          }
          if ((uVar15 == 0) || (uVar11 + uVar8 == (2 << (bVar4 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar7,uVar16);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar13 = (undefined4 *)FUN_016d2bc8();
            uVar12 = *puVar13;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar13 = uVar12;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar7 + 0x10) = uVar8 + uVar15;
            return;
          }
          puVar9 = (uint *)(iVar7 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar9);
            uVar11 = *puVar9;
            if (uVar15 != uVar11) goto LAB_016d409c;
            bVar2 = (bool)hasExclusiveAccess(puVar9);
          } while (!bVar2);
          *puVar9 = uVar8 + uVar15;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar15 == uVar11) {
            return;
          }
        } while( true );
      }
    }
    else if (uVar8 == 0xf) {
      if (uVar16 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
      }
      if (*(int *)(param_1 + 0x38) != -0x80000000 && *(int *)(param_1 + 0x38) != 0) {
        iVar5 = *(int *)(param_1 + 0x3c);
        goto LAB_014b47f4;
      }
    }
    else if (uVar8 == 0xe) {
      if (*(int *)(param_1 + 0x24) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
      }
      if (*(int *)(param_1 + 0x3c) != -0x80000000 && *(int *)(param_1 + 0x3c) != 0) {
        iVar5 = *(int *)(param_1 + 0x40);
        goto LAB_014b47f4;
      }
    }
    return;
  }
  puVar13 = (undefined4 *)(param_1 + 0x90);
  if (cVar1 == '\x03') {
    FUN_005c2e9c(param_1 + 0xa8);
    iVar5 = **(int **)(param_1 + 0x98);
    if (iVar5 != 0) {
      puVar9 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar16 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar16 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar16 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
    }
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      FUN_0162766c(&local_2f8,*(undefined4 *)(param_1 + 0x9c),*puVar13,
                   *(undefined4 *)(param_1 + 0x94));
    }
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 != 0) {
      puVar9 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar16 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar16 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar16 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
      if ((uVar16 & 2) != 0) {
        FUN_016dd1aa(&local_2f8,(undefined4 *)(iVar5 + 8),0x2e0);
        *(undefined4 *)(iVar5 + 8) = 0x1e;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (local_2f8 != 0x1e || iStack_2f4 != 0) {
          FUN_00e7b808(&local_2f8);
        }
      }
      piVar6 = *(int **)(param_1 + 0x80);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_1 + 0x80));
        }
      }
    }
    goto LAB_00d9d2f4;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    puVar13 = (undefined4 *)(param_1 + 0xa8);
    iVar5 = **(int **)(param_1 + 0xb0);
joined_r0x00d9d1dc:
    if (iVar5 != 0) {
      puVar9 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar16 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar16 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar16 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
    }
    if (*(char *)(puVar13 + 4) == '\x01') {
      FUN_0162766c(&local_2f8,puVar13[3],*puVar13,puVar13[1]);
    }
  }
  else if (*(char *)(param_1 + 0xc4) == '\x03') {
    iVar5 = **(int **)(param_1 + 0x98);
    goto joined_r0x00d9d1dc;
  }
  iVar5 = *(int *)(param_1 + 0x80);
  if (iVar5 != 0) {
    puVar9 = (uint *)(iVar5 + 0x2f8);
    do {
      uVar16 = *puVar9;
      bVar2 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar2);
    *puVar9 = uVar16 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar16 & 10) == 8) {
      (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
    }
    if ((uVar16 & 2) != 0) {
      FUN_016dd1aa(&local_2f8,(undefined4 *)(iVar5 + 8),0x2e0);
      *(undefined4 *)(iVar5 + 8) = 0x1e;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      if (local_2f8 != 0x1e || iStack_2f4 != 0) {
        FUN_00e7b808(&local_2f8);
      }
    }
    piVar6 = *(int **)(param_1 + 0x80);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e457a8(*(undefined4 *)(param_1 + 0x80));
      }
    }
  }
LAB_00d9d2f4:
  *(undefined2 *)(param_1 + 0x88) = 0;
  return;
}

