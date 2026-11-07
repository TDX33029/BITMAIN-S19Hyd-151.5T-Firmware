// FUN_015e1b9c @ 015e1b9c size=2172 calls_out=0 calls_in=1
// strings: 

void FUN_015e1b9c(uint *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_38;
  uint local_30;
  uint local_24;
  
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
  uVar10 = *param_2;
  if (uVar10 != 2) {
    uVar3 = 5;
    if ((uVar10 & 0xffff) != 5) {
      uVar1 = 0x11;
      param_1[4] = uVar10 & 0xffff;
      param_1[5] = 0;
      goto LAB_015e1ca0;
    }
  }
  uVar5 = param_3 & 0xfffffffc;
  if (uVar5 == 4) {
    param_1[3] = (uint)(param_2 + 1);
    param_1[4] = (uint)(param_2 + 1);
    goto LAB_015e1c54;
  }
  if (uVar5 == 8) {
    param_2 = param_2 + 2;
  }
  else {
    if (uVar5 != 0xc) {
      uVar14 = param_2[1];
      puVar4 = param_2 + 4;
      uVar9 = param_2[2];
      param_3 = param_3 - 0x10;
      uVar5 = param_2[3];
      if (uVar5 == 0) {
        uVar16 = 0;
        uVar6 = 0;
        puVar13 = puVar4;
joined_r0x015e1d18:
        if (8 < uVar14) {
          *(undefined1 *)param_1 = 10;
          *(undefined1 *)(param_1 + 2) = 0x4a;
          return;
        }
        puVar12 = (uint *)((int)puVar13 + uVar16);
        local_38 = param_3 - uVar16;
        local_30 = 0;
        if (uVar14 == 0) {
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_24 = 0;
        }
        else {
          iVar7 = uVar16 + uVar14 * 4;
          puVar15 = (uint *)(iVar7 + (int)puVar13);
          param_3 = param_3 - iVar7;
          if (uVar10 == 2) {
            if (local_38 < 4) {
LAB_015e2000:
              puVar11 = puVar12;
            }
            else {
              uVar1 = 0x4e;
              uVar10 = *puVar12;
              if (7 < uVar10 - 1) {
LAB_015e21b8:
                param_1[3] = uVar10;
                *(undefined1 *)(param_1 + 2) = uVar1;
                *(undefined1 *)param_1 = 10;
                return;
              }
              local_24 = (uint)(byte)(&DAT_0056a99f)[uVar10];
              if (uVar14 == 1) goto LAB_015e2064;
              local_38 = local_38 & 0xfffffffc;
              puVar11 = puVar12 + 1;
              if (local_38 != 4) {
                uVar10 = puVar12[1];
                if (7 < uVar10 - 1) goto LAB_015e21b8;
                local_44 = (uint)(byte)(&DAT_0056a99f)[uVar10];
                if (uVar14 == 2) {
LAB_015e2188:
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  local_4c = 0;
                  local_48 = 0;
                }
                else {
                  if (local_38 == 8) {
LAB_015e21d8:
                    puVar11 = puVar12 + 2;
                    goto LAB_015e2004;
                  }
                  uVar10 = puVar12[2];
                  if (7 < uVar10 - 1) goto LAB_015e21b8;
                  local_48 = (uint)(byte)(&DAT_0056a99f)[uVar10];
                  if (uVar14 == 3) {
LAB_015e2228:
                    local_58 = 0;
                    local_54 = 0;
                    local_50 = 0;
                    local_4c = 0;
                  }
                  else {
                    if (local_38 == 0xc) {
LAB_015e2248:
                      puVar11 = puVar12 + 3;
                      goto LAB_015e2004;
                    }
                    uVar10 = puVar12[3];
                    if (7 < uVar10 - 1) goto LAB_015e21b8;
                    local_4c = (uint)(byte)(&DAT_0056a99f)[uVar10];
                    if (uVar14 == 4) {
LAB_015e2298:
                      local_58 = 0;
                      local_54 = 0;
                      local_50 = 0;
                    }
                    else {
                      if (local_38 == 0x10) {
LAB_015e22b4:
                        puVar11 = puVar12 + 4;
                        goto LAB_015e2004;
                      }
                      uVar10 = puVar12[4];
                      if (7 < uVar10 - 1) goto LAB_015e21b8;
                      local_50 = (uint)(byte)(&DAT_0056a99f)[uVar10];
                      if (uVar14 == 5) {
LAB_015e2304:
                        local_58 = 0;
                        local_54 = 0;
                      }
                      else {
                        if (local_38 == 0x14) {
LAB_015e231c:
                          puVar11 = puVar12 + 5;
                          goto LAB_015e2004;
                        }
                        uVar10 = puVar12[5];
                        if (7 < uVar10 - 1) goto LAB_015e21b8;
                        local_54 = (uint)(byte)(&DAT_0056a99f)[uVar10];
                        if (uVar14 == 6) {
LAB_015e236c:
                          local_58 = 0;
                        }
                        else {
                          if (local_38 == 0x18) {
LAB_015e2380:
                            puVar11 = puVar12 + 6;
                            goto LAB_015e2004;
                          }
                          uVar10 = puVar12[6];
                          if (7 < uVar10 - 1) goto LAB_015e21b8;
                          local_58 = (uint)(byte)(&DAT_0056a99f)[uVar10];
                          if (uVar14 != 7) {
                            puVar11 = puVar12 + 7;
                            if (local_38 == 0x1c) goto LAB_015e2004;
                            uVar10 = puVar12[7];
                            uVar2 = uVar10 - 1;
                            if (7 < uVar2) goto LAB_015e21b8;
                            puVar8 = &UNK_0056a9a0;
LAB_015e240c:
                            local_30 = (uint)(byte)puVar8[uVar2];
                          }
                        }
                      }
                    }
                  }
                }
LAB_015e21a0:
                puVar12 = puVar15;
                local_38 = param_3;
                goto LAB_015e1fc0;
              }
            }
LAB_015e2004:
            param_1[3] = (uint)puVar11;
            param_1[4] = (uint)puVar11;
            goto LAB_015e1c54;
          }
          if (local_38 < 4) goto LAB_015e2000;
          uVar1 = 0x4d;
          puVar11 = puVar12 + 1;
          uVar10 = *puVar12;
          if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
          local_24 = (uint)(byte)(&DAT_0056a33f)[uVar10];
          if (uVar14 != 1) {
            local_38 = local_38 & 0xfffffffc;
            if (local_38 != 4) {
              uVar10 = puVar12[1];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_44 = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 2) goto LAB_015e2188;
              if (local_38 == 8) goto LAB_015e21d8;
              uVar10 = puVar12[2];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_48 = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 3) goto LAB_015e2228;
              if (local_38 == 0xc) goto LAB_015e2248;
              uVar10 = puVar12[3];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_4c = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 4) goto LAB_015e2298;
              if (local_38 == 0x10) goto LAB_015e22b4;
              uVar10 = puVar12[4];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_50 = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 5) goto LAB_015e2304;
              if (local_38 == 0x14) goto LAB_015e231c;
              uVar10 = puVar12[5];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_54 = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 6) goto LAB_015e236c;
              if (local_38 == 0x18) goto LAB_015e2380;
              uVar10 = puVar12[6];
              if ((7 < uVar10 - 1) || ((0xfdU >> (uVar10 - 1 & 0xff) & 1) == 0)) goto LAB_015e21b8;
              local_58 = (uint)(byte)(&DAT_0056a33f)[uVar10];
              if (uVar14 == 7) goto LAB_015e21a0;
              puVar11 = puVar12 + 7;
              if (local_38 != 0x1c) {
                uVar10 = *puVar11;
                uVar2 = uVar10 - 1;
                if ((7 < uVar2) || ((0xfdU >> (uVar2 & 0xff) & 1) == 0)) goto LAB_015e21b8;
                puVar8 = &UNK_0056a340;
                goto LAB_015e240c;
              }
            }
            goto LAB_015e2004;
          }
LAB_015e2064:
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          puVar12 = puVar15;
          local_38 = param_3;
        }
LAB_015e1fc0:
        uVar10 = (uint)((ulonglong)uVar14 * (ulonglong)uVar9);
        uVar2 = (uint)((ulonglong)uVar14 * (ulonglong)uVar9 >> 0x20);
        if (uVar2 != 0 || uVar2 < (0x3fffffff < uVar10)) {
LAB_015e1fec:
          uVar1 = 0x38;
          goto LAB_015e1ca0;
        }
        if (local_38 < uVar10 << 2) {
          param_1[3] = (uint)puVar12;
          param_1[4] = (uint)puVar12;
        }
        else {
          uVar2 = uVar10 * 4;
          puVar15 = puVar12 + uVar10;
          if (uVar2 <= local_38 + uVar10 * -4) {
            param_1[0xc] = uVar5;
            *(undefined2 *)(param_1 + 0xd) = uVar3;
            param_1[8] = (uint)puVar15;
            param_1[9] = uVar2;
            param_1[10] = uVar14;
            param_1[0xb] = uVar9;
            param_1[1] = local_30 << 0x18 | local_58 << 0x10 | local_54 << 8 | local_50;
            param_1[2] = (uint)puVar4;
            param_1[6] = (uint)puVar12;
            param_1[7] = uVar2;
            *param_1 = local_4c << 0x18 | local_48 << 0x10 | local_44 << 8 | local_24;
            param_1[3] = uVar6;
            param_1[4] = (uint)puVar13;
            param_1[5] = uVar16;
            return;
          }
          param_1[3] = (uint)puVar15;
          param_1[4] = (uint)puVar15;
        }
      }
      else {
        if ((uVar5 <= uVar9) || ((uVar5 & uVar5 - 1) != 0)) {
          *(undefined1 *)param_1 = 10;
          *(undefined1 *)(param_1 + 2) = 0x4b;
          return;
        }
        if (0x1fffffff < uVar5) goto LAB_015e1fec;
        uVar6 = uVar5 * 8;
        if (param_3 < uVar6) {
          param_1[3] = (uint)puVar4;
          param_1[4] = (uint)puVar4;
        }
        else {
          param_3 = param_3 + uVar5 * -8;
          puVar13 = puVar4 + uVar5 * 2;
          if (uVar5 << 2 <= param_3) {
            uVar16 = uVar5 << 2;
            goto joined_r0x015e1d18;
          }
          param_1[3] = (uint)puVar13;
          param_1[4] = (uint)puVar13;
        }
      }
LAB_015e1c54:
      param_1[5] = 0;
      uVar1 = 0x13;
      goto LAB_015e1ca0;
    }
    param_2 = param_2 + 3;
  }
  param_1[4] = (uint)param_2;
  param_1[3] = (uint)param_2;
  uVar1 = 0x13;
  param_1[5] = 0;
LAB_015e1ca0:
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)param_1 = 10;
  return;
}

