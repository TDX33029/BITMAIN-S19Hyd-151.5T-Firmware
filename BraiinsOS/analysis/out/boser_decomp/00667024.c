// FUN_00667024 @ 00667024 size=1132 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00667024(int *param_1,byte *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  byte unaff_lr;
  uint local_c0;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *puStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_80;
  undefined1 *local_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *puStack_64;
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
    pbVar11 = param_2;
  }
  else {
    pbVar11 = param_2 + 1;
    uVar6 = (uint)*param_2;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (uVar6 < 0xe0) {
        uVar6 = param_2[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar11 = param_2 + 2;
      }
      else {
        uVar7 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          pbVar11 = param_2 + 3;
        }
        else {
          pbVar11 = param_2 + 4;
          uVar6 = param_2[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
        }
      }
    }
    FUN_012fa86c(&local_a8,uVar6,0x10101);
    local_c0 = (uint)local_9c & 0xff;
    local_80 = 1;
    uVar12 = *(undefined4 *)*param_1;
    iVar13 = ((undefined4 *)*param_1)[1];
    local_38 = local_a8;
    local_34 = local_a4;
    local_30 = puStack_a0;
    unaff_lr = local_9c._1_1_;
  }
  puVar8 = local_38;
  param_2 = param_2 + param_3;
  local_7c = local_38;
  puStack_78 = local_34;
  puStack_74 = local_30;
  uVar9 = 0;
  local_40 = param_2;
  local_44 = pbVar11;
  local_58 = 0;
  local_6c = 0;
  local_70 = CONCAT31(CONCAT21(local_70._2_2_,unaff_lr),(char)local_c0);
  local_94 = 0;
  local_a8 = (undefined1 *)0x0;
  if (local_80 == 0) {
LAB_00667204:
    if (pbVar11 != param_2) {
      do {
        pbVar10 = pbVar11 + 1;
        puVar8 = (undefined1 *)(uint)*pbVar11;
        if (0x7fffffff < (uint)(int)(char)*pbVar11) {
          if (puVar8 < (undefined1 *)0xe0) {
            puVar8 = (undefined1 *)(pbVar11[1] & 0x3f | ((uint)puVar8 & 0x1f) << 6);
            pbVar10 = pbVar11 + 2;
          }
          else {
            uVar6 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
            if (puVar8 < (undefined1 *)0xf0) {
              puVar8 = (undefined1 *)(uVar6 | ((uint)puVar8 & 0x1f) << 0xc);
              pbVar10 = pbVar11 + 3;
            }
            else {
              puVar8 = (undefined1 *)(pbVar11[3] & 0x3f | uVar6 << 6 | ((uint)puVar8 & 7) << 0x12);
              if (puVar8 == &DAT_00110000) break;
              pbVar10 = pbVar11 + 4;
            }
          }
        }
        if (puVar8 < (undefined1 *)0xd) {
          if (puVar8 == (undefined1 *)0x0) {
            uVar4 = 0x305c;
          }
          else if (puVar8 == (undefined1 *)0x9) {
            uVar4 = 0x745c;
          }
          else {
            if (puVar8 != (undefined1 *)0xa) goto LAB_0066730c;
            uVar4 = 0x6e5c;
          }
LAB_00667388:
          uVar7 = 0;
          ((undefined4 *)((uint)&local_38 | 2))[1] = 0;
          *(undefined4 *)((uint)&local_38 | 2) = 0;
          local_38 = (undefined1 *)CONCAT22(local_38._2_2_,uVar4);
          uVar6 = 2;
LAB_00667398:
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
          }
          local_68 = local_38;
          puStack_64 = local_34;
          local_60 = local_30._0_2_;
          while ((uVar6 & 0xff) != uVar7) {
            iVar5 = (**(code **)(iVar13 + 0x10))(uVar12,auStack_3a[uVar7 - 0x2e]);
            uVar7 = uVar7 + 1;
            if (iVar5 != 0) goto LAB_006671fc;
          }
        }
        else {
          if ((undefined1 *)0x26 < puVar8) {
            if (puVar8 == (undefined1 *)0x27) {
              uVar4 = 0x275c;
            }
            else {
              if (puVar8 != (undefined1 *)0x5c) goto LAB_0066730c;
              uVar4 = 0x5c5c;
            }
            goto LAB_00667388;
          }
          if (puVar8 == (undefined1 *)0xd) {
            uVar4 = 0x725c;
            goto LAB_00667388;
          }
          if (puVar8 == (undefined1 *)0x22) {
            uVar4 = 0x225c;
            goto LAB_00667388;
          }
LAB_0066730c:
          iVar5 = FUN_012fab74(puVar8);
          if (iVar5 == 0) {
            uVar1 = (&DAT_005679b8)[((uint)puVar8 & 0xfff) >> 8];
            uVar2 = (&DAT_005679b8)[(uint)puVar8 & 0xf];
            uVar3 = (&DAT_005679b8)[((uint)puVar8 & 0xff) >> 4];
            local_34._0_2_ =
                 CONCAT11((&DAT_005679b8)[((uint)puVar8 & 0xffff) >> 0xc],
                          (&DAT_005679b8)[((uint)puVar8 & 0xfffff) >> 0x10]);
            uVar7 = ((uint)LZCOUNT((uint)puVar8 | 1) >> 2) - 2;
            local_38 = (undefined1 *)((uint)(byte)(&DAT_005679b8)[(uint)puVar8 >> 0x14] << 0x18);
            *(undefined1 *)((int)&local_38 + uVar7) = 0x5c;
            puVar8 = (undefined1 *)((uint)&local_38 | (uint)LZCOUNT((uint)puVar8 | 1) >> 2);
            local_34 = (undefined1 *)CONCAT13(uVar3,CONCAT12(uVar1,(undefined2)local_34));
            *puVar8 = 0x7b;
            puVar8[-1] = 0x75;
            local_30 = (undefined1 *)CONCAT22(local_30._2_2_,32000);
            uVar6 = 10;
            local_30 = (undefined1 *)CONCAT31(local_30._1_3_,uVar2);
            goto LAB_00667398;
          }
          puStack_64 = local_34;
          local_60 = local_30._0_2_;
          local_68 = puVar8;
          local_38 = puVar8;
          iVar5 = (**(code **)(iVar13 + 0x10))(uVar12,puVar8);
          if (iVar5 != 0) goto LAB_006671fc;
        }
        pbVar11 = pbVar10;
      } while (pbVar10 != param_2);
      uVar9 = 0;
    }
  }
  else {
    local_a4 = local_38;
    puStack_a0 = local_34;
    local_9c = local_30;
    local_98 = local_70;
    uVar6 = (uint)unaff_lr;
    uVar7 = local_c0 & 0xff;
    if (uVar6 < 0x81) {
      if (uVar6 < uVar7) {
        uVar6 = uVar7;
      }
      do {
        if (uVar6 == uVar7) goto LAB_00667204;
        iVar5 = (**(code **)(iVar13 + 0x10))(uVar12,auStack_3a[uVar7 - 0x6a]);
        uVar7 = uVar7 + 1;
      } while (iVar5 == 0);
    }
    else {
      do {
        if (uVar6 <= (uVar7 & 0xff)) goto LAB_00667204;
        iVar5 = (**(code **)(iVar13 + 0x10))(uVar12,puVar8);
        uVar7 = uVar7 + 1;
      } while (iVar5 == 0);
    }
LAB_006671fc:
    uVar9 = 1;
  }
  return uVar9;
}

