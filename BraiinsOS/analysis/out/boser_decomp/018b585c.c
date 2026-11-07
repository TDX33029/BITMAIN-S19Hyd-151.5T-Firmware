// FUN_018b585c @ 018b585c size=856 calls_out=7 calls_in=1
// strings: 

void FUN_018b585c(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte unaff_r5;
  undefined *puVar9;
  undefined8 uVar10;
  uint local_50;
  undefined *puStack_4c;
  uint uStack_48;
  undefined *local_44;
  uint local_40;
  undefined *local_3c;
  uint local_38;
  undefined *local_34;
  undefined8 local_30;
  uint local_28;
  
  uVar10 = FUN_018beed0(param_2,1);
  uVar6 = 2;
  uVar7 = 0xb;
  puVar9 = &DAT_005239af;
  if (((undefined1 *)uVar10 != (undefined1 *)0x0) && ((int)((ulonglong)uVar10 >> 0x20) == 1)) {
    uVar10 = FUN_018beed0(param_2,*(undefined1 *)uVar10);
    if ((int)uVar10 != 0) {
      iVar8 = 0;
      local_28 = 0;
      local_3c = (undefined *)0x0;
      local_40 = 1;
      local_44 = (undefined *)0x0;
      if ((int)((ulonglong)uVar10 >> 0x20) != 0) {
        uVar7 = 1;
        do {
          puVar9 = local_3c;
          local_30 = uVar10;
          uVar10 = FUN_018beed0(&local_30,1);
          if (((byte *)uVar10 == (byte *)0x0) || ((int)((ulonglong)uVar10 >> 0x20) != 1)) {
            FUN_0134aee0(local_44,uVar7,1,2);
            uVar6 = 0x15;
            uVar7 = (uint)unaff_r5 << 0x10 | iVar8 << 8 | 0xb;
            goto LAB_018b5ac4;
          }
          unaff_r5 = *(byte *)uVar10;
          iVar8 = 10;
          if (unaff_r5 < 0x14) {
            switch(unaff_r5) {
            case 1:
              iVar8 = 0;
              break;
            case 2:
              iVar8 = 1;
              break;
            case 3:
              iVar8 = 2;
              break;
            case 4:
              iVar8 = 3;
              break;
            case 5:
              iVar8 = 4;
              break;
            case 6:
              iVar8 = 5;
            }
          }
          else if (unaff_r5 < 0x41) {
            if (unaff_r5 == 0x14) {
              iVar8 = 6;
            }
            else if (unaff_r5 == 0x40) {
              iVar8 = 7;
            }
          }
          else if (unaff_r5 == 0x41) {
            iVar8 = 8;
          }
          else if (unaff_r5 == 0x42) {
            iVar8 = 9;
          }
          uVar10 = local_30;
          if (puVar9 == local_44) {
            FUN_016f5378(&local_44);
            uVar7 = local_40;
            uVar10 = local_30;
          }
          local_30._4_4_ = (undefined *)((ulonglong)uVar10 >> 0x20);
          puVar5 = (undefined1 *)(uVar7 + (int)puVar9 * 2);
          *puVar5 = (char)iVar8;
          local_3c = puVar9 + 1;
          puVar5[1] = unaff_r5;
        } while (local_28 < local_30._4_4_);
      }
      puVar2 = local_3c;
      uVar7 = local_40;
      puVar9 = local_44;
      local_30 = uVar10;
      FUN_018a9a58(&local_44,param_2);
      uVar4 = local_38;
      puVar3 = local_3c;
      uVar1 = local_40;
      if (local_44 == (undefined *)0x0) {
        FUN_018a98e4(&local_44,param_2);
        local_30._0_4_ = local_40;
        local_30._4_4_ = local_3c;
        local_28 = local_38;
        if (local_44 == (undefined *)0x0) {
          local_50 = local_40;
          puStack_4c = local_3c;
          uStack_48 = local_38;
          if (uVar4 != 0) {
            param_1[6] = local_40;
            param_1[7] = local_3c;
            param_1[8] = local_38;
            param_1[2] = puVar2;
            *param_1 = puVar9;
            param_1[1] = uVar7;
            param_1[3] = uVar1;
            param_1[4] = puVar3;
            param_1[5] = uVar4;
            return;
          }
          if (1 < DAT_01d51b00) {
            local_38 = 0x17;
            local_40 = 0x17;
            local_34 = &DAT_01d225a4;
            local_3c = &DAT_0051dc1d;
            local_44 = &DAT_0051dc1d;
            FUN_0193b350(&DAT_0051dbf7,0x4d,2,&local_44);
          }
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = 0xd;
          FUN_018a8274(&local_50);
          FUN_0134aee0(uVar1,puVar3,2,4);
        }
        else {
          param_1[1] = local_40;
          param_1[2] = local_3c;
          param_1[3] = local_38;
          *param_1 = 0x80000000;
          FUN_0134aee0(uVar1,puVar3,2,4);
        }
      }
      else {
        param_1[2] = local_3c;
        *param_1 = 0x80000000;
        param_1[1] = local_40;
        param_1[3] = local_38;
      }
      FUN_0134aee0(puVar9,uVar7,1,2);
      return;
    }
    uVar6 = 0;
    uVar7 = 10;
LAB_018b5ac4:
    puVar9 = &DAT_005231e1;
  }
  param_1[3] = uVar6;
  *param_1 = 0x80000000;
  param_1[1] = uVar7;
  param_1[2] = puVar9;
  return;
}

