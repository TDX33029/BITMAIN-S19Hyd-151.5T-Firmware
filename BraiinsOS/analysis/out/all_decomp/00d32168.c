// FUN_00d32168 @ 00d32168 size=1524 calls_out=14 calls_in=2
// strings: 

void FUN_00d32168(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uStack_28;
  int iStack_24;
  
  if (0xb < *(byte *)(param_1 + 500)) {
    return;
  }
  piVar12 = (int *)(param_1 + 0xb0);
  switch(*(byte *)(param_1 + 500)) {
  case 0:
    iVar7 = *(int *)(param_1 + 0x38);
    iVar6 = 0x38;
    if (iVar7 < -0x7ffffffd) {
      return;
    }
    goto LAB_00d32744;
  default:
    goto switchD_00d32188_caseD_1;
  case 3:
    if ((*(char *)(param_1 + 0x215) == '\x03') && (*(int *)(param_1 + 0x208) != 0)) {
      FUN_00c81a4c(*(int *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),1);
    }
    goto LAB_00d32734;
  case 4:
    if (*(int *)(param_1 + 0x21c) != 0) {
      cVar1 = *(char *)(param_1 + 0x270);
      bVar21 = cVar1 == '\x03';
      if (bVar21) {
        cVar1 = *(char *)(param_1 + 0x231);
      }
      if (bVar21 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x26c);
        bVar21 = cVar1 == '\x03';
        if (bVar21) {
          cVar1 = *(char *)(param_1 + 0x249);
        }
        if (bVar21 && cVar1 == '\x04') {
          FUN_0163bdc0(param_1 + 0x24c);
          if (*(int *)(param_1 + 0x25c) != 0) {
            (**(code **)(*(int *)(param_1 + 0x25c) + 0xc))(*(undefined4 *)(param_1 + 0x260));
          }
          *(undefined1 *)(param_1 + 0x248) = 0;
        }
      }
    }
    break;
  case 5:
    piVar16 = *(int **)(param_1 + 0x260);
    piVar12 = (int *)(param_1 + 0x210);
    if (piVar16 != (int *)0x0) {
      if (*piVar16 == 0 && piVar16[1] == 0) {
        FUN_00ce90bc(piVar16 + 2);
      }
      thunk_FUN_016d3fb4(piVar16);
    }
    FUN_00a07b4c(piVar12);
    break;
  case 6:
    piVar16 = *(int **)(param_1 + 600);
    if (piVar16 != (int *)0x0) {
      if (*piVar16 == 0 && piVar16[1] == 0) {
        FUN_00ce90bc(piVar16 + 2);
      }
      thunk_FUN_016d3fb4(piVar16);
    }
    FUN_00a07b4c(param_1 + 0x208);
    bVar21 = *(int *)(param_1 + 0x260) == 7;
    bVar4 = *(int *)(param_1 + 0x264) == 0;
    bVar20 = bVar21 && bVar4;
    if (!bVar21 || !bVar4) {
      piVar12 = *(int **)(param_1 + 0x278);
      bVar20 = piVar12 == (int *)0x0;
    }
    if (!bVar20) {
      puVar19 = (uint *)(piVar12 + 8);
      uVar8 = piVar12[8];
      do {
        while( true ) {
          uVar13 = uVar8;
          if ((uVar13 & 4) != 0) goto LAB_00d32560;
          uVar8 = *puVar19;
          if (uVar8 == uVar13) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar21 = (bool)hasExclusiveAccess(puVar19);
        if (bVar21) {
          *puVar19 = uVar13 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar21);
LAB_00d32560:
      if ((uVar13 & 5) == 1) {
        (**(code **)(piVar12[6] + 8))(piVar12[7]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar12;
        bVar21 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar21);
      *piVar12 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x278));
      }
    }
    *(undefined1 *)(param_1 + 0x202) = 0;
    break;
  case 7:
    piVar16 = *(int **)(param_1 + 0x260);
    piVar12 = (int *)(param_1 + 0x210);
    if (piVar16 != (int *)0x0) {
      if (*piVar16 == 0 && piVar16[1] == 0) {
        FUN_00ce90bc(piVar16 + 2);
      }
      thunk_FUN_016d3fb4(piVar16);
    }
    FUN_00a07b4c(piVar12);
    if (*(char *)(param_1 + 0x20c) != '\x02') {
      piVar16 = *(int **)(param_1 + 0x208);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar21 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar21);
      *piVar16 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x208));
      }
    }
    *(undefined1 *)(param_1 + 0x201) = 0;
    break;
  case 8:
    piVar16 = *(int **)(param_1 + 600);
    piVar12 = (int *)(param_1 + 0x208);
    if (piVar16 != (int *)0x0) {
      if (*piVar16 == 0 && piVar16[1] == 0) {
        FUN_00ce90bc(piVar16 + 2);
      }
      thunk_FUN_016d3fb4(piVar16);
    }
    FUN_00a07b4c(piVar12);
    break;
  case 9:
    switch(*(undefined1 *)(param_1 + 0x21c)) {
    case 3:
      if (*(char *)(param_1 + 0x296) == '\x03') {
        FUN_00accc50(param_1 + 0x220);
LAB_00d326a8:
        *(undefined1 *)(param_1 + 0x294) = 0;
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0x295) == '\x03') {
        FUN_00ad3a7c(param_1 + 0x220);
        goto LAB_00d326a8;
      }
      if ((*(char *)(param_1 + 0x295) == '\0') && (*(int *)(param_1 + 0x288) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28c));
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x290) != 2 || *(int *)(param_1 + 0x294) != 0) {
        FUN_00a07b4c();
      }
      if (*(int *)(param_1 + 0x220) != 0) {
        cVar1 = *(char *)(param_1 + 0x270);
        bVar21 = cVar1 == '\x03';
        if (bVar21) {
          cVar1 = *(char *)(param_1 + 0x231);
        }
        if (bVar21 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0x26c);
          bVar21 = cVar1 == '\x03';
          if (bVar21) {
            cVar1 = *(char *)(param_1 + 0x249);
          }
          if (bVar21 && cVar1 == '\x04') {
            FUN_0163bdc0(param_1 + 0x24c);
            if (*(int *)(param_1 + 0x25c) != 0) {
              (**(code **)(*(int *)(param_1 + 0x25c) + 0xc))(*(undefined4 *)(param_1 + 0x260));
            }
            *(undefined1 *)(param_1 + 0x248) = 0;
          }
        }
      }
      piVar17 = *(int **)(param_1 + 0x27c);
      piVar16 = piVar17 + 0x29;
      do {
        iVar6 = *piVar16;
        bVar21 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar21);
      *piVar16 = iVar6 + -1;
      if (iVar6 == 1) {
        FUN_0163b708(piVar17 + 0x22);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar17;
        bVar21 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar21);
      *piVar17 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(*(undefined4 *)(param_1 + 0x27c));
      }
      break;
    case 6:
      if (*(char *)(param_1 + 0x284) == '\x03') {
        FUN_00a07b4c(param_1 + 0x230);
      }
      break;
    case 7:
      if (*(char *)(param_1 + 0x295) == '\x03') {
        FUN_00accc50(param_1 + 0x220);
        goto LAB_00d326a8;
      }
      break;
    default:
      goto switchD_00d32324_default;
    }
    if (*(int *)(param_1 + 0x20c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x210));
    }
switchD_00d32324_default:
    *(undefined1 *)(param_1 + 0x1fc) = 0;
    goto LAB_00d326cc;
  case 10:
    if ((*(char *)(param_1 + 0x22c) == '\0') &&
       (piVar16 = *(int **)(param_1 + 0x220), piVar16 != (int *)0x0)) {
      puVar19 = (uint *)(piVar16 + 8);
      uVar8 = piVar16[8];
      do {
        while( true ) {
          uVar13 = uVar8;
          if ((uVar13 & 4) != 0) goto LAB_00d324b8;
          uVar8 = *puVar19;
          if (uVar8 == uVar13) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar21 = (bool)hasExclusiveAccess(puVar19);
        if (bVar21) {
          *puVar19 = uVar13 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar21);
LAB_00d324b8:
      if ((uVar13 & 5) == 1) {
        (**(code **)(piVar16[6] + 8))(piVar16[7]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar21 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar21);
      *piVar16 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x220));
      }
    }
    *(undefined1 *)(param_1 + 0x1fb) = 0;
    goto LAB_00d326cc;
  case 0xb:
    *(undefined2 *)(param_1 + 0x1f9) = 0;
LAB_00d326cc:
    *(undefined2 *)(param_1 + 0x1fd) = 0;
    if (*piVar12 != 2 || *(int *)(param_1 + 0xb4) != 0) {
      FUN_00ad1570(piVar12);
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined2 *)(param_1 + 0x1ff) = 0;
    goto LAB_00d326fc;
  }
  FUN_00ceb900(*(undefined4 *)(param_1 + 0x1f0));
  bVar21 = *(char *)(param_1 + 0x1f7) != '\0';
  if (bVar21) {
    piVar12 = *(int **)(param_1 + 0x1ec);
  }
  if (bVar21 && piVar12 != (int *)0x0) {
    if (*piVar12 == 0 && piVar12[1] == 0) {
      FUN_00ce90bc(piVar12 + 2);
    }
    thunk_FUN_016d3fb4(piVar12);
  }
  *(undefined1 *)(param_1 + 0x1f7) = 0;
LAB_00d326fc:
  piVar12 = *(int **)(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x203) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar12;
    bVar21 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar21);
  *piVar12 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1e8));
  }
LAB_00d32734:
  iVar7 = *(int *)(param_1 + 0x68);
  iVar6 = 0x68;
  if (-0x7ffffffe < iVar7) {
LAB_00d32744:
    if (iVar7 != 0) {
      iVar6 = *(int *)(param_1 + iVar6 + 4);
      if (iVar6 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar8 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar13 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar18 = *(int *)(iVar7 + 8) + 0x10;
      iVar14 = iVar9 * uVar8 + iVar9 + -4;
      iVar9 = iVar18 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar13 = *(uint *)(iVar9 + -4);
        if (uVar13 < 5) {
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
      if ((uint)(iVar9 - iVar6) < uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar18 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar7 + 0x14);
      uVar13 = 1 << uVar8;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar15 = *(uint *)(iVar7 + 0x10);
        uVar10 = *(uint *)(iVar7 + 0xc) | uVar15;
        if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar15 == 0) || (uVar10 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar8);
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
          *(uint *)(iVar7 + 0x10) = uVar13 + uVar15;
          return;
        }
        puVar19 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar10 = *puVar19;
          if (uVar15 != uVar10) goto LAB_016d409c;
          bVar21 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar21);
        *puVar19 = uVar13 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar10) {
          return;
        }
      } while( true );
    }
  }
switchD_00d32188_caseD_1:
  return;
}

