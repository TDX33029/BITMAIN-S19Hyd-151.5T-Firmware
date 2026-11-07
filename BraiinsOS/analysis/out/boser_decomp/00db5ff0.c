// FUN_00db5ff0 @ 00db5ff0 size=2328 calls_out=21 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00db5ff0(undefined4 *param_1,undefined **param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined **extraout_r2;
  undefined **extraout_r3;
  undefined **extraout_r3_00;
  undefined **extraout_r3_01;
  undefined **extraout_r3_02;
  undefined **extraout_r3_03;
  undefined **extraout_r3_04;
  undefined **extraout_r3_05;
  undefined **extraout_r3_06;
  undefined **extraout_r3_07;
  undefined **extraout_r3_08;
  undefined **extraout_r3_09;
  undefined **extraout_r3_10;
  undefined **extraout_r3_11;
  undefined **extraout_r3_12;
  undefined **extraout_r3_13;
  undefined **extraout_r3_14;
  undefined **unaff_r4;
  uint uVar8;
  undefined **ppuVar9;
  undefined **extraout_r12;
  undefined **extraout_r12_00;
  undefined **extraout_r12_01;
  undefined8 uVar10;
  undefined **local_fc;
  undefined **local_f8;
  undefined **local_f4;
  undefined **local_f0;
  undefined **local_ec;
  undefined **local_e8;
  undefined **local_e4;
  undefined **local_c0;
  undefined1 local_bc;
  undefined **local_b8;
  undefined **local_b4;
  undefined **local_b0;
  undefined **local_a8;
  undefined **ppuStack_a4;
  undefined **ppuStack_a0;
  undefined **ppuStack_9c;
  undefined **local_98;
  undefined **local_94;
  undefined **local_90;
  undefined **ppuStack_8c;
  undefined **ppuStack_88;
  undefined **ppuStack_84;
  undefined **local_80;
  undefined **ppuStack_7c;
  undefined **ppuStack_78;
  undefined **ppuStack_74;
  undefined4 local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **ppuStack_60;
  undefined **ppuStack_5c;
  undefined **local_58 [2];
  undefined **local_50;
  undefined **local_4c;
  undefined **local_48;
  undefined **local_44;
  undefined **local_40;
  undefined **local_3c;
  undefined **local_38;
  undefined1 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  puVar7 = param_2[5];
  if (puVar7 < param_2[4]) {
    do {
      uVar8 = (byte)param_2[3][(int)puVar7] - 9;
      if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
        if ((byte)param_2[3][(int)puVar7] != 0x5b) {
          ppuVar6 = (undefined **)FUN_012c7788(param_2,&uStack_25,&DAT_01c1cb18);
          goto LAB_00db681c;
        }
        cVar1 = *(char *)(param_2 + 7);
        *(char *)(param_2 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          param_2[5] = puVar7 + 1;
          local_b0 = (undefined **)0x0;
          local_b8 = (undefined **)0x0;
          local_b4 = (undefined **)&SUB_00000004;
          local_bc = 1;
          local_c0 = param_2;
          goto LAB_00db60e4;
        }
        local_70 = (undefined **)0x18;
        goto LAB_00db6048;
      }
      puVar7 = puVar7 + 1;
      param_2[5] = puVar7;
    } while (param_2[4] != puVar7);
  }
  local_70 = (undefined **)0x5;
LAB_00db6048:
  uVar2 = FUN_012c6b30(param_2,&local_70);
  goto LAB_00db6828;
LAB_00db60e4:
  FUN_014db6fc(&local_70,&local_c0);
  ppuVar6 = local_c0;
  if ((char)local_70 == '\x01') goto LAB_00db683c;
  if (local_70._1_1_ != '\x01') {
    local_50 = local_b8;
    local_4c = local_b4;
    local_48 = local_b0;
    goto LAB_00db67b0;
  }
  puVar7 = local_c0[5];
  if (local_c0[4] <= puVar7) {
LAB_00db6780:
    local_70 = (undefined **)&DAT_00000005;
    local_4c = (undefined **)FUN_012c6b30(local_c0,&local_70);
    goto LAB_00db679c;
  }
  while( true ) {
    uVar8 = (uint)(byte)local_c0[3][(int)puVar7];
    if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) break;
    puVar7 = puVar7 + 1;
    local_c0[5] = puVar7;
    if (local_c0[4] == puVar7) goto LAB_00db6780;
  }
  if (uVar8 != 0x5b) {
    if (uVar8 == 0x7b) {
      cVar1 = *(char *)(local_c0 + 7);
      *(char *)(local_c0 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) != '\0') {
        local_c0[5] = puVar7 + 1;
        local_e4 = (undefined **)&DAT_80000000;
        local_34 = 1;
        local_38 = local_c0;
        local_e8 = (undefined **)&DAT_80000000;
        ppuVar5 = local_ec;
LAB_00db6190:
        do {
          FUN_01278730(&local_70,&local_38);
          ppuVar4 = local_38;
          if ((char)local_70 == '\x01') {
            ppuVar9 = extraout_r3;
            ppuVar3 = local_6c;
            break;
          }
          if (local_70._1_1_ != '\x01') {
            local_4c = local_f0;
            local_50 = local_e4;
            if (local_e8 == (undefined **)&DAT_80000000) {
              local_2c = 4;
              local_30 = &DAT_0056ee18;
              local_6c = (undefined **)&LAB_018a13b8;
              local_70 = &local_30;
              local_48 = ppuVar5;
              ppuVar3 = (undefined **)FUN_019676ac(&DAT_0057cd64,&local_70);
              local_e8 = (undefined **)&DAT_80000000;
              ppuVar9 = extraout_r3_10;
LAB_00db64e0:
              goto LAB_00db63a8;
            }
            if (local_e4 == (undefined **)&DAT_80000000) {
              local_2c = 4;
              local_30 = &DAT_0056dc6c;
              local_6c = (undefined **)&DAT_0132b6a0;
              local_70 = &local_30;
              local_48 = ppuVar5;
              ppuVar4 = (undefined **)FUN_019676ac(&DAT_0057cd64,&local_70);
              FUN_019bb7e0(local_e8,local_f4);
              local_e8 = (undefined **)&DAT_80000000;
              local_40 = extraout_r2;
              local_48 = extraout_r3_12;
              local_4c = ppuVar4;
              local_ec = ppuVar5;
            }
            else {
              local_40 = local_fc;
              local_48 = local_f8;
              local_4c = local_f4;
              local_ec = ppuVar5;
            }
            goto LAB_00db63d8;
          }
          local_38[2] = (undefined *)0x0;
          local_38[5] = local_38[5] + 1;
          FUN_01968828(&local_70,local_38 + 3,local_38);
          ppuVar9 = extraout_r3_00;
          ppuVar3 = local_6c;
          if (local_70 == (undefined **)0x2) break;
          if (local_68 == (undefined **)&SUB_00000004) {
            if (*local_6c == (undefined *)0x656d616e) {
              if (local_e8 == (undefined **)&DAT_80000000) {
                ppuVar3 = (undefined **)FUN_0167459c(ppuVar4);
                ppuVar9 = extraout_r3_03;
                if (ppuVar3 == (undefined **)0x0) {
                  FUN_00aeeebc(&local_70,ppuVar4);
                  local_e8 = local_70;
                  ppuVar9 = extraout_r3_04;
                  ppuVar3 = local_6c;
                  if (local_70 != (undefined **)&DAT_80000000) {
                    local_f8 = local_68;
                    local_f4 = local_6c;
                    goto LAB_00db6190;
                  }
                }
                local_4c = local_f0;
                local_50 = local_e4;
                local_e8 = (undefined **)&DAT_80000000;
                local_48 = ppuVar5;
                goto LAB_00db63a8;
              }
              local_30 = &DAT_0056ee18;
            }
            else {
              if (*local_6c != (undefined *)0x6c6f6f70) goto LAB_00db6220;
              if (local_e4 == (undefined **)&DAT_80000000) {
                ppuVar3 = (undefined **)FUN_0167459c(ppuVar4);
                ppuVar9 = extraout_r3_05;
                if (ppuVar3 == (undefined **)0x0) {
                  FUN_00db6a48(&local_70,ppuVar4);
                  ppuVar9 = extraout_r3_06;
                  ppuVar3 = local_6c;
                  if (local_70 != (undefined **)&DAT_80000000) {
                    local_fc = local_6c;
                    local_f0 = local_6c;
                    local_e4 = local_70;
                    ppuVar5 = local_68;
                    goto LAB_00db6190;
                  }
                }
                local_4c = local_f0;
                local_50 = local_e4;
                goto LAB_00db63bc;
              }
              local_30 = &DAT_0056dc6c;
            }
            local_4c = local_f0;
            local_50 = local_e4;
            local_2c = 4;
            local_6c = (undefined **)&DAT_0132b6a0;
            local_70 = &local_30;
            local_48 = ppuVar5;
            ppuVar3 = (undefined **)FUN_019676ac(&DAT_005ab34f,&local_70);
            ppuVar9 = extraout_r3_14;
            goto LAB_00db64e0;
          }
LAB_00db6220:
          ppuVar3 = (undefined **)FUN_0167459c(ppuVar4);
          ppuVar9 = extraout_r3_01;
          if (ppuVar3 != (undefined **)0x0) break;
          ppuVar3 = (undefined **)FUN_012c6c4c(ppuVar4);
          ppuVar9 = extraout_r3_02;
        } while (ppuVar3 == (undefined **)0x0);
        local_4c = local_f0;
        local_50 = local_e4;
        local_48 = ppuVar5;
LAB_00db63a8:
        if (local_e4 != (undefined **)&DAT_80000000) {
          FUN_00f85da0(&local_50);
          ppuVar9 = extraout_r3_08;
        }
        local_ec = ppuVar5;
LAB_00db63bc:
        if (local_e8 != (undefined **)&DAT_80000000) {
          FUN_019bb7e0(local_e8,local_f4);
          ppuVar9 = extraout_r3_09;
        }
        local_e8 = (undefined **)&DAT_80000000;
        local_40 = ppuVar3;
        local_48 = ppuVar9;
        local_4c = ppuVar3;
LAB_00db63d8:
        *(char *)(ppuVar6 + 7) = *(char *)(ppuVar6 + 7) + '\x01';
        local_44 = local_e4;
        local_50 = local_e8;
        local_3c = ppuVar5;
        ppuVar5 = (undefined **)FUN_012c7b64(ppuVar6);
        ppuVar4 = local_4c;
        local_70 = local_50;
        local_6c = local_4c;
        local_68 = local_48;
        local_64 = local_44;
        ppuStack_60 = local_40;
        ppuStack_5c = local_3c;
        local_58[0] = ppuVar5;
        if (local_50 != (undefined **)&DAT_80000000) {
          if (ppuVar5 != (undefined **)0x0) {
            FUN_019bb7e0(local_50,local_4c);
            FUN_00f85da0(&local_64);
            ppuVar9 = (undefined **)&DAT_80000000;
            goto LAB_00db65d8;
          }
          goto LAB_00db65c0;
        }
        if (ppuVar5 == (undefined **)0x0) goto LAB_00db65b8;
        FUN_00f80260(local_58);
        ppuVar9 = (undefined **)&DAT_80000000;
        ppuVar5 = ppuVar4;
        goto LAB_00db65d8;
      }
      local_70 = (undefined **)&DAT_00000018;
      local_4c = (undefined **)FUN_012c6b30(local_c0,&local_70);
    }
    else {
      ppuVar5 = (undefined **)FUN_012c7788(local_c0,&uStack_25,&DAT_01c1ce98);
LAB_00db68b8:
      local_4c = (undefined **)FUN_0127dee8(ppuVar5,ppuVar6);
    }
    goto LAB_00db679c;
  }
  cVar1 = *(char *)(local_c0 + 7);
  *(char *)(local_c0 + 7) = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    local_70 = (undefined **)&DAT_00000018;
    local_4c = (undefined **)FUN_012c6b30(local_c0,&local_70);
    goto LAB_00db679c;
  }
  local_c0[5] = puVar7 + 1;
  local_4c = (undefined **)CONCAT31(local_4c._1_3_,1);
  local_50 = local_c0;
  FUN_00fac6e0(&local_70,&local_50);
  ppuVar9 = local_68;
  ppuVar4 = local_6c;
  ppuVar5 = local_70;
  if (local_70 == (undefined **)&DAT_80000001) {
    uVar2 = extraout_r1;
    local_3c = extraout_r3_07;
    ppuVar9 = unaff_r4;
    ppuVar3 = local_6c;
    local_40 = extraout_r12;
LAB_00db6514:
    uVar10 = CONCAT44(uVar2,ppuVar3);
    ppuVar5 = (undefined **)&DAT_80000000;
    unaff_r4 = ppuVar9;
  }
  else {
    if (local_70 != (undefined **)&DAT_80000000) {
      FUN_014db6fc(&local_70,&local_50);
      if ((char)local_70 == '\x01') {
LAB_00db6358:
        ppuVar3 = local_6c;
      }
      else {
        if (local_70._1_1_ == '\x01') {
          FUN_00db6a48(&local_70,local_50);
          uVar10 = CONCAT44(local_70,ppuVar4);
          if (local_70 != (undefined **)&DAT_80000000) {
            local_3c = local_68;
            unaff_r4 = ppuVar9;
            local_40 = local_6c;
            goto LAB_00db6518;
          }
          goto LAB_00db6358;
        }
        ppuVar3 = (undefined **)FUN_012cc2c0(1,&DAT_01c1aefc,&DAT_01d064b8);
      }
      FUN_019bb7e0(ppuVar5,ppuVar4);
      uVar2 = extraout_r1_00;
      local_3c = extraout_r3_11;
      local_40 = extraout_r12_00;
      goto LAB_00db6514;
    }
    uVar10 = FUN_012cc2c0(0,&DAT_01c1aefc,&DAT_01d064b8);
    ppuVar5 = (undefined **)&DAT_80000000;
    local_3c = extraout_r3_13;
    local_40 = extraout_r12_01;
  }
LAB_00db6518:
  local_44 = (undefined **)((ulonglong)uVar10 >> 0x20);
  local_4c = (undefined **)uVar10;
  *(char *)(ppuVar6 + 7) = *(char *)(ppuVar6 + 7) + '\x01';
  local_50 = ppuVar5;
  local_48 = unaff_r4;
  ppuVar5 = (undefined **)FUN_014d9568(ppuVar6);
  ppuVar4 = local_4c;
  local_70 = local_50;
  local_6c = local_4c;
  local_68 = local_48;
  local_64 = local_44;
  ppuStack_60 = local_40;
  ppuStack_5c = local_3c;
  local_58[0] = ppuVar5;
  if (local_50 == (undefined **)&DAT_80000000) {
    ppuVar9 = (undefined **)&DAT_80000000;
    if (ppuVar5 == (undefined **)0x0) {
LAB_00db65b8:
      ppuVar9 = (undefined **)&DAT_80000000;
      ppuVar5 = local_4c;
      local_70 = local_50;
      local_6c = local_4c;
      local_68 = local_48;
      local_64 = local_44;
      ppuStack_60 = local_40;
      ppuStack_5c = local_3c;
    }
    else {
      FUN_00f80260(local_58);
      ppuVar5 = ppuVar4;
    }
  }
  else if (ppuVar5 == (undefined **)0x0) {
LAB_00db65c0:
    local_80 = local_48;
    ppuStack_7c = local_44;
    ppuStack_78 = local_40;
    ppuStack_74 = local_3c;
    ppuVar9 = local_50;
    ppuVar5 = local_4c;
    local_70 = local_50;
    local_6c = local_4c;
    local_68 = local_48;
    local_64 = local_44;
    ppuStack_60 = local_40;
    ppuStack_5c = local_3c;
  }
  else {
    FUN_019bb7e0(local_50,local_4c);
    ppuVar9 = (undefined **)&DAT_80000000;
    FUN_00f85da0(&local_64);
  }
LAB_00db65d8:
  ppuVar4 = local_b0;
  if (ppuVar9 == (undefined **)&DAT_80000000) goto LAB_00db68b8;
  local_a8 = local_80;
  ppuStack_a4 = ppuStack_7c;
  ppuStack_a0 = ppuStack_78;
  ppuStack_9c = ppuStack_74;
  local_90 = local_80;
  ppuStack_8c = ppuStack_7c;
  ppuStack_88 = ppuStack_78;
  ppuStack_84 = ppuStack_74;
  local_98 = ppuVar9;
  local_94 = ppuVar5;
  if (local_b0 == local_b8) {
    FUN_014f8acc(&local_b8);
  }
  ppuVar6 = local_b4 + (int)ppuVar4 * 6;
  *ppuVar6 = (undefined *)local_98;
  ppuVar6[1] = (undefined *)local_94;
  ppuVar6[2] = (undefined *)local_90;
  ppuVar6[3] = (undefined *)ppuStack_8c;
  ppuVar6[4] = (undefined *)ppuStack_88;
  ppuVar6[5] = (undefined *)ppuStack_84;
  local_b0 = (undefined **)((int)ppuVar4 + 1);
  unaff_r4 = ppuStack_8c;
  goto LAB_00db60e4;
LAB_00db683c:
  local_4c = local_6c;
LAB_00db679c:
  local_50 = (undefined **)&DAT_80000000;
  FUN_011d1550(&local_b8);
LAB_00db67b0:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  ppuVar5 = (undefined **)FUN_014d9568(param_2);
  ppuVar6 = local_4c;
  local_70 = local_50;
  local_6c = local_4c;
  local_68 = local_48;
  local_64 = ppuVar5;
  if (local_50 == (undefined **)&DAT_80000000) {
    if (ppuVar5 != (undefined **)0x0) {
      FUN_00f80260(&local_64);
    }
  }
  else {
    if (ppuVar5 == (undefined **)0x0) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = local_48;
      return;
    }
    FUN_00f85f20(&local_70);
    ppuVar6 = ppuVar5;
  }
LAB_00db681c:
  uVar2 = FUN_0127dee8(ppuVar6,param_2);
LAB_00db6828:
  *param_1 = 0x80000000;
  param_1[1] = uVar2;
  return;
}

