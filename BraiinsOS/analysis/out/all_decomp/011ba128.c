// FUN_011ba128 @ 011ba128 size=1504 calls_out=5 calls_in=3
// strings: 

void FUN_011ba128(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = *(undefined1 *)(param_2 + 0x29);
  cVar6 = *(char *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if ((cVar6 != '\x01') || (*(int *)(param_2 + 0xc) == -0x80000000)) {
LAB_011ba18c:
    FUN_011ef738(&local_30,param_2 + 0x18);
    cVar6 = '\0';
    if ((local_30 & 0xff) == 5) {
LAB_011ba1bc:
      if (cVar6 != '-') goto LAB_011ba1c4;
LAB_011ba220:
      iVar10 = *(int *)(param_2 + 0xc);
      bVar3 = false;
      uVar1 = *(undefined1 *)(param_2 + 0x29);
      cVar6 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      goto joined_r0x011ba238;
    }
    if ((local_30 & 0xff) == 4) {
      *(byte *)(param_2 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_2 + 0x28) = 1;
      cVar6 = local_30._1_1_;
      goto LAB_011ba1bc;
    }
LAB_011ba5a8:
    uVar5 = FUN_0157c4a0(local_30,local_2c);
    goto LAB_011ba2dc;
  }
  iVar10 = *(int *)(param_2 + 0x14);
  if (iVar10 != *(int *)(param_2 + 0xc)) {
    *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar10) = uVar1;
    *(int *)(param_2 + 0x14) = iVar10 + 1;
    goto LAB_011ba18c;
  }
  FUN_006029c0(param_2 + 0xc);
  cVar6 = *(char *)(param_2 + 0x28);
  *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar10) = uVar1;
  *(int *)(param_2 + 0x14) = iVar10 + 1;
  if (cVar6 != '\x01') goto LAB_011ba18c;
  cVar6 = *(char *)(param_2 + 0x29);
  if (cVar6 == '-') goto LAB_011ba220;
LAB_011ba1c4:
  bVar3 = true;
  if (cVar6 == '+') {
    iVar10 = *(int *)(param_2 + 0xc);
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    cVar6 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
joined_r0x011ba238:
    if ((cVar6 == '\x01') && (iVar10 != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == iVar10) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x29);
  uVar7 = (uint)bVar2;
  cVar6 = *(char *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (cVar6 == '\x01') {
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar10 = *(int *)(param_2 + 0x14);
      if (iVar10 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(byte *)(*(int *)(param_2 + 0x10) + iVar10) = bVar2;
      *(int *)(param_2 + 0x14) = iVar10 + 1;
    }
LAB_011ba328:
    uVar7 = uVar7 - 0x30 & 0xff;
    if (uVar7 < 10) {
      while( true ) {
        if (*(char *)(param_2 + 0x28) == '\x01') {
          uVar4 = (uint)*(byte *)(param_2 + 0x29);
        }
        else {
          FUN_011ef738(&local_30,param_2 + 0x18);
          uVar4 = 0;
          if ((local_30 & 0xff) != 5) {
            if ((local_30 & 0xff) != 4) {
              uVar5 = FUN_0157c4a0(local_30,local_2c);
              *param_1 = 1;
              param_1[1] = uVar5;
              return;
            }
            uVar4 = (uint)local_30._1_1_;
            *(byte *)(param_2 + 0x29) = local_30._1_1_;
            *(undefined1 *)(param_2 + 0x28) = 1;
          }
        }
        uVar4 = uVar4 - 0x30 & 0xff;
        if (9 < uVar4) {
          uVar5 = *(undefined4 *)(param_2 + 0x20);
          uVar9 = *(undefined4 *)(param_2 + 0x1c);
          uVar4 = SignedSaturate(param_7 + uVar7,0x20);
          SignedDoesSaturate(uVar4,0x20);
          uVar7 = SignedSaturate(param_7 - uVar7,0x20);
          SignedDoesSaturate(uVar7,0x20);
          if (bVar3) {
            uVar7 = uVar4;
          }
          dVar11 = (double)FUN_01845f30(param_5,param_6);
          uVar4 = uVar7;
          if ((int)uVar7 < 0) {
            uVar4 = -uVar7;
          }
          goto joined_r0x011ba468;
        }
        uVar1 = *(undefined1 *)(param_2 + 0x29);
        cVar6 = *(char *)(param_2 + 0x28);
        *(undefined1 *)(param_2 + 0x28) = 0;
        if ((cVar6 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
          iVar10 = *(int *)(param_2 + 0x14);
          if (iVar10 == *(int *)(param_2 + 0xc)) {
            FUN_006029c0(param_2 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar10) = uVar1;
          *(int *)(param_2 + 0x14) = iVar10 + 1;
        }
        if ((0xccccccb < (int)uVar7) && ((uVar7 != 0xccccccc || (7 < uVar4)))) break;
        uVar7 = uVar4 + uVar7 * 10;
      }
      if ((param_5 != 0 || param_6 != 0) && (bVar3)) {
        local_30 = 0xe;
        uVar5 = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20));
LAB_011ba6e4:
        param_1[1] = uVar5;
        *param_1 = 1;
        return;
      }
      uVar7 = 0;
      do {
        if (*(char *)(param_2 + 0x28) == '\x01') {
          uVar7 = (uint)*(byte *)(param_2 + 0x29);
          bVar3 = true;
        }
        else {
          FUN_011ef738(&local_30,param_2 + 0x18);
          bVar3 = false;
          if ((local_30 & 0xff) != 5) {
            if ((local_30 & 0xff) != 4) {
              uVar5 = FUN_0157c4a0(local_30,local_2c);
              goto LAB_011ba6e4;
            }
            uVar7 = (uint)local_30._1_1_;
            bVar3 = true;
            *(byte *)(param_2 + 0x29) = local_30._1_1_;
            *(undefined1 *)(param_2 + 0x28) = 1;
          }
        }
        if ((!bVar3) || (9 < uVar7 - 0x30)) {
          uVar13 = 0x8000000000000000;
          if (param_3 != 0) {
            uVar13 = 0;
          }
          *(undefined8 *)(param_1 + 2) = uVar13;
          *param_1 = 0;
          return;
        }
        uVar1 = *(undefined1 *)(param_2 + 0x29);
        cVar6 = *(char *)(param_2 + 0x28);
        *(undefined1 *)(param_2 + 0x28) = 0;
        if ((cVar6 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
          iVar10 = *(int *)(param_2 + 0x14);
          if (iVar10 == *(int *)(param_2 + 0xc)) {
            FUN_006029c0(param_2 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar10) = uVar1;
          *(int *)(param_2 + 0x14) = iVar10 + 1;
        }
      } while( true );
    }
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    local_30 = 0xd;
  }
  else {
    FUN_011ef738(&local_30,param_2 + 0x18);
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) != 4) goto LAB_011ba5a8;
      bVar2 = local_30._1_1_;
      uVar7 = (uint)local_30._1_1_;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar10 = *(int *)(param_2 + 0x14);
        if (iVar10 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(byte *)(*(int *)(param_2 + 0x10) + iVar10) = bVar2;
        *(int *)(param_2 + 0x14) = iVar10 + 1;
      }
      goto LAB_011ba328;
    }
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    local_30 = 5;
  }
  uVar5 = FUN_0157c50c(&local_30,uVar5,uVar9);
LAB_011ba2dc:
  *param_1 = 1;
  param_1[1] = uVar5;
  return;
joined_r0x011ba468:
  if (uVar4 < 0x135) {
    if ((int)uVar7 < 0) {
      dVar11 = dVar11 / (double)(&DAT_0040ddb8)[uVar4];
    }
    else {
      dVar11 = dVar11 * (double)(&DAT_0040ddb8)[uVar4];
      if (SUB84(dVar11,0) == 0 && ((uint)((ulonglong)dVar11 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_011ba4d0:
        local_30 = 0xe;
        uVar5 = FUN_0157c50c(&local_30,uVar9,uVar5);
        *param_1 = 1;
        param_1[1] = uVar5;
        return;
      }
    }
LAB_011ba500:
    *param_1 = 0;
    dVar12 = -dVar11;
    if (param_3 != 0) {
      dVar12 = dVar11;
    }
    *(double *)(param_1 + 2) = dVar12;
    return;
  }
  if (dVar11 == 0.0) goto LAB_011ba500;
  if (uVar7 < 0x80000000) goto LAB_011ba4d0;
  dVar11 = dVar11 / 1e+308;
  uVar7 = uVar7 + 0x134;
  uVar4 = uVar7;
  if ((int)uVar7 < 0) {
    uVar4 = -uVar7;
  }
  goto joined_r0x011ba468;
}

