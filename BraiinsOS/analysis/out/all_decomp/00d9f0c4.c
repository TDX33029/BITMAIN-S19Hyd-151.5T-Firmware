// FUN_00d9f0c4 @ 00d9f0c4 size=4052 calls_out=47 calls_in=4
// strings: 

void FUN_00d9f0c4(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r6;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    puVar13 = (undefined4 *)param_1[4];
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (puVar13 == (undefined4 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00d9f168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar13)(puVar13);
      return;
    }
    if (puVar13 == (undefined4 *)0x0) {
      return;
    }
    puVar8 = (undefined4 *)param_1[5];
    pcVar6 = (code *)*puVar8;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(puVar13);
    }
    if (puVar8[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  }
  if ((char)param_1[0x5aa] != '\x03') {
    if ((char)param_1[0x5aa] != '\0') {
      return;
    }
    param_1 = param_1 + 2;
LAB_005c3f20:
    FUN_005c384c(param_1 + 0x6c);
    piVar3 = (int *)param_1[0x124];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacbe0(param_1[0x124]);
    }
    piVar3 = (int *)param_1[0x125];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaafc(param_1[0x125]);
    }
    piVar3 = (int *)param_1[0x126];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e46504(param_1[0x126]);
    }
    FUN_00e46678(param_1[0x127]);
    piVar3 = (int *)param_1[0x127];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac878(param_1[0x127]);
    }
    piVar3 = (int *)param_1[0x128];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(param_1[0x128]);
    }
    piVar3 = (int *)param_1[0x129];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(param_1[0x129]);
    }
    FUN_00e469ec(param_1[0x12a]);
    piVar3 = (int *)param_1[0x12a];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[0x12a]);
    }
    iVar5 = param_1[0x83];
    if (iVar5 != 0) {
      piVar3 = (int *)param_1[0x82];
      do {
        iVar5 = iVar5 + -1;
        iVar4 = 0;
        if (*piVar3 != 0) {
          iVar4 = piVar3[1];
        }
        if (*piVar3 != 0 && iVar4 != 0) {
          (**(code **)(iVar4 + 0xc))(piVar3[2]);
        }
        piVar3 = piVar3 + 3;
      } while (iVar5 != 0);
    }
    if (param_1[0x81] != 0) {
      thunk_FUN_016d3fb4(param_1[0x82]);
    }
    if (param_1[0x89] == -0x80000000 || param_1[0x89] == 0) {
      iVar5 = param_1[0x86];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x8a]);
      iVar5 = param_1[0x86];
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(param_1[0x87]);
    }
    iVar5 = param_1[299];
    piVar3 = (int *)(iVar5 + 0x48);
    do {
      iVar4 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e46e30(iVar5 + 8);
    }
    piVar3 = (int *)param_1[299];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[299]);
    }
    iVar5 = param_1[300];
    piVar3 = (int *)(iVar5 + 0x44);
    do {
      iVar4 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e46e30(iVar5 + 8);
    }
    piVar3 = (int *)param_1[300];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[300]);
    }
    FUN_005bf2b0(param_1 + 0x8c);
    FUN_005c73cc(param_1 + 0x1c);
    FUN_00aa313c(param_1[0x12d]);
    piVar3 = (int *)param_1[0x12d];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad1e0(param_1[0x12d]);
    }
    iVar5 = param_1[0x12e];
    piVar3 = (int *)(iVar5 + 0x44);
    do {
      iVar4 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e473d0(iVar5 + 8);
    }
    piVar3 = (int *)param_1[0x12e];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacf14(param_1[0x12e]);
    }
    iVar5 = param_1[0x12f];
    piVar3 = (int *)(iVar5 + 0x48);
    do {
      iVar4 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e473d0(iVar5 + 8);
    }
    piVar3 = (int *)param_1[0x12f];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar18 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar18);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacf14(param_1[0x12f]);
    }
    iVar5 = param_1[1];
    if (*param_1 == 0 && iVar5 == 0) {
      return;
    }
    iVar4 = param_1[5];
    if (iVar4 != 0) {
      iVar5 = iVar4 * 0x11;
    }
    if (iVar4 != 0 && iVar5 != -0x15) {
      thunk_FUN_016d3fb4(param_1[4] + iVar4 * -0x10 + -0x10);
      iVar5 = extraout_r1;
    }
    iVar4 = param_1[0xd];
    if (iVar4 != 0) {
      iVar5 = iVar4 * 0x11;
    }
    if (iVar4 != 0 && iVar5 != -0x15) {
      thunk_FUN_016d3fb4(param_1[0xc] + iVar4 * -0x10 + -0x10);
      iVar5 = param_1[0x15];
    }
    else {
      iVar5 = param_1[0x15];
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(param_1[0x16]);
    }
    if (param_1[0x18] == 0) {
      return;
    }
    puVar13 = (undefined4 *)param_1[0x19];
LAB_014b47f4:
    if (puVar13 == (undefined4 *)0x0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar16 = *(byte *)((int)puVar13 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
      iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)((int)puVar13 + -3) >> 5);
    iVar15 = *(int *)(iVar5 + 8) + 0x10;
    iVar11 = iVar4 * uVar16 + iVar4 + -4;
    iVar4 = iVar15 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar6)();
      }
      uVar10 = *(uint *)(iVar4 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar6)();
      }
      if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar6)();
      }
    }
    if ((uint)(iVar4 - (int)puVar13) < uVar10) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar6)();
    }
    if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar6)();
    }
    if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar6)();
    }
    bVar2 = *(byte *)(iVar5 + 0x14);
    uVar10 = 1 << uVar16;
    *(undefined1 *)((int)puVar13 + -3) = 0xff;
    *(undefined2 *)((int)puVar13 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar5 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
      if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar6)();
      }
      if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar16);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar13;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar13 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar17 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar7 = *puVar17;
        if (uVar12 != uVar7) goto LAB_016d409c;
        bVar18 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar18);
      *puVar17 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar7) {
        return;
      }
    } while( true );
  }
  switch((char)param_1[0x2f7]) {
  case '\0':
    param_1 = param_1 + 0x132;
    goto LAB_005c3f20;
  default:
    goto switchD_00d9f180_caseD_1;
  case '\x03':
    FUN_00ef6fa0(param_1 + 0x2fc);
    if (param_1[0x2fc] == 0) {
      FUN_00e469ec(param_1[0x2fd]);
      piVar3 = (int *)param_1[0x2fd];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa79bc(param_1[0x2fd]);
      }
    }
    piVar3 = (int *)param_1[0x2fe];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa8be8(param_1[0x2fe]);
      }
    }
    FUN_005c728c(param_1 + 0x2ff);
    if ((char)param_1[0x313] == '\x03') {
      cVar1 = (char)param_1[0x312];
      bVar18 = cVar1 == '\x03';
      if (bVar18) {
        cVar1 = *(char *)((int)param_1 + 0xc25);
      }
      if (bVar18 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x30a);
        if (param_1[0x30e] != 0) {
          (**(code **)(param_1[0x30e] + 0xc))(param_1[0x30f]);
        }
        *(undefined1 *)(param_1 + 0x309) = 0;
      }
    }
    break;
  case '\x04':
    if (param_1[0x340] != 0) {
      FUN_00e43e74(param_1[0x340],param_1[0x341],1);
    }
    goto LAB_00d9fa38;
  case '\x05':
    switch((char)param_1[0x481]) {
    case '\0':
      FUN_005c70d0(param_1 + 0x2fa);
      break;
    case '\x03':
      if (param_1[0x4cc] != 0) {
        FUN_00e44660(param_1[0x4cc],param_1[0x4cd],1);
      }
      FUN_005c8810(param_1 + 0x485);
      *(undefined1 *)((int)param_1 + 0x1207) = 0;
      goto LAB_00d9f924;
    case '\x04':
      if ((char)param_1[0x53b] == '\x03') {
        puVar13 = (undefined4 *)param_1[0x4a7];
        iVar5 = param_1[0x4a6];
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(iVar5);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(iVar5);
        }
        iVar5 = param_1[0x53a];
        *(undefined1 *)((int)param_1 + 0x14ed) = 0;
        if (iVar5 != 0) {
          puVar17 = (uint *)(iVar5 + 0x18);
          do {
            uVar16 = *puVar17;
            bVar18 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar18);
          *puVar17 = uVar16 | 4;
          DataMemoryBarrier(0xb);
          if ((uVar16 & 10) == 8) {
            (**(code **)(*(int *)(iVar5 + 8) + 8))(*(undefined4 *)(iVar5 + 0xc));
          }
          if ((uVar16 & 2) != 0) {
            *(undefined1 *)(iVar5 + 0x1c) = 2;
          }
          piVar3 = (int *)param_1[0x53a];
          if (piVar3 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar3;
              bVar18 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar18);
            *piVar3 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f3128(param_1[0x53a]);
            }
          }
        }
        *(undefined1 *)((int)param_1 + 0x14ee) = 0;
        FUN_005c3004(param_1 + 0x490);
        iVar5 = param_1[0x539];
        *(undefined1 *)((int)param_1 + 0x14ef) = 0;
        piVar3 = (int *)(iVar5 + 0x44);
        do {
          iVar4 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e46e30(iVar5 + 8);
        }
        piVar3 = (int *)param_1[0x539];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(param_1[0x539]);
        }
        *(undefined1 *)(param_1 + 0x53c) = 0;
        FUN_005c5b7c(param_1 + 0x48a);
        *(undefined1 *)((int)param_1 + 0x14f1) = 0;
        FUN_005c8810(param_1 + 0x4f2);
        *(undefined1 *)((int)param_1 + 0x14f2) = 0;
      }
      else if ((char)param_1[0x53b] == '\0') {
        FUN_005c8810(param_1 + 0x4a8);
        FUN_005c5b7c(param_1 + 0x484);
        iVar5 = param_1[0x4f0];
        piVar3 = (int *)(iVar5 + 0x44);
        do {
          iVar4 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e46e30(iVar5 + 8);
        }
        piVar3 = (int *)param_1[0x4f0];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar18 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar18);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(param_1[0x4f0]);
        }
      }
      FUN_00e44900(param_1[0x480]);
LAB_00d9f924:
      param_1[0x482] = 0;
      FUN_005c5ddc(param_1 + 0x386);
      break;
    case '\x05':
      if ((char)param_1[0x5a8] == '\x03') {
        piVar3 = (int *)param_1[0x5a7];
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar18 = (bool)hasExclusiveAccess(piVar3);
          if (!bVar18) goto LAB_00d9f968;
          *piVar3 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00d9f968:
          (**(code **)(piVar3[2] + 0x10))();
        }
        FUN_0075d388(param_1[0x5a5]);
        piVar3 = (int *)param_1[0x5a5];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar18 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar18);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(param_1[0x5a5]);
          }
        }
        FUN_005c4b54(param_1 + 0x514);
      }
      else if ((char)param_1[0x5a8] == '\0') {
        FUN_005c4b54(param_1 + 0x484);
        FUN_0075d388(param_1[0x5a4]);
        piVar3 = (int *)param_1[0x5a4];
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar18 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar18);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(param_1[0x5a4]);
          }
        }
      }
      *(undefined2 *)((int)param_1 + 0x1205) = 0;
      break;
    case '\x06':
      if ((char)param_1[0x4be] == '\x03') {
        if ((char)param_1[0x4bb] == '\x03') {
          FUN_005c3298(param_1 + 0x4b2);
          if (param_1[0x4af] != 0) {
            thunk_FUN_016d3fb4(param_1[0x4b0]);
          }
          if (1 < *(byte *)(param_1 + 0x4a2)) {
            FUN_005c5efc();
          }
          *(undefined1 *)((int)param_1 + 0x12ed) = 0;
        }
        else if ((char)param_1[0x4bb] == '\0') {
          FUN_005c5efc(param_1 + 0x496);
        }
        if ((char)param_1[0x48a] == '\x04') {
          FUN_005c0eec(param_1 + 0x48a);
        }
      }
      if (param_1[0x484] != 0) {
        thunk_FUN_016d3fb4(param_1[0x485]);
      }
    }
    FUN_00e44114(param_1[0x2f6]);
LAB_00d9fa38:
    if (*(char *)((int)param_1 + 0xbde) != '\0') {
      FUN_005c70d0(param_1 + 0x2fa);
    }
    *(undefined1 *)((int)param_1 + 0xbde) = 0;
    break;
  case '\x06':
    if ((char)param_1[0x31d] == '\x03') {
      if (param_1[0x312] != 0) {
        FUN_00e44660(param_1[0x312],param_1[0x313],1);
      }
      if (param_1[0x315] != 0) {
        thunk_FUN_016d3fb4(param_1[0x316]);
      }
      *(undefined1 *)(param_1 + 0x31c) = 0;
      if (param_1[0x30a] != 0) {
        thunk_FUN_016d3fb4(param_1[0x30b]);
      }
      FUN_005c5ee8(param_1 + 0x2fa);
      *(undefined1 *)((int)param_1 + 0xc73) = 0;
      *(undefined2 *)((int)param_1 + 0xc71) = 0;
    }
    else if (((char)param_1[0x31d] == '\0') && (param_1[0x319] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x31a]);
    }
    *(undefined1 *)((int)param_1 + 0xbe3) = 0;
    break;
  case '\a':
    if (*(char *)((int)param_1 + 0xc2e) == '\x03') {
      FUN_005c28e8(param_1 + 0x2fa);
      piVar3 = (int *)param_1[0x305];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x305]);
      }
      piVar3 = (int *)param_1[0x304];
      *(undefined1 *)(param_1 + 0x30b) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e45d08(param_1[0x304]);
      }
      *(undefined1 *)((int)param_1 + 0xc2d) = 0;
    }
    else if (*(char *)((int)param_1 + 0xc2e) == '\0') {
      piVar3 = (int *)param_1[0x306];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e45d08(param_1[0x306]);
      }
      piVar3 = (int *)param_1[0x307];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar18 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar18);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(param_1[0x307]);
      }
    }
    *(undefined1 *)((int)param_1 + 0xbe2) = 0;
    break;
  case '\b':
    if (param_1[0x2fc] == 1) {
      bVar18 = param_1[0x2fe] == 0 && param_1[0x2ff] == 0;
      if (param_1[0x2fe] != 0 || param_1[0x2ff] != 0) {
        unaff_r6 = param_1[0x300];
        bVar18 = unaff_r6 == 0;
      }
      if (!bVar18) {
        puVar13 = (undefined4 *)param_1[0x301];
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(unaff_r6);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(unaff_r6);
        }
      }
    }
    else if (param_1[0x2fc] == 0) {
      piVar3 = (int *)param_1[0x2fe];
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar18 = (bool)hasExclusiveAccess(piVar3);
        if (bVar18) {
          *piVar3 = 0x84;
          goto LAB_00d9f52c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
LAB_00d9f52c:
    if (param_1[0x302] == 1) {
      bVar18 = param_1[0x304] == 0 && param_1[0x305] == 0;
      if (param_1[0x304] != 0 || param_1[0x305] != 0) {
        unaff_r6 = param_1[0x306];
        bVar18 = unaff_r6 == 0;
      }
      if (!bVar18) {
        puVar13 = (undefined4 *)param_1[0x307];
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(unaff_r6);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(unaff_r6);
        }
      }
    }
    else if (param_1[0x302] == 0) {
      piVar3 = (int *)param_1[0x304];
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar18 = (bool)hasExclusiveAccess(piVar3);
        if (bVar18) {
          *piVar3 = 0x84;
          goto LAB_00d9f714;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
LAB_00d9f714:
    if (param_1[0x308] == 1) {
      if (param_1[0x30a] != 0 || param_1[0x30b] != 0) {
        bVar18 = param_1[0x30c] == 0 && param_1[0x30d] == 0;
        if (param_1[0x30c] != 0 || param_1[0x30d] != 0) {
          unaff_r6 = param_1[0x30e];
          bVar18 = unaff_r6 == 0;
        }
        if (!bVar18) {
          puVar13 = (undefined4 *)param_1[0x30f];
          pcVar6 = (code *)*puVar13;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(unaff_r6);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(unaff_r6);
          }
        }
      }
    }
    else if ((param_1[0x308] == 0) && (piVar3 = (int *)param_1[0x30a], piVar3 != (int *)0x0)) {
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar18 = (bool)hasExclusiveAccess(piVar3);
        if (bVar18) {
          *piVar3 = 0x84;
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
  }
  bVar18 = *(char *)((int)param_1 + 0xbdf) != '\0';
  piVar3 = (int *)0x0;
  if (bVar18) {
    piVar3 = (int *)param_1[0x2f5];
  }
  if (bVar18 && piVar3 != (int *)0x0) {
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar18 = (bool)hasExclusiveAccess(piVar3);
      if (bVar18) {
        *piVar3 = 0x84;
        goto LAB_00d9faa0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00d9faa0:
  *(undefined1 *)((int)param_1 + 0xbdf) = 0;
  if ((char)param_1[0x2f8] != '\0') {
    piVar3 = (int *)param_1[0x2f4];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar18 = (bool)hasExclusiveAccess(piVar3);
      if (bVar18) {
        *piVar3 = 0x84;
        goto LAB_00d9faec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00d9faec:
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  if (*(char *)((int)param_1 + 0xbe1) != '\0') {
    piVar3 = (int *)param_1[0x2f3];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar18 = (bool)hasExclusiveAccess(piVar3);
      if (bVar18) {
        *piVar3 = 0x84;
        goto LAB_00d9fb34;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00d9fb34:
  iVar5 = param_1[0x262];
  *(undefined1 *)((int)param_1 + 0xbe1) = 0;
  piVar3 = (int *)(iVar5 + 0xa4);
  do {
    iVar4 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar3 = (int *)param_1[0x262];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaae74(param_1[0x262]);
  }
  piVar14 = param_1 + 0x2f2;
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  FUN_01663cc4(*piVar14);
  piVar3 = (int *)*piVar14;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar14);
  }
  piVar14 = param_1 + 0x2f1;
  *(undefined1 *)((int)param_1 + 0xbe5) = 0;
  FUN_01663cc4(*piVar14);
  piVar3 = (int *)*piVar14;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar14);
  }
  piVar3 = (int *)param_1[0x2f0];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar18 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar18);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(param_1[0x2f0]);
    return;
  }
switchD_00d9f180_caseD_1:
  return;
}

