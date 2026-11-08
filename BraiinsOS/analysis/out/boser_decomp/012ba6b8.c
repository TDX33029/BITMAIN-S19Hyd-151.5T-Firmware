// FUN_012ba6b8 @ 012ba6b8 size=1532 calls_out=12 calls_in=2
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

/* WARNING: Type propagation algorithm not settling */

void FUN_012ba6b8(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined4 *******pppppppuVar2;
  undefined4 ******ppppppuVar3;
  undefined4 *****pppppuVar4;
  undefined4 *****pppppuVar5;
  undefined4 *****pppppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  uint uVar11;
  undefined4 ****ppppuVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 *******pppppppuVar17;
  undefined4 ****ppppuVar18;
  undefined4 *******pppppppuVar19;
  bool bVar20;
  bool bVar21;
  undefined4 ******local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 ******local_68;
  undefined1 *local_64;
  undefined4 ******ppppppuStack_60;
  undefined4 *******local_58;
  undefined4 *****local_54;
  undefined4 *******local_50;
  undefined1 *local_4c;
  undefined4 ******local_48;
  undefined1 *local_44;
  undefined4 ******local_40;
  undefined4 *******local_38;
  undefined4 *****local_34;
  undefined4 *******local_30;
  undefined4 *****local_28;
  
  uVar11 = *(uint *)(param_2 + 8);
  local_7c = (undefined4 ******)(param_3 + 0x38);
  bVar1 = false;
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  if (((uVar11 & 1) == 0) || (*(int *)(param_2 + 0x10) != 0)) {
    puVar8 = *(undefined1 **)(param_2 + 0x120);
    bVar20 = puVar8 == (undefined1 *)0x0;
    if (bVar20) {
      puVar8 = *(undefined1 **)(param_2 + 0x34);
    }
    if (!bVar20 || puVar8 != &DAT_00110000) {
      if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                     ,99,&DAT_01ce26e4);
      }
      local_34 = (undefined4 *****)&DAT_00000001;
      bVar1 = *(int *)(param_2 + 0xc) == 0;
      local_38 = (undefined4 *******)&DAT_00531a0c;
      pppppppuVar19 = (undefined4 *******)&DAT_005319c3;
      local_48 = local_7c;
      if (!bVar1) {
        local_48 = (undefined4 ******)(param_3 + 0x2a);
      }
      if (*(int *)(param_2 + 0xc) == 0) {
        local_34 = (undefined4 *****)0x2;
        local_38 = (undefined4 *******)&UNK_0041fe06;
        pppppppuVar19 = (undefined4 *******)&UNK_0041fe04;
      }
      if ((*(uint *)(param_2 + 0x11c) & 0x80) == 0) {
        local_38 = pppppppuVar19;
        local_48 = local_7c;
      }
      local_4c = &LAB_018a13b8;
      local_50 = &local_38;
      local_58 = &local_48;
      local_54 = (undefined4 *****)&DAT_012b5b4c;
      FUN_012fa178(&local_78,&DAT_01ce25b4,&DAT_004200d0,&local_58);
      goto LAB_012ba7dc;
    }
    if ((uVar11 & 1) != 0) goto LAB_012ba7dc;
  }
  else {
LAB_012ba7dc:
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar8 = *(undefined1 **)(param_2 + 0x120);
      bVar20 = puVar8 == (undefined1 *)0x0;
      if (bVar20) {
        puVar8 = *(undefined1 **)(param_2 + 0x34);
      }
      if (!bVar20 || puVar8 != &DAT_00110000) {
        if (*(char *)(param_2 + 0x130) == '\x04') {
          local_58 = &local_7c;
          local_54 = (undefined4 *****)&DAT_012b5b4c;
          FUN_012fa178(&local_78,&DAT_01ce25b4,&DAT_0041fe08,&local_58);
        }
        goto joined_r0x012bac1c;
      }
    }
  }
  local_40 = (undefined4 ******)0x0;
  local_48 = (undefined4 ******)0x0;
  uVar16 = *(uint *)(param_2 + 0x11c);
  if ((param_4 & 0xff) != 2) {
    uVar16 = param_4;
  }
  pppppppuVar9 = *(undefined4 ********)(param_2 + 0xc);
  pppppppuVar19 = *(undefined4 ********)(param_2 + 0x10);
  if ((uVar11 & 1) == 0) {
    pppppppuVar19 = (undefined4 *******)&DAT_00000001;
    pppppppuVar9 = (undefined4 *******)&DAT_00000001;
  }
  local_44 = (undefined1 *)0x1;
  if (*(int *)(param_2 + 0xbc) == 0) {
    pppppuVar4 = (undefined4 *****)thunk_FUN_01be5118(8);
    if (pppppuVar4 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    ppppuVar12 = *(undefined4 *****)(param_2 + 0x114);
    ppppuVar18 = *(undefined4 *****)(param_2 + 0x118);
    *pppppuVar4 = ppppuVar12;
    pppppuVar4[1] = ppppuVar18;
    local_38 = (undefined4 *******)&DAT_00000001;
    local_34 = pppppuVar4;
LAB_012ba8e4:
    pppppuVar4 = local_34;
    pppppppuVar2 = local_38;
    pppppppuVar17 = pppppppuVar9;
    if (pppppppuVar9 < (undefined4 *******)0x2) {
      pppppppuVar17 = (undefined4 *******)&DAT_00000001;
    }
    uVar14 = 0;
    uVar11 = (int)pppppppuVar17 * 8;
    bVar21 = (undefined4 *******)0x1ffffffe < pppppppuVar9;
    bVar20 = pppppppuVar9 == (undefined4 *******)0x1fffffff;
    if (pppppppuVar9 < (undefined4 *******)0x20000000) {
      bVar21 = 0x7ffffffb < uVar11;
      bVar20 = uVar11 == 0x7ffffffc;
    }
    local_30 = (undefined4 *******)0x0;
    if (bVar21 && !bVar20) {
LAB_012ba908:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,uVar11);
    }
    uVar14 = 4;
    pppppuVar5 = (undefined4 *****)FUN_01298504(uVar11,4);
    if (pppppuVar5 == (undefined4 *****)0x0) goto LAB_012ba908;
    pppppuVar6 = pppppuVar5;
    local_50 = (undefined4 *******)&DAT_00000001;
    if (&DAT_00000001 < pppppppuVar9) {
      puVar8 = (undefined1 *)((int)pppppppuVar9 + -1);
      do {
        *pppppuVar6 = ppppuVar12;
        pppppuVar6[1] = ppppuVar18;
        pppppuVar6 = pppppuVar6 + 2;
        puVar8 = puVar8 + -1;
      } while (puVar8 != (undefined1 *)0x0);
      local_50 = pppppppuVar17;
    }
    *pppppuVar6 = ppppuVar12;
    pppppuVar6[1] = ppppuVar18;
    local_58 = pppppppuVar17;
    local_54 = pppppuVar5;
    local_38 = pppppppuVar17;
    local_34 = pppppuVar5;
    local_30 = local_50;
    FUN_0134aee0(pppppppuVar2,pppppuVar4,4,8);
  }
  else {
    FUN_01299f10(&local_38,*(undefined4 *)(param_2 + 0xb8));
    if (local_30 == (undefined4 *******)&DAT_00000001) {
      ppppuVar12 = *local_34;
      ppppuVar18 = local_34[1];
      goto LAB_012ba8e4;
    }
  }
  puVar8 = *(undefined1 **)(param_2 + 0x120);
  if (local_30 == (undefined4 *******)0x0) {
    pppppppuVar9 = (undefined4 *******)0x0;
    puVar15 = (undefined1 *)0x1;
  }
  else {
    iVar13 = (int)local_30 << 3;
    puVar7 = *(undefined1 **)(param_2 + 0x34);
    puVar15 = (undefined1 *)0x1;
    iVar10 = 0;
    pppppuVar4 = local_34;
    do {
      local_28 = pppppuVar4;
      if ((puVar8 == (undefined1 *)0x0 && puVar7 == &DAT_00110000) &&
          (uVar16 & pppppppuVar9 != (undefined4 *******)0x0) == 0) {
        local_64 = &LAB_012b925c;
        local_68 = &local_28;
        FUN_00664898(&local_58,&DAT_005bd5dc,&local_68);
      }
      else {
        local_64 = &LAB_012b925c;
        local_68 = &local_28;
        FUN_00664898(&local_58,&DAT_005a4725,&local_68);
      }
      ppppppuVar3 = local_40;
      pppppppuVar17 = local_50;
      pppppuVar5 = local_54;
      pppppppuVar2 = local_58;
      if (iVar10 != 0) {
        if (local_48 == local_40) {
          FUN_006520b4(&local_48,local_40,1,1,1);
          puVar15 = local_44;
        }
        puVar15[(int)local_40] = 0x20;
        local_40 = (undefined4 ******)((int)ppppppuVar3 + 1);
      }
      if ((undefined4 *******)((int)local_48 - (int)local_40) < pppppppuVar17) {
        FUN_006520b4(&local_48,local_40,pppppppuVar17,1,1);
      }
      ppppppuVar3 = local_40;
      puVar15 = local_44;
      pppppuVar4 = pppppuVar4 + 2;
      FUN_01bed4e2(local_44 + (int)local_40,pppppuVar5,pppppppuVar17);
      local_40 = (undefined4 ******)((int)ppppppuVar3 + (int)pppppppuVar17);
      FUN_0134bd64(pppppppuVar2,pppppuVar5);
      iVar10 = iVar10 + -1;
      iVar13 = iVar13 + -8;
    } while (iVar13 != 0);
    pppppppuVar9 = local_30;
  }
  bVar20 = puVar8 == (undefined1 *)0x0;
  if (bVar20) {
    puVar8 = *(undefined1 **)(param_2 + 0x34);
  }
  if (bVar20 && puVar8 == &DAT_00110000) {
    if ((pppppppuVar9 < pppppppuVar19) || (*(char *)(param_2 + 0x130) == '\x01')) goto LAB_012bab78;
  }
  else if (pppppppuVar9 < pppppppuVar19) {
LAB_012bab78:
    if ((uint)((int)local_48 - (int)local_40) < 3) {
      FUN_006520b4(&local_48,local_40,3,1,1);
      puVar15 = local_44;
    }
    *(undefined2 *)(puVar15 + (int)local_40) = 0x2e2e;
    *(undefined1 *)((int)(puVar15 + (int)local_40) + 2) = 0x2e;
    local_40 = (undefined4 ******)((int)local_40 + 3);
  }
  local_68 = local_48;
  local_64 = local_44;
  ppppppuStack_60 = local_40;
  FUN_0134aee0(local_38,local_34,4,8);
  local_58 = &local_7c;
  local_4c = &LAB_00632348;
  local_54 = (undefined4 *****)&DAT_012b5b4c;
  local_50 = &local_68;
  FUN_012fa178(&local_78,&DAT_01ce25b4,&DAT_004200d0,&local_58);
  FUN_0134bd64(local_68,local_64);
joined_r0x012bac1c:
  if (bVar1) {
    local_58 = &local_7c;
    local_54 = (undefined4 *****)&DAT_012b5b4c;
    FUN_012fa178(&local_78,&DAT_01ce25b4,&DAT_0041fe15,&local_58);
  }
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  return;
}

