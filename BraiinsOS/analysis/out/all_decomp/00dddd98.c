// FUN_00dddd98 @ 00dddd98 size=700 calls_out=13 calls_in=2
// strings: 

void FUN_00dddd98(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 unaff_r5;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  switch((char)param_1[0x1c5]) {
  case '\0':
    uStack_1c = unaff_r5;
    FUN_005c384c(param_1 + 0x6c);
    piVar3 = (int *)param_1[0x124];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacbe0(param_1[0x124]);
    }
    piVar3 = (int *)param_1[0x125];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaafc(param_1[0x125]);
    }
    piVar3 = (int *)param_1[0x126];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e46504(param_1[0x126]);
    }
    FUN_00e46678(param_1[0x127]);
    piVar3 = (int *)param_1[0x127];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac878(param_1[0x127]);
    }
    piVar3 = (int *)param_1[0x128];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(param_1[0x128]);
    }
    piVar3 = (int *)param_1[0x129];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(param_1[0x129]);
    }
    FUN_00e469ec(param_1[0x12a]);
    piVar3 = (int *)param_1[0x12a];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[0x12a]);
    }
    iVar4 = param_1[0x83];
    if (iVar4 != 0) {
      piVar3 = (int *)param_1[0x82];
      do {
        iVar4 = iVar4 + -1;
        iVar6 = 0;
        if (*piVar3 != 0) {
          iVar6 = piVar3[1];
        }
        if (*piVar3 != 0 && iVar6 != 0) {
          (**(code **)(iVar6 + 0xc))(piVar3[2]);
        }
        piVar3 = piVar3 + 3;
      } while (iVar4 != 0);
    }
    if (param_1[0x81] != 0) {
      thunk_FUN_016d3fb4(param_1[0x82]);
    }
    if (param_1[0x89] == -0x80000000 || param_1[0x89] == 0) {
      iVar4 = param_1[0x86];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x8a]);
      iVar4 = param_1[0x86];
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[0x87]);
    }
    iVar4 = param_1[299];
    piVar3 = (int *)(iVar4 + 0x48);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e46e30(iVar4 + 8);
    }
    piVar3 = (int *)param_1[299];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[299]);
    }
    iVar4 = param_1[300];
    piVar3 = (int *)(iVar4 + 0x44);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e46e30(iVar4 + 8);
    }
    piVar3 = (int *)param_1[300];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(param_1[300]);
    }
    FUN_005bf2b0(param_1 + 0x8c);
    FUN_005c73cc(param_1 + 0x1c);
    FUN_00aa313c(param_1[0x12d]);
    piVar3 = (int *)param_1[0x12d];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad1e0(param_1[0x12d]);
    }
    iVar4 = param_1[0x12e];
    piVar3 = (int *)(iVar4 + 0x44);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e473d0(iVar4 + 8);
    }
    piVar3 = (int *)param_1[0x12e];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacf14(param_1[0x12e]);
    }
    iVar4 = param_1[0x12f];
    piVar3 = (int *)(iVar4 + 0x48);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e473d0(iVar4 + 8);
    }
    piVar3 = (int *)param_1[0x12f];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacf14(param_1[0x12f]);
    }
    iVar4 = param_1[1];
    if (*param_1 == 0 && iVar4 == 0) {
      return;
    }
    iVar6 = param_1[5];
    if (iVar6 != 0) {
      iVar4 = iVar6 * 0x11;
    }
    if (iVar6 != 0 && iVar4 != -0x15) {
      thunk_FUN_016d3fb4(param_1[4] + iVar6 * -0x10 + -0x10);
      iVar4 = extraout_r1;
    }
    iVar6 = param_1[0xd];
    if (iVar6 != 0) {
      iVar4 = iVar6 * 0x11;
    }
    if (iVar6 != 0 && iVar4 != -0x15) {
      thunk_FUN_016d3fb4(param_1[0xc] + iVar6 * -0x10 + -0x10);
      iVar4 = param_1[0x15];
    }
    else {
      iVar4 = param_1[0x15];
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[0x16]);
    }
    if (param_1[0x18] == 0) {
      return;
    }
    iVar4 = param_1[0x19];
    if (iVar4 == 0) {
      return;
    }
    uStack_18 = uStack_1c;
    iVar6 = FUN_016d3bc8();
    uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
      iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
    iVar14 = *(int *)(iVar6 + 8) + 0x10;
    iVar11 = iVar7 * uVar15 + iVar7 + -4;
    iVar7 = iVar14 + iVar11;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar10 = *(uint *)(iVar7 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar6 + 0x14);
    uVar10 = 1 << uVar15;
    *(undefined1 *)(iVar4 + -3) = 0xff;
    *(undefined2 *)(iVar4 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
      if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar6,uVar15);
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
        *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
        return;
      }
      puVar16 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar8 = *puVar16;
        if (uVar12 != uVar8) goto LAB_016d409c;
        bVar17 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar17);
      *puVar16 = uVar10 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar8) {
        return;
      }
    } while( true );
  default:
    return;
  case '\x03':
    FUN_00dde308(param_1 + 0x1ca);
    break;
  case '\x04':
    if (param_1[0x20e] != 0) {
      FUN_00e43e74(param_1[0x20e],param_1[0x20f],1);
    }
    goto LAB_00ddde4c;
  case '\x05':
    FUN_00dde4e4(param_1 + 0x1c8);
    FUN_00e44114(param_1[0x1c4]);
LAB_00ddde4c:
    if (*(char *)((int)param_1 + 0x716) != '\0') {
      FUN_005c70d0(param_1 + 0x1c8);
    }
    *(undefined1 *)((int)param_1 + 0x716) = 0;
    break;
  case '\x06':
    FUN_00dde698(param_1 + 0x1c8);
    *(undefined1 *)((int)param_1 + 0x71b) = 0;
    break;
  case '\a':
    FUN_00dde774(param_1 + 0x1c8);
    *(undefined1 *)((int)param_1 + 0x71a) = 0;
    break;
  case '\b':
    FUN_00dde9f4(param_1 + 0x1ca);
  }
  bVar17 = *(char *)((int)param_1 + 0x717) != '\0';
  piVar3 = (int *)0x0;
  if (bVar17) {
    piVar3 = (int *)param_1[0x1c3];
  }
  if (bVar17 && piVar3 != (int *)0x0) {
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar17 = (bool)hasExclusiveAccess(piVar3);
      if (bVar17) {
        *piVar3 = 0x84;
        goto LAB_00dddec4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00dddec4:
  *(undefined1 *)((int)param_1 + 0x717) = 0;
  if ((char)param_1[0x1c6] != '\0') {
    piVar3 = (int *)param_1[0x1c2];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar17 = (bool)hasExclusiveAccess(piVar3);
      if (bVar17) {
        *piVar3 = 0x84;
        goto LAB_00dddf10;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00dddf10:
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  if (*(char *)((int)param_1 + 0x719) != '\0') {
    piVar3 = (int *)param_1[0x1c1];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar17 = (bool)hasExclusiveAccess(piVar3);
      if (bVar17) {
        *piVar3 = 0x84;
        goto LAB_00dddf58;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00dddf58:
  iVar4 = param_1[0x130];
  *(undefined1 *)((int)param_1 + 0x719) = 0;
  piVar3 = (int *)(iVar4 + 0xa4);
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(iVar4 + 0x88);
  }
  piVar3 = (int *)param_1[0x130];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaae74(param_1[0x130]);
  }
  piVar13 = param_1 + 0x1c0;
  *(undefined1 *)(param_1 + 0x1c7) = 0;
  FUN_01663cc4(*piVar13);
  piVar3 = (int *)*piVar13;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar13);
  }
  piVar13 = param_1 + 0x1bf;
  *(undefined1 *)((int)param_1 + 0x71d) = 0;
  FUN_01663cc4(*piVar13);
  piVar3 = (int *)*piVar13;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(piVar13);
  }
  piVar3 = (int *)param_1[0x1be];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(param_1[0x1be]);
    return;
  }
  return;
}

