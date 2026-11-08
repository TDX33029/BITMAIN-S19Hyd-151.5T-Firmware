// FUN_00f6785c @ 00f6785c size=580 calls_out=0 calls_in=2
// strings: invalid UTC offset | invalid characters in time zone name | time zone name must have between 3 and 7 characters

void FUN_00f6785c(undefined4 *param_1,int param_2,undefined1 param_3,byte *param_4,uint param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_2 == -0x80000000) {
    param_1[2] = "invalid UTC offset";
    param_1[3] = 0x12;
    param_1[4] = 0x3b9aca02;
    *param_1 = 1;
    return;
  }
  if (param_4 == (byte *)0x0) {
    *(undefined1 *)((int)param_1 + 0x11) = param_3;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = param_2;
    *param_1 = 0;
    return;
  }
  if (4 < param_5 - 3) {
    uVar2 = 0x33;
    pcVar1 = "time zone name must have between 3 and 7 characters";
    goto LAB_00f67a84;
  }
  uVar10 = (uint)*param_4;
  uVar4 = uVar10 - 0x30;
  bVar11 = 9 < uVar4;
  if (bVar11) {
    uVar4 = (uVar10 & 0xdf) - 0x41;
  }
  if ((!bVar11 || uVar4 < 0x1a) || (uVar10 == 0x2d || uVar10 == 0x2b)) {
    uVar5 = (uint)param_4[1];
    uVar4 = uVar5 - 0x30;
    bVar11 = 9 < uVar4;
    if (bVar11) {
      uVar4 = (uVar5 & 0xdf) - 0x41;
    }
    if ((!bVar11 || uVar4 < 0x1a) || (uVar5 == 0x2d || uVar5 == 0x2b)) {
      uVar6 = (uint)param_4[2];
      uVar4 = uVar6 - 0x30;
      bVar11 = 9 < uVar4;
      if (bVar11) {
        uVar4 = (uVar6 & 0xdf) - 0x41;
      }
      if ((!bVar11 || uVar4 < 0x1a) || (uVar6 == 0x2d || uVar6 == 0x2b)) {
        uVar4 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar9 = 0;
        if (param_5 == 3) goto LAB_00f67998;
        uVar9 = (uint)param_4[3];
        uVar4 = uVar9 - 0x30;
        bVar11 = 9 < uVar4;
        if (bVar11) {
          uVar4 = (uVar9 & 0xdf) - 0x41;
        }
        if ((!bVar11 || uVar4 < 0x1a) || (uVar9 == 0x2d || uVar9 == 0x2b)) {
          if (param_5 == 4) {
LAB_00f67994:
            uVar4 = 0;
LAB_00f67998:
            param_1[1] = param_2;
            *(undefined1 *)((int)param_1 + 0x11) = param_3;
            *(uint *)((int)param_1 + 0xd) = uVar8 << 0x10 | uVar4 << 0x18 | uVar7 << 8 | uVar9;
            *(undefined1 *)(param_1 + 2) = 1;
            *param_1 = 0;
            *(uint *)((int)param_1 + 9) = uVar10 << 8 | uVar5 << 0x10 | uVar6 << 0x18 | param_5;
            return;
          }
          uVar7 = (uint)param_4[4];
          uVar4 = uVar7 - 0x30;
          bVar11 = 9 < uVar4;
          if (bVar11) {
            uVar4 = (uVar7 & 0xdf) - 0x41;
          }
          if ((!bVar11 || uVar4 < 0x1a) || (uVar7 == 0x2d || uVar7 == 0x2b)) {
            if (param_5 == 5) goto LAB_00f67994;
            uVar8 = (uint)param_4[5];
            uVar4 = uVar8 - 0x30;
            bVar11 = 9 < uVar4;
            if (bVar11) {
              uVar4 = (uVar8 & 0xdf) - 0x41;
            }
            if ((!bVar11 || uVar4 < 0x1a) || (uVar8 == 0x2d || uVar8 == 0x2b)) {
              if (param_5 == 6) goto LAB_00f67994;
              uVar4 = (uint)param_4[6];
              uVar3 = uVar4 - 0x30;
              bVar11 = uVar3 < 10;
              if (!bVar11) {
                uVar3 = (uVar4 & 0xdf) - 0x41;
              }
              if ((bVar11 || uVar3 < 0x1a) || (uVar4 == 0x2b || uVar4 == 0x2d)) goto LAB_00f67998;
            }
          }
        }
      }
    }
  }
  uVar2 = 0x24;
  pcVar1 = "invalid characters in time zone name";
LAB_00f67a84:
  param_1[2] = pcVar1;
  param_1[3] = uVar2;
  param_1[4] = 0x3b9aca02;
  *param_1 = 1;
  return;
}

