// FUN_014d8ce0 @ 014d8ce0 size=1544 calls_out=16 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014d8ce0(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  int local_98;
  undefined1 local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 uStack_64;
  undefined1 *local_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (0x65 < uVar4) {
          if (uVar4 < 0x74) {
            if (uVar4 != 0x66) {
              if (uVar4 != 0x6e) goto LAB_014d8f1c;
              *(uint *)(param_2 + 0x14) = uVar9 + 1;
              local_6c = (undefined1 *)FUN_012c6b8c(param_2,"ull",3);
              if (local_6c != (undefined1 *)0x0) goto LAB_014d8d4c;
              local_a8 = (undefined1 *)0x80000012;
              goto LAB_014d924c;
            }
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_6c = (undefined1 *)FUN_012c6b8c(param_2,&DAT_0056efac,4);
            if (local_6c != (undefined1 *)0x0) goto LAB_014d8d4c;
            uVar3 = 0;
          }
          else {
            if (uVar4 != 0x74) {
              if (uVar4 == 0x7b) {
                cVar2 = *(char *)(param_2 + 0x1c) + -1;
                *(char *)(param_2 + 0x1c) = cVar2;
                if (cVar2 == '\0') {
                  local_70 = (undefined1 *)0x18;
                  uVar7 = FUN_012c6b30(param_2,&local_70);
                  *param_1 = 0x80000015;
                  param_1[1] = uVar7;
                  return;
                }
                *(uint *)(param_2 + 0x14) = uVar9 + 1;
                local_94 = 1;
                local_88 = (undefined1 *)0x0;
                local_90 = (undefined1 *)0x0;
                local_b0 = (undefined1 *)0x8;
                local_8c = (undefined1 *)0x8;
                local_98 = param_2;
                goto LAB_014d90dc;
              }
LAB_014d8f1c:
              if (uVar4 - 0x30 < 10) {
                FUN_012c751c(&local_70,param_2,1);
                if (local_70 != (undefined1 *)0x3 || local_6c != (undefined1 *)0x0) {
                  puVar8 = &DAT_005370f8;
                  goto LAB_014d91e4;
                }
                goto LAB_014d8ff0;
              }
              local_70 = (undefined1 *)0xa;
              puVar6 = (undefined1 *)FUN_012c6b30(param_2,&local_70);
              goto LAB_014d92ac;
            }
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_6c = (undefined1 *)FUN_012c6b8c(param_2,"rue",3);
            if (local_6c != (undefined1 *)0x0) goto LAB_014d8d4c;
            uVar3 = 1;
          }
          local_a4 = (undefined1 *)CONCAT31(local_a4._1_3_,uVar3);
          local_a8 = (undefined1 *)0x80000000;
          goto LAB_014d924c;
        }
        if (uVar4 == 0x22) {
          *(undefined4 *)(param_2 + 8) = 0;
          *(uint *)(param_2 + 0x14) = uVar9 + 1;
          FUN_01968828(&local_70,(int *)(param_2 + 0xc),param_2);
          if (local_70 == (undefined1 *)0x2) goto LAB_014d8d50;
          if (((uint)local_70 & 1) == 0) {
            local_a0 = local_68;
            local_a4 = local_6c;
            local_a8 = (undefined1 *)0x8000000d;
          }
          else {
            FUN_0127f57c(&local_a8);
          }
          goto LAB_014d9240;
        }
        if (uVar4 != 0x2d) {
          if (uVar4 != 0x5b) goto LAB_014d8f1c;
          cVar2 = *(char *)(param_2 + 0x1c) + -1;
          *(char *)(param_2 + 0x1c) = cVar2;
          if (cVar2 == '\0') {
            local_70 = (undefined1 *)0x18;
            goto LAB_014d8d3c;
          }
          *(uint *)(param_2 + 0x14) = uVar9 + 1;
          FUN_014d8520(&local_38,param_2,1);
          *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
          local_60 = (undefined1 *)FUN_014d9568(param_2);
          local_70 = local_38;
          local_6c = local_34;
          local_68 = local_30;
          uStack_64 = uStack_2c;
          if (local_38 == (undefined1 *)0x80000015) goto LAB_014d91b8;
          if (local_60 != (undefined1 *)0x0) goto LAB_014d9204;
          local_a8 = local_38;
          local_a4 = local_34;
          local_a0 = local_30;
          local_9c = uStack_2c;
          goto LAB_014d9240;
        }
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        FUN_012c751c(&local_70,param_2,0);
        if (local_70 == (undefined1 *)0x3 && local_6c == (undefined1 *)0x0) {
LAB_014d8ff0:
          local_6c = local_68;
          goto LAB_014d8d50;
        }
        puVar8 = &DAT_005370ec;
LAB_014d91e4:
        local_a8 = *(undefined1 **)(puVar8 + (int)local_70 * 4);
        local_9c = uStack_64;
        local_a0 = local_68;
        goto LAB_014d924c;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_70 = (undefined1 *)0x5;
LAB_014d8d3c:
  local_6c = (undefined1 *)FUN_012c6b30(param_2,&local_70);
  goto LAB_014d8d4c;
LAB_014d90dc:
  puVar6 = local_88;
  FUN_01278730(&local_38,&local_98);
  if ((char)local_38 == '\x01') goto LAB_014d9278;
  if (local_38._1_1_ != '\x01') {
LAB_014d9260:
    local_38 = local_90;
    local_34 = local_8c;
    local_30 = local_88;
    goto LAB_014d9188;
  }
  *(undefined4 *)(local_98 + 8) = 0;
  *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
  FUN_01968828(&local_48,local_98 + 0xc);
  puVar10 = local_44;
  if (local_48 == (undefined1 *)0x2) goto LAB_014d9170;
  if (((uint)local_48 & 1) == 0) {
    local_50 = local_40;
    local_4c = uStack_2c;
    local_38 = (undefined1 *)0x8000000d;
    local_34 = local_44;
    local_30 = local_40;
  }
  else {
    FUN_0127f57c(&local_38,local_44);
    if (local_38 != (undefined1 *)0x80000015) {
      local_50 = local_30;
      local_4c = uStack_2c;
    }
    puVar10 = local_34;
    if (local_38 == (undefined1 *)0x80000015 || local_38 == &DAT_80000016) goto LAB_014d9170;
    if (local_38 == (undefined1 *)0x80000015) goto LAB_014d9260;
  }
  puVar10 = local_34;
  puVar1 = local_38;
  local_40 = local_50;
  uStack_3c = local_4c;
  local_48 = local_38;
  local_44 = local_34;
  FUN_014db48c(&local_38,&local_98);
  if (local_38 == (undefined1 *)0x80000015) {
    FUN_014c81b0(&local_48);
    puVar10 = local_34;
    goto LAB_014d9170;
  }
  local_80 = local_38;
  puStack_7c = local_34;
  puStack_78 = local_30;
  uStack_74 = uStack_2c;
  if (puVar1 == (undefined1 *)0x80000015) goto LAB_014d9260;
  if (puVar1 == &DAT_80000016) goto LAB_014d9170;
  local_68 = local_40;
  uStack_64 = uStack_3c;
  local_60 = local_38;
  puStack_5c = local_34;
  puStack_58 = local_30;
  uStack_54 = uStack_2c;
  local_70 = puVar1;
  local_6c = puVar10;
  if (puVar6 == local_90) {
    FUN_00a20ed0(&local_90);
    local_b0 = local_8c;
  }
  puVar5 = (undefined4 *)(local_b0 + (int)puVar6 * 0x20);
  local_88 = puVar6 + 1;
  *puVar5 = local_70;
  puVar5[1] = local_6c;
  puVar5[2] = local_68;
  puVar5[3] = uStack_64;
  puVar5[4] = local_60;
  puVar5[5] = puStack_5c;
  puVar5[6] = puStack_58;
  puVar5[7] = uStack_54;
  goto LAB_014d90dc;
LAB_014d9278:
  puVar10 = local_34;
LAB_014d9170:
  local_38 = (undefined1 *)0x80000015;
  local_34 = puVar10;
  FUN_01222378(&local_90);
LAB_014d9188:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  local_60 = (undefined1 *)FUN_012c7b64(param_2);
  local_70 = local_38;
  local_6c = local_34;
  local_68 = local_30;
  uStack_64 = uStack_2c;
  if (local_38 == (undefined1 *)0x80000015) {
LAB_014d91b8:
    local_a4 = local_34;
    local_a8 = (undefined1 *)0x80000015;
    local_70 = local_38;
    local_6c = local_34;
    local_68 = local_30;
    uStack_64 = uStack_2c;
    if (local_60 != (undefined1 *)0x0) {
      FUN_01674208();
    }
  }
  else if (local_60 == (undefined1 *)0x0) {
    local_a8 = local_38;
    local_a4 = local_34;
    local_a0 = local_30;
    local_9c = uStack_2c;
  }
  else {
LAB_014d9204:
    local_a8 = (undefined1 *)0x80000015;
    local_a4 = local_60;
    local_70 = local_38;
    local_6c = local_34;
    local_68 = local_30;
    uStack_64 = uStack_2c;
    FUN_014d937c(&local_70);
  }
LAB_014d9240:
  if (local_a8 != (undefined1 *)0x80000015) {
LAB_014d924c:
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = local_a0;
    param_1[3] = local_9c;
    return;
  }
  puVar6 = local_a4;
LAB_014d92ac:
  local_6c = (undefined1 *)FUN_0127dee8(puVar6,param_2);
LAB_014d8d4c:
LAB_014d8d50:
  *param_1 = 0x80000015;
  param_1[1] = local_6c;
  return;
}

