// FUN_01ae9b18 @ 01ae9b18 size=1328 calls_out=4 calls_in=1
// strings: internal error: entered unreachable code

void FUN_01ae9b18(undefined2 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int extraout_r2;
  uint uVar15;
  int extraout_r3;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int local_54;
  uint local_50;
  uint local_4c;
  char local_48;
  undefined1 local_47;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined1 local_37;
  uint local_30;
  int local_2c;
  
  uVar17 = param_2[1];
  uVar18 = param_2[2];
  if (uVar17 <= uVar18) goto switchD_01ae9bac_default;
  local_54 = *param_2;
  uVar15 = uVar18 + 1;
  param_2[2] = uVar15;
  uVar13 = (uint)*(byte *)(local_54 + uVar18);
  if (((~uVar13 & 0x1f) == 0) || (uVar17 <= uVar15)) goto switchD_01ae9bac_default;
  bVar1 = *(byte *)(local_54 + uVar15);
  local_50 = (uint)bVar1;
  uVar15 = uVar18 + 2;
  param_2[2] = uVar15;
  if ((char)bVar1 < '\0') {
    switch(local_50) {
    case 0x81:
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar1 = *(byte *)(local_54 + uVar15);
      local_50 = (uint)bVar1;
      uVar15 = uVar18 + 3;
      param_2[2] = uVar15;
      if (-1 < (char)bVar1) goto switchD_01ae9bac_default;
      goto LAB_01ae9b6c;
    case 0x82:
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      cVar5 = *(char *)(local_54 + uVar15);
      uVar15 = uVar18 + 3;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      uVar12 = *(undefined1 *)(local_54 + uVar15);
      uVar15 = uVar18 + 4;
      param_2[2] = uVar15;
      if (cVar5 == '\0') goto switchD_01ae9bac_default;
      local_50 = (uint)CONCAT11(cVar5,uVar12);
      break;
    case 0x83:
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar1 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 3;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar2 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 4;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar3 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 5;
      param_2[2] = uVar15;
      if (bVar1 == 0) goto switchD_01ae9bac_default;
      local_50 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
      break;
    case 0x84:
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar1 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 3;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar2 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 4;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar3 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 5;
      param_2[2] = uVar15;
      if (uVar17 <= uVar15) goto switchD_01ae9bac_default;
      bVar4 = *(byte *)(local_54 + uVar15);
      uVar15 = uVar18 + 6;
      param_2[2] = uVar15;
      if (bVar1 == 0) goto switchD_01ae9bac_default;
      local_50 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_01ae9bac_default;
    }
    if (0xfffe < local_50) goto switchD_01ae9bac_default;
  }
LAB_01ae9b6c:
  uVar18 = local_50 + uVar15;
  if (CARRY4(local_50,uVar15)) {
switchD_01ae9bac_default:
    *param_1 = 1;
    return;
  }
  bVar20 = uVar17 <= uVar18;
  if (uVar18 <= uVar17) {
    param_2[2] = uVar18;
    bVar20 = 1 < uVar13 - 0x17;
  }
  if (bVar20) goto switchD_01ae9bac_default;
  local_54 = local_54 + uVar15;
  local_4c = 0;
  if (uVar13 == 0x17) {
    FUN_01ae9a7c(&local_38,&local_54,0,0,99,0);
    if (local_38 == '\0') {
      uVar18 = 2000;
      iVar16 = 0;
      if ((uint)(local_30 < 0x32) <= (uint)-local_2c) {
        uVar18 = 0x76c;
      }
      goto LAB_01ae9dc0;
    }
  }
  else {
    FUN_01ae9a7c(&local_38,&local_54,0,0,99,0);
    iVar16 = local_2c;
    uVar17 = local_30;
    if ((local_38 == '\0') && (FUN_01ae9a7c(&local_38,&local_54,0,0,99,0), local_38 != '\x01')) {
      uVar18 = (uint)((ulonglong)uVar17 * 100);
      iVar16 = iVar16 * 100 + (int)((ulonglong)uVar17 * 100 >> 0x20);
LAB_01ae9dc0:
      iVar8 = local_2c;
      uVar17 = local_30;
      FUN_01ae9a7c(&local_38,&local_54,1,0,0xc,0);
      iVar9 = local_2c;
      uVar13 = local_30;
      uVar15 = uVar18 + uVar17;
      iVar16 = iVar16 + iVar8 + (uint)CARRY4(uVar18,uVar17);
      if (local_38 == '\0') {
        if ((uint)(local_30 < 0xd) <= (uint)-local_2c) {
LAB_01aea040:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d301d0);
        }
        uVar14 = 0x1f;
        if ((1 << (local_30 & 0xff) & 0x15aaU) == 0) {
          if ((1 << (local_30 & 0xff) & 0xa50U) == 0) {
            if (local_30 != 2) goto LAB_01aea040;
            if ((uVar17 & 3) == 0) {
              FUN_01bf0ff0(uVar15,iVar16,400,0);
              uVar18 = (uint)((ulonglong)uVar15 * 0xc28f5c29);
              uVar17 = iVar16 * -0x3d70a3d7 +
                       uVar15 * -0x70a3d70b + (int)((ulonglong)uVar15 * 0xc28f5c29 >> 0x20);
              uVar19 = uVar18 << 0x1e | uVar17 >> 2;
              uVar14 = 0x1d;
              if ((0x28f5c27 < uVar19 &&
                   (uint)((uVar17 * 0x40000000 | uVar18 >> 2) < 0xf5c28f5d) <= 0x28f5c28 - uVar19)
                 || (extraout_r2 == 0 && extraout_r3 == 0)) goto LAB_01ae9e2c;
            }
            uVar14 = 0x1c;
          }
          else {
            uVar14 = 0x1e;
          }
        }
LAB_01ae9e2c:
        FUN_01ae9a7c(&local_38,&local_54,1,0,uVar14,0);
        iVar8 = local_2c;
        uVar17 = local_30;
        if (local_38 != '\x01') {
          FUN_01ae9a7c(&local_38,&local_54,0,0,0x17,0);
          iVar10 = local_2c;
          uVar18 = local_30;
          if (local_38 != '\x01') {
            FUN_01ae9a7c(&local_38,&local_54,0,0,0x3b,0);
            iVar11 = local_2c;
            uVar19 = local_30;
            if (local_38 != '\x01') {
              FUN_01ae9a7c(&local_38,&local_54,0,0,0x3b,0);
              uVar7 = local_4c;
              uVar6 = local_50;
              if (((local_38 != '\x01') && (local_37 = 1, local_4c < local_50)) &&
                 (*(char *)(local_54 + local_4c) == 'Z')) {
                FUN_01ae873c(&local_48,local_2c,uVar15,iVar16,uVar13,iVar9,uVar17,iVar8,uVar18,
                             iVar10,uVar19,iVar11,local_30,local_2c);
                if (local_48 == '\x01') {
                  local_37 = local_47;
                }
                else {
                  if (uVar7 + 1 == uVar6) {
                    *(undefined4 *)(param_1 + 4) = local_40;
                    *(undefined4 *)(param_1 + 6) = local_3c;
                    uVar12 = 0;
                    goto LAB_01ae9f0c;
                  }
                  local_37 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((int)param_1 + 1) = local_37;
  uVar12 = 1;
LAB_01ae9f0c:
  *(undefined1 *)param_1 = uVar12;
  return;
}

