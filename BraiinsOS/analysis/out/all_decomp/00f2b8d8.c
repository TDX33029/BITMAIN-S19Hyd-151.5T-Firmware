// FUN_00f2b8d8 @ 00f2b8d8 size=1776 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f2be9c) */

void FUN_00f2b8d8(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined4 local_30 [3];
  
  uVar1 = *(undefined1 *)(param_2 + 0x2d);
  cVar5 = *(char *)(param_2 + 0x2c);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  if ((cVar5 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
    iVar7 = *(int *)(param_2 + 0x14);
    if (iVar7 == *(int *)(param_2 + 0xc)) {
      FUN_006029c0(param_2 + 0xc);
    }
    *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar7) = uVar1;
    *(int *)(param_2 + 0x14) = iVar7 + 1;
    if (*(char *)(param_2 + 0x2c) != '\x01') goto LAB_00f2b954;
    cVar5 = *(char *)(param_2 + 0x2d);
    if (cVar5 == '+') goto LAB_00f2b94c;
LAB_00f2b9b4:
    if (cVar5 == '-') {
      bVar4 = false;
      goto LAB_00f2b9c0;
    }
    cVar5 = *(char *)(param_2 + 0x2d);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    bVar4 = true;
    iVar7 = *(int *)(param_2 + 0xc);
    if (iVar7 != -0x80000000) goto LAB_00f2bd5c;
  }
  else {
LAB_00f2b954:
    pcVar10 = *(char **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) == 0) {
      bVar4 = true;
      *(char **)(param_2 + 0x18) = pcVar10;
LAB_00f2ba30:
      *(undefined1 *)(param_2 + 0x2c) = 0;
LAB_00f2ba38:
      pcVar10 = *(char **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        uVar6 = *(undefined4 *)(param_2 + 0x20);
        uVar12 = *(undefined4 *)(param_2 + 0x24);
        *(char **)(param_2 + 0x18) = pcVar10;
        local_30[0] = 5;
        goto LAB_00f2bad8;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      cVar5 = *pcVar10;
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      *(char **)(param_2 + 0x18) = pcVar10 + 1;
      if (cVar5 == '\n') {
        *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar7 = 0;
      }
      *(int *)(param_2 + 0x24) = iVar7;
      if (*(int *)(param_2 + 0xc) == -0x80000000) goto LAB_00f2bb0c;
      iVar9 = *(int *)(param_2 + 0x14);
      if (iVar9 == *(int *)(param_2 + 0xc)) {
LAB_00f2bd68:
        FUN_006029c0(param_2 + 0xc);
      }
    }
    else {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      cVar5 = *pcVar10;
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      *(char **)(param_2 + 0x18) = pcVar10 + 1;
      if (cVar5 == '\n') {
        *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar7 = 0;
      }
      *(char *)(param_2 + 0x2d) = cVar5;
      *(int *)(param_2 + 0x24) = iVar7;
      if (cVar5 != '+') goto LAB_00f2b9b4;
LAB_00f2b94c:
      bVar4 = true;
LAB_00f2b9c0:
      uVar1 = *(undefined1 *)(param_2 + 0x2d);
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) == -0x80000000) goto LAB_00f2ba30;
      iVar7 = *(int *)(param_2 + 0x14);
      if (iVar7 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar7) = uVar1;
      cVar5 = *(char *)(param_2 + 0x2d);
      cVar2 = *(char *)(param_2 + 0x2c);
      *(int *)(param_2 + 0x14) = iVar7 + 1;
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (cVar2 != '\x01') goto LAB_00f2ba38;
      iVar7 = *(int *)(param_2 + 0xc);
      if (iVar7 == -0x80000000) goto LAB_00f2bb0c;
LAB_00f2bd5c:
      iVar9 = *(int *)(param_2 + 0x14);
      if (iVar9 == iVar7) goto LAB_00f2bd68;
    }
    *(char *)(*(int *)(param_2 + 0x10) + iVar9) = cVar5;
    *(int *)(param_2 + 0x14) = iVar9 + 1;
  }
LAB_00f2bb0c:
  uVar8 = (uint)(byte)(cVar5 - 0x30);
  if (uVar8 < 10) {
    do {
      if (*(char *)(param_2 + 0x2c) != '\x01') {
        pcVar10 = *(char **)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x1c) == 0) {
          *(char **)(param_2 + 0x18) = pcVar10;
        }
        else {
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
          cVar5 = *pcVar10;
          *(char **)(param_2 + 0x18) = pcVar10 + 1;
          iVar7 = *(int *)(param_2 + 0x24) + 1;
          if (cVar5 == '\n') {
            *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
            iVar7 = 0;
          }
          *(char *)(param_2 + 0x2d) = cVar5;
          *(undefined1 *)(param_2 + 0x2c) = 1;
          *(int *)(param_2 + 0x24) = iVar7;
          uVar13 = (uint)(byte)(cVar5 - 0x30);
          if (uVar13 < 10) goto LAB_00f2bbd8;
        }
LAB_00f2bc6c:
        uVar6 = *(undefined4 *)(param_2 + 0x20);
        uVar12 = *(undefined4 *)(param_2 + 0x24);
        uVar13 = SignedSaturate(param_7 + uVar8,0x20);
        SignedDoesSaturate(uVar13,0x20);
        uVar8 = SignedSaturate(param_7 - uVar8,0x20);
        SignedDoesSaturate(uVar8,0x20);
        if (bVar4) {
          uVar8 = uVar13;
        }
        dVar14 = (double)FUN_01845f30();
        uVar13 = uVar8;
        if ((int)uVar8 < 0) {
          uVar13 = -uVar8;
        }
        if (0x134 < uVar13) goto LAB_00f2bcac;
        goto LAB_00f2bcd8;
      }
      uVar13 = *(byte *)(param_2 + 0x2d) - 0x30 & 0xff;
      if (9 < uVar13) goto LAB_00f2bc6c;
LAB_00f2bbd8:
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
      if ((0xccccccb < (int)uVar8) && ((uVar8 != 0xccccccc || (7 < uVar13)))) goto LAB_00f2be08;
      uVar8 = uVar13 + uVar8 * 10;
    } while( true );
  }
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)(param_2 + 0x24);
  local_30[0] = 0xd;
LAB_00f2bad8:
  uVar6 = FUN_0157c50c(local_30,uVar6,uVar12);
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
LAB_00f2be08:
  if ((param_5 != 0 || param_6 != 0) && (bVar4)) {
    local_30[0] = 0xe;
    uVar6 = FUN_0157c50c(local_30,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    param_1[1] = uVar6;
    *param_1 = 1;
    return;
  }
  do {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      uVar8 = (uint)*(byte *)(param_2 + 0x2d);
    }
    else {
      pbVar11 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar11;
LAB_00f2bf78:
        uVar16 = 0x8000000000000000;
        if (param_3 != 0) {
          uVar16 = 0;
        }
        *(undefined8 *)(param_1 + 2) = uVar16;
        *param_1 = 0;
        return;
      }
      bVar3 = *pbVar11;
      uVar8 = (uint)bVar3;
      *(byte **)(param_2 + 0x18) = pbVar11 + 1;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      iVar7 = *(int *)(param_2 + 0x24) + 1;
      if (uVar8 == 10) {
        *(int *)(param_2 + 0x28) = iVar7 + *(int *)(param_2 + 0x28);
        iVar7 = 0;
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      }
      *(byte *)(param_2 + 0x2d) = bVar3;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar7;
    }
    if (9 < uVar8 - 0x30) goto LAB_00f2bf78;
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
  } while( true );
  while( true ) {
    if (uVar8 < 0x80000000) goto LAB_00f2bd0c;
    dVar14 = dVar14 / 1e+308;
    uVar8 = uVar8 + 0x134;
    uVar13 = uVar8;
    if ((int)uVar8 < 0) {
      uVar13 = -uVar8;
    }
    if (uVar13 < 0x135) break;
LAB_00f2bcac:
    if (dVar14 == 0.0) goto LAB_00f2bd3c;
  }
LAB_00f2bcd8:
  if ((int)uVar8 < 0) {
    dVar14 = dVar14 / (double)(&DAT_0040ddb8)[uVar13];
  }
  else {
    dVar14 = dVar14 * (double)(&DAT_0040ddb8)[uVar13];
    if (SUB84(dVar14,0) == 0 && ((uint)((ulonglong)dVar14 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_00f2bd0c:
      local_30[0] = 0xe;
      uVar6 = FUN_0157c50c(local_30,uVar6,uVar12);
      *param_1 = 1;
      param_1[1] = uVar6;
      return;
    }
  }
LAB_00f2bd3c:
  *param_1 = 0;
  dVar15 = -dVar14;
  if (param_3 != 0) {
    dVar15 = dVar14;
  }
  *(double *)(param_1 + 2) = dVar15;
  return;
}

