// FUN_01273a5c @ 01273a5c size=2068 calls_out=20 calls_in=2
// strings: value | value | value | value | value

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01273a5c(int *param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint3 *puVar5;
  undefined2 *puVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *******extraout_r1;
  undefined4 *******extraout_r1_00;
  undefined4 *******extraout_r1_01;
  undefined4 *******extraout_r1_02;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *******unaff_r8;
  undefined4 *******pppppppuVar12;
  undefined4 *******extraout_r12;
  undefined4 *******extraout_r12_00;
  undefined4 *******extraout_r12_01;
  undefined4 *******extraout_r12_02;
  undefined4 *******extraout_r12_03;
  undefined4 *******extraout_r12_04;
  undefined4 *******extraout_r12_05;
  undefined4 *******extraout_r12_06;
  undefined4 *******extraout_r12_07;
  undefined4 *******extraout_r12_08;
  undefined4 *******extraout_r12_09;
  int *piVar13;
  undefined4 *******extraout_r12_10;
  undefined4 *******extraout_r12_11;
  undefined4 *******extraout_r12_12;
  undefined4 *******pppppppuVar14;
  undefined4 *******local_124;
  undefined4 *******local_120;
  undefined4 *******local_114;
  undefined4 *******local_10c;
  undefined4 *******local_104;
  undefined4 *******local_100;
  undefined4 *******local_d0;
  undefined4 *******pppppppuStack_cc;
  int iStack_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 *******pppppppuStack_a0;
  undefined4 *******pppppppuStack_9c;
  undefined4 local_98;
  undefined4 *******local_94;
  undefined4 *******local_90;
  undefined4 *******pppppppuStack_8c;
  undefined4 *******pppppppuStack_88;
  undefined4 *******pppppppuStack_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 *******pppppppuStack_78;
  int iStack_74;
  undefined4 *******local_70;
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 *******pppppppuStack_5c;
  undefined4 *******pppppppuStack_58;
  undefined4 *******pppppppuStack_54;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  undefined4 *******local_48;
  int iStack_44;
  int local_40;
  undefined1 local_3c;
  undefined4 *******local_38;
  undefined4 *******pppppppuStack_34;
  undefined4 *******pppppppuStack_30;
  undefined4 *******pppppppuStack_2c;
  undefined1 uStack_25;
  
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < uVar8) {
    do {
      uVar11 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      uVar10 = uVar11 - 9;
      if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 != 0x6e) goto LAB_01273ac4;
        *(uint *)(param_2 + 0x14) = uVar9 + 1;
        iVar4 = FUN_01964c70(param_2,"ull",3);
        if (iVar4 == 0) {
          param_1[6] = -0x80000000;
          return;
        }
        goto LAB_01273d84;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (uVar8 != uVar9);
  }
  else {
LAB_01273ac4:
    if (uVar9 < uVar8) {
      do {
        uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
        if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar10 == 0x5b) {
            cVar3 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar3;
            if (cVar3 != '\0') {
              *(uint *)(param_2 + 0x14) = uVar9 + 1;
              local_3c = 1;
              local_40 = param_2;
              FUN_01643378(&local_98,&local_40);
              pppppppuVar12 = local_90;
              pppppppuVar7 = local_94;
              pppppppuVar14 = local_98;
              if (local_98 == (undefined4 *******)&DAT_80000001) {
                local_98 = local_94;
                pppppppuVar12 = unaff_r8;
                pppppppuVar7 = extraout_r12_05;
                local_94 = (undefined4 *******)0x1273d4c;
LAB_01273dd0:
                pppppppuVar14 = (undefined4 *******)&DAT_80000000;
              }
              else {
                if (local_98 == (undefined4 *******)&DAT_80000000) {
                  local_98 = (undefined4 *******)FUN_014b5c7c(0,&DAT_01c25474,&DAT_01d064b8);
                  pppppppuVar12 = unaff_r8;
                  pppppppuVar7 = extraout_r12_11;
                  local_94 = (undefined4 *******)0x12741d8;
                  goto LAB_01273dd0;
                }
                FUN_01964f38(&local_98,&local_40);
                if (((uint)local_98 & 0xff) == 7) {
                  local_98 = local_94;
LAB_01273dc4:
                  FUN_019bb7e0(pppppppuVar14,pppppppuVar7);
                  pppppppuVar12 = unaff_r8;
                  pppppppuVar7 = extraout_r12_06;
                  local_94 = (undefined4 *******)0x1273dd0;
                  goto LAB_01273dd0;
                }
                local_68 = local_90;
                local_64 = pppppppuStack_8c;
                local_60 = pppppppuStack_88;
                pppppppuStack_5c = pppppppuStack_84;
                if (((uint)local_98 & 0xff) == 6) {
                  local_98 = (undefined4 *******)FUN_014b5c7c(1,&DAT_01c25474,&DAT_01d064b8);
                  unaff_r8 = pppppppuStack_8c;
                  goto LAB_01273dc4;
                }
                local_a8 = local_90;
                local_a4 = pppppppuStack_8c;
                pppppppuStack_a0 = pppppppuStack_88;
                pppppppuStack_9c = pppppppuStack_84;
              }
              *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
              local_60 = local_a8;
              pppppppuStack_5c = local_a4;
              pppppppuStack_58 = pppppppuStack_a0;
              pppppppuStack_54 = pppppppuStack_9c;
              local_68 = local_98;
              local_64 = local_94;
              local_50 = pppppppuVar14;
              local_4c = pppppppuVar7;
              local_48 = pppppppuVar12;
              pppppppuVar7 = (undefined4 *******)FUN_01964fb0(param_2);
              pppppppuVar14 = local_68;
              local_98 = local_68;
              local_94 = local_64;
              local_90 = local_60;
              pppppppuStack_8c = pppppppuStack_5c;
              pppppppuStack_88 = pppppppuStack_58;
              pppppppuStack_84 = pppppppuStack_54;
              local_80 = local_50;
              local_7c = local_4c;
              pppppppuStack_78 = local_48;
              iStack_74 = iStack_44;
              local_70 = pppppppuVar7;
              if (local_50 == (undefined4 *******)&DAT_80000000) {
                if (pppppppuVar7 != (undefined4 *******)0x0) {
                  FUN_006c7e7c(pppppppuVar7);
                }
                pppppppuVar7 = (undefined4 *******)&DAT_80000000;
              }
              else if (pppppppuVar7 == (undefined4 *******)0x0) {
                piVar13 = (int *)((uint)&local_98 | 4);
                local_c0 = *piVar13;
                iStack_bc = piVar13[1];
                iStack_b8 = piVar13[2];
                iStack_b4 = piVar13[3];
                iStack_b0 = piVar13[4];
                local_d0 = local_4c;
                pppppppuStack_cc = local_48;
                iStack_c8 = iStack_44;
                pppppppuVar7 = local_50;
              }
              else {
                FUN_019bb7e0(local_50,local_4c);
                FUN_00e0febc(&local_98);
                pppppppuVar14 = pppppppuVar7;
                pppppppuVar7 = (undefined4 *******)&DAT_80000000;
              }
              goto LAB_0127407c;
            }
          }
          else {
            if (uVar10 != 0x7b) {
              pppppppuVar14 = (undefined4 *******)FUN_019659c8(param_2,&uStack_25,&DAT_01c254cc);
              goto LAB_012741b0;
            }
            cVar3 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar3;
            if (cVar3 != '\0') {
              *(uint *)(param_2 + 0x14) = uVar9 + 1;
              local_3c = 1;
              local_104 = (undefined4 *******)&DAT_00000006;
              puVar5 = (uint3 *)((uint)&local_68 | 1);
              puVar6 = (undefined2 *)((uint)&local_98 | 1);
              local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,6);
              local_100 = (undefined4 *******)&DAT_80000000;
              local_120 = (undefined4 *******)0x52d63c;
              local_10c = (undefined4 *******)0x7b;
              local_40 = param_2;
              goto LAB_01273ba8;
            }
          }
          local_98 = (undefined4 *******)0x18;
          goto LAB_01273b00;
        }
        uVar9 = uVar9 + 1;
        *(uint *)(param_2 + 0x14) = uVar9;
      } while (uVar8 != uVar9);
    }
  }
  local_98 = (undefined4 *******)0x5;
LAB_01273b00:
  iVar4 = FUN_01964674(param_2,&local_98);
  goto LAB_01273d84;
  while( true ) {
    iVar4 = local_40;
    pppppppuVar14 = (undefined4 *******)0x1273c90;
    pppppppuVar7 = (undefined4 *******)FUN_01965c98(local_40);
    pppppppuVar12 = extraout_r12_02;
    if (pppppppuVar7 != (undefined4 *******)0x0) break;
    pppppppuVar14 = (undefined4 *******)0x1273ca4;
    pppppppuVar7 = (undefined4 *******)FUN_01965eac(iVar4);
    pppppppuVar12 = extraout_r12_03;
    if (pppppppuVar7 != (undefined4 *******)0x0) break;
LAB_01273ba8:
    pppppppuVar14 = (undefined4 *******)0x1273bb4;
    FUN_01965d20(&local_98,&local_40);
    uVar2 = SUB41(local_104,0);
    if ((char)local_98 == '\x01') {
      pppppppuVar7 = local_94;
      pppppppuVar12 = extraout_r12;
      break;
    }
    if (local_98._1_1_ != '\x01') {
      local_64 = local_114;
      local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,uVar2);
      if (local_100 == (undefined4 *******)&DAT_80000000) {
        local_94 = (undefined4 *******)&LAB_018a13b8;
        local_98 = &local_a8;
        local_a4 = (undefined4 *******)&DAT_00000003;
        local_a8 = (undefined4 *******)0x52d63c;
        pppppppuVar14 = (undefined4 *******)0x1274014;
        pppppppuVar7 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_98);
        local_100 = (undefined4 *******)&DAT_80000000;
        pppppppuVar12 = extraout_r12_09;
        goto LAB_01273ef4;
      }
      if (local_104 == (undefined4 *******)&DAT_00000006) {
        local_94 = (undefined4 *******)&DAT_0132b6a0;
        local_98 = &local_a8;
        local_a4 = (undefined4 *******)&DAT_00000005;
        local_a8 = (undefined4 *******)0x52ffcc;
        pppppppuVar7 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_98);
        local_124 = (undefined4 *******)0x1274124;
        FUN_019bb7e0(local_100,local_10c);
        local_100 = (undefined4 *******)&DAT_80000000;
        local_114 = extraout_r1_02;
        local_10c = extraout_r12_10;
      }
      else {
        local_38 = local_60;
        pppppppuStack_34 = pppppppuStack_5c;
        pppppppuStack_30 = pppppppuStack_58;
        pppppppuStack_2c = pppppppuStack_54;
        pppppppuVar7 = (undefined4 *******)((uint)local_104 | (uint)*puVar5 << 8);
      }
      goto LAB_01273f1c;
    }
    *(undefined4 *)(local_40 + 8) = 0;
    *(int *)(local_40 + 0x14) = *(int *)(local_40 + 0x14) + 1;
    pppppppuVar14 = (undefined4 *******)0x1273bec;
    FUN_019686b4(&local_98,local_40 + 0xc);
    pppppppuVar7 = local_94;
    pppppppuVar12 = extraout_r12_00;
    if (local_98 == (undefined4 *******)0x2) break;
    if (local_90 == (undefined4 *******)&DAT_00000005) {
      iVar4 = thunk_FUN_01bed842(local_94,"value",5);
      if (iVar4 == 0) {
        if (local_104 != (undefined4 *******)&DAT_00000006) {
          local_a4 = (undefined4 *******)&DAT_00000005;
          local_120 = (undefined4 *******)0x52ffcc;
LAB_01274224:
          local_a8 = local_120;
          local_98 = &local_a8;
          local_64 = local_114;
          local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,uVar2);
          local_94 = (undefined4 *******)&DAT_0132b6a0;
          pppppppuVar14 = (undefined4 *******)0x1274268;
          pppppppuVar7 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_98);
          pppppppuVar12 = extraout_r12_12;
          goto LAB_01273ef4;
        }
        FUN_01965c5c(&local_98,&local_40);
        local_104 = (undefined4 *******)((uint)local_98 & 0xff);
        if (local_104 == (undefined4 *******)&DAT_00000006) {
          local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,6);
          pppppppuVar14 = (undefined4 *******)&DAT_00000006;
          local_104 = extraout_r1;
          pppppppuVar7 = local_94;
          pppppppuVar12 = extraout_r12_04;
          goto LAB_01273f04;
        }
        local_114 = local_94;
        uVar1 = *puVar6;
        *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)(puVar6 + 1);
        *(undefined2 *)puVar5 = uVar1;
        local_60 = local_90;
        pppppppuStack_5c = pppppppuStack_8c;
        pppppppuStack_58 = pppppppuStack_88;
        pppppppuStack_54 = pppppppuStack_84;
        goto LAB_01273ba8;
      }
    }
    else if ((local_90 == (undefined4 *******)&DAT_00000003) &&
            (iVar4 = thunk_FUN_01bed842(local_94,"key",3), iVar4 == 0)) {
      if (local_100 != (undefined4 *******)&DAT_80000000) {
        local_a4 = (undefined4 *******)&DAT_00000003;
        goto LAB_01274224;
      }
      pppppppuVar14 = (undefined4 *******)0x1273c44;
      FUN_0164322c(&local_98,local_40);
      local_100 = local_98;
      if (local_98 == (undefined4 *******)&DAT_80000000) {
        local_64 = local_114;
        local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,uVar2);
        local_100 = (undefined4 *******)&DAT_80000000;
        pppppppuVar7 = local_94;
        pppppppuVar12 = extraout_r12_01;
        goto LAB_01273ef4;
      }
      local_124 = local_90;
      local_10c = local_94;
      goto LAB_01273ba8;
    }
  }
  local_64 = local_114;
  local_68 = (undefined4 *******)CONCAT31(local_68._1_3_,uVar2);
LAB_01273ef4:
  if (local_104 != (undefined4 *******)&DAT_00000006) {
    pppppppuVar14 = (undefined4 *******)0x1273f04;
    FUN_00e0febc(&local_68);
    local_104 = extraout_r1_00;
    pppppppuVar12 = extraout_r12_07;
  }
LAB_01273f04:
  local_114 = local_104;
  local_124 = pppppppuVar14;
  if (local_100 != (undefined4 *******)&DAT_80000000) {
    local_124 = (undefined4 *******)0x1273f18;
    FUN_019bb7e0(local_100,local_10c);
    local_114 = extraout_r1_01;
    pppppppuVar12 = extraout_r12_08;
  }
  local_10c = pppppppuVar12;
  local_100 = (undefined4 *******)&DAT_80000000;
LAB_01273f1c:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_60 = local_38;
  pppppppuStack_5c = pppppppuStack_34;
  pppppppuStack_58 = pppppppuStack_30;
  pppppppuStack_54 = pppppppuStack_2c;
  local_68 = pppppppuVar7;
  local_64 = local_114;
  local_50 = local_100;
  local_4c = local_10c;
  local_48 = local_124;
  pppppppuVar7 = (undefined4 *******)FUN_019650c4(param_2);
  pppppppuVar14 = local_68;
  local_98 = local_68;
  local_94 = local_64;
  local_90 = local_60;
  pppppppuStack_8c = pppppppuStack_5c;
  pppppppuStack_88 = pppppppuStack_58;
  pppppppuStack_84 = pppppppuStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  pppppppuStack_78 = local_48;
  iStack_74 = iStack_44;
  local_70 = pppppppuVar7;
  if (local_50 == (undefined4 *******)&DAT_80000000) {
    if (pppppppuVar7 != (undefined4 *******)0x0) {
      FUN_006c7e7c(pppppppuVar7);
    }
    pppppppuVar7 = (undefined4 *******)&DAT_80000000;
  }
  else if (pppppppuVar7 == (undefined4 *******)0x0) {
    piVar13 = (int *)((uint)&local_98 | 4);
    local_c0 = *piVar13;
    iStack_bc = piVar13[1];
    iStack_b8 = piVar13[2];
    iStack_b4 = piVar13[3];
    iStack_b0 = piVar13[4];
    local_d0 = local_4c;
    pppppppuStack_cc = local_48;
    iStack_c8 = iStack_44;
    pppppppuVar7 = local_50;
  }
  else {
    FUN_019bb7e0(local_50,local_4c);
    FUN_00e0febc(&local_98);
    pppppppuVar14 = pppppppuVar7;
    pppppppuVar7 = (undefined4 *******)&DAT_80000000;
  }
LAB_0127407c:
  if (pppppppuVar7 != (undefined4 *******)&DAT_80000000) {
    *param_1 = (int)pppppppuVar14;
    param_1[1] = local_c0;
    param_1[2] = iStack_bc;
    param_1[3] = iStack_b8;
    param_1[4] = iStack_b4;
    param_1[5] = iStack_b0;
    param_1[6] = (int)pppppppuVar7;
    param_1[7] = (int)local_d0;
    param_1[8] = (int)pppppppuStack_cc;
    param_1[9] = iStack_c8;
    return;
  }
LAB_012741b0:
  iVar4 = FUN_01966f00(pppppppuVar14,param_2);
LAB_01273d84:
  *param_1 = iVar4;
  param_1[6] = -0x7fffffff;
  return;
}

