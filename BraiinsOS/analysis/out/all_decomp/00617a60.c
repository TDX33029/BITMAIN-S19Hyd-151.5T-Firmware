// FUN_00617a60 @ 00617a60 size=2340 calls_out=0 calls_in=1
// strings: 

void FUN_00617a60(uint *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  
  if (param_3 == 0) {
    param_1[2] = (uint)param_2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = (uint)param_2;
    param_1[5] = 0;
    param_1[6] = (uint)param_2;
    param_1[7] = 0;
    param_1[8] = (uint)param_2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
    return;
  }
  if (param_3 < 4) {
    param_1[3] = (uint)param_2;
    param_1[4] = (uint)param_2;
    *(undefined1 *)(param_1 + 2) = 0x13;
    param_1[5] = 0;
    *(undefined1 *)param_1 = 10;
    return;
  }
  uVar3 = 2;
  puVar7 = param_2 + 1;
  uVar8 = *param_2;
  if (uVar8 != 2) {
    uVar3 = 5;
    if ((uVar8 & 0xffff) != 5) {
      *(undefined1 *)(param_1 + 2) = 0x11;
      *(undefined1 *)param_1 = 10;
      param_1[4] = uVar8 & 0xffff;
      param_1[5] = 0;
      return;
    }
  }
  uVar5 = param_3 & 0xfffffffc;
  if (uVar5 == 4) {
LAB_00617b0c:
    param_1[3] = (uint)puVar7;
    param_1[4] = (uint)puVar7;
    goto LAB_00617b18;
  }
  if (uVar5 == 8) {
    param_2 = param_2 + 2;
  }
  else {
    if (uVar5 != 0xc) {
      uVar13 = param_2[1];
      puVar12 = param_2 + 4;
      uVar4 = param_2[2];
      param_3 = param_3 - 0x10;
      uVar5 = param_2[3];
      if (uVar5 == 0) {
        uVar9 = 0;
        uVar10 = 0;
        puVar7 = puVar12;
joined_r0x00617bec:
        if (8 < uVar13) {
          *(undefined1 *)param_1 = 10;
          *(undefined1 *)(param_1 + 2) = 0x4a;
          return;
        }
        puVar2 = (uint *)((int)puVar7 + uVar9);
        uVar11 = param_3 - uVar9;
        local_2c = 0;
        local_28 = puVar2;
        if (uVar13 == 0) {
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
LAB_00617cf0:
          uVar6 = (uint)((ulonglong)uVar13 * (ulonglong)uVar4);
          uVar8 = (uint)((ulonglong)uVar13 * (ulonglong)uVar4 >> 0x20);
          if (uVar8 != 0 || uVar8 < (0x3fffffff < uVar6)) goto LAB_00617d1c;
          if (uVar11 < uVar6 << 2) {
            param_1[3] = (uint)local_28;
            param_1[4] = (uint)local_28;
          }
          else {
            uVar8 = uVar6 * 4;
            puVar2 = local_28 + uVar6;
            if (uVar8 <= uVar11 + uVar6 * -4) {
              param_1[0xc] = uVar5;
              param_1[8] = (uint)puVar2;
              param_1[9] = uVar8;
              param_1[10] = uVar13;
              *(undefined2 *)(param_1 + 0xd) = uVar3;
              param_1[0xb] = uVar4;
              param_1[3] = uVar10;
              param_1[7] = uVar8;
              param_1[1] = local_2c << 0x18 | local_48 << 0x10 | local_44 << 8 | local_40;
              param_1[2] = (uint)puVar12;
              param_1[4] = (uint)puVar7;
              param_1[5] = uVar9;
              param_1[6] = (uint)local_28;
              *param_1 = local_3c << 0x18 | local_38 << 0x10 | local_34 << 8 | local_30;
              return;
            }
            param_1[3] = (uint)puVar2;
            param_1[4] = (uint)puVar2;
          }
        }
        else {
          param_3 = param_3 - (uVar9 + uVar13 * 4);
          if (uVar8 == 2) {
            if (3 < uVar11) {
              uVar8 = *puVar2;
              uVar1 = 0x4e;
              if (7 < uVar8 - 1) goto LAB_00617e4c;
              local_30 = (uint)(byte)(&DAT_0056a99f)[uVar8];
              local_28 = puVar2 + 1;
              if (uVar13 == 1) {
                local_48 = 0;
                local_44 = 0;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                uVar11 = param_3;
                goto LAB_00617cf0;
              }
              uVar11 = uVar11 & 0xfffffffc;
              if (uVar11 != 4) {
                uVar8 = puVar2[1];
                if (7 < uVar8 - 1) {
                  uVar1 = 0x4e;
                  goto LAB_00617e4c;
                }
                local_28 = puVar2 + 2;
                local_34 = (uint)(byte)(&DAT_0056a99f)[uVar8];
                if (uVar13 == 2) {
                  local_48 = 0;
                  local_44 = 0;
                  local_40 = 0;
                  local_3c = 0;
                  local_38 = 0;
                }
                else {
                  if (uVar11 == 8) goto LAB_00617ee4;
                  uVar8 = puVar2[2];
                  if (7 < uVar8 - 1) {
LAB_006182bc:
                    uVar1 = 0x4e;
LAB_00617e4c:
                    param_1[3] = uVar8;
                    *(undefined1 *)(param_1 + 2) = uVar1;
                    *(undefined1 *)param_1 = 10;
                    return;
                  }
                  local_28 = puVar2 + 3;
                  local_38 = (uint)(byte)(&DAT_0056a99f)[uVar8];
                  if (uVar13 == 3) {
                    local_48 = 0;
                    local_44 = 0;
                    local_40 = 0;
                    local_3c = 0;
                  }
                  else {
                    if (uVar11 == 0xc) goto LAB_00617ee4;
                    uVar8 = puVar2[3];
                    if (7 < uVar8 - 1) goto LAB_006182bc;
                    local_28 = puVar2 + 4;
                    local_3c = (uint)(byte)(&DAT_0056a99f)[uVar8];
                    if (uVar13 == 4) {
                      local_48 = 0;
                      local_44 = 0;
                      local_40 = 0;
                    }
                    else {
                      if (uVar11 == 0x10) goto LAB_00617ee4;
                      uVar8 = puVar2[4];
                      if (7 < uVar8 - 1) goto LAB_006182bc;
                      local_28 = puVar2 + 5;
                      local_40 = (uint)(byte)(&DAT_0056a99f)[uVar8];
                      if (uVar13 == 5) {
                        local_48 = 0;
                        local_44 = 0;
                      }
                      else {
                        if (uVar11 == 0x14) goto LAB_00617ee4;
                        uVar8 = puVar2[5];
                        if (7 < uVar8 - 1) goto LAB_006182bc;
                        local_28 = puVar2 + 6;
                        local_44 = (uint)(byte)(&DAT_0056a99f)[uVar8];
                        if (uVar13 == 6) {
                          local_48 = 0;
                        }
                        else {
                          if (uVar11 == 0x18) goto LAB_00617ee4;
                          uVar8 = puVar2[6];
                          if (7 < uVar8 - 1) goto LAB_006182bc;
                          local_28 = puVar2 + 7;
                          local_48 = (uint)(byte)(&DAT_0056a99f)[uVar8];
                          if (uVar13 != 7) {
                            if (uVar11 == 0x1c) goto LAB_00617ee4;
                            uVar8 = *local_28;
                            uVar1 = 0x4e;
                            if (7 < uVar8 - 1) goto LAB_00617e4c;
                            local_2c = (uint)(byte)(&DAT_0056a99f)[uVar8];
                            local_28 = puVar2 + 8;
                          }
                        }
                      }
                    }
                  }
                }
                uVar11 = param_3;
                goto LAB_00617cf0;
              }
            }
          }
          else if (3 < uVar11) {
            local_28 = puVar2 + 1;
            uVar8 = *puVar2;
            if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0)) {
              uVar1 = 0x4d;
              goto LAB_00617e4c;
            }
            local_30 = (uint)(byte)(&DAT_0056a33f)[uVar8];
            if (uVar13 == 1) {
              local_48 = 0;
              local_44 = 0;
              local_40 = 0;
              local_3c = 0;
              local_38 = 0;
              local_34 = 0;
              goto LAB_00617d9c;
            }
            uVar11 = uVar11 & 0xfffffffc;
            if (uVar11 != 4) {
              uVar8 = puVar2[1];
              if (7 < uVar8 - 1) {
LAB_00618370:
                uVar1 = 0x4d;
                goto LAB_00617e4c;
              }
              if ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0) {
                uVar1 = 0x4d;
                goto LAB_00617e4c;
              }
              local_28 = puVar2 + 2;
              local_34 = (uint)(byte)(&DAT_0056a33f)[uVar8];
              if (uVar13 == 2) {
                local_48 = 0;
                local_44 = 0;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
              }
              else {
                if (uVar11 == 8) goto LAB_00617ee4;
                uVar8 = puVar2[2];
                if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0)) {
LAB_00618378:
                  uVar1 = 0x4d;
                  goto LAB_00617e4c;
                }
                local_28 = puVar2 + 3;
                local_38 = (uint)(byte)(&DAT_0056a33f)[uVar8];
                if (uVar13 == 3) {
                  local_48 = 0;
                  local_44 = 0;
                  local_40 = 0;
                  local_3c = 0;
                }
                else {
                  if (uVar11 == 0xc) goto LAB_00617ee4;
                  uVar8 = puVar2[3];
                  if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0))
                  goto LAB_00618378;
                  local_28 = puVar2 + 4;
                  local_3c = (uint)(byte)(&DAT_0056a33f)[uVar8];
                  if (uVar13 == 4) {
                    local_48 = 0;
                    local_44 = 0;
                    local_40 = 0;
                  }
                  else {
                    if (uVar11 == 0x10) goto LAB_00617ee4;
                    uVar8 = puVar2[4];
                    if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0))
                    goto LAB_00618378;
                    local_28 = puVar2 + 5;
                    local_40 = (uint)(byte)(&DAT_0056a33f)[uVar8];
                    if (uVar13 == 5) {
                      local_48 = 0;
                      local_44 = 0;
                    }
                    else {
                      if (uVar11 == 0x14) goto LAB_00617ee4;
                      uVar8 = puVar2[5];
                      if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0))
                      goto LAB_00618378;
                      local_28 = puVar2 + 6;
                      local_44 = (uint)(byte)(&DAT_0056a33f)[uVar8];
                      if (uVar13 == 6) {
                        local_48 = 0;
                      }
                      else {
                        if (uVar11 == 0x18) goto LAB_00617ee4;
                        uVar8 = puVar2[6];
                        if ((7 < uVar8 - 1) || ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0))
                        goto LAB_00618378;
                        local_28 = puVar2 + 7;
                        local_48 = (uint)(byte)(&DAT_0056a33f)[uVar8];
                        if (uVar13 != 7) {
                          if (uVar11 == 0x1c) goto LAB_00617ee4;
                          uVar8 = *local_28;
                          if (7 < uVar8 - 1) goto LAB_00618370;
                          uVar1 = 0x4d;
                          if ((0xfdU >> (uVar8 - 1 & 0xff) & 1) == 0) goto LAB_00617e4c;
                          local_2c = (uint)(byte)(&DAT_0056a33f)[uVar8];
                          local_28 = puVar2 + 8;
                        }
                      }
                    }
                  }
                }
              }
LAB_00617d9c:
              uVar11 = param_3;
              goto LAB_00617cf0;
            }
          }
LAB_00617ee4:
          param_1[3] = (uint)local_28;
          param_1[4] = (uint)local_28;
        }
LAB_00617b18:
        param_1[5] = 0;
        uVar1 = 0x13;
      }
      else {
        if ((uVar5 <= uVar4) || ((uVar5 & uVar5 - 1) != 0)) {
          *(undefined1 *)param_1 = 10;
          *(undefined1 *)(param_1 + 2) = 0x4b;
          return;
        }
        if (uVar5 < 0x20000000) {
          uVar10 = uVar5 * 8;
          if (param_3 < uVar10) {
            param_1[3] = (uint)puVar12;
            param_1[4] = (uint)puVar12;
            goto LAB_00617b18;
          }
          param_3 = param_3 + uVar5 * -8;
          puVar7 = puVar12 + uVar5 * 2;
          if (param_3 < uVar5 << 2) goto LAB_00617b0c;
          uVar9 = uVar5 << 2;
          goto joined_r0x00617bec;
        }
LAB_00617d1c:
        uVar1 = 0x38;
      }
      goto LAB_00617b74;
    }
    param_2 = param_2 + 3;
  }
  param_1[4] = (uint)param_2;
  param_1[3] = (uint)param_2;
  uVar1 = 0x13;
  param_1[5] = 0;
LAB_00617b74:
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)param_1 = 10;
  return;
}

