// FUN_00603584 @ 00603584 size=1096 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00603584(int *param_1,byte *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  byte in_r12;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *puStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined2 local_60;
  undefined4 local_58;
  byte *local_44;
  byte *local_40;
  undefined1 auStack_3a [2];
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  if (param_3 == 0) {
    local_80 = 0;
    uVar12 = *(undefined4 *)*param_1;
    iVar13 = ((undefined4 *)*param_1)[1];
    puVar11 = puStack_a0;
    pbVar14 = param_2;
  }
  else {
    pbVar14 = param_2 + 1;
    uVar8 = (uint)*param_2;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (uVar8 < 0xe0) {
        uVar8 = param_2[1] & 0x3f | (uVar8 & 0x1f) << 6;
        pbVar14 = param_2 + 2;
      }
      else {
        uVar9 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
          pbVar14 = param_2 + 3;
        }
        else {
          pbVar14 = param_2 + 4;
          uVar8 = param_2[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
        }
      }
    }
    FUN_00fa9bcc(&local_a8,uVar8,0x10101);
    local_38 = local_a8;
    local_34 = local_a4;
    local_30 = puStack_a0;
    local_80 = 1;
    uVar12 = *(undefined4 *)*param_1;
    iVar13 = ((undefined4 *)*param_1)[1];
    puVar11 = (undefined1 *)((uint)local_9c & 0xff);
    in_r12 = local_9c._1_1_;
  }
  puVar4 = local_38;
  param_2 = param_2 + param_3;
  uVar10 = 0;
  local_74 = local_30;
  local_78 = local_34;
  local_7c = local_38;
  local_40 = param_2;
  local_44 = pbVar14;
  local_58 = 0;
  local_6c = 0;
  local_70 = CONCAT31(CONCAT21(local_70._2_2_,in_r12),(char)puVar11);
  local_94 = 0;
  local_a8 = (undefined1 *)0x0;
  if (local_80 == 0) {
LAB_00603750:
    if (pbVar14 != param_2) {
      do {
        puVar11 = (undefined1 *)(uint)*pbVar14;
        pbVar5 = pbVar14 + 1;
        if (-1 < (char)*pbVar14) {
joined_r0x0060389c:
          pbVar14 = pbVar5;
          if (puVar11 < (undefined1 *)0x28) goto LAB_00603784;
LAB_006038a0:
          if (puVar11 != (undefined1 *)0x5c) goto switchD_0060378c_caseD_6038b4;
          uVar6 = 0x5c5c;
          goto LAB_00603948;
        }
        if (puVar11 < (undefined1 *)0xe0) {
          puVar11 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
          pbVar5 = pbVar14 + 2;
          goto joined_r0x0060389c;
        }
        uVar8 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
        if (puVar11 < &DAT_000000f0) {
          puVar11 = (undefined1 *)(uVar8 | ((uint)puVar11 & 0x1f) << 0xc);
          pbVar14 = pbVar14 + 3;
          if (puVar11 < &DAT_00000028) goto LAB_00603784;
          goto LAB_006038a0;
        }
        puVar11 = (undefined1 *)(pbVar14[3] & 0x3f | uVar8 << 6 | ((uint)puVar11 & 7) << 0x12);
        if (puVar11 == &DAT_00110000) {
          return 0;
        }
        pbVar14 = pbVar14 + 4;
        if (&DAT_00000027 < puVar11) goto LAB_006038a0;
LAB_00603784:
        switch((int)&switchD_0060378c::switchdataD_00603790 +
               (&switchD_0060378c::switchdataD_00603790)[(int)puVar11] & 0xfffffffe) {
        case 0x603830:
          uVar6 = 0x305c;
          break;
        default:
switchD_0060378c_caseD_6038b4:
          iVar7 = FUN_00fa9eec(puVar11);
          if (iVar7 == 0) {
            uVar1 = (&DAT_00563e90)[((uint)puVar11 & 0xfff) >> 8];
            uVar2 = (&DAT_00563e90)[(uint)puVar11 & 0xf];
            uVar3 = (&DAT_00563e90)[((uint)puVar11 & 0xff) >> 4];
            local_34._0_2_ =
                 CONCAT11((&DAT_00563e90)[((uint)puVar11 & 0xffff) >> 0xc],
                          (&DAT_00563e90)[((uint)puVar11 & 0xfffff) >> 0x10]);
            uVar9 = ((uint)LZCOUNT((uint)puVar11 | 1) >> 2) - 2;
            local_38 = (undefined1 *)((uint)(byte)(&DAT_00563e90)[(uint)puVar11 >> 0x14] << 0x18);
            *(undefined1 *)((int)&local_38 + uVar9) = 0x5c;
            puVar11 = (undefined1 *)((uint)&local_38 | (uint)LZCOUNT((uint)puVar11 | 1) >> 2);
            local_34 = (undefined1 *)CONCAT13(uVar3,CONCAT12(uVar1,(undefined2)local_34));
            *puVar11 = 0x7b;
            puVar11[-1] = 0x75;
            local_30 = (undefined1 *)CONCAT22(local_30._2_2_,32000);
            uVar8 = 10;
            local_30 = (undefined1 *)CONCAT31(local_30._1_3_,uVar2);
            goto LAB_00603958;
          }
          local_60 = local_30._0_2_;
          local_64 = local_34;
          local_68 = puVar11;
          local_38 = puVar11;
          iVar7 = (**(code **)(iVar13 + 0x10))(uVar12,puVar11);
          if (iVar7 == 0) goto LAB_006038f4;
          goto LAB_00603748;
        case 0x603910:
          uVar6 = 0x6e5c;
          break;
        case 0x60391c:
          uVar6 = 0x275c;
          break;
        case 0x603928:
          uVar6 = 0x725c;
          break;
        case 0x603934:
          uVar6 = 0x745c;
          break;
        case 0x603940:
          uVar6 = 0x225c;
        }
LAB_00603948:
        uVar9 = 0;
        ((undefined4 *)((uint)&local_38 | 2))[1] = 0;
        *(undefined4 *)((uint)&local_38 | 2) = 0;
        local_38 = (undefined1 *)CONCAT22(local_38._2_2_,uVar6);
        uVar8 = 2;
LAB_00603958:
        if (uVar8 < uVar9) {
          uVar8 = uVar9;
        }
        local_60 = local_30._0_2_;
        local_68 = local_38;
        local_64 = local_34;
        while ((uVar8 & 0xff) != uVar9) {
          iVar7 = (**(code **)(iVar13 + 0x10))(uVar12,auStack_3a[uVar9 - 0x2e]);
          uVar9 = uVar9 + 1;
          if (iVar7 != 0) goto LAB_00603748;
        }
LAB_006038f4:
        uVar10 = 0;
      } while (pbVar14 != param_2);
    }
  }
  else {
    local_98 = local_70;
    uVar8 = (uint)in_r12;
    uVar9 = (uint)puVar11 & 0xff;
    local_a4 = local_38;
    puStack_a0 = local_34;
    local_9c = local_30;
    if (uVar8 < 0x81) {
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
      do {
        if (uVar8 == uVar9) goto LAB_00603750;
        iVar7 = (**(code **)(iVar13 + 0x10))(uVar12,auStack_3a[uVar9 - 0x6a]);
        uVar9 = uVar9 + 1;
      } while (iVar7 == 0);
    }
    else {
      do {
        if (uVar8 <= (uVar9 & 0xff)) goto LAB_00603750;
        iVar7 = (**(code **)(iVar13 + 0x10))(uVar12,puVar4);
        uVar9 = uVar9 + 1;
      } while (iVar7 == 0);
    }
LAB_00603748:
    uVar10 = 1;
  }
  return uVar10;
}

