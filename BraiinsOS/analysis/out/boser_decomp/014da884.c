// FUN_014da884 @ 014da884 size=2744 calls_out=30 calls_in=3
// strings: internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index | internally tagged enum Index

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014da884(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined4 *puVar4;
  int ****ppppiVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int local_f4;
  int ***local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
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
  
  local_d8 = 0;
  local_dc = 0;
  local_cc = -0x80;
  local_e8 = 0;
  local_ec = 1;
  local_f0 = (int ***)0x0;
  local_e4 = param_2;
  local_e0 = param_3;
  local_d4 = param_2;
  local_d0 = param_3;
  if (param_3 != 0) {
    do {
      uVar8 = (uint)*(byte *)(param_2 + local_dc);
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar8 < 0x66) {
          if (uVar8 != 0x22) {
            if (uVar8 == 0x2d) {
              local_dc = local_dc + 1;
              FUN_01964ce0(&local_a0,&local_f0,0);
              if (local_a0 == (int ****)&DAT_00000003 && local_9c == (int ****)0x0)
              goto LAB_014dae58;
              local_3c = 0x1c;
              local_44 = (int ****)&SUB_00000004;
              local_40 = (int ****)0x4a53c5;
              local_48 = (int ****)&DAT_0056df8c;
              FUN_014da574(&local_b8,&local_a0,&local_48);
            }
            else {
              if (uVar8 != 0x5b) goto LAB_014dace0;
              local_dc = local_dc + 1;
              local_cc = '\x7f';
              local_64 = (int ****)CONCAT31(local_64._1_3_,1);
              local_68 = &local_f0;
              FUN_01965170(&local_48,&local_68);
              if ((char)local_48 == '\x01') {
LAB_014daa1c:
                local_a0 = local_44;
LAB_014db11c:
                local_98 = (int ****)0x80000015;
              }
              else {
                if (local_48._1_1_ != '\x01') {
                  local_44 = (int ****)&DAT_0132b6a0;
                  local_48 = (int ****)&local_a0;
                  local_9c = (int ****)&SUB_00000004;
                  local_a0 = (int ****)&DAT_0056df8c;
                  local_a0 = (int ****)FUN_019676ac(&DAT_0057cd64,&local_48);
                  goto LAB_014db11c;
                }
                FUN_014db4c8(&local_48,local_68);
                if ((char)local_48 == '\x01') goto LAB_014daa1c;
                uVar1 = local_48._1_1_;
                FUN_014d83f0(&local_58,local_68,(uint)local_64 & 0xff);
                if (local_58 == (int ***)0x80000015) {
                  local_a0 = local_54;
                  goto LAB_014db11c;
                }
                FUN_01bed4e2((uint)&local_48 | 7,&local_58,0x10);
                local_a0 = (int ****)CONCAT31(local_a0._1_3_,uVar1);
                FUN_01bed4e2((uint)&local_a0 | 1,&local_48,0x17);
              }
              local_cc = local_cc + '\x01';
              local_30 = (int ****)FUN_01964fb0(&local_f0);
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
            goto LAB_014daf64;
          }
          local_dc = local_dc + 1;
          local_e8 = 0;
          FUN_019686b4(&local_58,&local_e4,&local_f0);
          ppppiVar2 = local_54;
          if (local_58 == (int ***)0x2) goto LAB_014da920;
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
            local_dc = local_dc + 1;
            ppppiVar2 = (int ****)FUN_01964c70(&local_f0,&DAT_0056efac,4);
            if (ppppiVar2 != (int ****)0x0) goto LAB_014da920;
            local_94 = 0x1c;
            local_98 = (int ****)0x4a53c5;
            local_9c = (int ****)&SUB_00000004;
            local_a0 = (int ****)&DAT_0056df8c;
            local_48 = (int ****)((uint)local_48 & 0xffff0000);
            local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
          }
          else {
            if (uVar8 != 0x6e) goto LAB_014dace0;
            local_dc = local_dc + 1;
            ppppiVar2 = (int ****)FUN_01964c70(&local_f0,"ull",3);
            if (ppppiVar2 != (int ****)0x0) goto LAB_014da920;
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
              local_dc = local_dc + 1;
              local_cc = '\x7f';
              local_84 = 1;
              local_f4 = 8;
              iVar9 = 0;
              local_78 = 0;
              local_7c = 8;
              local_80 = 0;
              local_88 = &local_f0;
              cVar7 = '\x04';
              goto LAB_014daa94;
            }
LAB_014dace0:
            if (9 < uVar8 - 0x30) {
              local_48 = (int ****)&DAT_0000000a;
              ppppiVar2 = (int ****)FUN_01964674(&local_f0,&local_48);
              goto LAB_014db300;
            }
            FUN_01964ce0(&local_a0,&local_f0,1);
            if (local_a0 == (int ****)&DAT_00000003 && local_9c == (int ****)0x0) {
LAB_014dae58:
              ppppiVar2 = local_98;
              goto LAB_014da920;
            }
            local_3c = 0x1c;
            local_44 = (int ****)&SUB_00000004;
            local_40 = (int ****)0x4a53c5;
            local_48 = (int ****)&DAT_0056df8c;
            FUN_014da574(&local_b8,&local_a0,&local_48);
            goto LAB_014daf64;
          }
          local_dc = local_dc + 1;
          ppppiVar2 = (int ****)FUN_01964c70(&local_f0,"rue",3);
          if (ppppiVar2 != (int ****)0x0) goto LAB_014da920;
          local_94 = 0x1c;
          local_98 = (int ****)0x4a53c5;
          local_9c = (int ****)&SUB_00000004;
          local_a0 = (int ****)&DAT_0056df8c;
          local_48 = (int ****)CONCAT22(local_48._2_2_,0x100);
          local_b8 = (int ****)FUN_01967538(&local_48,&local_a0,&DAT_01cf9f94);
        }
        local_b0 = (int ****)0x80000015;
        goto LAB_014daf64;
      }
      local_dc = local_dc + 1;
    } while (param_3 != local_dc);
  }
  local_48 = (int ****)&DAT_00000005;
  ppppiVar2 = (int ****)FUN_01964674(&local_f0,&local_48);
  goto LAB_014da920;
LAB_014daa94:
  FUN_01965d20(&local_48,&local_88);
  ppppiVar2 = local_88;
  if ((char)local_48 != '\x01') {
    if (local_48._1_1_ != '\x01') {
LAB_014daeec:
      if (cVar7 != '\x04') {
        FUN_01bed4e2((uint)&local_48 | 7,&local_80,0xc);
        local_a0 = (int ****)CONCAT31(local_a0._1_3_,cVar7);
        FUN_01bed4e2((uint)&local_a0 | 1,&local_48,0x17);
        goto LAB_014db1fc;
      }
      local_54 = (int ****)&SUB_00000004;
      local_44 = (int ****)&DAT_0132b6a0;
      local_48 = &local_58;
      local_58 = (int ***)&DAT_0056df8c;
      local_a0 = (int ****)FUN_019676ac(&DAT_0057cd64,&local_48);
LAB_014db1e8:
      local_98 = (int ****)0x80000015;
      goto LAB_014db1f4;
    }
    ppppiVar5 = local_88 + 5;
    local_88[2] = (int ***)0x0;
    ppppiVar2[5] = (int ***)((int)*ppppiVar5 + 1);
    FUN_019686b4(&local_a0,ppppiVar2 + 3,ppppiVar2);
    ppppiVar5 = local_9c;
    if (local_a0 == (int ****)0x2) goto LAB_014db1b4;
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
      if (local_48 == (int ****)&DAT_80000016) goto LAB_014db1b4;
    }
    local_70 = local_40;
    local_6c = local_3c;
    if (ppppiVar3 == (int ****)0x80000015) {
      if (cVar7 != '\x04') {
        local_54 = (int ****)&SUB_00000004;
        local_44 = (int ****)&DAT_0132b6a0;
        local_48 = &local_58;
        local_58 = (int ***)&DAT_0056df8c;
        local_a0 = (int ****)FUN_019676ac(&DAT_005ab34f,&local_48);
        goto LAB_014db1e8;
      }
      ppppiVar5 = (int ****)FUN_01965c98(ppppiVar2);
      if (ppppiVar5 != (int ****)0x0) {
        local_44 = ppppiVar5;
LAB_014db1e4:
        local_a0 = local_44;
        goto LAB_014db1e8;
      }
      FUN_014db4c8(&local_48,ppppiVar2);
      if ((char)local_48 != '\0') goto LAB_014db1e4;
      cVar7 = local_48._1_1_;
    }
    else {
      if (ppppiVar3 == (int ****)&DAT_80000016) goto LAB_014daeec;
      ppppiVar5 = local_44;
      if (ppppiVar3 == (int ****)0x80000017) goto LAB_014db1b4;
      local_60 = local_40;
      iStack_5c = local_3c;
      local_68 = ppppiVar3;
      local_64 = local_44;
      FUN_014db450(&local_58,&local_88);
      if (local_58 == (int ***)0x80000015) {
        local_98 = (int ****)0x80000015;
        local_a0 = local_54;
        FUN_014c81b0(&local_68);
        goto LAB_014db1f4;
      }
      local_38 = local_58;
      ppppiStack_34 = local_54;
      local_30 = local_50;
      iStack_2c = iStack_4c;
      local_48 = local_68;
      local_44 = local_64;
      local_40 = local_60;
      local_3c = iStack_5c;
      if (iVar9 == local_80) {
        FUN_00a20ed0(&local_80);
        local_f4 = local_7c;
      }
      puVar4 = (undefined4 *)(local_f4 + iVar9 * 0x20);
      iVar9 = iVar9 + 1;
      *puVar4 = local_48;
      puVar4[1] = local_44;
      puVar4[2] = local_40;
      puVar4[3] = local_3c;
      puVar4[4] = local_38;
      puVar4[5] = ppppiStack_34;
      puVar4[6] = local_30;
      puVar4[7] = iStack_2c;
      local_78 = iVar9;
    }
    goto LAB_014daa94;
  }
  ppppiVar5 = local_44;
LAB_014db1b4:
  local_98 = (int ****)0x80000015;
  local_a0 = ppppiVar5;
LAB_014db1f4:
  FUN_01222378(&local_80);
LAB_014db1fc:
  local_cc = local_cc + '\x01';
  local_30 = (int ****)FUN_019650c4(&local_f0);
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
LAB_014daf64:
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
LAB_014db074:
        param_1[1] = (int)local_44;
        iVar9 = 4;
      }
      else {
        param_1[1] = (int)local_48;
        param_1[2] = (int)local_44;
        param_1[3] = (int)local_40;
        param_1[4] = local_3c;
        param_1[5] = (int)local_38;
        param_1[6] = (int)ppppiStack_34;
        param_1[7] = (int)local_30;
        iVar9 = 0;
      }
      break;
    case 1:
      FUN_014d5328(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014db074;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar9 = 1;
      break;
    case 2:
      FUN_014d6410(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014db074;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar9 = 2;
      break;
    case 3:
      FUN_014d6e1c(&local_48,local_c8);
      if (local_48 == (int ****)&DAT_80000000) goto LAB_014db074;
      param_1[1] = (int)local_48;
      param_1[2] = (int)local_44;
      param_1[3] = (int)local_40;
      param_1[4] = local_3c;
      param_1[5] = (int)local_38;
      param_1[6] = (int)ppppiStack_34;
      param_1[7] = (int)local_30;
      iVar9 = 3;
    }
    *param_1 = iVar9;
    if (iVar9 != 4) {
      local_48 = (int ****)*param_1;
      local_44 = (int ****)param_1[1];
      local_40 = (int ****)param_1[2];
      local_3c = param_1[3];
      local_38 = (int ***)param_1[4];
      ppppiStack_34 = (int ****)param_1[5];
      local_30 = (int ****)param_1[6];
      iStack_2c = param_1[7];
      iVar9 = FUN_01964600(&local_f0);
      if (iVar9 != 0) {
        *param_1 = 4;
        param_1[1] = iVar9;
        FUN_014da4e4(&local_48);
      }
    }
    goto LAB_014da928;
  }
LAB_014db300:
  ppppiVar2 = (int ****)FUN_01966f00(ppppiVar2,&local_f0);
LAB_014da920:
  *param_1 = 4;
  param_1[1] = (int)ppppiVar2;
LAB_014da928:
  FUN_019bb7e0(local_f0,local_ec);
  return;
}

