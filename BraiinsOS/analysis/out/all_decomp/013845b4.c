// FUN_013845b4 @ 013845b4 size=984 calls_out=6 calls_in=1
// strings: 

byte FUN_013845b4(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  
  bVar3 = 0;
  bVar2 = 0;
  if (param_3 != 0) {
    if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3,param_2,&DAT_01893d10);
    }
    uVar6 = param_3 - 1;
    uVar5 = param_3 - 4;
    if (param_3 < 4) {
      uVar5 = 0;
    }
    uVar9 = uVar6;
    uVar8 = uVar6;
    if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    do {
      uVar7 = uVar9;
      if (uVar7 <= uVar5) {
        uVar7 = uVar8;
        goto LAB_01384620;
      }
      if (param_3 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_3,&DAT_01893d30);
      }
      uVar9 = uVar7 - 1;
    } while (*(char *)(param_1 + uVar7) < -0x40);
LAB_01384620:
    if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar7,param_3,param_3,&DAT_01893d40);
    }
    if (param_3 == uVar7) {
      return 0;
    }
    bVar2 = *(byte *)(param_1 + uVar7);
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xc0) {
        return 0;
      }
      uVar9 = 2;
      if (0xdf < bVar2) {
        uVar9 = 3;
      }
      if ((0xef < bVar2) && (uVar9 = 4, 0xf7 < bVar2)) {
        return 0;
      }
      if (param_3 - uVar7 < uVar9) {
        return 0;
      }
      FUN_00fab1e0(&local_38,(byte *)(param_1 + uVar7),uVar9);
      if (local_38 == 1) {
        return 0;
      }
      local_28 = iStack_34 + iStack_30;
      local_2c = iStack_34;
      uVar9 = FUN_00f65b48(&local_2c);
      if ((uVar9 & 1) == 0) goto LAB_01384950;
    }
    do {
      uVar9 = uVar6;
      if (uVar9 <= uVar5) goto LAB_0138466c;
      if (param_3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,param_3,&DAT_01893d30);
      }
      uVar6 = uVar9 - 1;
    } while (*(char *)(param_1 + uVar9) < -0x40);
    uVar8 = uVar9;
LAB_0138466c:
    if (param_3 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar8,param_3,param_3,&DAT_01893d40);
    }
    bVar2 = 0;
    if (param_3 != uVar8) {
      bVar1 = *(byte *)(param_1 + uVar8);
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (0xbf < uVar6) {
          uVar5 = 2;
          if (0xdf < uVar6) {
            uVar5 = 3;
          }
          if ((((uVar6 < 0xf0) || (uVar5 = 4, uVar6 < 0xf8)) && (uVar5 <= param_3 - uVar8)) &&
             (FUN_00fab1e0(&local_38,(byte *)(param_1 + uVar8),uVar5), local_38 != 1)) {
            local_28 = iStack_34 + iStack_30;
            local_2c = iStack_34;
            uVar10 = FUN_00f65b48(&local_2c);
            uVar6 = (uint)(uVar10 >> 0x20);
            if ((uVar10 & 1) == 0) goto LAB_01384950;
            goto LAB_01384694;
          }
        }
      }
      else {
LAB_01384694:
        bVar2 = FUN_013fbc60(uVar6);
      }
    }
  }
  if (param_3 < param_2) {
    pbVar4 = (byte *)(param_1 + param_3);
    uVar6 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') {
      if (uVar6 < 0xc0) {
        return 0;
      }
      uVar5 = 2;
      if (0xdf < uVar6) {
        uVar5 = 3;
      }
      if ((0xef < uVar6) && (uVar5 = 4, 0xf7 < uVar6)) {
        return 0;
      }
      if (param_2 - param_3 < uVar5) {
        return 0;
      }
      FUN_00fab1e0(&local_38,pbVar4,uVar5);
      if (local_38 != 0) {
        return 0;
      }
      local_28 = iStack_34 + iStack_30;
      local_2c = iStack_34;
      uVar5 = FUN_00f65b48(&local_2c);
      if ((uVar5 & 1) == 0) {
LAB_01384950:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893d50);
      }
      uVar5 = 4;
      if (uVar6 < 0xf0) {
        uVar5 = 3;
      }
      if (uVar6 < 0xe0) {
        uVar5 = 2;
      }
      bVar3 = 0;
      if ((param_2 - param_3 < uVar5) || (FUN_00fab1e0(&local_38,pbVar4), local_38 == 1))
      goto LAB_01384818;
      local_28 = iStack_34 + iStack_30;
      local_2c = iStack_34;
      uVar10 = FUN_00f65b48(&local_2c);
      uVar6 = (uint)(uVar10 >> 0x20);
      if ((uVar10 & 1) == 0) goto LAB_01384950;
    }
    bVar3 = FUN_013fbc60(uVar6);
  }
LAB_01384818:
  return bVar2 ^ bVar3 ^ 1;
}

