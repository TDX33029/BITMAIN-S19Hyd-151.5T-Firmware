// FUN_0094e0e8 @ 0094e0e8 size=896 calls_out=8 calls_in=1
// strings: 

void FUN_0094e0e8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *extraout_r1;
  uint uVar5;
  undefined1 *unaff_r6;
  uint unaff_r7;
  undefined1 *unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 unaff_d8;
  uint local_74;
  undefined1 *local_70;
  undefined2 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined2 local_54;
  undefined2 local_50;
  undefined2 local_4c;
  uint local_48 [2];
  undefined1 *local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  uVar5 = *param_2;
  param_2[1] = param_2[1] - 1;
  uVar7 = 0x94e120;
  FUN_0094f574(&local_40,uVar5);
  if ((char)local_40 != '\x01') {
    uVar2 = (uint)local_40 >> 8 & 0xff;
    if (uVar2 == 0) {
      uVar2 = 0;
      puVar6 = (undefined1 *)0x2;
      puVar3 = (undefined1 *)0x0;
      local_40 = extraout_r1;
LAB_0094e290:
      param_1[0xb] = (uint)puVar3;
      param_1[0xd] = local_74;
      param_1[0xe] = (uint)local_70;
      param_1[0xf] = local_60;
      *(undefined2 *)((int)param_1 + 0x56) = local_6c;
      *(undefined2 *)(param_1 + 0x15) = local_54;
      *(undefined2 *)((int)param_1 + 0x52) = local_4c;
      *(undefined2 *)(param_1 + 0x14) = local_50;
      param_1[2] = local_5c;
      param_1[5] = local_58;
      param_1[0x10] = unaff_r10;
      param_1[4] = (uint)unaff_r8;
      param_1[0x12] = local_68;
      *param_1 = (uint)puVar6;
      param_1[3] = unaff_r9;
      param_1[0x11] = (uint)local_40;
      param_1[8] = (uint)unaff_r6;
      param_1[9] = uVar5;
      param_1[10] = uVar7;
      param_1[0xc] = unaff_r7;
      *(undefined8 *)(param_1 + 6) = unaff_d8;
      param_1[0x13] = local_64;
      param_1[1] = uVar2;
      return;
    }
    if (uVar2 != 1) {
      local_40 = &DAT_80000004;
      local_3c = uVar2;
      uVar4 = FUN_0073696c(&local_40);
      goto LAB_0094e338;
    }
    local_48[0] = uVar5;
    FUN_00abb850(&local_40,uVar5);
    if ((short)local_40 == 0) {
      local_4c = (undefined2)local_3c;
      local_50 = (undefined2)((uint)local_40 >> 0x10);
      FUN_00abb850(&local_40,uVar5);
      if ((short)local_40 != 1) {
        local_6c = (undefined2)local_3c;
        local_54 = (undefined2)((uint)local_40 >> 0x10);
        FUN_00abb70c(&local_40,uVar5);
        uVar7 = local_38;
        uVar1 = local_3c;
        unaff_r6 = local_40;
        uVar4 = local_3c;
        if (local_40 != (undefined1 *)0x80000001) {
          FUN_00abb70c(&local_40,uVar5);
          local_74 = local_38;
          unaff_r7 = local_3c;
          puVar3 = local_40;
          uVar4 = local_3c;
          if (local_40 != (undefined1 *)0x80000001) {
            FUN_00abb918(&local_40,uVar5);
            unaff_r9 = uStack_34;
            local_5c = local_38;
            uVar2 = local_3c;
            puVar6 = local_40;
            uVar4 = local_38;
            if (local_40 != (undefined1 *)0x2 || local_3c != 0) {
              local_48[1] = 2;
              FUN_00abb918(&local_40,uVar5);
              unaff_r8 = local_40;
              uVar4 = local_38;
              if (local_40 != (undefined1 *)0x2 || local_3c != 0) {
                unaff_d8 = CONCAT44(uStack_34,local_38);
                local_58 = local_3c;
                FUN_0094fd48(&local_40,local_48);
                unaff_r10 = local_38;
                uVar5 = local_3c;
                local_70 = local_40;
                uVar4 = local_3c;
                if (local_40 != (undefined1 *)0x80000002) {
                  if (local_40 == (undefined1 *)0x80000001) {
                    uVar4 = FUN_00a9d070(6,&DAT_01c0c3f8,&DAT_01d064b8);
                  }
                  else {
                    local_60 = local_3c;
                    FUN_0094fd48(&local_40,local_48);
                    if (local_40 == (undefined1 *)0x80000002) {
                      uVar4 = local_3c;
                    }
                    else {
                      if (local_40 != (undefined1 *)0x80000001) {
                        local_68 = local_3c;
                        local_64 = local_38;
                        uVar5 = uVar1;
                        goto LAB_0094e290;
                      }
                      uVar4 = FUN_00a9d070(7,&DAT_01c0c3f8,&DAT_01d064b8);
                    }
                    if (local_70 != (undefined1 *)0x80000000) {
                      FUN_019bb7e0(local_70,uVar5);
                    }
                  }
                }
              }
            }
            if (puVar3 != (undefined1 *)0x80000000) {
              FUN_019bb7e0(puVar3,unaff_r7);
            }
          }
          if (unaff_r6 != (undefined1 *)0x80000000) {
            FUN_019bb7e0(unaff_r6,uVar1);
          }
        }
        goto LAB_0094e338;
      }
    }
  }
  uVar4 = local_3c;
LAB_0094e338:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
}

