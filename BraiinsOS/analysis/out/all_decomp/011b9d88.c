// FUN_011b9d88 @ 011b9d88 size=1512 calls_out=6 calls_in=2
// strings: 

void FUN_011b9d88(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,ulonglong param_5,
                 int param_6)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = *(undefined1 *)(param_2 + 0x29);
  cVar2 = *(char *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
    iVar8 = *(int *)(param_2 + 0x14);
    if (iVar8 == *(int *)(param_2 + 0xc)) {
      FUN_006029c0(param_2 + 0xc);
    }
    *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
    *(int *)(param_2 + 0x14) = iVar8 + 1;
  }
  iVar10 = 0;
  iVar8 = param_2 + 0x18;
  do {
    uVar9 = (uint)(param_5 >> 0x20);
    uVar11 = (uint)param_5;
    if (*(char *)(param_2 + 0x28) != '\x01') {
      FUN_011ef738(&local_30,iVar8);
      uVar5 = 0;
      if ((local_30 & 0xff) == 5) goto joined_r0x011b9ea4;
      if ((local_30 & 0xff) == 4) {
        uVar5 = (uint)local_30._1_1_;
        *(byte *)(param_2 + 0x29) = local_30._1_1_;
        *(undefined1 *)(param_2 + 0x28) = 1;
        goto joined_r0x011b9ea4;
      }
LAB_011ba108:
      uVar6 = FUN_0157c4a0(local_30,local_2c);
      goto LAB_011ba0f0;
    }
    uVar5 = (uint)*(byte *)(param_2 + 0x29);
joined_r0x011b9ea4:
    uVar12 = uVar5 - 0x30 & 0xff;
    if (9 < uVar12) {
      if (iVar10 == 0) {
        if (*(char *)(param_2 + 0x28) == '\0') {
          FUN_011ef738(&local_30,iVar8);
          if ((local_30 & 0xff) == 5) {
            uVar6 = *(undefined4 *)(param_2 + 0x1c);
            uVar7 = *(undefined4 *)(param_2 + 0x20);
            local_30 = 5;
            goto LAB_011ba0dc;
          }
          if ((local_30 & 0xff) != 4) goto LAB_011ba108;
          *(byte *)(param_2 + 0x29) = local_30._1_1_;
          *(undefined1 *)(param_2 + 0x28) = 1;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x1c);
        uVar7 = *(undefined4 *)(param_2 + 0x20);
        local_30 = 0xd;
        goto LAB_011ba0dc;
      }
      if (*(char *)(param_2 + 0x28) == '\x01') {
        bVar4 = *(byte *)(param_2 + 0x29);
      }
      else {
        FUN_011ef738(&local_30,iVar8);
        bVar4 = 0;
        if ((local_30 & 0xff) != 5) {
          if ((local_30 & 0xff) != 4) goto LAB_011ba108;
          *(byte *)(param_2 + 0x29) = local_30._1_1_;
          *(undefined1 *)(param_2 + 0x28) = 1;
          bVar4 = local_30._1_1_;
        }
      }
      uVar5 = iVar10 + param_6;
      if ((bVar4 | 0x20) == 0x65) {
        FUN_011ba128(param_1,param_2,param_3);
        return;
      }
      dVar14 = (double)FUN_01845f30(uVar11,uVar9);
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 0x20);
      uVar9 = uVar5;
      if ((int)uVar5 < 0) {
        uVar9 = -uVar5;
      }
      break;
    }
    if ((0x19999998 < uVar9 && (uint)(uVar11 < 0x99999999) <= 0x19999999 - uVar9) &&
       ((param_5 != 0x1999999999999999 || (5 < uVar12)))) goto LAB_011ba094;
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    cVar2 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar13 = *(int *)(param_2 + 0x14);
      if (iVar13 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar13) = uVar1;
      *(int *)(param_2 + 0x14) = iVar13 + 1;
    }
    iVar10 = iVar10 + -1;
    param_5 = (param_5 & 0xffffffff) * 10 + (CONCAT44(uVar9 * 10,uVar5 - 0x30) & 0xffffffff000000ff)
    ;
  } while( true );
joined_r0x011b9fbc:
  if (uVar9 < 0x135) {
    if ((int)uVar5 < 0) {
      dVar14 = dVar14 / (double)(&DAT_0040ddb8)[uVar9];
    }
    else {
      dVar14 = dVar14 * (double)(&DAT_0040ddb8)[uVar9];
      if (SUB84(dVar14,0) == 0 && ((uint)((ulonglong)dVar14 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_011ba024:
        local_30 = 0xe;
LAB_011ba0dc:
        uVar6 = FUN_0157c50c(&local_30,uVar6,uVar7);
LAB_011ba0f0:
        *param_1 = 1;
        param_1[1] = uVar6;
        return;
      }
    }
LAB_011ba030:
    dVar15 = -dVar14;
    if (param_3 != 0) {
      dVar15 = dVar14;
    }
    *param_1 = 0;
    *(double *)(param_1 + 2) = dVar15;
    return;
  }
  if (dVar14 == 0.0) goto LAB_011ba030;
  if (uVar5 < 0x80000000) goto LAB_011ba024;
  dVar14 = dVar14 / 1e+308;
  uVar5 = uVar5 + 0x134;
  uVar9 = uVar5;
  if ((int)uVar5 < 0) {
    uVar9 = -uVar5;
  }
  goto joined_r0x011b9fbc;
LAB_011ba094:
  uVar5 = iVar10 + param_6;
  uVar12 = 0;
  while( true ) {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      uVar12 = (uint)*(byte *)(param_2 + 0x29);
      bVar3 = true;
    }
    else {
      FUN_011ef738(&local_30,param_2 + 0x18);
      bVar3 = false;
      if ((local_30 & 0xff) != 5) {
        if ((local_30 & 0xff) != 4) goto LAB_011ba95c;
        uVar12 = (uint)local_30._1_1_;
        bVar3 = true;
        *(byte *)(param_2 + 0x29) = local_30._1_1_;
        *(undefined1 *)(param_2 + 0x28) = 1;
      }
    }
    if ((!bVar3) || (9 < uVar12 - 0x30)) break;
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    cVar2 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    bVar4 = *(byte *)(param_2 + 0x29);
  }
  else {
    FUN_011ef738(&local_30,param_2 + 0x18);
    bVar4 = 0;
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) != 4) {
LAB_011ba95c:
        uVar6 = FUN_0157c4a0(local_30,local_2c);
        goto LAB_011ba968;
      }
      *(byte *)(param_2 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_2 + 0x28) = 1;
      bVar4 = local_30._1_1_;
    }
  }
  if ((bVar4 | 0x20) == 0x65) {
    FUN_011ba128(param_1,param_2,param_3);
    return;
  }
  dVar14 = (double)FUN_01845f30(uVar11,uVar9);
  uVar9 = uVar5;
  if ((int)uVar5 < 0) {
    uVar9 = -uVar5;
  }
  while (0x134 < uVar9) {
    if (dVar14 == 0.0) goto LAB_011ba934;
    if (uVar5 < 0x80000000) goto LAB_011ba914;
    dVar14 = dVar14 / 1e+308;
    uVar5 = uVar5 + 0x134;
    uVar9 = uVar5;
    if ((int)uVar5 < 0) {
      uVar9 = -uVar5;
    }
  }
  if ((int)uVar5 < 0) {
    dVar14 = dVar14 / (double)(&DAT_0040ddb8)[uVar9];
  }
  else {
    dVar14 = dVar14 * (double)(&DAT_0040ddb8)[uVar9];
    if (SUB84(dVar14,0) == 0 && ((uint)((ulonglong)dVar14 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_011ba914:
      local_30 = 0xe;
      uVar6 = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                          );
LAB_011ba968:
      *param_1 = 1;
      param_1[1] = uVar6;
      return;
    }
  }
LAB_011ba934:
  dVar15 = -dVar14;
  if (param_3 != 0) {
    dVar15 = dVar14;
  }
  *param_1 = 0;
  *(double *)(param_1 + 2) = dVar15;
  return;
}

