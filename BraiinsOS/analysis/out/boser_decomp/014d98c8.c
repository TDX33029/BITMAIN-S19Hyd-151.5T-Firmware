// FUN_014d98c8 @ 014d98c8 size=2824 calls_out=29 calls_in=3
// strings: internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014d98c8(int *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined4 *puVar4;
  int ****ppppiVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_f0;
  uint local_ec;
  int ***local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0;
  char local_cc;
  int ****local_c8 [4];
  int ****local_b8;
  int ****ppppiStack_b4;
  int ****local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int ****local_88;
  undefined1 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int ****local_70;
  int local_6c;
  int ****local_68;
  int ****local_64;
  int ****local_60;
  int iStack_5c;
  int ***local_58;
  int ****local_54;
  int ****local_50;
  int iStack_4c;
  undefined4 local_48;
  int ****local_44;
  int ****local_40;
  int local_3c;
  int ***local_38;
  int ****ppppiStack_34;
  int ****local_30;
  int iStack_2c;
  
  local_d0 = 0;
  local_d4 = 0;
  local_cc = -0x80;
  local_e0 = 0;
  local_e4 = 1;
  local_e8 = (int ***)0x0;
  local_dc = param_2;
  local_d8 = param_3;
  if (param_3 != 0) {
    do {
      uVar8 = (uint)*(byte *)(param_2 + local_d4);
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar8 < 0x66) {
          if (uVar8 != 0x22) {
            if (uVar8 == 0x2d) {
              local_d4 = local_d4 + 1;
              FUN_012c751c(&local_a0,&local_e8,0);
              if (local_a0 == (int ****)&DAT_00000003 && local_9c == (int ****)0x0)
              goto LAB_014d9ea0;
              local_3c = 0x1c;
              local_44 = (int ****)&SUB_00000004;
              local_40 = (int ****)0x4a53c5;
              local_48 = (int ****)&DAT_0056df8c;
              FUN_014da574(&local_b8,&local_a0,&local_48);
            }
            else {
              if (uVar8 != 0x5b) goto LAB_014d9d28;
              local_d4 = local_d4 + 1;
              local_cc = '\x7f';
              local_64 = (int ****)CONCAT31(local_64._1_3_,1);
              local_68 = &local_e8;
              FUN_014db6fc(&local_48,&local_68);
              if ((char)local_48 == '\x01') {
LAB_014d9a58:
                local_a0 = local_44;
LAB_014da184:
                local_98 = (int ****)0x80000015;
              }
              else {
                if (local_48._1_1_ != '\x01') {
                  local_44 = (int ****)&DAT_0132b6a0;
                  local_48 = (int ****)&local_a0;
                  local_9c = (int ****)&SUB_00000004;
                  local_a0 = (int ****)&DAT_0056df8c;
                  local_a0 = (int ****)FUN_019676ac(&DAT_0057cd64,&local_48);
                  goto LAB_014da184;
                }
                FUN_014db5e8(&local_48,local_68);
                if ((char)local_48 == '\x01') goto LAB_014d9a58;
                uVar1 = local_48._1_1_;
                FUN_014d8520(&local_58,local_68,(uint)local_64 & 0xff);
                if (local_58 == (int ***)0x80000015) {
                  local_a0 = local_54;
                  goto LAB_014da184;
                }
                FUN_01bed4e2((uint)&local_48 | 7,&local_58,0x10);
                local_a0 = (int ****)CONCAT31(local_a0._1_3_,uVar1);
                FUN_01bed4e2((uint)&local_a0 | 1,&local_48,0x17);
              }
              local_cc = local_cc + '\x01';
              local_30 = (int ****)FUN_014d9568(&local_e8);
              local_48 = local_a0;
              local_44 = local_9c;
              local_40 = local_98;
              local_3c = local_94;
              local_38 = (int ***)iStack_90;
              ppppiStack_34 = (int ****)iStack_8c;
              if (local_98 == (int ****)0x80000015) {
                local_b0 = (int ****)0x80000015;
                local_b8 = local_a0;
                if (local_30 != (int ****)0x0) {
                  FUN_006c7e7c();
                }
              }
              else if (local_30 == (int ****)0x0) {
                local_b8 = local_a0;
                ppppiStack_b4 = local_9c;
                local_b0 = local_98;
                local_ac = local_94;
                iStack_a8 = iStack_90;
                iStack_a4 = iStack_8c;
              }
              else {
                local_b0 = (int ****)0x80000015;
                local_b8 = local_30;
                FUN_014dbd38(&local_40);
              }
            }
            goto LAB_014d9fb0;
          }
          local_d4 = local_d4 + 1;
          local_e0 = 0;
          FUN_01968828(&local_58,&local_dc,&local_e8);
          ppppiVar2 = local_54;
          if (local_58 == (int ***)0x2) goto LAB_014d995c;
          if (((uint)local_58 & 1) == 0) {
            local_94 = 0x1c;
            local_40 = local_50;
            local_9c = (int ****)&SUB_00000004;
            local_98 = (int ****)0x4a53c5;
            local_a0 = (int ****)&DAT_0056df8c;
            local_44 = local_54;
            local_48 = (int ****)CONCAT31(local_48._1_3_,5);
            local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
          }
          else {
            local_94 = 0x1c;
            local_40 = local_50;
            local_9c = (int ****)&SUB_00000004;
            local_98 = (int ****)0x4a53c5;
            local_a0 = (int ****)&DAT_0056df8c;
            local_44 = local_54;
            local_48 = (int ****)CONCAT31(local_48._1_3_,5);
            local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
          }
        }
        else if (uVar8 < 0x74) {
          if (uVar8 == 0x66) {
            local_d4 = local_d4 + 1;
            ppppiVar2 = (int ****)FUN_012c6b8c(&local_e8,&DAT_0056efac,4);
            if (ppppiVar2 != (int ****)0x0) goto LAB_014d995c;
            local_94 = 0x1c;
            local_98 = (int ****)0x4a53c5;
            local_9c = (int ****)&SUB_00000004;
            local_a0 = (int ****)&DAT_0056df8c;
            local_48 = (int ****)((uint)local_48 & 0xffff0000);
            local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
          }
          else {
            if (uVar8 != 0x6e) goto LAB_014d9d28;
            local_d4 = local_d4 + 1;
            ppppiVar2 = (int ****)FUN_012c6b8c(&local_e8,"ull",3);
            if (ppppiVar2 != (int ****)0x0) goto LAB_014d995c;
            local_94 = 0x1c;
            local_98 = (int ****)0x4a53c5;
            local_9c = (int ****)&SUB_00000004;
            local_a0 = (int ****)&DAT_0056df8c;
            local_48 = (int ****)CONCAT31(local_48._1_3_,7);
            local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
          }
        }
        else {
          if (uVar8 != 0x74) {
            if (uVar8 == 0x7b) {
              local_d4 = local_d4 + 1;
              local_cc = '\x7f';
              local_84 = 1;
              local_f0 = 8;
              iVar7 = 0;
              local_78 = 0;
              local_7c = 8;
              local_80 = 0;
              local_ec = 4;
              local_88 = &local_e8;
              goto LAB_014d9ad4;
            }
LAB_014d9d28:
            if (9 < uVar8 - 0x30) {
              local_48 = (int ****)&DAT_0000000a;
              ppppiVar2 = (int ****)FUN_012c6b30(&local_e8,&local_48);
              goto LAB_014da394;
            }
            FUN_012c751c(&local_a0,&local_e8,1);
            if (local_a0 == (int ****)&DAT_00000003 && local_9c == (int ****)0x0) {
LAB_014d9ea0:
              ppppiVar2 = local_98;
              goto LAB_014d995c;
            }
            local_3c = 0x1c;
            local_44 = (int ****)&SUB_00000004;
            local_40 = (int ****)0x4a53c5;
            local_48 = (int ****)&DAT_0056df8c;
            FUN_014da574(&local_b8,&local_a0,&local_48);
            goto LAB_014d9fb0;
          }
          local_d4 = local_d4 + 1;
          ppppiVar2 = (int ****)FUN_012c6b8c(&local_e8,"rue",3);
          if (ppppiVar2 != (int ****)0x0) goto LAB_014d995c;
          local_94 = 0x1c;
          local_98 = (int ****)0x4a53c5;
          local_9c = (int ****)&SUB_00000004;
          local_a0 = (int ****)&DAT_0056df8c;
          local_48 = (int ****)CONCAT22(local_48._2_2_,0x100);
          local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
        }
        local_b0 = (int ****)0x80000015;
        goto LAB_014d9fb0;
      }
      local_d4 = local_d4 + 1;
    } while (param_3 != local_d4);
  }
  local_48 = (int ****)&DAT_00000005;
  ppppiVar2 = (int ****)FUN_012c6b30(&local_e8,&local_48);
  goto LAB_014d995c;
LAB_014d9ad4:
  FUN_01278730(&local_48,&local_88);
  ppppiVar2 = local_88;
  if ((char)local_48 != '\x01') {
    if (local_48._1_1_ != '\x01') {
LAB_014d9f34:
      if (local_ec != 4) {
        FUN_01bed4e2((uint)&local_48 | 7,&local_80,0xc);
        local_a0 = (int ****)CONCAT31(local_a0._1_3_,(char)local_ec);
        FUN_01bed4e2((uint)&local_a0 | 1,&local_48,0x17);
        goto LAB_014da290;
      }
      local_54 = (int ****)&SUB_00000004;
      local_44 = (int ****)&DAT_0132b6a0;
      local_48 = &local_58;
      local_58 = (int ***)&DAT_0056df8c;
      local_a0 = (int ****)FUN_019676ac(&DAT_0057cd64,&local_48);
LAB_014da27c:
      local_98 = (int ****)0x80000015;
      goto LAB_014da288;
    }
    ppppiVar5 = local_88 + 5;
    local_88[2] = (int ***)0x0;
    ppppiVar2[5] = (int ***)((int)*ppppiVar5 + 1);
    FUN_01968828(&local_a0,ppppiVar2 + 3,ppppiVar2);
    ppppiVar5 = local_9c;
    if (local_a0 == (int ****)0x2) goto LAB_014da248;
    if (((uint)local_a0 & 1) == 0) {
      if ((local_98 == (int ****)&SUB_00000004) && (*local_9c == (int ***)0x65707974)) {
        ppppiVar3 = (int ****)0x80000015;
      }
      else {
        local_40 = local_98;
        local_44 = local_9c;
        local_48 = (int ****)0x8000000d;
        ppppiVar3 = (int ****)0x8000000d;
      }
    }
    else {
      FUN_014c8140(&local_48,&DAT_0056df8c);
      ppppiVar3 = local_48;
      ppppiVar5 = local_44;
      if (local_48 == (int ****)&DAT_80000016) goto LAB_014da248;
    }
    local_70 = local_40;
    local_6c = local_3c;
    if (ppppiVar3 == (int ****)0x80000015) {
      if (local_ec != 4) {
        local_54 = (int ****)&SUB_00000004;
        local_44 = (int ****)&DAT_0132b6a0;
        local_48 = &local_58;
        local_58 = (int ***)&DAT_0056df8c;
        local_a0 = (int ****)FUN_019676ac(&DAT_005ab34f,&local_48);
        goto LAB_014da27c;
      }
      ppppiVar5 = (int ****)FUN_0167459c(ppppiVar2);
      if (ppppiVar5 != (int ****)0x0) {
        local_44 = ppppiVar5;
LAB_014da278:
        local_a0 = local_44;
        goto LAB_014da27c;
      }
      FUN_014db5e8(&local_48,ppppiVar2);
      if ((char)local_48 != '\0') goto LAB_014da278;
      local_ec = (uint)local_48 >> 8 & 0xff;
    }
    else {
      if (ppppiVar3 == (int ****)&DAT_80000016) goto LAB_014d9f34;
      ppppiVar5 = local_44;
      if (ppppiVar3 == (int ****)0x80000017) goto LAB_014da248;
      local_60 = local_40;
      iStack_5c = local_3c;
      local_68 = ppppiVar3;
      local_64 = local_44;
      FUN_014db48c(&local_58,&local_88);
      if (local_58 == (int ***)0x80000015) {
        local_98 = (int ****)0x80000015;
        local_a0 = local_54;
        FUN_014c81b0(&local_68);
        goto LAB_014da288;
      }
      local_38 = local_58;
      ppppiStack_34 = local_54;
      local_30 = local_50;
      iStack_2c = iStack_4c;
      local_48 = local_68;
      local_44 = local_64;
      local_40 = local_60;
      local_3c = iStack_5c;
      if (iVar7 == local_80) {
        FUN_00a20ed0(&local_80);
        local_f0 = local_7c;
      }
      puVar4 = (undefined4 *)(local_f0 + iVar7 * 0x20);
      iVar7 = iVar7 + 1;
      *puVar4 = local_48;
      puVar4[1] = local_44;
      puVar4[2] = local_40;
      puVar4[3] = local_3c;
      puVar4[4] = local_38;
      puVar4[5] = ppppiStack_34;
      puVar4[6] = local_30;
      puVar4[7] = iStack_2c;
      local_78 = iVar7;
    }
    goto LAB_014d9ad4;
  }
  ppppiVar5 = local_44;
LAB_014da248:
  local_98 = (int ****)0x80000015;
  local_a0 = ppppiVar5;
LAB_014da288:
  FUN_01222378(&local_80);
LAB_014da290:
  local_cc = local_cc + '\x01';
  local_30 = (int ****)FUN_012c7b64(&local_e8);
  local_48 = local_a0;
  local_44 = local_9c;
  local_40 = local_98;
  local_3c = local_94;
  local_38 = (int ***)iStack_90;
  ppppiStack_34 = (int ****)iStack_8c;
  if (local_98 == (int ****)0x80000015) {
    local_b0 = (int ****)0x80000015;
    local_b8 = local_a0;
    if (local_30 != (int ****)0x0) {
      FUN_006c7e7c();
    }
  }
  else if (local_30 == (int ****)0x0) {
    local_b8 = local_a0;
    ppppiStack_b4 = local_9c;
    local_b0 = local_98;
    local_ac = local_94;
    iStack_a8 = iStack_90;
    iStack_a4 = iStack_8c;
  }
  else {
    local_b0 = (int ****)0x80000015;
    local_b8 = local_30;
    FUN_014dbd38(&local_40);
  }
LAB_014d9fb0:
  ppppiVar2 = local_b8;
  if (local_b0 != (int ****)0x80000015) {
    piVar6 = (int *)((uint)local_c8 | 4);
    *piVar6 = local_ac;
    piVar6[1] = iStack_a8;
    piVar6[2] = iStack_a4;
    local_c8[0] = local_b0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_b8 & 0xff) {
    case 0:
      FUN_014d7828(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) {
LAB_014da0c0:
        param_1[1] = (int)local_44;
        iVar7 = 4;
      }
      else {
        param_1[1] = (int)local_48;
        param_1[2] = (int)local_44;
        param_1[3] = (int)local_40;
        param_1[4] = local_3c;
        param_1[5] = (int)local_38;
        param_1[6] = (int)ppppiStack_34;
        param_1[7] = (int)local_30;
        iVar7 = 0;
      }
      break;
    case 1:
      FUN_014d5328(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014da0c0;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar7 = 1;
      break;
    case 2:
      FUN_014d6410(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014da0c0;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar7 = 2;
      break;
    case 3:
      FUN_014d6e1c(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014da0c0;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar7 = 3;
    }
    *param_1 = iVar7;
    if (iVar7 != 4) {
      local_48 = (int ****)*param_1;
      local_44 = (int ****)param_1[1];
      local_40 = (int ****)param_1[2];
      local_3c = param_1[3];
      local_38 = (int ***)param_1[4];
      ppppiStack_34 = (int ****)param_1[5];
      local_30 = (int ****)param_1[6];
      iStack_2c = param_1[7];
      if (local_d4 < local_d8) {
        do {
          uVar8 = *(byte *)(local_dc + local_d4) - 9;
          if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
            local_a0 = (int ****)&DAT_00000016;
            iVar7 = FUN_012c6b30(&local_e8,&local_a0);
            *param_1 = 4;
            param_1[1] = iVar7;
            FUN_014da4e4(&local_48);
            break;
          }
          local_d4 = local_d4 + 1;
        } while (local_d8 != local_d4);
      }
    }
    goto LAB_014d9964;
  }
LAB_014da394:
  ppppiVar2 = (int ****)FUN_0127dee8(ppppiVar2,&local_e8);
LAB_014d995c:
  *param_1 = 4;
  param_1[1] = (int)ppppiVar2;
LAB_014d9964:
  FUN_019bb7e0(local_e8,local_e4);
  return;
}

