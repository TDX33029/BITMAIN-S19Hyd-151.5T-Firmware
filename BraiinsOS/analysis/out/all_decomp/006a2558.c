// FUN_006a2558 @ 006a2558 size=596 calls_out=10 calls_in=1
// strings: 

void FUN_006a2558(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = *param_1;
  iVar4 = 2;
  if ((uint)(uVar6 < 4) <= -param_1[1]) {
    iVar4 = uVar6 - 4;
  }
  if (iVar4 == 0) {
    puVar15 = param_1 + 0x2a;
    if (*puVar15 != 2) {
      FUN_005e6cdc(puVar15,-(param_1[1] + (uint)(uVar6 >= 4)));
      if (param_1[0x2d] != 0xffffffff) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(puVar15);
    }
    if (param_1[2] != 2 || param_1[3] != 0) {
      piVar9 = (int *)param_1[0xc];
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0xc],param_1[0xd]);
        }
      }
      piVar9 = (int *)param_1[0x26];
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0x26],param_1[0x27]);
        }
      }
    }
    piVar9 = (int *)param_1[0x36];
    if (piVar9 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(param_1[0x36]);
    }
    piVar9 = (int *)param_1[0x37];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f120(param_1[0x37]);
      return;
    }
    return;
  }
  if (iVar4 != 1) {
    piVar9 = (int *)param_1[0xf4];
    if (piVar9 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[0xf4],param_1[0xf5]);
      }
    }
    piVar9 = (int *)param_1[0xf2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(param_1[0xf2]);
    }
    piVar9 = (int *)param_1[0xf3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f120(param_1[0xf3]);
    }
    FUN_00688174(param_1);
    return;
  }
  FUN_006a292c(param_1 + 2);
  FUN_006a2a40(param_1 + 99);
  if ((char)param_1[0x62] != '\x03') {
    FUN_0069f218(param_1 + 0x5e);
  }
  piVar9 = (int *)param_1[0x66];
  iVar4 = 0;
  if (*piVar9 != 0) {
    iVar4 = piVar9[1];
  }
  if (*piVar9 != 0 && iVar4 != 0) {
    (**(code **)(iVar4 + 0x10))(piVar9 + 4,piVar9[2],piVar9[3]);
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar7 * uVar6 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - (int)piVar9) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar6;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

