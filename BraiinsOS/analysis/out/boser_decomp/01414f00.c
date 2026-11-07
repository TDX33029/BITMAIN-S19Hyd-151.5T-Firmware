// FUN_01414f00 @ 01414f00 size=1380 calls_out=9 calls_in=6
// strings: ttp://Sensitive

void FUN_01414f00(uint *param_1,uint *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *unaff_r11;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined **local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint uStack_48;
  uint auStack_44 [3];
  uint local_38;
  undefined4 local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar4 = param_2[2];
  if (0xfffe < uVar4) {
    uVar2 = 0x803;
LAB_01414f3c:
    *(undefined2 *)param_1 = uVar2;
LAB_01414f40:
                    /* WARNING: Could not recover jumptable at 0x01414f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1]);
    return;
  }
  if ((uVar4 & 0xffff) == 1) {
    if (*(char *)param_2[1] == '*') {
      pcVar3 = "*";
    }
    else {
      if (*(char *)param_2[1] != '/') {
        local_50 = *param_2;
        local_4c = param_2[1];
        uStack_48 = param_2[2];
        auStack_44[0] = param_2[3];
        FUN_0140d3a0(&local_38,&local_50);
        if (local_38 != 0) {
          FUN_01bed4e2(&local_50,(int)&local_34 + 1,0xb);
          *(undefined1 *)(param_1 + 3) = (undefined1)local_34;
          param_1[2] = local_38;
          FUN_01bed4e2((int)param_1 + 0xd,&local_50,0xb);
          *(undefined2 *)(param_1 + 10) = 0xffff;
          param_1[6] = (uint)&PTR_FUN_01cf426c;
          param_1[7] = 1;
          param_1[8] = 0;
          param_1[9] = 0;
          *param_1 = 0;
          return;
        }
        *(undefined1 *)((int)param_1 + 1) = (undefined1)local_34;
        goto LAB_0141522c;
      }
      pcVar3 = &DAT_005327c4;
    }
    *(undefined2 *)(param_1 + 10) = 0xffff;
    *param_1 = 0;
    param_1[2] = (uint)&PTR_FUN_01cf4330;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = (uint)&PTR_FUN_01cf426c;
    param_1[7] = (uint)pcVar3;
    param_1[8] = 1;
    param_1[9] = 0;
    goto LAB_01414f40;
  }
  if (uVar4 == 0) {
    uVar2 = 0x903;
    goto LAB_01414f3c;
  }
  if (*(char *)param_2[1] == '/') {
    local_54 = 0;
    local_5c = 1;
    local_58 = 0;
    local_60 = &PTR_FUN_01cf4330;
    local_38 = *param_2;
    local_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_014134f0(&local_50,&local_38);
    if (local_50 != 0) {
      FUN_01bed4e2((int)param_1 + 0x1d,(int)&local_4c + 1,0xf);
      param_1[2] = (uint)local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      *(undefined1 *)(param_1 + 7) = (undefined1)local_4c;
      param_1[6] = local_50;
      *param_1 = 0;
      return;
    }
    *(undefined1 *)((int)param_1 + 1) = (undefined1)local_4c;
LAB_0141522c:
    *(undefined1 *)param_1 = 3;
    return;
  }
  local_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  if (uStack_88 < 7) {
LAB_014150b8:
    if (3 < uStack_88) goto LAB_014150c0;
    bVar1 = true;
    uVar4 = 0;
  }
  else {
    iVar10 = 0;
    iVar6 = 0;
    do {
      if (iVar6 == 7) goto LAB_01415240;
      uVar9 = (uint)*(byte *)(uStack_8c + iVar6);
      uVar4 = (uint)(byte)"h"[iVar6];
      iVar6 = iVar6 + 1;
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
    } while (uVar9 == uVar4);
    if (uStack_88 != 7) {
      iVar6 = 0;
LAB_01415084:
      if (iVar6 != 8) goto code_r0x0141508c;
      iVar10 = 1;
LAB_01415240:
      uVar5 = 7;
      if (iVar10 != 0) {
        uVar5 = 8;
      }
      FUN_0128371c(&local_50,&local_90,uVar5);
      (**(code **)(local_50 + 0x10))(auStack_44,local_4c,uStack_48);
      uVar4 = iVar10 << 8 | 1;
      bVar1 = false;
      goto LAB_0141527c;
    }
LAB_014150c0:
    uVar4 = 0;
    bVar1 = true;
    uVar9 = 0;
    do {
      uVar8 = uVar9;
      if (uStack_88 == uVar8) goto LAB_0141527c;
      if (""[*(byte *)(uStack_8c + uVar8)] == '\0') {
        uVar4 = 0;
        goto LAB_0141527c;
      }
      uVar9 = uVar8 + 1;
    } while (""[*(byte *)(uStack_8c + uVar8)] != ':');
    if ((uVar8 + 3 <= uStack_88) && (*(short *)(uStack_8c + uVar8 + 1) == 0x2f2f)) {
      if (0x40 < uVar8) {
        *(undefined2 *)param_1 = 0xa03;
        goto LAB_014152b8;
      }
      FUN_0128371c(&local_38,&local_90,uVar8 + 3);
      FUN_01283834(&local_50,&local_38,uVar8);
      (**(code **)(local_50 + 0x10))(auStack_44,local_4c,uStack_48);
      local_80 = local_38;
      uStack_7c = local_34;
      uStack_78 = uStack_30;
      uStack_74 = uStack_2c;
      unaff_r11 = (uint *)thunk_FUN_01be5118(0x10);
      if (unaff_r11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      bVar1 = false;
      uVar4 = 2;
      *unaff_r11 = local_38;
      unaff_r11[1] = local_34;
      unaff_r11[2] = uStack_30;
      unaff_r11[3] = uStack_2c;
    }
  }
LAB_0141527c:
  uVar9 = uStack_88;
  FUN_0140ce9c(&local_50,uStack_8c,uStack_88);
  if ((char)local_50 == '\0') {
    if (bVar1) {
      local_50._1_1_ = 4;
      if (local_4c == uVar9) {
        param_1[2] = local_90;
        param_1[3] = uStack_8c;
        param_1[4] = uStack_88;
        param_1[5] = uStack_84;
        *(undefined2 *)(param_1 + 10) = 0xffff;
        param_1[6] = (uint)&PTR_FUN_01cf426c;
        param_1[7] = 1;
        param_1[8] = 0;
        param_1[9] = 0;
LAB_0141539c:
        *param_1 = uVar4;
        param_1[1] = (uint)unaff_r11;
        return;
      }
    }
    else {
      if (local_4c != 0) {
        FUN_0128371c(&local_70,&local_90);
        local_60 = (undefined **)local_70;
        local_5c = uStack_6c;
        local_58 = uStack_68;
        local_54 = uStack_64;
        local_38 = local_90;
        local_34 = uStack_8c;
        uStack_30 = uStack_88;
        uStack_2c = uStack_84;
        FUN_014134f0(&local_50);
        if (local_50 == 0) {
          *(undefined1 *)param_1 = 3;
          pcVar7 = *(code **)((int)local_60 + 0x10);
          *(undefined1 *)((int)param_1 + 1) = (undefined1)local_4c;
          (*pcVar7)(&local_54,local_5c,local_58);
          FUN_01414eb8(uVar4,unaff_r11);
          return;
        }
        FUN_01bed4e2((int)param_1 + 0x1d,(int)&local_4c + 1,0xf);
        param_1[2] = local_70;
        param_1[3] = uStack_6c;
        param_1[4] = uStack_68;
        param_1[5] = uStack_64;
        *(undefined1 *)(param_1 + 7) = (undefined1)local_4c;
        param_1[6] = local_50;
        goto LAB_0141539c;
      }
      local_50._1_1_ = 4;
    }
  }
  else {
  }
  *(undefined1 *)((int)param_1 + 1) = local_50._1_1_;
  *(undefined1 *)param_1 = 3;
  FUN_01414eb8(uVar4,unaff_r11);
LAB_014152b8:
  (**(code **)(local_90 + 0x10))(&uStack_84,uStack_8c,uStack_88);
  return;
code_r0x0141508c:
  uVar9 = (uint)*(byte *)(uStack_8c + iVar6);
  uVar4 = (uint)(byte)(&DAT_0056fd20)[iVar6];
  iVar6 = iVar6 + 1;
  if (uVar9 - 0x41 < 0x1a) {
    uVar9 = uVar9 | 0x20;
  }
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = uVar4 | 0x20;
  }
  if (uVar9 != uVar4) goto LAB_014150b8;
  goto LAB_01415084;
}

