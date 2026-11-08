// FUN_01269694 @ 01269694 size=1788 calls_out=19 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01269694(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *puStack_64;
  undefined1 *local_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *puStack_2c;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (0x65 < uVar4) {
          if (uVar4 < 0x74) {
            if (uVar4 != 0x66) {
              if (uVar4 != 0x6e) goto LAB_0126992c;
              *(uint *)(param_2 + 0x14) = uVar9 + 1;
              local_6c = (undefined1 *)FUN_01964c70(param_2,"ull",3);
              if (local_6c != (undefined1 *)0x0) goto LAB_012699c0;
              local_a8 = (undefined1 *)0x80000012;
              goto LAB_01269d00;
            }
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_6c = (undefined1 *)FUN_01964c70(param_2,&DAT_0056efac,4);
            if (local_6c != (undefined1 *)0x0) goto LAB_012699c0;
            uVar3 = 0;
          }
          else {
            if (uVar4 != 0x74) {
              if (uVar4 == 0x7b) {
                cVar1 = param_2[0x24];
                param_2[0x24] = cVar1 + -1;
                if ((char)(cVar1 + -1) == '\0') {
LAB_01269d48:
                  local_70 = (undefined1 *)0x18;
                  uVar6 = FUN_01964674(param_2,&local_70);
                  *param_1 = 0x80000015;
                  param_1[1] = uVar6;
                  return;
                }
                *(uint *)(param_2 + 0x14) = uVar9 + 1;
                local_94 = 1;
                local_88 = (undefined1 *)0x0;
                local_90 = (undefined1 *)0x0;
                local_b0 = (undefined1 *)0x8;
                local_8c = (undefined1 *)0x8;
                local_98 = param_2;
                goto LAB_01269aec;
              }
LAB_0126992c:
              if (uVar4 - 0x30 < 10) {
                FUN_01964ce0(&local_70,param_2,1);
                if (local_70 != (undefined1 *)0x3 || local_6c != (undefined1 *)0x0) {
                  puVar8 = &DAT_00535b78;
                  goto LAB_01269be0;
                }
                goto LAB_012699f8;
              }
              local_70 = (undefined1 *)0xa;
              puVar7 = (undefined1 *)FUN_01964674(param_2,&local_70);
              goto LAB_01269d84;
            }
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_6c = (undefined1 *)FUN_01964c70(param_2,"rue",3);
            if (local_6c != (undefined1 *)0x0) goto LAB_012699c0;
            uVar3 = 1;
          }
          local_a4 = (undefined1 *)CONCAT31(local_a4._1_3_,uVar3);
          local_a8 = (undefined1 *)0x80000000;
          goto LAB_01269d00;
        }
        if (uVar4 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar9 + 1;
          FUN_019686b4(&local_70,param_2 + 0xc,param_2);
          if (local_70 == (undefined1 *)0x2) goto LAB_012699fc;
          if (((uint)local_70 & 1) == 0) {
            local_a0 = local_68;
            local_a4 = local_6c;
            local_a8 = (undefined1 *)0x8000000d;
          }
          else {
            FUN_0127f57c(&local_a8);
          }
          goto LAB_01269cf4;
        }
        if (uVar4 != 0x2d) {
          if (uVar4 != 0x5b) goto LAB_0126992c;
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) == '\0') goto LAB_01269d48;
          *(uint *)(param_2 + 0x14) = uVar9 + 1;
          local_4c = (undefined1 *)CONCAT31(local_4c._1_3_,1);
          puVar7 = (undefined1 *)0x8;
          local_78 = (undefined1 *)0x0;
          local_7c = (undefined1 *)0x8;
          local_80 = (undefined1 *)0x0;
          local_50 = param_2;
          goto LAB_012697bc;
        }
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        FUN_01964ce0(&local_70,param_2,0);
        if (local_70 == (undefined1 *)0x3 && local_6c == (undefined1 *)0x0) {
LAB_012699f8:
          local_6c = local_68;
          goto LAB_012699fc;
        }
        puVar8 = &DAT_00535b6c;
LAB_01269be0:
        local_a8 = *(undefined1 **)(puVar8 + (int)local_70 * 4);
        local_9c = puStack_64;
        local_a0 = local_68;
        goto LAB_01269d00;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_70 = (undefined1 *)0x5;
  local_6c = (undefined1 *)FUN_01964674(param_2,&local_70);
  goto LAB_012699c0;
LAB_012697bc:
  puVar10 = local_78;
  FUN_01965170(&local_70,&local_50);
  if ((char)local_70 == '\x01') goto LAB_01269c28;
  if (local_70._1_1_ != '\x01') {
    puVar5 = (undefined4 *)((uint)&local_48 | 4);
    *puVar5 = local_80;
    puVar5[1] = local_7c;
    puVar5[2] = local_78;
    local_48 = &DAT_80000014;
    goto LAB_01269c5c;
  }
  FUN_01269694(&local_70,local_50);
  if (local_70 == (undefined1 *)0x80000015) goto LAB_01269c28;
  local_8c = puStack_64;
  local_90 = local_68;
  local_30 = local_68;
  puStack_2c = puStack_64;
  local_34 = local_6c;
  local_38 = local_70;
  if (puVar10 == local_80) {
    FUN_0126721c(&local_80);
    puVar7 = local_7c;
  }
  puVar5 = (undefined4 *)(puVar7 + (int)puVar10 * 0x10);
  local_78 = puVar10 + 1;
  *puVar5 = local_38;
  puVar5[1] = local_34;
  puVar5[2] = local_30;
  puVar5[3] = puStack_2c;
  goto LAB_012697bc;
LAB_01269c28:
  local_48 = (undefined1 *)0x80000015;
  local_44 = local_6c;
  FUN_01266494(&local_80);
LAB_01269c5c:
  param_2[0x24] = param_2[0x24] + '\x01';
  local_60 = (undefined1 *)FUN_01964fb0(param_2);
  local_70 = local_48;
  local_6c = local_44;
  local_68 = local_40;
  puStack_64 = puStack_3c;
  local_a4 = local_44;
  if (local_48 == (undefined1 *)0x80000015) goto LAB_01269c9c;
  if (local_60 != (undefined1 *)0x0) goto LAB_01269cbc;
  local_a8 = local_48;
  local_a0 = local_40;
  local_9c = puStack_3c;
LAB_01269cf0:
  local_70 = local_a8;
  local_6c = local_a4;
  local_68 = local_a0;
  puStack_64 = local_9c;
  goto LAB_01269cf4;
LAB_01269aec:
  puVar7 = local_88;
  FUN_01965d20(&local_38,&local_98);
  if ((char)local_38 == '\x01') goto LAB_01269d28;
  if (local_38._1_1_ != '\x01') {
LAB_01269d14:
    local_38 = local_90;
    local_34 = local_8c;
    local_30 = local_88;
    goto LAB_01269b94;
  }
  *(undefined4 *)(local_98 + 8) = 0;
  *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
  FUN_019686b4(&local_48,local_98 + 0xc);
  puVar10 = local_44;
  if (local_48 == (undefined1 *)0x2) goto LAB_01269b80;
  if (((uint)local_48 & 1) == 0) {
    local_50 = local_40;
    local_4c = puStack_2c;
    local_38 = (undefined1 *)0x8000000d;
    local_34 = local_44;
    local_30 = local_40;
  }
  else {
    FUN_0127f57c(&local_38,local_44);
    if (local_38 != (undefined1 *)0x80000015) {
      local_50 = local_30;
      local_4c = puStack_2c;
    }
    puVar10 = local_34;
    if (local_38 == (undefined1 *)0x80000015 || local_38 == &DAT_80000016) goto LAB_01269b80;
    if (local_38 == (undefined1 *)0x80000015) goto LAB_01269d14;
  }
  puVar10 = local_34;
  puVar2 = local_38;
  local_40 = local_50;
  puStack_3c = local_4c;
  local_48 = local_38;
  local_44 = local_34;
  FUN_0126a190(&local_38,&local_98);
  if (local_38 == (undefined1 *)0x80000015) {
    FUN_012663cc(&local_48);
    puVar10 = local_34;
    goto LAB_01269b80;
  }
  local_80 = local_38;
  local_7c = local_34;
  local_78 = local_30;
  puStack_74 = puStack_2c;
  if (puVar2 == (undefined1 *)0x80000015) goto LAB_01269d14;
  if (puVar2 == &DAT_80000016) goto LAB_01269b80;
  local_68 = local_40;
  puStack_64 = puStack_3c;
  local_60 = local_38;
  puStack_5c = local_34;
  puStack_58 = local_30;
  puStack_54 = puStack_2c;
  local_70 = puVar2;
  local_6c = puVar10;
  if (puVar7 == local_90) {
    FUN_0126727c(&local_90);
    local_b0 = local_8c;
  }
  puVar5 = (undefined4 *)(local_b0 + (int)puVar7 * 0x20);
  local_88 = puVar7 + 1;
  *puVar5 = local_70;
  puVar5[1] = local_6c;
  puVar5[2] = local_68;
  puVar5[3] = puStack_64;
  puVar5[4] = local_60;
  puVar5[5] = puStack_5c;
  puVar5[6] = puStack_58;
  puVar5[7] = puStack_54;
  goto LAB_01269aec;
LAB_01269d28:
  puVar10 = local_34;
LAB_01269b80:
  local_38 = (undefined1 *)0x80000015;
  local_34 = puVar10;
  FUN_01222378(&local_90);
LAB_01269b94:
  param_2[0x24] = param_2[0x24] + '\x01';
  local_60 = (undefined1 *)FUN_019650c4(param_2);
  local_70 = local_38;
  local_6c = local_34;
  local_68 = local_30;
  puStack_64 = puStack_2c;
  local_a4 = local_34;
  if (local_38 == (undefined1 *)0x80000015) {
LAB_01269c9c:
    local_a8 = (undefined1 *)0x80000015;
    local_6c = local_a4;
    if (local_60 != (undefined1 *)0x0) {
      FUN_006c7e7c();
    }
  }
  else {
    if (local_60 == (undefined1 *)0x0) {
      local_a8 = local_38;
      local_a0 = local_30;
      local_9c = puStack_2c;
      goto LAB_01269cf0;
    }
LAB_01269cbc:
    local_a8 = (undefined1 *)0x80000015;
    local_a4 = local_60;
    FUN_01269e4c(&local_70);
  }
LAB_01269cf4:
  if (local_a8 == (undefined1 *)0x80000015) {
    puVar7 = local_a4;
LAB_01269d84:
    local_6c = (undefined1 *)FUN_01966f00(puVar7,param_2);
LAB_012699c0:
LAB_012699fc:
    *param_1 = 0x80000015;
    param_1[1] = local_6c;
  }
  else {
LAB_01269d00:
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = local_a0;
    param_1[3] = local_9c;
  }
  return;
}

