// FUN_0127d0dc @ 0127d0dc size=2088 calls_out=18 calls_in=1
// strings: public_group_stable_connection_duration_s | public_group_maximal_reconnection_interval_s | private_group_stable_connection_duration_s | private_group_maximal_reconnection_interval_s | public_group_maximal_reconnection_interval_s | public_group_stable_connection_duration_s

void FUN_0127d0dc(undefined2 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char *pcVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined2 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint unaff_r10;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_4c;
  char *local_44;
  undefined1 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined1 uStack_25;
  
  uVar16 = *(uint *)(param_2 + 0x10);
  uVar17 = *(uint *)(param_2 + 0x14);
  if (uVar17 < uVar16) {
    do {
      uVar18 = *(byte *)(*(int *)(param_2 + 0xc) + uVar17) - 9;
      if ((0x17 < uVar18) || ((1 << (uVar18 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar17) != 0x6e) goto LAB_0127d144;
        *(uint *)(param_2 + 0x14) = uVar17 + 1;
        iVar14 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar14 != 0) goto LAB_0127d6dc;
        uVar13 = 0;
        param_1[1] = 0;
        goto LAB_0127d6e4;
      }
      uVar17 = uVar17 + 1;
      *(uint *)(param_2 + 0x14) = uVar17;
    } while (uVar16 != uVar17);
  }
  else {
LAB_0127d144:
    if (uVar17 < uVar16) {
      do {
        uVar18 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar17);
        if ((0x17 < uVar18 - 9) || ((1 << (uVar18 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar18 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar17 + 1;
              local_38 = CONCAT31(local_38._1_3_,1);
              local_3c = param_2;
              FUN_01278c18(&local_34,&local_3c);
              if ((short)local_34 == 1) {
                uVar16 = CONCAT22(uStack_2e,local_30);
LAB_0127d510:
                bVar2 = true;
              }
              else {
                if (local_34._2_2_ == 1) {
                  uVar16 = (uint)local_30;
                  FUN_01278c18(&local_34,&local_3c);
                  uVar10 = local_30;
                  if ((short)local_34 == 0) {
                    if (local_34._2_2_ != 1) {
                      uVar16 = FUN_014dee0c(1,&DAT_01c257f8,&DAT_01d064b8);
                      goto LAB_0127d510;
                    }
                    FUN_01278c18(&local_34,&local_3c);
                    uVar11 = local_30;
                    if ((short)local_34 == 0) {
                      if (local_34._2_2_ == 1) {
                        FUN_01278c18(&local_34,&local_3c);
                        if ((short)local_34 != 0) goto LAB_0127d508;
                        local_4c = uVar16;
                        if (local_34._2_2_ == 1) {
                          uVar16 = CONCAT22(uVar11,uVar10);
                          unaff_r10 = (uint)local_30;
                          bVar2 = false;
                          goto LAB_0127d514;
                        }
                        uVar15 = 3;
                      }
                      else {
                        uVar15 = 2;
                      }
                      uVar16 = FUN_014dee0c(uVar15,&DAT_01c257f8,&DAT_01d064b8);
                      goto LAB_0127d510;
                    }
                  }
LAB_0127d508:
                  uVar16 = CONCAT22(uStack_2e,local_30);
                  goto LAB_0127d510;
                }
                uVar16 = FUN_014dee0c(0,&DAT_01c257f8,&DAT_01d064b8);
                bVar2 = true;
              }
LAB_0127d514:
              param_2[0x1c] = param_2[0x1c] + '\x01';
              uVar17 = FUN_014d9568(param_2);
              local_6c = unaff_r10;
              if (!bVar2) goto LAB_0127d530;
              goto LAB_0127d630;
            }
          }
          else {
            if (uVar18 != 0x7b) {
              uVar17 = FUN_012c7788(param_2,&uStack_25,&DAT_01c25840);
              goto LAB_0127d63c;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar17 + 1;
              local_40 = 1;
              bVar7 = false;
              bVar8 = false;
              bVar5 = false;
              bVar6 = false;
              bVar4 = false;
              bVar3 = false;
              bVar2 = false;
              local_44 = param_2;
              goto LAB_0127d210;
            }
          }
          local_34 = (char **)0x18;
          goto LAB_0127d180;
        }
        uVar17 = uVar17 + 1;
        *(uint *)(param_2 + 0x14) = uVar17;
      } while (uVar16 != uVar17);
    }
  }
  local_34 = (char **)0x5;
LAB_0127d180:
  iVar14 = FUN_012c6b30(param_2,&local_34);
LAB_0127d6dc:
  *(int *)(param_1 + 2) = iVar14;
  uVar13 = 1;
LAB_0127d6e4:
  *param_1 = uVar13;
  return;
LAB_0127d210:
  FUN_01278730(&local_34,&local_44);
  if ((char)local_34 == '\x01') goto LAB_0127d600;
  if (local_34._1_1_ != '\x01') {
    if (bVar2) {
      if (bVar3) {
        if (bVar4) {
          if (bVar7) {
            bVar2 = false;
            uVar16 = (local_74 & 0xffff) + local_70 * 0x10000;
            goto LAB_0127d614;
          }
          local_38 = 0x2a;
          local_3c = "private_group_stable_connection_duration_s";
        }
        else {
          local_38 = 0x2d;
          local_3c = "private_group_maximal_reconnection_interval_s";
        }
      }
      else {
        local_38 = 0x29;
        local_3c = "public_group_stable_connection_duration_s";
      }
    }
    else {
      local_38 = 0x2c;
      local_3c = "public_group_maximal_reconnection_interval_s";
    }
    local_30 = 0x13b8;
    uStack_2e = 0x18a;
    local_34 = &local_3c;
    uVar16 = FUN_019676ac(&DAT_0057cd64,&local_34);
    bVar2 = true;
    goto LAB_0127d614;
  }
  iVar14 = *(int *)(local_44 + 0x14);
  local_44[8] = '\0';
  local_44[9] = '\0';
  local_44[10] = '\0';
  local_44[0xb] = '\0';
  *(int *)(local_44 + 0x14) = iVar14 + 1;
  FUN_01968828(&local_34,local_44 + 0xc);
  uVar16 = CONCAT22(uStack_2e,local_30);
  if (local_34 == (char **)0x2) goto LAB_0127d60c;
  switch(CONCAT22(uStack_2a,local_2c)) {
  case 0x29:
    iVar14 = thunk_FUN_01bed842(uVar16,"public_group_stable_connection_duration_s",0x29);
    if (iVar14 != 0) break;
    if (!bVar5) {
      FUN_01278960(&local_34,local_44);
      if ((short)local_34 != 0) {
LAB_0127d600:
        uVar16 = CONCAT22(uStack_2e,local_30);
        goto LAB_0127d60c;
      }
      local_74 = (uint)local_34 >> 0x10;
      bVar5 = true;
      bVar3 = true;
      goto LAB_0127d210;
    }
    local_38 = 0x29;
    local_3c = "public_group_stable_connection_duration_s";
LAB_0127d8f8:
    local_30 = 0x13b8;
    uStack_2e = 0x18a;
    local_34 = &local_3c;
    uVar16 = FUN_019676ac(&DAT_005ab34f,&local_34);
LAB_0127d60c:
    bVar2 = true;
LAB_0127d614:
    param_2[0x1c] = param_2[0x1c] + '\x01';
    uVar17 = FUN_012c7b64(param_2);
    if (bVar2) {
LAB_0127d630:
      if (uVar17 != 0) {
        FUN_01278260();
      }
      uVar17 = uVar16;
    }
    else {
LAB_0127d530:
      if (uVar17 == 0) {
        FUN_0127e3f0(&local_34,"public_group_maximal_reconnection_interval_s",0x2c,local_4c);
        uVar10 = local_30;
        if (local_34 == (char **)&DAT_80000000) {
          FUN_0127e3f0(&local_34,"public_group_stable_connection_duration_s",0x29,uVar16);
          uVar11 = local_30;
          if (local_34 == (char **)&DAT_80000000) {
            FUN_0127e3f0(&local_34,"private_group_maximal_reconnection_interval_s",0x2d,
                         uVar16 >> 0x10);
            uVar12 = local_30;
            if ((local_34 == (char **)&DAT_80000000) &&
               (FUN_0127e3f0(&local_34,"private_group_stable_connection_duration_s",0x2a,local_6c),
               local_34 == (char **)&DAT_80000000)) {
              *(uint *)(param_1 + 3) = CONCAT22(uVar12,uVar11);
              param_1[5] = local_30;
              param_1[1] = 1;
              uVar13 = 0;
              param_1[2] = uVar10;
              goto LAB_0127d6e4;
            }
          }
        }
        iVar14 = FUN_0127dffc(&local_34);
        goto LAB_0127d6dc;
      }
    }
LAB_0127d63c:
    iVar14 = FUN_0127dee8(uVar17,param_2);
    goto LAB_0127d6dc;
  case 0x2a:
    iVar14 = thunk_FUN_01bed842(uVar16,"private_group_stable_connection_duration_s",0x2a);
    if (iVar14 == 0) {
      if (bVar7) {
        local_38 = 0x2a;
        local_3c = "private_group_stable_connection_duration_s";
        goto LAB_0127d8f8;
      }
      FUN_01278960(&local_34,local_44);
      if ((short)local_34 != 0) goto LAB_0127d600;
      local_6c = (uint)local_34 >> 0x10;
      bVar7 = true;
      goto LAB_0127d210;
    }
    break;
  case 0x2c:
    iVar14 = thunk_FUN_01bed842(uVar16,"public_group_maximal_reconnection_interval_s",0x2c);
    if (iVar14 == 0) {
      if (bVar6) {
        local_38 = 0x2c;
        local_3c = "public_group_maximal_reconnection_interval_s";
        goto LAB_0127d8f8;
      }
      FUN_01278960(&local_34,local_44);
      if ((short)local_34 != 0) goto LAB_0127d600;
      local_4c = (uint)local_34 >> 0x10;
      bVar6 = true;
      bVar2 = true;
      goto LAB_0127d210;
    }
    break;
  case 0x2d:
    iVar14 = thunk_FUN_01bed842(uVar16,"private_group_maximal_reconnection_interval_s",0x2d);
    if (iVar14 == 0) {
      if (bVar8) {
        local_38 = 0x2d;
        local_3c = "private_group_maximal_reconnection_interval_s";
        goto LAB_0127d8f8;
      }
      FUN_01278960(&local_34,local_44);
      if ((short)local_34 != 0) goto LAB_0127d600;
      local_70 = (uint)local_34 >> 0x10;
      bVar8 = true;
      bVar4 = true;
      goto LAB_0127d210;
    }
  }
  pcVar9 = local_44;
  uVar16 = FUN_0167459c(local_44);
  if ((uVar16 != 0) || (uVar16 = FUN_012c6c4c(pcVar9), uVar16 != 0)) goto LAB_0127d60c;
  goto LAB_0127d210;
}

