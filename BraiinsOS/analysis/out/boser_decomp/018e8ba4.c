// FUN_018e8ba4 @ 018e8ba4 size=648 calls_out=5 calls_in=2
// strings: 

void FUN_018e8ba4(uint *param_1,uint param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  uint unaff_r9;
  uint extraout_r12;
  uint uVar8;
  undefined8 uVar9;
  uint local_54;
  uint local_50;
  byte local_38;
  byte bStack_37;
  ushort uStack_36;
  ushort local_34;
  byte bStack_32;
  byte bStack_31;
  uint local_30;
  uint local_2c;
  
  if (param_3 == 0) {
    FUN_01935ea0(&local_38,param_2);
    uVar8 = local_2c;
    uVar4 = local_30;
    uVar3 = CONCAT13(bStack_31,CONCAT12(bStack_32,local_34));
    if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 1) {
      uVar4 = uVar3;
      uVar8 = local_30;
      uVar7 = local_2c;
    }
    else {
      local_50 = local_30;
      FUN_01935ea0(&local_38,param_2);
      uVar6 = local_2c;
      uVar5 = local_30;
      uVar7 = CONCAT13(bStack_31,CONCAT12(bStack_32,local_34));
      if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 0) {
        local_54 = local_30;
        FUN_01935ea0(&local_38,param_2);
        unaff_r9 = CONCAT13(bStack_31,CONCAT12(bStack_32,local_34));
        if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 1) {
          FUN_0134bd64(uVar7,uVar5);
          FUN_0134bd64(uVar3,uVar4);
          uVar4 = unaff_r9;
          uVar8 = local_30;
          uVar7 = local_2c;
        }
        else {
          uVar5 = local_2c;
          param_2 = local_30;
          if (uVar3 != 0x80000000) {
LAB_018e8e04:
            *param_1 = uVar3;
            param_1[1] = local_50;
            param_1[7] = param_2;
            param_1[4] = local_54;
            param_1[5] = uVar6;
            param_1[6] = unaff_r9;
            param_1[8] = uVar5;
            param_1[2] = uVar8;
            param_1[3] = uVar7;
            return;
          }
        }
      }
      else {
        FUN_0134bd64(uVar3,uVar4);
        uVar4 = uVar7;
        uVar8 = local_30;
        uVar7 = local_2c;
      }
    }
    param_1[2] = uVar8;
    *param_1 = 0x80000001;
    param_1[1] = uVar4;
    param_1[3] = uVar7;
    return;
  }
  uVar8 = 0x18e8bd0;
  uVar9 = FUN_0192fac8(param_2,1);
  uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar3 = extraout_r12;
  if (((byte *)uVar9 == (byte *)0x0) || (uVar4 != 1)) {
    local_50 = 0xc;
    local_54 = 0xb;
    pcVar2 = "ECCurveTypeDefaultTimeProvider";
    uVar7 = 0;
    uVar6 = 0x52;
LAB_018e8ca8:
    uVar7 = (uVar6 & 0xff | uVar7 << 8) << 8 | ((uint)pcVar2 & 0xffff) >> 8;
    uVar3 = uVar4 & 0xff | ((uVar8 & 0xff | (uVar3 & 0xff) << 8) + (int)pcVar2 * 0x10000) * 0x100;
  }
  else {
    bVar1 = *(byte *)uVar9;
    local_50 = 0x13;
    local_54 = 0xb;
    pcVar2 = "ECCurveTypeDefaultTimeProvider";
    uVar6 = extraout_r2;
    uVar7 = extraout_r3;
    if (3 < bVar1) goto LAB_018e8ca8;
    uVar6 = 8;
    uVar4 = 8 >> (bVar1 & 0xf);
    if ((uVar4 & 1) == 0) goto LAB_018e8ca8;
    FUN_0190d2b4(&local_38,param_2);
    local_50 = (uint)local_38;
    if (local_50 != 0x18) {
      uVar8 = (uint)uStack_36;
      uVar4 = (uint)bStack_37;
      uVar6 = (uint)bStack_32;
      uVar7 = (uint)bStack_31;
      uVar3 = (uint)(uStack_36 >> 8);
      pcVar2 = (char *)(uint)local_34;
      local_54 = local_30;
      goto LAB_018e8ca8;
    }
    local_54 = CONCAT22(local_34,uStack_36);
    FUN_01935c58(&local_38,param_2);
    local_50 = CONCAT13(bStack_31,CONCAT12(bStack_32,local_34));
    if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 0) {
      if (local_50 != 0x80000000) {
        uVar3 = 0x80000000;
        uVar6 = (uint)CONCAT12(bStack_31,CONCAT11(bStack_32,bVar1)) << 8 | 2;
        uVar5 = local_50;
        uVar8 = local_30;
        uVar7 = local_2c;
        goto LAB_018e8e04;
      }
      goto LAB_018e8ce0;
    }
    uVar7 = local_30 >> 8;
    uVar3 = local_50 >> 8 | local_30 << 0x18;
    local_54 = local_2c;
  }
  local_30 = local_50 & 0xff | uVar3 << 8;
  local_2c = uVar7 << 8 | uVar3 >> 0x18;
LAB_018e8ce0:
  param_1[3] = local_54;
  *param_1 = 0x80000001;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  return;
}

