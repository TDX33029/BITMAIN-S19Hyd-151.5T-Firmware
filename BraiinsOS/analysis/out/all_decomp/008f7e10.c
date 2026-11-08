// FUN_008f7e10 @ 008f7e10 size=1132 calls_out=3 calls_in=2
// strings: enabled | voltage | enabled | voltage | frequency | frequency

void FUN_008f7e10(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 uStack_11;
  
  uVar8 = 0x15;
  if ((int)*param_2 < 0) {
    uVar8 = *param_2 ^ 0x80000000;
  }
  switch(uVar8) {
  case 1:
    bVar6 = (byte)param_2[1];
    if (2 < bVar6) {
      bVar6 = 3;
    }
    goto LAB_008f80a4;
  default:
    FUN_008f73e8(param_1,param_2,&uStack_11,&DAT_01867148);
    return;
  case 4:
    uVar8 = param_2[2];
    if (2 < uVar8) {
      uVar8 = 3;
    }
    bVar6 = (byte)uVar8;
    if (param_2[3] != 0) {
      bVar6 = 3;
    }
    goto LAB_008f80a4;
  case 0xc:
    uVar8 = param_2[1];
    pcVar7 = (char *)param_2[2];
    if (param_2[3] == 9) {
      iVar3 = thunk_FUN_016dd50a(pcVar7,"frequency",9);
      if (iVar3 == 0) {
        uVar5 = 1;
        goto LAB_008f8128;
      }
LAB_008f8124:
      uVar5 = 3;
    }
    else {
      if (param_2[3] != 7) goto LAB_008f8124;
      iVar3 = thunk_FUN_016dd50a(pcVar7,"enabled",7);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar3 = thunk_FUN_016dd50a(pcVar7,"voltage",7);
        if (iVar3 != 0) goto LAB_008f8124;
        uVar5 = 2;
      }
    }
LAB_008f8128:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = uVar5;
    if (uVar8 == 0) {
      return;
    }
LAB_014b47f4:
    if (pcVar7 == (char *)0x0) {
      return;
    }
    iVar3 = FUN_016d3bc8();
    uVar8 = (byte)pcVar7[-3] & 0x1f;
    if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)((byte)pcVar7[-3] >> 5);
    iVar15 = *(int *)(iVar3 + 8) + 0x10;
    iVar13 = iVar9 * uVar8 + iVar9 + -4;
    iVar9 = iVar15 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar12 = *(uint *)(iVar9 + -4);
      if (uVar12 < 5) {
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
    if ((uint)(iVar9 - (int)pcVar7) < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar6 = *(byte *)(iVar3 + 0x14);
    uVar12 = 1 << uVar8;
    pcVar7[-3] = -1;
    pcVar7[-0xffffffff00000002] = '\0';
    pcVar7[-0xffffffff00000001] = '\0';
    do {
      uVar14 = *(uint *)(iVar3 + 0x10);
      uVar10 = *(uint *)(iVar3 + 0xc) | uVar14;
      if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar6 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar3,uVar8);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar4 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar4;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar4 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar3 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar16 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar10 = *puVar16;
        if (uVar14 != uVar10) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar10) {
        return;
      }
    } while( true );
  case 0xd:
    uVar8 = param_2[1];
    if (param_2[2] == 9) {
      iVar3 = thunk_FUN_016dd50a(uVar8,"frequency",9);
      if (iVar3 == 0) {
        bVar6 = 1;
        goto LAB_008f80a4;
      }
    }
    else if (param_2[2] == 7) {
      iVar3 = thunk_FUN_016dd50a(uVar8,"enabled",7);
      if (iVar3 == 0) {
        bVar6 = 0;
        goto LAB_008f80a4;
      }
      iVar3 = thunk_FUN_016dd50a(uVar8,"voltage",7);
      if (iVar3 == 0) {
        bVar6 = 2;
        goto LAB_008f80a4;
      }
    }
    break;
  case 0xe:
    uVar8 = param_2[1];
    pcVar7 = (char *)param_2[2];
    if (param_2[3] == 9) {
      cVar1 = *pcVar7;
      bVar17 = cVar1 == 'f';
      if (bVar17) {
        cVar1 = pcVar7[1];
      }
      if (bVar17 && cVar1 == 'r') {
        cVar1 = pcVar7[2];
        bVar17 = cVar1 == 'e';
        if (bVar17) {
          cVar1 = pcVar7[3];
        }
        if (bVar17 && cVar1 == 'q') {
          cVar1 = pcVar7[4];
          bVar17 = cVar1 == 'u';
          if (bVar17) {
            cVar1 = pcVar7[5];
          }
          if (bVar17 && cVar1 == 'e') {
            cVar1 = pcVar7[6];
            bVar17 = cVar1 == 'n';
            if (bVar17) {
              cVar1 = pcVar7[7];
            }
            if (bVar17 && cVar1 == 'c') {
              uVar5 = 1;
              if (pcVar7[8] != 'y') {
                uVar5 = 3;
              }
              goto LAB_008f80d8;
            }
          }
        }
      }
LAB_008f80d4:
      uVar5 = 3;
    }
    else {
      if (param_2[3] != 7) goto LAB_008f80d4;
      cVar1 = *pcVar7;
      if (cVar1 == 'e') {
        if (pcVar7[1] == 'n') {
          cVar1 = pcVar7[2];
          bVar17 = cVar1 == 'a';
          if (bVar17) {
            cVar1 = pcVar7[3];
          }
          if (bVar17 && cVar1 == 'b') {
            cVar1 = pcVar7[4];
            bVar17 = cVar1 == 'l';
            if (bVar17) {
              cVar1 = pcVar7[5];
            }
            if ((bVar17 && cVar1 == 'e') && (uVar5 = 0, pcVar7[6] == 'd')) goto LAB_008f80d8;
          }
        }
        goto LAB_008f80d4;
      }
      bVar17 = cVar1 != 'v';
      if (!bVar17) {
        cVar1 = pcVar7[1];
      }
      if (bVar17 || cVar1 != 'o') goto LAB_008f80d4;
      cVar1 = pcVar7[2];
      bVar17 = cVar1 != 'l';
      if (!bVar17) {
        cVar1 = pcVar7[3];
      }
      if (bVar17 || cVar1 != 't') goto LAB_008f80d4;
      cVar1 = pcVar7[4];
      bVar17 = cVar1 != 'a';
      if (!bVar17) {
        cVar1 = pcVar7[5];
      }
      if ((bVar17 || cVar1 != 'g') || (uVar5 = 2, pcVar7[6] != 'e')) goto LAB_008f80d4;
    }
LAB_008f80d8:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = uVar5;
    if (uVar8 == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 0xf:
    pcVar7 = (char *)param_2[1];
    if (param_2[2] == 9) {
      cVar1 = *pcVar7;
      bVar17 = cVar1 == 'f';
      if (bVar17) {
        cVar1 = pcVar7[1];
      }
      if (bVar17 && cVar1 == 'r') {
        cVar1 = pcVar7[2];
        bVar17 = cVar1 == 'e';
        if (bVar17) {
          cVar1 = pcVar7[3];
        }
        if (bVar17 && cVar1 == 'q') {
          cVar1 = pcVar7[4];
          bVar17 = cVar1 == 'u';
          if (bVar17) {
            cVar1 = pcVar7[5];
          }
          if (bVar17 && cVar1 == 'e') {
            cVar1 = pcVar7[6];
            bVar17 = cVar1 == 'n';
            if (bVar17) {
              cVar1 = pcVar7[7];
            }
            if (bVar17 && cVar1 == 'c') {
              bVar6 = 1;
              if (pcVar7[8] != 'y') {
                bVar6 = 3;
              }
              goto LAB_008f80a4;
            }
          }
        }
      }
    }
    else if (param_2[2] == 7) {
      cVar1 = *pcVar7;
      if (cVar1 == 'e') {
        if (pcVar7[1] == 'n') {
          cVar1 = pcVar7[2];
          bVar17 = cVar1 == 'a';
          if (bVar17) {
            cVar1 = pcVar7[3];
          }
          if (bVar17 && cVar1 == 'b') {
            cVar1 = pcVar7[4];
            bVar17 = cVar1 == 'l';
            if (bVar17) {
              cVar1 = pcVar7[5];
            }
            if ((bVar17 && cVar1 == 'e') && (bVar6 = 0, pcVar7[6] == 'd')) goto LAB_008f80a4;
          }
        }
      }
      else {
        bVar17 = cVar1 == 'v';
        if (bVar17) {
          cVar1 = pcVar7[1];
        }
        if (bVar17 && cVar1 == 'o') {
          cVar1 = pcVar7[2];
          bVar17 = cVar1 == 'l';
          if (bVar17) {
            cVar1 = pcVar7[3];
          }
          if (bVar17 && cVar1 == 't') {
            cVar1 = pcVar7[4];
            bVar17 = cVar1 == 'a';
            if (bVar17) {
              cVar1 = pcVar7[5];
            }
            if ((bVar17 && cVar1 == 'g') && (bVar6 = 2, pcVar7[6] == 'e')) goto LAB_008f80a4;
          }
        }
      }
    }
  }
  bVar6 = 3;
LAB_008f80a4:
  *(byte *)(param_1 + 1) = bVar6;
  *param_1 = 2;
  FUN_008f7448(param_2);
  return;
}

