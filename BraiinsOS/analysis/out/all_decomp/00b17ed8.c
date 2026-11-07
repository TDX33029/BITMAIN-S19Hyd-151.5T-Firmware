// FUN_00b17ed8 @ 00b17ed8 size=1156 calls_out=11 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00b17ed8(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (0xb < *(byte *)(param_1 + 500)) {
    return;
  }
  switch(*(byte *)(param_1 + 500)) {
  case 0:
    iVar7 = *(int *)(param_1 + 0x38);
    iVar6 = 0x38;
    if (iVar7 < -0x7ffffffd) {
      return;
    }
    goto LAB_00b181fc;
  default:
    goto switchD_00b17ef8_caseD_1;
  case 3:
    if ((*(char *)(param_1 + 0x215) == '\x03') && (*(int *)(param_1 + 0x208) != 0)) {
      FUN_00c81a4c(*(int *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c),1);
    }
    goto LAB_00b181ec;
  case 4:
    if (*(int *)(param_1 + 0x21c) != 0) {
      cVar1 = *(char *)(param_1 + 0x270);
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)(param_1 + 0x231);
      }
      if (bVar17 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x26c);
        bVar17 = cVar1 == '\x03';
        if (bVar17) {
          cVar1 = *(char *)(param_1 + 0x249);
        }
        if (bVar17 && cVar1 == '\x04') {
          FUN_0163bdc0(param_1 + 0x24c);
          if (*(int *)(param_1 + 0x25c) != 0) {
            (**(code **)(*(int *)(param_1 + 0x25c) + 0xc))(*(undefined4 *)(param_1 + 0x260));
          }
          *(undefined1 *)(param_1 + 0x248) = 0;
          iVar6 = *(int *)(param_1 + 0x1f0);
          goto joined_r0x00b18158;
        }
      }
    }
    break;
  case 5:
    iVar6 = *(int *)(param_1 + 0x260);
    if (iVar6 != 0) {
      FUN_00b1e480(iVar6);
      thunk_FUN_016d3fb4(iVar6);
    }
    FUN_00a07b4c(param_1 + 0x210);
    break;
  case 6:
    iVar6 = *(int *)(param_1 + 600);
    if (iVar6 != 0) {
      FUN_00b1e480(iVar6);
      thunk_FUN_016d3fb4(iVar6);
    }
    FUN_00a07b4c(param_1 + 0x208);
    bVar17 = *(int *)(param_1 + 0x260) != 7 || *(int *)(param_1 + 0x264) != 0;
    iVar6 = 0;
    if (bVar17) {
      iVar6 = *(int *)(param_1 + 0x278);
    }
    if (bVar17 && iVar6 != 0) {
      puVar8 = (uint *)(iVar6 + 0x20);
      uVar9 = *(uint *)(iVar6 + 0x20);
      do {
        while( true ) {
          uVar13 = uVar9;
          if ((uVar13 & 4) != 0) goto LAB_00b18334;
          uVar9 = *puVar8;
          if (uVar9 == uVar13) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(puVar8);
        if (bVar17) {
          *puVar8 = uVar13 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar17);
LAB_00b18334:
      if ((uVar13 & 5) == 1) {
        (**(code **)(*(int *)(iVar6 + 0x18) + 8))(*(undefined4 *)(iVar6 + 0x1c));
      }
      piVar4 = *(int **)(param_1 + 0x278);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar17 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar17);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x278));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x202) = 0;
    iVar6 = *(int *)(param_1 + 0x1f0);
    goto joined_r0x00b18158;
  case 7:
    iVar6 = *(int *)(param_1 + 0x260);
    if (iVar6 != 0) {
      FUN_00b1e480(iVar6);
      thunk_FUN_016d3fb4(iVar6);
    }
    FUN_00a07b4c(param_1 + 0x210);
    if (*(char *)(param_1 + 0x20c) != '\x02') {
      piVar4 = *(int **)(param_1 + 0x208);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar17 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar17);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x208));
      }
    }
    *(undefined1 *)(param_1 + 0x201) = 0;
    iVar6 = *(int *)(param_1 + 0x1f0);
    goto joined_r0x00b18158;
  case 8:
    iVar6 = *(int *)(param_1 + 600);
    if (iVar6 != 0) {
      FUN_00b1e480(iVar6);
      thunk_FUN_016d3fb4(iVar6);
    }
    FUN_00a07b4c(param_1 + 0x208);
    break;
  case 9:
    FUN_00b1f728(param_1 + 0x208);
    *(undefined1 *)(param_1 + 0x1fc) = 0;
    goto LAB_00b18184;
  case 10:
    if ((*(char *)(param_1 + 0x22c) == '\0') && (iVar6 = *(int *)(param_1 + 0x220), iVar6 != 0)) {
      puVar8 = (uint *)(iVar6 + 0x20);
      uVar9 = *(uint *)(iVar6 + 0x20);
      do {
        while( true ) {
          uVar13 = uVar9;
          if ((uVar13 & 4) != 0) goto LAB_00b18280;
          uVar9 = *puVar8;
          if (uVar9 == uVar13) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(puVar8);
        if (bVar17) {
          *puVar8 = uVar13 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar17);
LAB_00b18280:
      if ((uVar13 & 5) == 1) {
        (**(code **)(*(int *)(iVar6 + 0x18) + 8))(*(undefined4 *)(iVar6 + 0x1c));
      }
      piVar4 = *(int **)(param_1 + 0x220);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar17 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar17);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x220));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1fb) = 0;
    goto LAB_00b18184;
  case 0xb:
    *(undefined2 *)(param_1 + 0x1f9) = 0;
LAB_00b18184:
    *(undefined2 *)(param_1 + 0x1fd) = 0;
    if (*(int *)(param_1 + 0xb0) != 2 || *(int *)(param_1 + 0xb4) != 0) {
      FUN_00ad1570((int *)(param_1 + 0xb0));
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    *(undefined2 *)(param_1 + 0x1ff) = 0;
    goto LAB_00b181b4;
  }
  iVar6 = *(int *)(param_1 + 0x1f0);
joined_r0x00b18158:
  if (iVar6 != 0) {
    FUN_00b1f4a4(iVar6);
    thunk_FUN_016d3fb4(iVar6);
  }
  bVar17 = *(char *)(param_1 + 0x1f7) != '\0';
  if (bVar17) {
    iVar6 = *(int *)(param_1 + 0x1ec);
  }
  if (bVar17 && iVar6 != 0) {
    FUN_00b1e480(iVar6);
    thunk_FUN_016d3fb4(iVar6);
  }
  *(undefined1 *)(param_1 + 0x1f7) = 0;
LAB_00b181b4:
  piVar4 = *(int **)(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x203) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar17 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar17);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1e8));
  }
LAB_00b181ec:
  iVar7 = *(int *)(param_1 + 0x68);
  iVar6 = 0x68;
  if (-0x7ffffffe < iVar7) {
LAB_00b181fc:
    if (iVar7 != 0) {
      iVar6 = *(int *)(param_1 + iVar6 + 4);
      if (iVar6 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar9 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar13 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar16 = *(int *)(iVar7 + 8) + 0x10;
      iVar14 = iVar10 * uVar9 + iVar10 + -4;
      iVar10 = iVar16 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar13 = *(uint *)(iVar10 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar10 - iVar6) < uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 - uVar13) != '\0') {
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
      uVar13 = 1 << uVar9;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar15 = *(uint *)(iVar7 + 0x10);
        uVar11 = *(uint *)(iVar7 + 0xc) | uVar15;
        if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar12;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar13 + uVar15;
          return;
        }
        puVar8 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar8);
          uVar11 = *puVar8;
          if (uVar15 != uVar11) goto LAB_016d409c;
          bVar17 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar17);
        *puVar8 = uVar13 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar11) {
          return;
        }
      } while( true );
    }
  }
switchD_00b17ef8_caseD_1:
  return;
}

