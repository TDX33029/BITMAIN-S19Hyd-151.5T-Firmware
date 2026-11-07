// FUN_0071d470 @ 0071d470 size=928 calls_out=2 calls_in=1
// strings: 

void FUN_0071d470(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 local_88;
  uint local_80;
  undefined4 *local_7c;
  uint local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48 [2];
  uint local_40;
  uint uStack_3c;
  undefined4 *local_38;
  uint local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  uStack_28 = 0;
  uStack_2c = 0;
  local_30 = 0;
  local_2e = 0;
  if (param_5 != 0) {
    local_4c = 0;
    local_58 = 0x2e;
    puVar5 = (undefined2 *)(param_4 + 2);
    local_50 = 0x2e;
    local_54 = 0;
    param_5 = param_5 << 2;
    local_6c = (undefined4 *)0x0;
    local_5c = 0;
    local_70 = (undefined4 *)0x0;
    local_64 = 0;
    local_68 = (undefined4 *)0x0;
    local_60 = 0;
    uVar3 = 0;
    local_88 = 0;
    uVar2 = 0;
    do {
      FUN_0071d870(local_48,param_2,param_3,*puVar5);
      if ((local_48[0] & 1) != 0) {
        param_1[4] = (uint)local_38;
        param_1[5] = local_34;
        *param_1 = 0x2e;
        param_1[1] = 0;
        param_1[2] = local_40;
        param_1[3] = uStack_3c;
        return;
      }
      uVar4 = (uint)(ushort)puVar5[-1];
      if (4 < uVar4 - 1) {
        if (uVar4 == 0x2001) {
          local_74 = local_38;
          local_78 = local_34;
          local_50 = local_40;
          local_54 = uStack_3c;
        }
        goto switchD_0071d630_default;
      }
      uVar1 = (uint)local_38 >> 8;
      switch(uVar4) {
      case 1:
        local_7c = local_38;
        local_80 = local_34;
        local_58 = local_40;
        local_4c = uStack_3c;
        break;
      case 2:
        uVar4 = local_34;
        switch(local_40 & 0x3f) {
        case 2:
          local_6c = (undefined4 *)((uint)local_38 & 0xff);
          goto LAB_0071d704;
        case 3:
          local_6c = (undefined4 *)((uint)local_38 & 0xff | (uVar1 & 0xff) << 8);
LAB_0071d704:
          local_5c = 0;
          break;
        case 4:
          uVar4 = 0;
        case 5:
        case 7:
          local_6c = local_38;
          local_5c = uVar4;
          break;
        case 6:
          if (-1 < (int)local_34) {
            local_6c = local_38;
            local_5c = local_34;
          }
        }
        break;
      case 3:
        uVar4 = local_34;
        switch(local_40 & 0x3f) {
        case 2:
          local_70 = (undefined4 *)((uint)local_38 & 0xff);
          goto LAB_0071d6bc;
        case 3:
          local_70 = (undefined4 *)((uint)local_38 & 0xff | (uVar1 & 0xff) << 8);
LAB_0071d6bc:
          local_64 = 0;
          break;
        case 4:
          uVar4 = 0;
        case 5:
        case 7:
          local_70 = local_38;
          local_64 = uVar4;
          break;
        case 6:
          if (-1 < (int)local_34) {
            local_70 = local_38;
            local_64 = local_34;
          }
        }
        break;
      case 4:
        uVar4 = local_34;
        switch(local_40 & 0x3f) {
        case 2:
          local_68 = (undefined4 *)((uint)local_38 & 0xff);
          goto LAB_0071d6e8;
        case 3:
          local_68 = (undefined4 *)((uint)local_38 & 0xff | (uVar1 & 0xff) << 8);
LAB_0071d6e8:
          local_60 = 0;
          break;
        case 4:
          uVar4 = 0;
        case 5:
        case 7:
          local_68 = local_38;
          local_60 = uVar4;
          break;
        case 6:
          if (-1 < (int)local_34) {
            local_68 = local_38;
            local_60 = local_34;
          }
        }
        break;
      case 5:
        if ((local_40 == 1 && uStack_3c == 0) && local_34 == 0x10) {
          uVar2 = *(undefined1 *)((int)local_38 + 0xf);
          local_30 = *(undefined2 *)(local_38 + 2);
          local_2e = *(undefined1 *)((int)local_38 + 10);
          local_88 = *(undefined4 *)((int)local_38 + 0xb);
          uVar3 = *(undefined1 *)((int)local_38 + 7);
          uStack_2c._0_3_ = (undefined3)*local_38;
          uStack_2c._3_1_ = (undefined1)*(undefined4 *)((int)local_38 + 3);
          uStack_28 = (undefined3)((uint)*(undefined4 *)((int)local_38 + 3) >> 8);
        }
      }
switchD_0071d630_default:
      puVar5 = puVar5 + 2;
      param_5 = param_5 + -4;
    } while (param_5 != 0);
    if (local_58 != 0x2e || local_4c != 0) {
      *(uint *)((int)param_1 + 0x3b) = CONCAT31(uStack_28,uStack_2c._3_1_);
      param_1[0xe] = uStack_2c;
      *(undefined1 *)((int)param_1 + 0x47) = uVar2;
      *(undefined4 *)((int)param_1 + 0x43) = local_88;
      *(undefined1 *)((int)param_1 + 0x3f) = uVar3;
      param_1[10] = (uint)local_70;
      param_1[0xb] = local_64;
      param_1[0xc] = (uint)local_68;
      param_1[0xd] = local_60;
      param_1[2] = (uint)local_7c;
      param_1[3] = local_80;
      param_1[4] = local_50;
      param_1[5] = local_54;
      param_1[6] = (uint)local_74;
      param_1[7] = local_78;
      param_1[8] = (uint)local_6c;
      *param_1 = local_58;
      *(undefined2 *)(param_1 + 0x10) = local_30;
      *(undefined1 *)((int)param_1 + 0x42) = local_2e;
      param_1[1] = local_4c;
      param_1[9] = local_5c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01c077f0);
}

