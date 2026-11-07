// FUN_012733cc @ 012733cc size=1304 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012733cc(char *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint extraout_r2;
  uint uVar5;
  uint extraout_r3;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  int local_54;
  undefined1 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar3) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar6 = uVar7 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 != 0x6e) goto LAB_01273434;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        local_a4 = FUN_01964c70(param_2,"ull",3);
        if (local_a4 != 0) {
          cVar1 = '\a';
          goto LAB_0127388c;
        }
        cVar1 = '\x06';
        goto LAB_0127348c;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar3 != uVar5);
  }
  else {
LAB_01273434:
    if (uVar5 < uVar3) {
      do {
        uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
        if ((0x17 < uVar6 - 9) || ((1 << (uVar6 - 9 & 0xff) & 0x800013U) == 0)) {
          if (0x65 < uVar6) {
            if (uVar6 < 0x74) {
              if (uVar6 == 0x66) {
                *(uint *)(param_2 + 0x14) = uVar5 + 1;
                local_74 = FUN_01964c70(param_2,&DAT_0056efac,4);
                if (local_74 == 0) {
                  local_a4 = 0;
                  goto LAB_01273740;
                }
                goto LAB_01273480;
              }
              if (uVar6 != 0x6e) goto LAB_012736d0;
              *(uint *)(param_2 + 0x14) = uVar5 + 1;
              local_74 = FUN_01964c70(param_2,"ull",3);
              if (local_74 != 0) goto LAB_01273480;
              cVar1 = '\0';
              local_a4 = 0;
            }
            else {
              if (uVar6 != 0x74) {
                if (uVar6 != 0x7b) {
LAB_012736d0:
                  if (uVar6 - 0x30 < 10) {
                    uVar4 = 1;
                    goto LAB_01273760;
                  }
                  local_78 = 10;
                  uVar3 = FUN_01964674(param_2,&local_78);
                  goto LAB_012738b0;
                }
                cVar1 = *(char *)(param_2 + 0x24) + -1;
                *(char *)(param_2 + 0x24) = cVar1;
                if (cVar1 == '\0') {
                  local_78 = 0x18;
                  goto LAB_01273470;
                }
                *(uint *)(param_2 + 0x14) = uVar5 + 1;
                FUN_01969690(&local_90,param_2);
                *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
                local_60 = FUN_019650c4(param_2);
                local_78 = local_90;
                uVar3 = local_78;
                local_74 = uStack_8c;
                local_70 = uStack_88;
                uStack_6c = uStack_84;
                uStack_68 = uStack_80;
                uStack_64 = uStack_7c;
                local_78._0_1_ = (char)local_90;
                bVar10 = (char)local_78 == '\x06';
                local_78 = uVar3;
                if (bVar10) goto LAB_012737fc;
                if (local_60 == 0) goto LAB_01273854;
                goto LAB_01273824;
              }
              *(uint *)(param_2 + 0x14) = uVar5 + 1;
              local_74 = FUN_01964c70(param_2,"rue",3);
              if (local_74 != 0) goto LAB_01273480;
              local_a4 = 1;
LAB_01273740:
              local_a8 = (uint)CONCAT21(local_a8._2_2_,(char)local_a4) << 8;
              cVar1 = '\x01';
            }
            goto LAB_01273868;
          }
          if (uVar6 == 0x22) {
            *(undefined4 *)(param_2 + 8) = 0;
            *(uint *)(param_2 + 0x14) = uVar5 + 1;
            FUN_019686b4(&local_78,param_2 + 0xc,param_2);
            if (local_78 == 2) goto LAB_01273484;
            if ((local_78 & 1) == 0) {
              FUN_012739c4(&local_a8,local_74,local_70);
            }
            else {
              FUN_01273944(&local_a8);
            }
            goto LAB_01273858;
          }
          if (uVar6 != 0x2d) {
            if (uVar6 != 0x5b) goto LAB_012736d0;
            cVar1 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar1;
            if (cVar1 != '\0') {
              *(uint *)(param_2 + 0x14) = uVar5 + 1;
              iVar8 = 0;
              local_50 = 1;
              uVar3 = 8;
              local_44 = 0;
              local_48 = 8;
              local_4c = 0;
              local_54 = param_2;
              goto LAB_01273564;
            }
            local_78 = 0x18;
            local_74 = FUN_01964674(param_2,&local_78);
            goto LAB_01273484;
          }
          *(uint *)(param_2 + 0x14) = uVar5 + 1;
          uVar4 = 0;
LAB_01273760:
          FUN_01964ce0(&local_78,param_2,uVar4);
          if (!(local_78 != 3 || local_74 != 0)) {
            local_74 = local_70;
            goto LAB_01273484;
          }
          FUN_01964e98(&local_a8,&local_78);
          goto LAB_01273858;
        }
        uVar5 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar5;
      } while (uVar3 != uVar5);
    }
  }
  local_78 = 5;
LAB_01273470:
  local_74 = FUN_01964674(param_2,&local_78);
  goto LAB_01273480;
LAB_01273564:
  uVar5 = local_44;
  FUN_01964f38(&local_40,&local_54);
  if ((char)local_40 == '\x06') goto LAB_012737a4;
  if ((char)local_40 == '\a') {
    FUN_00949b70(&local_4c);
    uVar2 = 6;
    local_38 = extraout_r2;
    local_34 = extraout_r3;
    goto LAB_012737b4;
  }
  local_78 = CONCAT31(local_78._1_3_,(char)local_40);
  FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_40 | 1,0x17);
  if (uVar5 == local_4c) {
    FUN_01969b6c(&local_4c);
    uVar3 = local_48;
  }
  puVar9 = (uint *)(uVar3 + iVar8);
  local_44 = uVar5 + 1;
  iVar8 = iVar8 + 0x18;
  *puVar9 = local_78;
  puVar9[1] = local_74;
  puVar9[2] = local_70;
  puVar9[3] = uStack_6c;
  puVar9[4] = uStack_68;
  puVar9[5] = uStack_64;
  goto LAB_01273564;
LAB_012737a4:
  uVar2 = 4;
  local_38 = local_48;
  local_34 = local_44;
  local_3c = local_4c;
LAB_012737b4:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_40 = CONCAT31(local_40._1_3_,uVar2);
  local_60 = FUN_01964fb0(param_2);
  local_74 = local_3c;
  local_70 = local_38;
  uStack_6c = local_34;
  uStack_68 = uStack_30;
  uStack_64 = uStack_2c;
  local_78._0_1_ = (char)local_40;
  bVar10 = (char)local_78 == '\x06';
  local_78 = local_40;
  if (bVar10) {
LAB_012737fc:
    local_a4 = local_74;
    local_a8 = CONCAT31(local_a8._1_3_,6);
    if (local_60 != 0) {
      FUN_012c696c();
    }
  }
  else if (local_60 == 0) {
    local_90 = local_40;
    uStack_8c = local_3c;
    uStack_88 = local_38;
    uStack_84 = local_34;
    uStack_80 = uStack_30;
    uStack_7c = uStack_2c;
LAB_01273854:
    local_a8 = local_90;
    local_a4 = uStack_8c;
    local_a0 = uStack_88;
    uStack_9c = uStack_84;
    uStack_98 = uStack_80;
    uStack_94 = uStack_7c;
    local_78 = local_90;
    local_74 = uStack_8c;
    local_70 = uStack_88;
    uStack_6c = uStack_84;
    uStack_68 = uStack_80;
    uStack_64 = uStack_7c;
  }
  else {
LAB_01273824:
    local_a8 = CONCAT31(local_a8._1_3_,6);
    local_a4 = local_60;
    FUN_00db4764(&local_78);
  }
LAB_01273858:
  uVar3 = local_a4;
  cVar1 = (char)local_a8;
  if ((char)local_a8 != '\x06') {
LAB_01273868:
    *(undefined2 *)(param_1 + 1) = local_a8._1_2_;
    param_1[3] = local_a8._3_1_;
    *(uint *)(param_1 + 8) = local_a0;
    *(uint *)(param_1 + 0xc) = uStack_9c;
    *(uint *)(param_1 + 0x10) = uStack_98;
    *(uint *)(param_1 + 0x14) = uStack_94;
LAB_0127388c:
    *(uint *)(param_1 + 4) = local_a4;
    *param_1 = cVar1;
    return;
  }
LAB_012738b0:
  local_74 = FUN_01966f00(uVar3,param_2);
LAB_01273480:
LAB_01273484:
  cVar1 = '\a';
  *(uint *)(param_1 + 4) = local_74;
LAB_0127348c:
  *param_1 = cVar1;
  return;
}

