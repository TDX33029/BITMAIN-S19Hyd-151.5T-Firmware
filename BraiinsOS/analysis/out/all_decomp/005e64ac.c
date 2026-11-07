// FUN_005e64ac @ 005e64ac size=1796 calls_out=19 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005e64ac(uint *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  int local_b0;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  int local_54;
  undefined1 local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  uint uStack_30;
  uint uStack_2c;
  
  iVar11 = param_2 + 0xc;
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\0') {
      pbVar4 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar4;
        uVar6 = *(undefined4 *)(param_2 + 0x20);
        uVar7 = *(undefined4 *)(param_2 + 0x24);
        local_78 = 5;
        goto LAB_005e65b8;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar1 = *pbVar4;
      uVar10 = (uint)bVar1;
      *(byte **)(param_2 + 0x18) = pbVar4 + 1;
      iVar9 = *(int *)(param_2 + 0x24) + 1;
      if (uVar10 == 10) {
        *(int *)(param_2 + 0x28) = iVar9 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar9 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar9;
    }
    else {
      uVar10 = (uint)*(byte *)(param_2 + 0x2d);
    }
    if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) break;
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar9 = *(int *)(param_2 + 0x14);
      if (iVar9 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar11);
      }
      *(char *)(*(int *)(param_2 + 0x10) + iVar9) = (char)uVar10;
      *(int *)(param_2 + 0x14) = iVar9 + 1;
    }
  }
  switch(uVar10) {
  case 0x5b:
    cVar2 = *(char *)(param_2 + 0x30) + -1;
    *(char *)(param_2 + 0x30) = cVar2;
    if (cVar2 == '\0') {
LAB_005e6c28:
      uVar6 = *(undefined4 *)(param_2 + 0x20);
      uVar7 = *(undefined4 *)(param_2 + 0x24);
      local_78 = 0x18;
LAB_005e65b8:
      uVar10 = FUN_0157c50c(&local_78,uVar6,uVar7);
LAB_005e65cc:
      *(undefined1 *)param_1 = 6;
      param_1[1] = uVar10;
      return;
    }
    FUN_00ef8de4(iVar11);
    local_50 = 1;
    local_b0 = 8;
    iVar11 = 0;
    local_44 = 0;
    local_48 = 8;
    local_4c = 0;
    local_54 = param_2;
    while( true ) {
      uVar10 = local_44;
      FUN_005e5eec(&local_78,&local_54);
      lVar13 = CONCAT44(local_44,local_48);
      if ((char)local_78 == '\x01') break;
      if (local_78._1_1_ != '\x01') {
        uVar8 = 4;
        local_74 = local_4c;
        goto LAB_005e6ab0;
      }
      FUN_005e64ac(&local_78,local_54);
      if ((char)local_78 == '\x06') break;
      uVar3 = *(undefined2 *)((uint)&local_78 | 1);
      *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1) =
           *(undefined1 *)((undefined2 *)((uint)&local_78 | 1) + 1);
      *(undefined2 *)((uint)&local_40 | 1) = uVar3;
      local_38._0_4_ = (uint)local_70;
      local_38._4_4_ = local_70._4_4_;
      uStack_30 = uStack_68;
      uStack_2c = uStack_64;
      local_3c = local_74;
      local_40 = CONCAT31(local_40._1_3_,(char)local_78);
      if (uVar10 == local_4c) {
        FUN_0157eb1c(&local_4c);
        local_b0 = local_48;
      }
      local_44 = uVar10 + 1;
      puVar12 = (uint *)(local_b0 + iVar11);
      iVar11 = iVar11 + 0x18;
      *puVar12 = local_40;
      puVar12[1] = local_3c;
      puVar12[2] = (uint)local_38;
      puVar12[3] = local_38._4_4_;
      puVar12[4] = uStack_30;
      puVar12[5] = uStack_2c;
    }
    FUN_00f2036c(local_b0,uVar10);
    uVar8 = 6;
    lVar13 = (ulonglong)extraout_r1 << 0x20;
    if (local_4c != 0) {
      lVar13 = thunk_FUN_016d3fb4(local_48);
    }
LAB_005e6ab0:
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    local_40 = CONCAT31(local_40._1_3_,uVar8);
    local_3c = local_74;
    local_38 = lVar13;
    uVar5 = FUN_005b8f24(param_2);
    local_a4 = local_3c;
    uStack_68 = uStack_30;
    uStack_64 = uStack_2c;
    local_78._0_1_ = (char)local_40;
    local_74 = local_a4;
    local_60 = uVar5;
    local_70 = local_38;
    if ((char)local_78 != '\x06') {
      uVar10 = local_40;
      if (uVar5 != 0) {
LAB_005e6b34:
        local_78 = uVar10;
        local_a8 = CONCAT31(local_a8._1_3_,6);
        local_a4 = local_60;
        FUN_005c37bc(&local_78);
        uVar10 = local_78;
        cVar2 = (char)local_a8;
        goto joined_r0x005e6a7c;
      }
      uVar10 = local_40;
      local_74 = local_3c;
      local_a8 = local_40;
      local_98 = uStack_30;
      local_94 = uStack_2c;
      cVar2 = (char)local_78;
      local_a0 = local_38;
      goto joined_r0x005e6bc8;
    }
    local_a8 = CONCAT31(local_a8._1_3_,6);
    local_78 = local_40;
    lVar13 = local_38;
    if (uVar5 == 0) break;
    FUN_005c3974();
LAB_005e6b14:
    thunk_FUN_016d3fb4(uVar5);
    uVar10 = local_78;
    cVar2 = (char)local_a8;
joined_r0x005e6a7c:
    local_78 = uVar10;
    if (cVar2 != '\x06') goto LAB_005e6b9c;
    goto LAB_005e6bcc;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_005e65f8_caseD_5c:
    if (uVar10 - 0x30 < 10) {
      FUN_005b6d34(&local_40,param_2,1);
      if (local_40 == 3 && local_3c == 0) goto LAB_005e6860;
      uVar8 = 2;
      local_98 = (uint)local_38;
      local_94 = local_38._4_4_;
      if (local_40 == 2) {
        local_a0._0_4_ = local_38._4_4_ >> 0x1f;
      }
      else {
        local_a0._0_4_ = 0;
        uVar10 = (uint)local_38;
        uVar5 = local_38._4_4_;
        if (local_40 != 1) {
joined_r0x005e6bf0:
          uVar8 = 0;
          local_38._0_4_ = uVar10;
          local_38._4_4_ = uVar5;
          if ((uVar5 & 0x7fffffff) < 0x7ff00000) {
            local_78 = local_78 & 0xffffff00;
            FUN_005c37bc(&local_78);
            uVar8 = 2;
          }
          local_a0._0_4_ = 2;
          local_98 = uVar10;
          local_94 = uVar5;
        }
      }
      goto LAB_005e6b7c;
    }
    local_78 = 10;
    uVar10 = FUN_0157c50c(&local_78,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24))
    ;
    goto LAB_005e6c14;
  case 0x66:
    FUN_00ef8de4(iVar11);
    uVar10 = FUN_005b6090(param_2,&DAT_00568edc,4);
    if (uVar10 != 0) goto LAB_005e65cc;
    uVar3 = 1;
    goto LAB_005e68fc;
  case 0x6e:
    FUN_00ef8de4(iVar11);
    uVar10 = FUN_005b6090(param_2,&DAT_003b6412,3);
    if (uVar10 != 0) goto LAB_005e65cc;
    local_a8 = local_a8 & 0xffffff00;
    goto LAB_005e6b9c;
  case 0x74:
    FUN_00ef8de4(iVar11);
    uVar10 = FUN_005b6090(param_2,&DAT_0038bd26,3);
    if (uVar10 != 0) goto LAB_005e65cc;
    uVar3 = 0x101;
LAB_005e68fc:
    local_a8 = CONCAT22(local_a8._2_2_,uVar3);
    goto LAB_005e6b9c;
  case 0x7b:
    cVar2 = *(char *)(param_2 + 0x30) + -1;
    *(char *)(param_2 + 0x30) = cVar2;
    if (cVar2 == '\0') goto LAB_005e6c28;
    FUN_00ef8de4(iVar11);
    FUN_00ed02d4(&local_90,param_2);
    *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
    uVar5 = FUN_005b8cec(param_2);
    local_78 = local_90;
    uVar10 = local_78;
    local_74 = uStack_8c;
    local_70._0_4_ = uStack_88;
    local_70._4_4_ = uStack_84;
    uStack_68 = uStack_80;
    uStack_64 = uStack_7c;
    local_78._0_1_ = (char)local_90;
    local_60 = uVar5;
    if ((char)local_78 != '\x06') {
      local_70 = CONCAT44(uStack_84,uStack_88);
      if (uVar5 != 0) goto LAB_005e6b34;
      local_a0 = CONCAT44(uStack_84,uStack_88);
      uVar10 = local_90;
      local_a8 = local_90;
      local_a4 = uStack_8c;
      local_98 = uStack_80;
      local_94 = uStack_7c;
      local_70 = CONCAT44(uStack_84,uStack_88);
      cVar2 = (char)local_78;
      goto joined_r0x005e6a7c;
    }
    local_a4 = uStack_8c;
    local_a8 = CONCAT31(local_a8._1_3_,6);
    local_78 = uVar10;
    lVar13 = CONCAT44(uStack_84,uStack_88);
    if (uVar5 != 0) {
      FUN_005c3974();
      goto LAB_005e6b14;
    }
    break;
  default:
    if (uVar10 == 0x22) {
      FUN_00ef8de4(iVar11);
      *(undefined4 *)(param_2 + 8) = 0;
      FUN_00ef8e3c(&local_78,iVar11,param_2);
      if (local_78 == 2) {
        *(undefined1 *)param_1 = 6;
        param_1[1] = local_74;
        return;
      }
      if ((local_78 & 1) == 0) {
        FUN_011c0130(&local_a8,local_74,(uint)local_70);
      }
      else {
        FUN_005bc420(&local_a8);
      }
      uVar10 = local_78;
      cVar2 = (char)local_a8;
      goto joined_r0x005e6a7c;
    }
    if (uVar10 != 0x2d) goto switchD_005e65f8_caseD_5c;
    FUN_00ef8de4(iVar11);
    FUN_005b6d34(&local_40,param_2,0);
    if (local_40 == 3 && local_3c == 0) goto LAB_005e6860;
    uVar10 = (uint)local_38;
    uVar5 = local_38._4_4_;
    if (local_40 == 0) goto joined_r0x005e6bf0;
    uVar8 = 2;
    local_98 = (uint)local_38;
    local_94 = local_38._4_4_;
    if (local_40 == 1) {
      local_a0._0_4_ = 0;
    }
    else {
      local_a0._0_4_ = local_38._4_4_ >> 0x1f;
    }
LAB_005e6b7c:
    local_a0._4_4_ = 0;
    local_a8 = CONCAT31(local_a8._1_3_,uVar8);
    lVar13 = CONCAT44(local_70._4_4_,(uint)local_70);
  }
  local_70 = lVar13;
  uVar10 = local_78;
  cVar2 = (char)local_a8;
joined_r0x005e6bc8:
  local_78 = uVar10;
  if (cVar2 == '\x06') {
LAB_005e6bcc:
    uVar10 = local_a4;
LAB_005e6c14:
    uVar10 = FUN_011da120(uVar10,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    local_38._0_4_ = uVar10;
LAB_005e6860:
    param_1[1] = (uint)local_38;
    *(undefined1 *)param_1 = 6;
    return;
  }
LAB_005e6b9c:
  *param_1 = local_a8;
  param_1[1] = local_a4;
  *(longlong *)(param_1 + 2) = local_a0;
  param_1[4] = local_98;
  param_1[5] = local_94;
  return;
}

