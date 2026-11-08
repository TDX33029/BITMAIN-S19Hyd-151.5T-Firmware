// FUN_0100bd54 @ 0100bd54 size=800 calls_out=1 calls_in=3
// strings: 

longlong FUN_0100bd54(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar2 <= uVar3) goto LAB_0100c024;
  iVar9 = *param_1;
  uVar1 = *(byte *)(iVar9 + uVar3) - 0x30;
  if (9 < uVar1) goto LAB_0100c024;
  if (uVar1 == 0) {
    uVar6 = uVar3 + 1;
    uVar1 = 0;
LAB_0100bdfc:
    param_1[2] = uVar6;
  }
  else {
    if (uVar2 - uVar3 == 1) {
LAB_0100bd94:
      uVar6 = uVar2;
      goto LAB_0100bdfc;
    }
    uVar6 = uVar3 + 1;
    uVar10 = *(byte *)(iVar9 + uVar6) - 0x30;
    if (9 < uVar10) goto LAB_0100bdfc;
    uVar1 = uVar10 + uVar1 * 10;
    if (uVar2 - uVar3 == 2) goto LAB_0100bd94;
    uVar6 = uVar3 + 2;
    uVar10 = *(byte *)(iVar9 + uVar6) - 0x30;
    if (9 < uVar10) goto LAB_0100bdfc;
    uVar6 = uVar3 + 3;
    param_1[2] = uVar6;
    uVar1 = uVar10 + uVar1 * 10;
    if (0xff < uVar1) goto LAB_0100c024;
  }
  if (uVar2 < uVar6) goto LAB_0100c028;
  if ((uVar2 == uVar6) || (*(char *)(iVar9 + uVar6) != '.')) goto LAB_0100c024;
  uVar3 = uVar6 + 1;
  param_1[2] = uVar3;
  if ((uVar2 <= uVar3) || (uVar10 = *(byte *)(iVar9 + uVar3) - 0x30, 9 < uVar10)) goto LAB_0100c024;
  if (uVar10 == 0) {
    uVar5 = uVar6 + 2;
    uVar10 = 0;
LAB_0100bebc:
    param_1[2] = uVar5;
  }
  else {
    if (uVar2 - uVar3 == 1) {
LAB_0100be50:
      uVar5 = uVar2;
      goto LAB_0100bebc;
    }
    uVar5 = uVar6 + 2;
    uVar4 = *(byte *)(iVar9 + uVar5) - 0x30;
    if (9 < uVar4) goto LAB_0100bebc;
    uVar10 = uVar4 + uVar10 * 10;
    if (uVar2 - uVar3 == 2) goto LAB_0100be50;
    uVar5 = uVar6 + 3;
    uVar3 = *(byte *)(iVar9 + uVar5) - 0x30;
    if (9 < uVar3) goto LAB_0100bebc;
    uVar5 = uVar6 + 4;
    param_1[2] = uVar5;
    uVar10 = uVar3 + uVar10 * 10;
    if (0xff < uVar10) goto LAB_0100c024;
  }
  uVar6 = uVar5;
  if (uVar2 < uVar5) goto LAB_0100c028;
  if ((uVar2 == uVar5) || (*(char *)(iVar9 + uVar5) != '.')) goto LAB_0100c024;
  uVar3 = uVar5 + 1;
  param_1[2] = uVar3;
  if ((uVar2 <= uVar3) || (uVar4 = *(byte *)(iVar9 + uVar3) - 0x30, 9 < uVar4)) goto LAB_0100c024;
  if (uVar4 == 0) {
    uVar6 = uVar5 + 2;
    uVar4 = 0;
LAB_0100bf7c:
    param_1[2] = uVar6;
  }
  else {
    if (uVar2 - uVar3 == 1) {
LAB_0100bf10:
      uVar6 = uVar2;
      goto LAB_0100bf7c;
    }
    uVar6 = uVar5 + 2;
    uVar7 = *(byte *)(iVar9 + uVar6) - 0x30;
    if (9 < uVar7) goto LAB_0100bf7c;
    uVar4 = uVar7 + uVar4 * 10;
    if (uVar2 - uVar3 == 2) goto LAB_0100bf10;
    uVar6 = uVar5 + 3;
    uVar3 = *(byte *)(iVar9 + uVar6) - 0x30;
    if (9 < uVar3) goto LAB_0100bf7c;
    uVar6 = uVar5 + 4;
    param_1[2] = uVar6;
    uVar4 = uVar3 + uVar4 * 10;
    if (0xff < uVar4) goto LAB_0100c024;
  }
  if (uVar2 < uVar6) {
LAB_0100c028:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar2,uVar2,&DAT_01882234);
  }
  if ((uVar2 == uVar6) || (*(char *)(iVar9 + uVar6) != '.')) {
LAB_0100c024:
    return ZEXT48(param_1) << 0x20;
  }
  uVar3 = uVar6 + 1;
  param_1[2] = uVar3;
  if ((uVar2 <= uVar3) || (uVar5 = *(byte *)(iVar9 + uVar3) - 0x30, 9 < uVar5)) goto LAB_0100c024;
  if (uVar5 == 0) {
    uVar7 = uVar6 + 2;
    uVar5 = 0;
  }
  else {
    uVar7 = uVar2;
    if (uVar2 - uVar3 != 1) {
      uVar7 = uVar6 + 2;
      uVar8 = *(byte *)(iVar9 + uVar7) - 0x30;
      if (uVar8 < 10) {
        uVar5 = uVar8 + uVar5 * 10;
        uVar7 = uVar2;
        if (uVar2 - uVar3 != 2) {
          uVar7 = uVar6 + 3;
          uVar2 = *(byte *)(iVar9 + uVar7) - 0x30;
          if (uVar2 < 10) {
            param_1[2] = uVar6 + 4;
            param_1 = (int *)(uVar5 * 5);
            uVar5 = uVar2 + uVar5 * 10;
            if (0xff < uVar5) goto LAB_0100c024;
            goto LAB_0100c05c;
          }
        }
      }
    }
  }
  param_1[2] = uVar7;
LAB_0100c05c:
  return CONCAT44(uVar5 | uVar1 << 0x18 | uVar10 << 0x10 | uVar4 << 8,1);
}

