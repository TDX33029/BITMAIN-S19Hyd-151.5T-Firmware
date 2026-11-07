// FUN_01391160 @ 01391160 size=1748 calls_out=16 calls_in=1
// strings: h2::hpack::decoder/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/hpack/decoder.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | deco | deco | de_s | tring underflowevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/hpack/decoder.rs:260to

void FUN_01391160(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  char **ppcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char extraout_r1;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  char **ppcVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  undefined4 *local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  int *local_94;
  undefined4 local_90;
  char **local_8c;
  undefined4 **local_88;
  char **local_84;
  undefined4 **local_80;
  undefined *local_7c;
  undefined4 **local_78;
  int *local_74;
  undefined *local_70;
  undefined4 *local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  int local_4c;
  int local_48;
  uint local_44;
  char *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar13 = *param_3;
  uVar4 = FUN_0138bc70(uVar13,param_3[1],param_3[2]);
  if ((uVar4 & 1) == 0) {
    *(undefined2 *)param_1 = 1;
    return;
  }
  FUN_0138bc9c(&local_90,param_3,7);
  ppcVar2 = local_8c;
  if ((char)local_90 != '\0') {
    uVar10 = local_90._1_1_;
    goto LAB_013916fc;
  }
  uVar8 = *param_3;
  uVar14 = param_3[1];
  piVar17 = (int *)param_3[2];
  uVar4 = piVar17[1];
  puVar7 = (undefined4 *)(uVar4 - uVar8);
  local_ac = local_8c;
  if (uVar4 < uVar8) {
    puVar7 = (undefined4 *)0x0;
  }
  if (uVar14 != 0) {
    puVar7 = (undefined4 *)0x0;
  }
  if (puVar7 < local_8c) {
    local_9c = &local_90;
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d7fc - 1 < 2 ||
         ((DAT_01d4d7fc != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d7f4), cVar3 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4d7f4), iVar6 != 0)))) {
      local_94 = (int *)(DAT_01d4d7f4 + 0x1c);
      local_3c = (undefined4 *)*local_94;
      local_38 = *(undefined4 **)(DAT_01d4d7f4 + 0x20);
      if (local_38 != (undefined4 *)0x0) {
        local_64 = *(int *)(DAT_01d4d7f4 + 0x24);
        local_60 = *(uint *)(DAT_01d4d7f4 + 0x28);
        bVar19 = local_38 != (undefined4 *)0x0;
        bVar18 = local_38 != (undefined4 *)0x1;
        pcVar9 = s_deco_0045c8b5;
        local_58 = s_deco_0045c8b5;
        if (bVar18) {
          pcVar9 = (char *)0x1;
        }
        local_5c = 0;
        if (bVar18) {
          bVar19 = 1 < local_38;
          local_44 = local_60;
          local_40 = pcVar9;
        }
        local_54 = 0x2f;
        local_6c = local_3c;
        local_68 = (uint)local_38;
        if (bVar19 && (bVar18 && local_38 != (undefined4 *)0x2)) {
          local_90 = (char **)&local_6c;
          uVar10 = 2;
          local_2c = 2;
          local_98 = 3;
          local_74 = &local_28;
          local_28 = piVar17[1] - uVar8;
          if ((uint)piVar17[1] < uVar8) {
            local_28 = 0;
          }
          local_78 = &local_3c;
          if (uVar14 != 0) {
            local_28 = 0;
          }
          local_80 = &local_ac;
          local_84 = &local_50;
          local_8c = &local_58;
          local_70 = &DAT_01d2dd1c;
          local_7c = &DAT_01d2dd1c;
          local_88 = (undefined4 **)&DAT_01d2ea4c;
          local_34 = (undefined4 *)local_64;
          local_30 = local_60;
          FUN_01391a24(&local_9c);
          goto LAB_013916fc;
        }
      }
      goto LAB_01391480;
    }
    iVar6 = DAT_01d4d7f4;
    uVar10 = 2;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_a4 = *(undefined4 *)(DAT_01d4d7f4 + 0x14);
      local_a0 = *(undefined4 *)(DAT_01d4d7f4 + 0x18);
      local_a8 = 5;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar7[3])(pcVar9,&local_a8);
      if (iVar5 != 0) {
        local_94 = (int *)(DAT_01d4d7f4 + 0x1c);
        local_3c = (undefined4 *)*local_94;
        local_38 = *(undefined4 **)(DAT_01d4d7f4 + 0x20);
        if (local_38 != (undefined4 *)0x0) {
          local_64 = *(int *)(DAT_01d4d7f4 + 0x24);
          local_60 = *(uint *)(DAT_01d4d7f4 + 0x28);
          bVar19 = local_38 != (undefined4 *)0x0;
          local_5c = 0;
          local_54 = 0x2f;
          local_58 = s_deco_0045c8b5;
          if (local_38 != (undefined4 *)0x1) {
            local_40 = (char *)0x1;
            bVar19 = 1 < local_38;
            local_44 = local_60;
          }
          local_6c = local_3c;
          local_68 = (uint)local_38;
          if (bVar19 && (local_38 != (undefined4 *)0x1 && local_38 != (undefined4 *)0x2)) {
            uVar10 = 2;
            local_90 = (char **)&local_6c;
            local_2c = 2;
            local_74 = &local_28;
            local_28 = *(uint *)(param_3[2] + 4) - *param_3;
            local_78 = &local_3c;
            local_80 = &local_ac;
            if (*(uint *)(param_3[2] + 4) < *param_3) {
              local_28 = 0;
            }
            local_84 = &local_50;
            if (param_3[1] != 0) {
              local_28 = 0;
            }
            local_8c = &local_58;
            local_98 = 3;
            local_70 = &DAT_01d2dd1c;
            local_7c = &DAT_01d2dd1c;
            local_88 = (undefined4 **)&DAT_01d2ea4c;
            local_34 = (undefined4 *)local_64;
            local_30 = local_60;
            FUN_01aaa328(iVar6,pcVar9,puVar7[4],&local_a8,&local_9c);
            goto LAB_013916fc;
          }
        }
LAB_01391480:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cec448);
      }
    }
LAB_013916fc:
    *(undefined1 *)((int)param_1 + 1) = uVar10;
    *(undefined1 *)param_1 = 1;
    return;
  }
  iVar6 = uVar8 - uVar13;
  if (-1 < extraout_r1) {
    param_1[1] = 0;
    *(undefined1 *)param_1 = 0;
    param_1[5] = iVar6;
    param_1[6] = local_8c;
    *param_3 = uVar8 + (int)local_8c;
    param_3[1] = uVar14 + CARRY4(uVar8,(uint)local_8c);
    return;
  }
  uVar13 = uVar8;
  if (uVar4 < uVar8) {
    uVar13 = uVar4;
  }
  if (uVar14 != 0) {
    uVar13 = uVar4;
  }
  if ((undefined4 *)(uVar4 - uVar13) < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_8c,(undefined4 *)(uVar4 - uVar13),&DAT_01cec438);
  }
  iVar12 = *piVar17;
  local_8c = (char **)((uint)local_8c & 0xffffff00);
  iVar5 = param_2 + 0x20;
  local_90 = (char **)0x0;
  if ((uint)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24)) < (uint)((int)ppcVar2 << 1)) {
    FUN_01283c9c(iVar5,(int)ppcVar2 << 1);
  }
  if (ppcVar2 == (char **)0x0) {
LAB_013915c0:
    FUN_01283fd8(&local_50,iVar5,*(undefined4 *)(param_2 + 0x24));
    if (local_50 != (char *)0x0) {
      if ((local_44 & 1) == 0) {
        local_3c = &DAT_01d2e520;
        local_88 = (undefined4 **)local_50;
        local_84 = (char **)local_4c;
      }
      else {
        local_64 = local_4c + (local_44 >> 5);
        local_68 = (int)local_50 - (local_44 >> 5);
        local_6c = (undefined4 *)(local_48 + (local_44 >> 5));
        FUN_01283524(&local_3c,&local_6c);
        local_58 = (char *)(local_44 >> 5);
        if (local_34 < (undefined4 *)(local_44 >> 5)) {
          local_88 = &local_9c;
          local_9c = local_34;
          local_84 = (char **)&LAB_01a6a304;
          local_8c = (char **)&LAB_01a6a304;
          local_90 = &local_58;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
        local_84 = (char **)((int)local_34 - (int)local_58);
        local_88 = (undefined4 **)(local_58 + (int)local_38);
        local_44 = local_30;
      }
      uVar11 = 0;
      local_78 = (undefined4 **)ppcVar2;
      local_8c = (char **)local_3c;
      local_80 = (undefined4 **)local_44;
      local_7c = (undefined *)iVar6;
      goto LAB_01391790;
    }
    uVar10 = (undefined1)local_4c;
  }
  else {
    pbVar15 = (byte *)(iVar12 + uVar13);
    ppcVar16 = ppcVar2;
    do {
      bVar1 = *pbVar15;
      uVar4 = FUN_013b27a4(&local_90,bVar1 >> 4);
      uVar10 = (undefined1)(uVar4 >> 8);
      if ((uVar4 & 0xff) == 2) goto LAB_01391608;
      if ((uVar4 & 1) != 0) {
        local_3c = (undefined4 *)CONCAT31(local_3c._1_3_,uVar10);
        FUN_01284394(iVar5,&local_3c,1);
      }
      uVar4 = FUN_013b27a4(&local_90,bVar1 & 0xf);
      uVar10 = (undefined1)(uVar4 >> 8);
      if ((uVar4 & 0xff) == 2) goto LAB_01391608;
      if ((uVar4 & 1) != 0) {
        local_3c = (undefined4 *)CONCAT31(local_3c._1_3_,uVar10);
        FUN_01284394(iVar5,&local_3c,1);
      }
      ppcVar16 = (char **)((int)ppcVar16 - 1);
      pbVar15 = pbVar15 + 1;
    } while (ppcVar16 != (char **)0x0);
    if ((local_90 == (char **)0x0) || (uVar10 = 6, ((uint)local_8c & 1) != 0)) goto LAB_013915c0;
LAB_01391608:
    local_4c = CONCAT31(local_4c._1_3_,uVar10);
    local_50 = (char *)0x0;
  }
  uVar11 = 1;
  local_90 = (char **)((uint)CONCAT21(local_90._2_2_,uVar10) << 8);
LAB_01391790:
  local_90 = (char **)CONCAT31(local_90._1_3_,uVar11);
  local_38 = (undefined4 *)(piVar17[1] - uVar8);
  if ((uint)piVar17[1] < uVar8) {
    local_38 = (undefined4 *)0x0;
  }
  if (uVar14 != 0) {
    local_38 = (undefined4 *)0x0;
  }
  if (local_38 < ppcVar2) {
    local_3c = ppcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_3c);
  }
  *param_3 = uVar8 + (int)ppcVar2;
  param_3[1] = uVar14 + CARRY4(uVar8,(uint)ppcVar2);
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = local_88;
  param_1[3] = local_84;
  param_1[4] = local_80;
  param_1[5] = local_7c;
  param_1[6] = local_78;
  return;
}

