// FUN_00609b04 @ 00609b04 size=1192 calls_out=3 calls_in=2
// strings: 

void FUN_00609b04(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint extraout_r3;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint *in_r12;
  uint *extraout_r12;
  uint uVar16;
  uint *local_58;
  uint *local_4c;
  uint local_44;
  uint *local_40;
  uint *local_3c;
  byte local_38;
  byte local_37;
  ushort local_36;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  
  uVar11 = param_2[1];
  if (uVar11 == 0) {
    *param_1 = 2;
    return;
  }
  puVar12 = (uint *)*param_2;
  if (uVar11 < 4) {
    uVar10 = (uint)puVar12 >> 8;
    uVar8 = 0;
    uVar16 = 0x13;
    uVar11 = 0;
    puVar4 = puVar12;
    goto LAB_00609bc8;
  }
  iVar14 = param_2[2];
  puVar4 = puVar12 + 1;
  uVar7 = *puVar12;
  uVar9 = uVar11 - 4;
  uVar13 = 4;
  if (0xffffffef < uVar7) {
    uVar8 = 0;
    if (uVar7 == 0xffffffff) {
      if (uVar9 < 8) {
        uVar10 = (uint)puVar4 >> 8;
        uVar16 = 0x13;
        uVar11 = 0;
        puVar12 = puVar4;
        goto LAB_00609bc8;
      }
      if (puVar12[2] == 0) {
        uVar15 = *puVar4;
        uVar9 = uVar11 - 0xc;
        puVar4 = puVar12 + 3;
        uVar13 = 8;
        local_40 = puVar4;
        if (uVar15 <= uVar9) goto LAB_00609b98;
        goto LAB_00609bac;
      }
      uVar16 = 0x38;
    }
    else {
      uVar16 = 0x10;
    }
    uVar10 = 0;
    uVar11 = 0;
    puVar12 = (uint *)0x0;
    goto LAB_00609bc8;
  }
  local_40 = puVar4;
  uVar15 = uVar7;
  if (uVar7 <= uVar9) {
LAB_00609b98:
    *param_2 = (byte *)((int)local_40 + uVar15);
    param_2[1] = uVar9 - uVar15;
    puVar4 = local_40;
    if (1 < uVar15) {
      puVar4 = (uint *)((int)local_40 + 2);
      uVar3 = (ushort)*local_40;
      in_r12 = (uint *)(uint)uVar3;
      puVar12 = puVar4;
      if (&SUB_00000002 < (ushort *)((int)in_r12 + -2)) {
        if (in_r12 == (uint *)&DAT_00000005) {
          if (uVar15 == 2) {
            uVar10 = (uint)puVar4 >> 8;
            uVar8 = 0;
            uVar16 = 0x13;
          }
          else {
            bVar1 = *(byte *)((int)local_40 + 2);
            puVar4 = (uint *)((int)local_40 + 3);
            if (uVar15 == 3) {
              uVar16 = 0x13;
              puVar12 = puVar4;
LAB_00609edc:
              uVar10 = (uint)puVar4 >> 8;
              uVar8 = 0;
            }
            else {
              bVar2 = *(byte *)((int)local_40 + 3);
              uVar7 = (uint)bVar2;
              local_3c = (uint *)(uVar15 - 4);
              local_40 = local_40 + 1;
              uVar16 = 0x19;
              puVar4 = local_40;
              puVar12 = (uint *)0x0;
              if (8 < uVar7) goto LAB_00609edc;
              puVar4 = (uint *)&DAT_00000001;
              uVar8 = 0x116;
              if ((1 << uVar7 & 0x116U) == 0) goto LAB_00609edc;
              FUN_00618580(&local_38,&local_40,uVar13);
              uVar16 = (uint)local_38;
              if (uVar16 == 0x4f) {
                puVar4 = (uint *)(bVar1 - 1);
                uVar10 = 0;
                puVar12 = (uint *)0x0;
                local_4c = local_34;
                in_r12 = extraout_r12;
                switch(puVar4) {
                case (uint *)0x1:
                  FUN_00607e94(&local_38,&local_40);
                  uVar10 = local_2c;
                  in_r12 = local_30;
                  uVar16 = (uint)local_38;
                  if (uVar16 == 0x4f) {
                    FUN_00618580(&local_38,&local_40,uVar13);
                    uVar16 = (uint)local_38;
                    if (uVar16 == 0x4f) {
                      puVar12 = (uint *)&DAT_00000001;
LAB_00609f88:
                      local_58 = local_34;
                      goto switchD_00609d4c_caseD_0;
                    }
                  }
                  break;
                case (uint *)0x2:
                  puVar12 = (uint *)&SUB_00000002;
                case (uint *)0x0:
switchD_00609d4c_caseD_0:
                  local_44._0_1_ = bVar2;
                  param_1[9] = uVar15;
                  param_1[10] = local_4c;
                  *(ushort *)((int)param_1 + 0x22) = uVar3;
                  *(byte *)(param_1 + 8) = (byte)local_44;
                  param_1[2] = puVar12;
                  *(undefined1 *)((int)param_1 + 0x21) = uVar13;
                  *param_1 = 0;
                  param_1[1] = iVar14;
                  param_1[3] = local_58;
                  param_1[4] = in_r12;
                  param_1[5] = uVar10;
                  param_1[6] = local_40;
                  param_1[7] = local_3c;
                  param_2[2] = (uVar11 - (uVar9 - uVar15)) + iVar14;
                  return;
                case (uint *)0x3:
                  FUN_00609fc4(&local_38,&local_40);
                  uVar16 = (uint)local_38;
                  if (uVar16 == 0x4f) {
                    puVar12 = (uint *)0x3;
LAB_00609f38:
                    uVar10 = local_2c;
                    in_r12 = local_30;
                    goto switchD_00609d4c_caseD_0;
                  }
                  break;
                case (uint *)0x4:
                  FUN_00609fc4(&local_38,&local_40);
                  uVar16 = (uint)local_38;
                  if (uVar16 == 0x4f) {
                    puVar12 = (uint *)&DAT_00000004;
                    goto LAB_00609f38;
                  }
                  break;
                case (uint *)0x5:
                  FUN_00607e94(&local_38,&local_40);
                  uVar10 = local_2c;
                  in_r12 = local_30;
                  uVar16 = (uint)local_38;
                  if (uVar16 == 0x4f) {
                    FUN_00618580(&local_38,&local_40,uVar13);
                    uVar16 = (uint)local_38;
                    if (uVar16 == 0x4f) {
                      puVar12 = (uint *)&DAT_00000005;
                      goto LAB_00609f88;
                    }
                  }
                  break;
                default:
                  uVar16 = 0x42;
                  uVar7 = extraout_r3;
                  puVar12 = (uint *)0x0;
                  goto LAB_00609bbc;
                }
              }
              in_r12 = (uint *)(uint)local_36;
              uVar10 = (uint)local_30 >> 8;
              uVar7 = (uint)local_37;
              puVar4 = local_34;
              uVar8 = local_2c;
              puVar12 = local_30;
            }
          }
        }
        else {
          uVar10 = (uint)(uVar3 >> 8);
          uVar8 = 0;
          uVar16 = 0x11;
          puVar12 = in_r12;
        }
        goto LAB_00609bbc;
      }
      if (uVar7 < 0xfffffff0) {
        if (3 < uVar15 - 2) {
          puVar4 = *(uint **)((int)local_40 + 2);
          iVar5 = uVar15 - 6;
          puVar12 = (uint *)((int)local_40 + 6);
LAB_00609dfc:
          if (iVar5 == 0) {
            uVar16 = 0x13;
            puVar6 = puVar12;
          }
          else {
            local_40 = (uint *)((int)puVar12 + 1);
            uVar8 = *puVar12;
            local_44 = (uint)(byte)uVar8;
            uVar16 = 0x19;
            puVar12 = (uint *)0x0;
            local_3c = (uint *)(iVar5 + -1);
            puVar6 = local_3c;
            if (local_44 < 9) {
              puVar6 = (uint *)&DAT_00000001;
              uVar10 = 0;
              local_4c = puVar4;
              bVar2 = (byte)uVar8;
              if ((1 << local_44 & 0x116U) != 0) goto switchD_00609d4c_caseD_0;
            }
          }
          uVar10 = (uint)puVar6 >> 8;
          puVar4 = puVar6;
          uVar7 = local_44;
          uVar8 = 0;
          goto LAB_00609bbc;
        }
LAB_00609dc0:
        uVar16 = 0x13;
      }
      else {
        if (uVar15 - 2 < 8) goto LAB_00609dc0;
        puVar4 = (uint *)*puVar4;
        puVar12 = (uint *)((int)local_40 + 10);
        uVar7 = *(uint *)((int)local_40 + 6);
        iVar5 = uVar15 - 10;
        if (uVar7 == 0) goto LAB_00609dfc;
        uVar16 = 0x38;
        puVar12 = (uint *)0x0;
      }
      uVar10 = (uint)puVar4 >> 8;
      uVar8 = 0;
      goto LAB_00609bbc;
    }
  }
LAB_00609bac:
  uVar10 = (uint)puVar4 >> 8;
  uVar16 = 0x13;
  uVar8 = 0;
  puVar12 = puVar4;
LAB_00609bbc:
  uVar11 = (int)in_r12 << 0x10 | (uVar7 & 0xff) << 8;
LAB_00609bc8:
  *param_2 = 1;
  param_2[1] = 0;
  param_1[2] = uVar11 | uVar16;
  param_1[3] = puVar4;
  param_1[4] = (uint)puVar12 & 0xff | uVar10 << 8;
  param_1[5] = uVar8;
  *param_1 = 3;
  return;
}

