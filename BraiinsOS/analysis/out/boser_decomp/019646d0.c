// FUN_019646d0 @ 019646d0 size=1304 calls_out=17 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019646d0(uint *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint extraout_r2;
  uint uVar8;
  uint extraout_r3;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a0;
  int local_9c;
  uint local_98;
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
  
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar8 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
      if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar4 < 0x66) {
          if (uVar4 == 0x22) {
            *(undefined4 *)(param_2 + 8) = 0;
            *(uint *)(param_2 + 0x14) = uVar8 + 1;
            FUN_019686b4(&local_78,(int *)(param_2 + 0xc),param_2);
            local_bc = local_70;
            uVar8 = local_74;
            if (local_78 == 2) {
              param_1[1] = local_74;
              goto LAB_01964a18;
            }
            uVar10 = 0;
            if ((int)local_70 < 0) {
LAB_01964a34:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar10,local_bc);
            }
            if (local_70 == 0) {
              uVar4 = 0;
              uVar6 = 1;
            }
            else {
              uVar10 = 1;
              uVar6 = FUN_01298504(local_70,1);
              if (uVar6 == 0) goto LAB_01964a34;
              uVar4 = local_bc;
            }
            FUN_01bed4e2(uVar6,uVar8,local_bc);
            local_c8 = CONCAT31(local_c8._1_3_,3);
            local_c4 = uVar4;
            local_c0 = uVar6;
            goto LAB_01964b70;
          }
          if (uVar4 != 0x2d) {
            if (uVar4 != 0x5b) goto LAB_0196494c;
            cVar1 = *(char *)(param_2 + 0x24) + -1;
            *(char *)(param_2 + 0x24) = cVar1;
            if (cVar1 == '\0') {
              local_78 = 0x18;
              uVar8 = FUN_01964674(param_2,&local_78);
              *(undefined1 *)param_1 = 6;
              param_1[1] = uVar8;
              return;
            }
            *(uint *)(param_2 + 0x14) = uVar8 + 1;
            iVar9 = 0;
            local_50 = 1;
            uVar8 = 8;
            local_44 = 0;
            local_48 = 8;
            local_4c = 0;
            local_54 = param_2;
            goto LAB_01964824;
          }
          *(uint *)(param_2 + 0x14) = uVar8 + 1;
          FUN_01964ce0(&local_b0,param_2,0);
          if (local_b0 == 3 && local_ac == 0) {
            local_98 = local_a8;
            goto LAB_01964a10;
          }
          piVar7 = &local_b0;
        }
        else {
          if (uVar4 < 0x74) {
            if (uVar4 == 0x66) {
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              uVar8 = FUN_01964c70(param_2,&DAT_0056efac,4);
              if (uVar8 == 0) {
                uVar3 = 1;
                goto LAB_019649d8;
              }
              goto LAB_0196473c;
            }
            if (uVar4 == 0x6e) {
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              uVar8 = FUN_01964c70(param_2,"ull",3);
              if (uVar8 != 0) goto LAB_0196473c;
              local_c8 = local_c8 & 0xffffff00;
              goto LAB_01964b7c;
            }
          }
          else {
            if (uVar4 == 0x74) {
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              uVar8 = FUN_01964c70(param_2,"rue",3);
              if (uVar8 != 0) goto LAB_0196473c;
              uVar3 = 0x101;
LAB_019649d8:
              local_c8 = CONCAT22(local_c8._2_2_,uVar3);
              goto LAB_01964b7c;
            }
            if (uVar4 == 0x7b) {
              cVar1 = *(char *)(param_2 + 0x24) + -1;
              *(char *)(param_2 + 0x24) = cVar1;
              if (cVar1 == '\0') {
                local_78 = 0x18;
                goto LAB_0196472c;
              }
              *(uint *)(param_2 + 0x14) = uVar8 + 1;
              FUN_01969690(&local_90,param_2);
              *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
              local_60 = FUN_019650c4(param_2);
              local_78 = local_90;
              uVar8 = local_78;
              local_74 = uStack_8c;
              local_70 = uStack_88;
              uStack_6c = uStack_84;
              uStack_68 = uStack_80;
              uStack_64 = uStack_7c;
              local_78._0_1_ = (char)local_90;
              bVar11 = (char)local_78 == '\x06';
              local_78 = uVar8;
              if (bVar11) goto LAB_01964ab8;
              if (local_60 == 0) goto LAB_01964b3c;
              goto LAB_01964ae0;
            }
          }
LAB_0196494c:
          if (9 < uVar4 - 0x30) {
            local_78 = 10;
            uVar8 = FUN_01964674(param_2,&local_78);
            goto LAB_01964bac;
          }
          FUN_01964ce0(&local_a0,param_2,1);
          if (local_a0 == 3 && local_9c == 0) goto LAB_01964a10;
          piVar7 = &local_a0;
        }
        FUN_01964e98(&local_c8,piVar7);
        goto LAB_01964b70;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
    } while (*(uint *)(param_2 + 0x10) != uVar8);
  }
  local_78 = 5;
LAB_0196472c:
  uVar8 = FUN_01964674(param_2,&local_78);
LAB_0196473c:
  param_1[1] = uVar8;
  *(undefined1 *)param_1 = 6;
  return;
LAB_01964824:
  uVar4 = local_44;
  FUN_01964f38(&local_40,&local_54);
  if ((char)local_40 == '\x06') {
    uVar2 = 4;
    local_38 = local_48;
    local_34 = local_44;
    local_3c = local_4c;
LAB_01964a70:
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    local_40 = CONCAT31(local_40._1_3_,uVar2);
    local_60 = FUN_01964fb0(param_2);
    local_74 = local_3c;
    local_70 = local_38;
    uStack_6c = local_34;
    uStack_68 = uStack_30;
    uStack_64 = uStack_2c;
    local_78._0_1_ = (char)local_40;
    bVar11 = (char)local_78 == '\x06';
    local_78 = local_40;
    if (bVar11) {
LAB_01964ab8:
      local_c4 = local_74;
      local_c8 = CONCAT31(local_c8._1_3_,6);
      if (local_60 != 0) {
        FUN_01674208();
      }
    }
    else if (local_60 == 0) {
      local_90 = local_40;
      uStack_8c = local_3c;
      uStack_88 = local_38;
      uStack_84 = local_34;
      uStack_80 = uStack_30;
      uStack_7c = uStack_2c;
LAB_01964b3c:
      local_c8 = local_90;
      local_c4 = uStack_8c;
      local_c0 = uStack_88;
      local_bc = uStack_84;
      uStack_b8 = uStack_80;
      uStack_b4 = uStack_7c;
      local_78 = local_90;
      local_74 = uStack_8c;
      local_70 = uStack_88;
      uStack_6c = uStack_84;
      uStack_68 = uStack_80;
      uStack_64 = uStack_7c;
    }
    else {
LAB_01964ae0:
      local_c8 = CONCAT31(local_c8._1_3_,6);
      local_c4 = local_60;
      FUN_01964c44(&local_78);
    }
LAB_01964b70:
    if ((char)local_c8 == '\x06') {
      uVar8 = local_c4;
LAB_01964bac:
      local_98 = FUN_01966f00(uVar8,param_2);
LAB_01964a10:
      param_1[1] = local_98;
LAB_01964a18:
      *(undefined1 *)param_1 = 6;
    }
    else {
LAB_01964b7c:
      *param_1 = local_c8;
      param_1[1] = local_c4;
      param_1[2] = local_c0;
      param_1[3] = local_bc;
      param_1[4] = uStack_b8;
      param_1[5] = uStack_b4;
    }
    return;
  }
  if ((char)local_40 == '\a') {
    FUN_00949b70(&local_4c);
    uVar2 = 6;
    local_38 = extraout_r2;
    local_34 = extraout_r3;
    goto LAB_01964a70;
  }
  local_78 = CONCAT31(local_78._1_3_,(char)local_40);
  FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_40 | 1,0x17);
  if (uVar4 == local_4c) {
    FUN_01969b6c(&local_4c);
    uVar8 = local_48;
  }
  puVar5 = (uint *)(uVar8 + iVar9);
  local_44 = uVar4 + 1;
  iVar9 = iVar9 + 0x18;
  *puVar5 = local_78;
  puVar5[1] = local_74;
  puVar5[2] = local_70;
  puVar5[3] = uStack_6c;
  puVar5[4] = uStack_68;
  puVar5[5] = uStack_64;
  goto LAB_01964824;
}

