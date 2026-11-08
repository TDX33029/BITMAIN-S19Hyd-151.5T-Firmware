// FUN_00ebcfec @ 00ebcfec size=1228 calls_out=9 calls_in=1
// strings: 

void FUN_00ebcfec(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  int local_2f8;
  int iStack_2f4;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 == '\0') {
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar8 = 0xf;
    if ((int)uVar4 < 0) {
      uVar8 = uVar4 ^ 0x80000000;
    }
    if (uVar8 == 0x17) {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar5 = *(int *)(param_1 + 0x28);
LAB_014b47f4:
        if (iVar5 == 0) {
          return;
        }
        iVar7 = FUN_016d3bc8();
        uVar4 = *(byte *)(iVar5 + -3) & 0x1f;
        if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
           (uVar8 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar8 = (uint)(*(byte *)(iVar5 + -3) >> 5);
        iVar16 = *(int *)(iVar7 + 8) + 0x10;
        iVar14 = iVar9 * uVar4 + iVar9 + -4;
        iVar9 = iVar16 + iVar14;
        if (4 < uVar8) {
          if (uVar8 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar8 = *(uint *)(iVar9 + -4);
          if (uVar8 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar9 - iVar5) < uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar7 + 0x14);
        uVar8 = 1 << uVar4;
        *(undefined1 *)(iVar5 + -3) = 0xff;
        *(undefined2 *)(iVar5 + -2) = 0;
        do {
          uVar15 = *(uint *)(iVar7 + 0x10);
          uVar10 = *(uint *)(iVar7 + 0xc) | uVar15;
          if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar15 == 0) || (uVar10 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar7,uVar4);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar12 = (undefined4 *)FUN_016d2bc8();
            uVar11 = *puVar12;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar12 = uVar11;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar7 + 0x10) = uVar8 + uVar15;
            return;
          }
          puVar13 = (uint *)(iVar7 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar13);
            uVar10 = *puVar13;
            if (uVar15 != uVar10) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar17);
          *puVar13 = uVar8 + uVar15;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar15 == uVar10) {
            return;
          }
        } while( true );
      }
    }
    else if (uVar8 == 0xf) {
      if (uVar4 != 0) {
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
  if (cVar1 == '\x03') {
    FUN_005e4e58(param_1 + 0x98);
    FUN_005c3320(param_1 + 0x98);
    goto LAB_00ebd450;
  }
  if (cVar1 != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x123);
  puVar12 = (undefined4 *)(param_1 + 0x128);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x15c) == '\0') {
      puVar12 = (undefined4 *)(param_1 + 0x140);
LAB_00ebd320:
      iVar5 = *(int *)puVar12[2];
      if (iVar5 != 0) {
        puVar13 = (uint *)(iVar5 + 0x2f8);
        do {
          uVar4 = *puVar13;
          bVar17 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar17);
        *puVar13 = uVar4 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar4 & 10) == 8) {
          (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
        }
      }
      if (*(char *)(puVar12 + 4) == '\x01') {
        FUN_0162766c(&local_2f8,puVar12[3],*puVar12,puVar12[1]);
      }
    }
    else if (*(char *)(param_1 + 0x15c) == '\x03') goto LAB_00ebd320;
    iVar5 = *(int *)(param_1 + 0x118);
    if (iVar5 != 0) {
      puVar13 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar4 = *puVar13;
        bVar17 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar17);
      *puVar13 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
      if ((uVar4 & 2) != 0) {
        FUN_016dd1aa(&local_2f8,(undefined4 *)(iVar5 + 8),0x2e0);
        *(undefined4 *)(iVar5 + 8) = 0x1e;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (local_2f8 != 0x1e || iStack_2f4 != 0) {
          FUN_00e7b808(&local_2f8);
        }
      }
      piVar6 = *(int **)(param_1 + 0x118);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar17 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar17);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_1 + 0x118));
        }
      }
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        uVar8 = 0xf;
        puVar13 = (uint *)(param_1 + 0xb8);
        uVar4 = *puVar13;
        if ((int)uVar4 < 0) {
          uVar8 = uVar4 ^ 0x80000000;
        }
        if (uVar8 == 0x17) {
          if (*(int *)(param_1 + 0xbc) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
          }
        }
        else {
          if (uVar8 != 0xf) {
            if (uVar8 != 0xe) goto LAB_00ebd450;
            puVar13 = (uint *)(param_1 + 0xbc);
            uVar4 = *puVar13;
          }
          if (uVar4 != 0) {
            thunk_FUN_016d3fb4(puVar13[1]);
          }
          if (puVar13[3] != 0) {
            thunk_FUN_016d3fb4(puVar13[4]);
          }
          if (puVar13[6] != 0x80000000 && puVar13[6] != 0) {
            thunk_FUN_016d3fb4(puVar13[7]);
          }
        }
      }
      goto LAB_00ebd450;
    }
    if (*(char *)(param_1 + 0x2a4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x29c);
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)(param_1 + 0x278);
      }
      if (bVar17 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x27c);
        if (*(int *)(param_1 + 0x280) != 0) {
          (**(code **)(*(int *)(param_1 + 0x280) + 0xc))(*(undefined4 *)(param_1 + 0x284));
        }
      }
      FUN_005becd4(param_1 + 0x1d0);
      *(undefined1 *)(param_1 + 0x2a5) = 0;
    }
    else if (*(char *)(param_1 + 0x2a4) == '\0') {
      FUN_005becd4(param_1 + 0x140);
    }
    iVar5 = **(int **)(param_1 + 0x130);
    if (iVar5 != 0) {
      puVar13 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar4 = *puVar13;
        bVar17 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar17);
      *puVar13 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
    }
    if (*(char *)(param_1 + 0x138) == '\x01') {
      FUN_0162766c(&local_2f8,*(undefined4 *)(param_1 + 0x134),*puVar12,
                   *(undefined4 *)(param_1 + 300));
    }
    iVar5 = *(int *)(param_1 + 0x118);
    if (iVar5 != 0) {
      puVar13 = (uint *)(iVar5 + 0x2f8);
      do {
        uVar4 = *puVar13;
        bVar17 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar17);
      *puVar13 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar5 + 0x2e8) + 8))(*(undefined4 *)(iVar5 + 0x2ec));
      }
      if ((uVar4 & 2) != 0) {
        FUN_016dd1aa(&local_2f8,(undefined4 *)(iVar5 + 8),0x2e0);
        *(undefined4 *)(iVar5 + 8) = 0x1e;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (local_2f8 != 0x1e || iStack_2f4 != 0) {
          FUN_00e7b808(&local_2f8);
        }
      }
      piVar6 = *(int **)(param_1 + 0x118);
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar17 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar17);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_1 + 0x118));
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0x120) = 0;
LAB_00ebd450:
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}

