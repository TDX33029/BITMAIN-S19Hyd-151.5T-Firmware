// FUN_00f2b2e0 @ 00f2b2e0 size=1496 calls_out=5 calls_in=1
// strings: 

void FUN_00f2b2e0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined4 local_30 [3];
  
  uVar4 = CONCAT44(param_6,param_5);
  uVar12 = 0;
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      uVar5 = (uint)*(byte *)(param_2 + 0x2d);
    }
    else {
      pbVar9 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar9;
        goto LAB_00f2b40c;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar3 = *pbVar9;
      uVar5 = (uint)bVar3;
      *(byte **)(param_2 + 0x18) = pbVar9 + 1;
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      if (uVar5 == 10) {
        *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar7 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar3;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar7;
    }
    if (9 < uVar5 - 0x30) break;
    uVar1 = *(undefined1 *)(param_2 + 0x2d);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar7 = *(int *)(param_2 + 0x14);
      if (iVar7 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar7) = uVar1;
      *(int *)(param_2 + 0x14) = iVar7 + 1;
    }
    uVar12 = uVar12 + 1;
  }
  if (uVar5 == 0x2e) {
    uVar1 = *(undefined1 *)(param_2 + 0x2d);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar7 = *(int *)(param_2 + 0x14);
      if (iVar7 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar7) = uVar1;
      *(int *)(param_2 + 0x14) = iVar7 + 1;
    }
    iVar7 = 0;
    while( true ) {
      uVar5 = (uint)(uVar4 >> 0x20);
      if (*(char *)(param_2 + 0x2c) != '\x01') break;
      uVar11 = *(byte *)(param_2 + 0x2d) - 0x30 & 0xff;
joined_r0x00f2b5fc:
      if (9 < uVar11) {
        if (iVar7 != 0) {
          bVar3 = *(byte *)(param_2 + 0x2d);
joined_r0x00f2b714:
          if ((bVar3 | 0x20) != 0x65) goto LAB_00f2b728;
          goto LAB_00f2b4d4;
        }
        iVar7 = *(int *)(param_2 + 0x24);
LAB_00f2b840:
        uVar6 = *(undefined4 *)(param_2 + 0x20);
        local_30[0] = 0xd;
        goto LAB_00f2b4a4;
      }
      if ((0x19999998 < uVar5 && (uint)((uint)uVar4 < 0x99999999) <= 0x19999999 - uVar5) &&
         ((iVar8 = (int)((uVar4 ^ 0x1999999999999999) >> 0x20),
          (uint)uVar4 != 0x99999999 || iVar8 != 0 || (5 < uVar11)))) {
        FUN_00f2bff0(param_1,param_2,param_3,iVar8,uVar4,iVar7 + uVar12);
        return;
      }
      uVar1 = *(undefined1 *)(param_2 + 0x2d);
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar8 = *(int *)(param_2 + 0x14);
        if (iVar8 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
        *(int *)(param_2 + 0x14) = iVar8 + 1;
      }
      iVar7 = iVar7 + -1;
      uVar4 = (uVar4 & 0xffffffff) * 10 + CONCAT44(uVar5 * 10,uVar11);
    }
    pcVar10 = *(char **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) != 0) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      cVar2 = *pcVar10;
      iVar8 = *(int *)(param_2 + 0x24) + 1;
      *(char **)(param_2 + 0x18) = pcVar10 + 1;
      if (cVar2 == '\n') {
        *(int *)(param_2 + 0x28) = iVar8 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar8 = 0;
      }
      *(char *)(param_2 + 0x2d) = cVar2;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar8;
      uVar11 = (uint)(byte)(cVar2 - 0x30);
      goto joined_r0x00f2b5fc;
    }
    *(char **)(param_2 + 0x18) = pcVar10;
    if (iVar7 == 0) {
      pcVar10 = *(char **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
        cVar2 = *pcVar10;
        *(char **)(param_2 + 0x18) = pcVar10 + 1;
        iVar7 = *(int *)(param_2 + 0x24) + 1;
        if (cVar2 == '\n') {
          *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
          iVar7 = 0;
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        }
        *(char *)(param_2 + 0x2d) = cVar2;
        *(undefined1 *)(param_2 + 0x2c) = 1;
        *(int *)(param_2 + 0x24) = iVar7;
        goto LAB_00f2b840;
      }
      uVar6 = *(undefined4 *)(param_2 + 0x20);
      *(char **)(param_2 + 0x18) = pcVar10;
      local_30[0] = 5;
      iVar7 = *(int *)(param_2 + 0x24);
      goto LAB_00f2b4a4;
    }
    pbVar9 = *(byte **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) != 0) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar3 = *pbVar9;
      *(byte **)(param_2 + 0x18) = pbVar9 + 1;
      iVar8 = *(int *)(param_2 + 0x24) + 1;
      if (bVar3 == 10) {
        *(int *)(param_2 + 0x28) = iVar8 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar8 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar3;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar8;
      goto joined_r0x00f2b714;
    }
    *(byte **)(param_2 + 0x18) = pbVar9;
LAB_00f2b728:
    uVar12 = uVar12 + iVar7;
    dVar13 = (double)FUN_01845f30();
    uVar6 = *(undefined4 *)(param_2 + 0x20);
    iVar7 = *(int *)(param_2 + 0x24);
    uVar5 = uVar12;
    if ((int)uVar12 < 0) {
      uVar5 = -uVar12;
    }
    while (0x134 < uVar5) {
      if (dVar13 == 0.0) goto LAB_00f2b794;
      if (uVar12 < 0x80000000) goto LAB_00f2b490;
      dVar13 = dVar13 / 1e+308;
      uVar12 = uVar12 + 0x134;
      uVar5 = uVar12;
      if ((int)uVar12 < 0) {
        uVar5 = -uVar12;
      }
    }
    dVar14 = (double)(&DAT_0040ddb8)[uVar5];
    if (0x7fffffff < uVar12) goto LAB_00f2b790;
  }
  else {
    if (uVar5 == 0x45 || uVar5 == 0x65) {
LAB_00f2b4d4:
      FUN_00f2b8d8(param_1,param_2,param_3);
      return;
    }
LAB_00f2b40c:
    dVar13 = (double)FUN_01845f30();
    uVar6 = *(undefined4 *)(param_2 + 0x20);
    iVar7 = *(int *)(param_2 + 0x24);
    uVar5 = uVar12;
    if ((int)uVar12 < 0) {
      uVar5 = -uVar12;
    }
    while (0x134 < uVar5) {
      if (dVar13 == 0.0) goto LAB_00f2b794;
      if (uVar12 < 0x80000000) goto LAB_00f2b490;
      dVar13 = dVar13 / 1e+308;
      uVar12 = uVar12 + 0x134;
      uVar5 = uVar12;
      if ((int)uVar12 < 0) {
        uVar5 = -uVar12;
      }
    }
    dVar14 = (double)(&DAT_0040ddb8)[uVar5];
    if ((int)uVar12 < 0) {
LAB_00f2b790:
      dVar13 = dVar13 / dVar14;
      goto LAB_00f2b794;
    }
  }
  dVar13 = dVar13 * dVar14;
  if (SUB84(dVar13,0) == 0 && ((uint)((ulonglong)dVar13 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_00f2b490:
    local_30[0] = 0xe;
LAB_00f2b4a4:
    uVar6 = FUN_0157c50c(local_30,uVar6,iVar7);
    *param_1 = 1;
    param_1[1] = uVar6;
    return;
  }
LAB_00f2b794:
  *param_1 = 0;
  dVar14 = -dVar13;
  if (param_3 != 0) {
    dVar14 = dVar13;
  }
  *(double *)(param_1 + 2) = dVar14;
  return;
}

