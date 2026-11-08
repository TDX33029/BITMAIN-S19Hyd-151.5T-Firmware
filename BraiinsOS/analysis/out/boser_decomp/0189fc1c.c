// FUN_0189fc1c @ 0189fc1c size=728 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code

undefined1 * FUN_0189fc1c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  char *local_54;
  int local_50;
  char local_4c;
  byte local_4b [3];
  byte *local_48;
  int local_44;
  undefined4 local_40;
  char **local_3c;
  byte *local_38;
  byte **local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  code *local_28;
  
  uVar1 = param_1[4];
  if ((uint)param_1[1] < uVar1) {
    return (undefined1 *)0x110001;
  }
  pbVar3 = (byte *)*param_1;
  iVar9 = param_1[1] - uVar1;
  *param_1 = pbVar3 + uVar1;
  param_1[1] = iVar9;
  if (uVar1 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21f7c);
  }
  uVar4 = (uint)*pbVar3;
  uVar2 = uVar4 - 0x30;
  if (0x39 < uVar4) {
    uVar2 = (uVar4 - 0x41 & 0xffffffdf) + 10;
  }
  if (uVar2 < 0x10) {
    uVar5 = (uint)pbVar3[1];
    uVar4 = uVar5 - 0x30;
    if (0x39 < uVar5) {
      uVar4 = (uVar5 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar4 < 0x10) {
      uVar4 = uVar4 | uVar2 << 4;
      local_4c = (char)uVar4;
      if (local_4c < '\0') {
        if (uVar4 < 0xc0) {
          return &DAT_00110000;
        }
        local_50 = 2;
        if (0xdf < uVar4) {
          local_50 = 3;
        }
        if ((0xef < uVar4) && (local_50 = 4, 0xf7 < uVar4)) {
          return &DAT_00110000;
        }
        pbVar8 = pbVar3 + uVar1 + 1;
        iVar6 = 0;
        local_4b[2] = 0;
        local_4b[0] = 0;
        local_4b[1] = 0;
        pbVar3 = local_4b;
        do {
          local_54 = &local_4c;
          if ((uint)(iVar9 + iVar6) < 2) goto LAB_0189fce4;
          uVar1 = (uint)pbVar8[-1];
          *param_1 = pbVar8 + 1;
          param_1[1] = iVar9 + -2 + iVar6;
          uVar2 = uVar1 - 0x30;
          if (0x39 < uVar1) {
            uVar2 = (uVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar2) goto LAB_0189fe68;
          uVar1 = (uint)*pbVar8;
          uVar4 = uVar1 - 0x30;
          if (0x39 < uVar1) {
            uVar4 = (uVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar4) goto LAB_0189fe68;
          *pbVar3 = (byte)uVar4 | (byte)(uVar2 << 4);
          iVar6 = iVar6 + -2;
          pbVar8 = pbVar8 + 2;
          pbVar3 = pbVar3 + 1;
        } while (local_50 * 2 + -2 + iVar6 != 0);
      }
      else {
        local_50 = 1;
        local_4b[2] = 0;
        local_4b[0] = 0;
        local_4b[1] = 0;
      }
      local_54 = &local_4c;
      FUN_012fbd94(&local_3c,local_54);
      if (local_3c == (char **)0x0) {
        local_44 = (int)local_34;
        local_48 = local_38;
        pbVar3 = (byte *)0x0;
        if (local_34 != (byte **)0x0) {
          pbVar3 = local_38 + 1;
          puVar7 = (undefined1 *)(uint)*local_38;
          if (0x7fffffff < (uint)(int)(char)*local_38) {
            if (puVar7 < (undefined1 *)0xe0) {
              puVar7 = (undefined1 *)(local_38[1] & 0x3f | ((uint)puVar7 & 0x1f) << 6);
              pbVar3 = local_38 + 2;
            }
            else {
              uVar1 = local_38[2] & 0x3f | (local_38[1] & 0x3f) << 6;
              if (puVar7 < (undefined1 *)0xf0) {
                puVar7 = (undefined1 *)(uVar1 | ((uint)puVar7 & 0x1f) << 0xc);
                pbVar3 = local_38 + 3;
              }
              else {
                puVar7 = (undefined1 *)
                         (local_38[3] & 0x3f | uVar1 << 6 | ((uint)puVar7 & 7) << 0x12);
                pbVar3 = local_38 + 4;
              }
            }
          }
          if (pbVar3 == local_38 + (int)local_34) {
            if (puVar7 != &DAT_00110000) {
              return puVar7;
            }
          }
          else {
            pbVar3 = (byte *)(int)(char)*pbVar3;
          }
        }
        local_40 = FUN_0189fff0(local_38,local_38 + (int)local_34,pbVar3);
        local_2c = &local_40;
        local_34 = &local_48;
        local_28 = FUN_012fd02c;
        local_3c = &local_54;
        local_30 = &LAB_018a0040;
        local_38 = &DAT_018a0034;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005b09e6,&local_3c,&DAT_01d21f9c);
      }
LAB_0189fce4:
      return &DAT_00110000;
    }
  }
LAB_0189fe68:
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d21f8c);
}

