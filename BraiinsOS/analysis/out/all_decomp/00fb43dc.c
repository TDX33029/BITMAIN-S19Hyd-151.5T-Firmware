// FUN_00fb43dc @ 00fb43dc size=672 calls_out=1 calls_in=3
// strings: to_digit: invalid radix -- radix must be in the range 2 to 36 inclusive

longlong FUN_00fb43dc(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar10 = param_2[1];
  if (uVar10 == 0) {
    bVar1 = false;
    pcVar8 = (char *)*param_2;
    uVar7 = 0;
    uVar2 = 0;
    iVar5 = 0;
    uVar4 = 0;
    uVar10 = 0;
    if (*param_1 != 0) goto LAB_00fb45d0;
  }
  else {
    pcVar8 = (char *)*param_2;
    bVar1 = *pcVar8 == '0';
    if (*param_1 != 0) {
      uVar4 = param_1[2];
      if (0x22 < uVar4 - 2) goto LAB_00fb4654;
      uVar9 = param_1[1];
      uVar7 = 0;
      uVar2 = 0;
      if (uVar4 < 0xb) {
        do {
          if (uVar4 <= (byte)pcVar8[uVar7] - 0x30) goto LAB_00fb45c4;
          if (uVar9 == uVar7) goto LAB_00fb4610;
          uVar2 = uVar4 * uVar2 + ((byte)pcVar8[uVar7] - 0x30);
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
      else {
        do {
          uVar3 = (uint)(byte)pcVar8[uVar7];
          uVar6 = uVar3 - 0x30;
          if (0x39 < uVar3) {
            uVar6 = (uVar3 - 0x41 & 0xffffffdf) + 10;
          }
          if (uVar4 <= uVar6) goto LAB_00fb45c4;
          if (uVar9 == uVar7) {
LAB_00fb4610:
            *param_2 = pcVar8 + uVar9 + 1;
            param_2[1] = uVar10 + ~uVar9;
            return ZEXT48(pcVar8 + uVar9 + 1) << 0x20;
          }
          uVar2 = uVar4 * uVar2 + uVar6;
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
      pcVar8 = pcVar8 + uVar10;
      iVar5 = 0;
      uVar7 = uVar10;
      goto LAB_00fb45d0;
    }
    uVar2 = param_1[2];
    if (0x22 < uVar2 - 2) {
LAB_00fb4654:
      *param_2 = pcVar8 + 1;
      param_2[1] = uVar10 - 1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("to_digit: invalid radix -- radix must be in the range 2 to 36 inclusive",0x8f,
                   &DAT_018811bc);
    }
    uVar7 = 0;
    uVar4 = 0;
    if (uVar2 < 0xb) {
      do {
        if (uVar2 <= (byte)pcVar8[uVar7] - 0x30) goto LAB_00fb4630;
        uVar4 = (uVar4 & 0xffff) * (uVar2 & 0xffff);
        bVar11 = uVar4 >> 0x10 != 0;
        if (!bVar11) {
          uVar4 = (uVar4 & 0xffff) + ((byte)pcVar8[uVar7] - 0x30 & 0xffff);
        }
        if (bVar11 || (uVar4 & 0x10000) != 0) goto LAB_00fb45a4;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    else {
      do {
        uVar3 = (uint)(byte)pcVar8[uVar7];
        uVar9 = uVar3 - 0x30;
        if (0x39 < uVar3) {
          uVar9 = (uVar3 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar2 <= uVar9) goto LAB_00fb4630;
        uVar4 = (uVar4 & 0xffff) * (uVar2 & 0xffff);
        bVar11 = uVar4 >> 0x10 != 0;
        if (!bVar11) {
          uVar4 = (uVar4 & 0xffff) + (uVar9 & 0xffff);
        }
        if (bVar11 || (uVar4 & 0x10000) != 0) goto LAB_00fb45a4;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    pcVar8 = pcVar8 + uVar10;
  }
  *param_2 = pcVar8;
  param_2[1] = 0;
  uVar9 = 1;
  uVar7 = uVar10;
  uVar2 = uVar4;
  goto joined_r0x00fb44e4;
LAB_00fb45c4:
  iVar5 = uVar10 - uVar7;
  pcVar8 = pcVar8 + uVar7;
LAB_00fb45d0:
  *param_2 = pcVar8;
  param_2[1] = iVar5;
  uVar9 = (uint)(uVar2 < 0x10000);
  goto joined_r0x00fb44e4;
LAB_00fb45a4:
  *param_2 = pcVar8 + uVar7 + 1;
  param_2[1] = ~uVar7 + uVar10;
  goto LAB_00fb45b8;
LAB_00fb4630:
  *param_2 = pcVar8 + uVar7;
  param_2[1] = uVar10 - uVar7;
  uVar9 = 1;
  uVar2 = uVar4;
joined_r0x00fb44e4:
  if (uVar7 != 0) {
    uVar10 = 0;
    if ((char)param_1[3] != '\0') {
      uVar10 = uVar9;
    }
    if (!bVar1) {
      uVar10 = uVar9;
    }
    if (uVar7 == 1) {
      uVar10 = uVar9;
    }
    return CONCAT44(uVar2,uVar10);
  }
LAB_00fb45b8:
  return (ulonglong)uVar2 << 0x20;
}

