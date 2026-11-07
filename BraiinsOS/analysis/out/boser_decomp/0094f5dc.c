// FUN_0094f5dc @ 0094f5dc size=904 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094f5dc(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined1 *unaff_r9;
  undefined1 *unaff_r10;
  undefined1 *unaff_r11;
  undefined1 *extraout_r12;
  undefined **ppuVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined1 *local_60;
  int local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined **local_50;
  undefined1 *local_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  undefined4 local_34;
  undefined *local_2c;
  undefined *local_28;
  
  if (param_2[1] == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  ppuVar3 = (undefined **)*param_2;
  param_2[1] = param_2[1] - 1;
  puVar5 = (undefined1 *)0x94f60c;
  FUN_0094f574(&local_58,ppuVar3);
  if ((char)local_58 == '\x01') {
    ppuVar3 = (undefined **)local_54;
  }
  else {
    uVar1 = (uint)local_58 >> 8 & 0xff;
    if (uVar1 == 0) {
      local_54 = (undefined1 *)0x0;
      local_58 = (undefined1 *)0x7;
      ppuVar4 = (undefined **)extraout_r12;
LAB_0094f67c:
      param_1[3] = local_80;
      param_1[4] = uStack_7c;
      param_1[5] = uStack_78;
      *(char *)(param_1 + 0x13) = (char)unaff_r10;
      param_1[0xe] = (uint)local_94;
      param_1[0xf] = (uint)unaff_r9;
      param_1[0x10] = (uint)ppuVar4;
      param_1[10] = (uint)local_98;
      param_1[0xc] = (uint)local_84;
      param_1[6] = (uint)local_88;
      param_1[7] = (uint)local_90;
      param_1[0x12] = (uint)unaff_r11;
      param_1[0xb] = (uint)puVar5;
      param_1[8] = (uint)local_8c;
      *param_1 = (uint)local_58;
      param_1[1] = (uint)local_54;
      goto LAB_0094f81c;
    }
    if (uVar1 == 1) {
      local_5c = 5;
      local_60 = (undefined1 *)ppuVar3;
      FUN_009c98e8(&local_58,ppuVar3);
      if (local_58 == (undefined1 *)0x1) {
        uVar6 = CONCAT44(local_54,1);
      }
      else {
        uVar6 = FUN_00736c0c(local_50,local_4c);
      }
      unaff_r10 = (undefined1 *)(uVar6 >> 0x20);
      if ((uVar6 & 1) == 0) {
        if (uVar6 < 0x800000000) {
          if (((uint)unaff_r10 & 0xff) != 8) {
            FUN_0094f0dc(&local_58,&local_60);
            local_8c = (undefined1 *)local_50;
            local_90 = local_54;
            local_88 = local_58;
            if (local_50 == (undefined **)0x3b9aca02) {
LAB_0094f79c:
              ppuVar3 = (undefined **)local_58;
            }
            else {
              if (local_50 == (undefined **)0x3b9aca01) {
                uVar2 = 1;
              }
              else {
                FUN_0094f0dc(&local_58,&local_60);
                puVar5 = local_54;
                local_98 = local_58;
                if (local_50 == (undefined **)0x3b9aca02) goto LAB_0094f79c;
                local_84 = (undefined1 *)local_50;
                if (local_50 == (undefined **)0x3b9aca01) {
                  uVar2 = 2;
                }
                else {
                  FUN_0094ec34(&local_58,&local_60);
                  ppuVar4 = local_50;
                  unaff_r9 = local_54;
                  local_94 = local_58;
                  if (local_50 == (undefined **)0x3b9aca02) goto LAB_0094f79c;
                  if (local_50 == (undefined **)0x3b9aca01) {
                    uVar2 = 3;
                  }
                  else {
                    FUN_0094e544(&local_58,&local_60);
                    unaff_r11 = local_54;
                    if (local_58 == (undefined1 *)0x2) {
                      ppuVar3 = (undefined **)local_54;
                      goto LAB_0094f80c;
                    }
                    if (((uint)local_58 & 1) == 0) {
                      uVar2 = 4;
                    }
                    else {
                      if (local_5c != 0) {
                        FUN_00a4dc18(&local_58,local_60);
                        ppuVar3 = local_50;
                        if (local_58 != (undefined1 *)0x7 || local_54 != (undefined1 *)0x0) {
                          local_80 = (uint)local_4c;
                          uStack_7c = uStack_48;
                          uStack_78 = uStack_44;
                          goto LAB_0094f67c;
                        }
                        goto LAB_0094f80c;
                      }
                      uVar2 = 5;
                    }
                  }
                }
              }
              ppuVar3 = (undefined **)FUN_00a9d070(uVar2,&DAT_01c0c418,&DAT_01d064b8);
            }
          }
        }
        else {
          local_2c = &DAT_01c0e944;
          local_50 = &local_2c;
          local_58 = local_40;
          local_34 = 0;
          local_40[0] = 1;
          local_28 = &DAT_01d064b8;
          local_4c = &LAB_0196b2a4;
          local_54 = (undefined1 *)0x1963220;
          local_38 = unaff_r10;
          ppuVar3 = (undefined **)FUN_00a9cfdc(&DAT_0058eb0d,&local_58);
        }
      }
      else {
        ppuVar3 = (undefined **)unaff_r10;
      }
    }
    else {
      local_58 = &DAT_80000004;
      local_54 = (undefined1 *)uVar1;
      ppuVar3 = (undefined **)FUN_0073696c(&local_58);
    }
  }
LAB_0094f80c:
  *param_1 = 9;
  param_1[1] = 0;
LAB_0094f81c:
  param_1[2] = (uint)ppuVar3;
  return;
}

