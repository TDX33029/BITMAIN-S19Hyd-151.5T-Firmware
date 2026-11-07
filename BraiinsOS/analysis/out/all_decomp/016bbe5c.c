// FUN_016bbe5c @ 016bbe5c size=1168 calls_out=1 calls_in=2
// strings: 

void FUN_016bbe5c(undefined1 *param_1,char *param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_40;
  uint local_3c;
  ushort local_38 [10];
  
  uVar10 = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_3 < 2) goto LAB_016bbe80;
  uVar11 = 0;
  if (*param_2 == ':') {
    if (param_2[1] != ':') goto LAB_016bbe80;
    uVar11 = 1;
    uVar10 = 2;
  }
  local_3c = uVar11;
  if (uVar10 < param_3) {
    local_40 = 1;
    do {
      uVar12 = uVar11;
      if (uVar11 < 9) {
        uVar12 = 8;
      }
      while( true ) {
        if (uVar11 == 8) goto LAB_016bbe80;
        if (param_2[uVar10] == ':') break;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = uVar10 + 4;
        if (param_3 <= uVar10 + 4) {
          uVar6 = param_3;
        }
        uVar5 = uVar10;
        if (uVar10 < uVar6) {
          do {
            uVar7 = (ushort)uVar8;
            uVar4 = (uint)(byte)param_2[uVar5];
            uVar3 = uVar4 - 0x30;
            if (0x39 < uVar4) {
              uVar3 = (uVar4 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar3) goto LAB_016bbf4c;
            uVar5 = uVar5 + 1;
            uVar8 = uVar3 | uVar8 << 4;
            uVar7 = (ushort)uVar8;
          } while (uVar6 != uVar5);
          uVar5 = uVar6;
        }
LAB_016bbf4c:
        if (uVar5 < param_3) {
          if (param_2[uVar5] != ':') {
            if ((param_2[uVar5] != '.') || (uVar5 == uVar10)) goto LAB_016bbe80;
            bVar13 = 5 < uVar11;
            if (uVar11 < 7) {
              bVar13 = param_3 <= uVar10;
            }
            if (bVar13) goto LAB_016bbe80;
            uVar12 = 0;
            goto LAB_016bc1dc;
          }
          uVar5 = uVar5 + 1;
          if (uVar5 == param_3) goto LAB_016bbe80;
        }
        if (uVar11 == uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar12,8,&DAT_018af0b0);
        }
        puVar1 = local_38 + uVar11;
        uVar11 = uVar11 + 1;
        *puVar1 = uVar7;
        uVar10 = uVar5;
        if (param_3 <= uVar5) goto LAB_016bbfc8;
      }
      if (local_3c == 1) goto LAB_016bbe80;
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + 1;
      local_3c = 1;
      local_40 = uVar11;
    } while (uVar10 < param_3);
    goto LAB_016bc148;
  }
  local_40 = 1;
  goto LAB_016bbfc8;
LAB_016bc1dc:
  do {
    if (0 < (int)uVar12) {
      if ((3 < uVar12) || (param_2[uVar10] != '.')) goto LAB_016bbe80;
      uVar10 = uVar10 + 1;
    }
    if ((param_3 <= uVar10) || (uVar7 = (byte)param_2[uVar10] - 0x30 & 0xff, 9 < uVar7))
    goto LAB_016bbe80;
    uVar6 = uVar10 + 1;
    uVar10 = param_3;
    if (uVar6 != param_3) {
      do {
        if (9 < (byte)(param_2[uVar6] - 0x30U)) {
          uVar10 = uVar6;
          break;
        }
        if ((uVar7 == 0) ||
           (uVar7 = uVar7 * 10 + (ushort)(byte)(param_2[uVar6] - 0x30), 0xff < uVar7))
        goto LAB_016bbe80;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
    if (7 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,8,&DAT_018af0d0);
    }
    local_38[uVar11] = uVar7 + local_38[uVar11] * 0x100;
    uVar6 = uVar12 | 2;
    uVar12 = uVar12 + 1;
    if (uVar6 == 3) {
      uVar11 = uVar11 + 1;
    }
  } while (uVar10 < param_3);
  if (uVar12 != 4) goto LAB_016bbe80;
LAB_016bbfc8:
  uVar7 = local_38[7];
  if (local_3c == 0) {
    if (uVar11 != 8) {
LAB_016bbe80:
      param_1[1] = 4;
      *param_1 = 1;
      return;
    }
  }
  else {
    iVar2 = uVar11 - local_40;
    if (iVar2 != 0) {
      uVar11 = uVar11 - 1;
      if (7 < uVar11) {
LAB_016bc2c4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,8,&DAT_018af0c0);
      }
      local_38[7] = local_38[uVar11];
      local_38[uVar11] = uVar7;
      uVar7 = local_38[6];
      if (iVar2 + -1 != 0) {
        iVar9 = local_40 - 1;
        uVar11 = iVar9 + iVar2 + -1;
        if (7 < uVar11) goto LAB_016bc2c4;
        local_38[6] = local_38[uVar11];
        local_38[uVar11] = uVar7;
        uVar7 = local_38[5];
        if (iVar2 + -2 != 0) {
          uVar11 = iVar9 + iVar2 + -2;
          if (7 < uVar11) goto LAB_016bc2c4;
          local_38[5] = local_38[uVar11];
          local_38[uVar11] = uVar7;
          uVar7 = local_38[4];
          if (iVar2 + -3 != 0) {
            uVar11 = iVar9 + iVar2 + -3;
            if (7 < uVar11) goto LAB_016bc2c4;
            local_38[4] = local_38[uVar11];
            local_38[uVar11] = uVar7;
            uVar7 = local_38[3];
            if (iVar2 + -4 != 0) {
              uVar11 = iVar9 + iVar2 + -4;
              if (7 < uVar11) goto LAB_016bc2c4;
              local_38[3] = local_38[uVar11];
              local_38[uVar11] = uVar7;
              uVar7 = local_38[2];
              if (iVar2 + -5 != 0) {
                uVar11 = iVar9 + iVar2 + -5;
                if (7 < uVar11) goto LAB_016bc2c4;
                local_38[2] = local_38[uVar11];
                local_38[uVar11] = uVar7;
                uVar7 = local_38[1];
                if (iVar2 + -6 != 0) {
                  uVar11 = iVar9 + iVar2 + -6;
                  if (7 < uVar11) goto LAB_016bc2c4;
                  local_38[1] = local_38[uVar11];
                  local_38[uVar11] = uVar7;
                  if (iVar2 + -7 != 0) {
                    uVar11 = iVar9 + iVar2 + -7;
                    if (7 < uVar11) goto LAB_016bc2c4;
                    uVar7 = local_38[uVar11];
                    local_38[uVar11] = local_38[0];
                    local_38[0] = uVar7;
                    if (iVar2 != 8) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(0xffffffff,8,&DAT_018af0c0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_016bc148:
  *(ushort *)(param_1 + 0xf) = local_38[7] << 8 | local_38[7] >> 8;
  *(ushort *)(param_1 + 0xd) = local_38[6] << 8 | local_38[6] >> 8;
  *(ushort *)(param_1 + 0xb) = local_38[5] << 8 | local_38[5] >> 8;
  *(ushort *)(param_1 + 9) = local_38[4] << 8 | local_38[4] >> 8;
  *(ushort *)(param_1 + 7) = local_38[3] << 8 | local_38[3] >> 8;
  *(ushort *)(param_1 + 5) = local_38[2] << 8 | local_38[2] >> 8;
  *(ushort *)(param_1 + 3) = local_38[1] << 8 | local_38[1] >> 8;
  *(ushort *)(param_1 + 1) = local_38[0] << 8 | local_38[0] >> 8;
  *param_1 = 0;
  return;
}

