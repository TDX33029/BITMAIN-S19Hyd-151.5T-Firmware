// FUN_018ed288 @ 018ed288 size=824 calls_out=7 calls_in=1
// strings: 

void FUN_018ed288(uint *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint unaff_r9;
  uint unaff_r10;
  undefined8 uVar9;
  undefined *local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_40;
  undefined *local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  uint local_28;
  
  FUN_01930f74(&local_40,&DAT_01d232e0,param_2);
  uVar9 = CONCAT44(local_30._4_4_,(undefined *)local_30);
  uVar5 = local_40 & 0xff;
  if (uVar5 == 0x18) {
    uVar9 = FUN_0192fac8(param_2,local_3c);
    if ((int)uVar9 != 0) {
      bVar2 = false;
      local_28 = 0;
      local_38 = 0;
      local_3c = (undefined *)0x1;
      local_40 = 0;
      if ((int)((ulonglong)uVar9 >> 0x20) != 0) {
        puVar8 = (undefined *)0x1;
        do {
          uVar5 = local_38;
          local_30 = uVar9;
          uVar9 = FUN_0192fac8(&local_30,1);
          if (((byte *)uVar9 == (byte *)0x0) || ((int)((ulonglong)uVar9 >> 0x20) != 1)) {
            FUN_0134aee0(local_40,puVar8,1,2);
            uVar7 = 0x15;
            uVar5 = 0xc;
            goto LAB_018ed47c;
          }
          bVar1 = *(byte *)uVar9;
          unaff_r10 = (uint)bVar1;
          unaff_r9 = 10;
          if (unaff_r10 < 0x14) {
            switch(unaff_r10) {
            case 1:
              unaff_r9 = 0;
              break;
            case 2:
              unaff_r9 = 1;
              break;
            case 3:
              unaff_r9 = 2;
              break;
            case 4:
              unaff_r9 = 3;
              break;
            case 5:
              unaff_r9 = 4;
              break;
            case 6:
              unaff_r9 = 5;
            }
          }
          else if (unaff_r10 < 0x41) {
            if (unaff_r10 == 0x14) {
              unaff_r9 = 6;
            }
            else if (unaff_r10 == 0x40) {
              unaff_r9 = 7;
            }
          }
          else if (unaff_r10 == 0x41) {
            unaff_r9 = 8;
          }
          else if (unaff_r10 == 0x42) {
            unaff_r9 = 9;
          }
          uVar9 = local_30;
          if (uVar5 == local_40) {
            FUN_016f5378(&local_40);
            puVar8 = local_3c;
            uVar9 = local_30;
          }
          local_30._4_4_ = (uint)((ulonglong)uVar9 >> 0x20);
          puVar8[uVar5 * 2] = (char)unaff_r9;
          local_38 = uVar5 + 1;
          (puVar8 + uVar5 * 2)[1] = bVar1;
        } while (local_28 < local_30._4_4_);
      }
      uVar6 = local_40 >> 0x18;
      unaff_r10 = local_40 >> 0x10;
      unaff_r9 = local_40 >> 8;
      uVar5 = local_40;
      uVar7 = local_38;
      puVar8 = local_3c;
      goto LAB_018ed488;
    }
    uVar5 = 0xb;
    unaff_r10 = 0;
    unaff_r9 = 0;
    uVar7 = 0;
LAB_018ed47c:
    uVar6 = 0;
    puVar8 = &DAT_005231e1;
    uVar9 = local_30;
  }
  else {
    unaff_r9 = local_40 >> 8 & 0xff;
    unaff_r10 = local_40 >> 0x10 & 0xff;
    uVar6 = local_40 >> 0x18;
    uVar7 = local_38;
    puVar8 = local_3c;
  }
  bVar2 = true;
LAB_018ed488:
  uVar5 = uVar6 << 0x18 | (unaff_r10 & 0xff) << 0x10 | (unaff_r9 & 0xff) << 8 | uVar5 & 0xff;
  if (bVar2) {
    param_1[2] = (uint)puVar8;
    *param_1 = 0x80000000;
    param_1[1] = uVar5;
    param_1[3] = uVar7;
    return;
  }
  local_30 = uVar9;
  FUN_018e46fc(&local_40,param_2);
  uVar4 = local_34;
  uVar6 = local_38;
  puVar3 = local_3c;
  if (local_40 == 0) {
    FUN_018e4584(&local_40,param_2);
    local_30._0_4_ = local_3c;
    local_30._4_4_ = local_38;
    local_28 = local_34;
    if (local_40 == 0) {
      local_50 = local_3c;
      uStack_4c = local_38;
      uStack_48 = local_34;
      if (uVar4 != 0) {
        param_1[6] = (uint)local_3c;
        param_1[7] = local_38;
        param_1[8] = local_34;
        param_1[3] = (uint)puVar3;
        *param_1 = uVar5;
        param_1[1] = (uint)puVar8;
        param_1[2] = uVar7;
        param_1[4] = uVar6;
        param_1[5] = uVar4;
        return;
      }
      *param_1 = 0x80000000;
      *(undefined1 *)(param_1 + 1) = 0xe;
      FUN_018e26a0(&local_50);
    }
    else {
      param_1[1] = (uint)local_3c;
      param_1[2] = local_38;
      param_1[3] = local_34;
      *param_1 = 0x80000000;
    }
    FUN_0134aee0(puVar3,uVar6,2,4);
  }
  else {
    param_1[2] = local_38;
    *param_1 = 0x80000000;
    param_1[1] = (uint)local_3c;
    param_1[3] = local_34;
  }
  FUN_0134aee0(uVar5,puVar8,1,2);
  return;
}

