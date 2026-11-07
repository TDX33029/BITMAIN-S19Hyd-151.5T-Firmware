// FUN_014d7828 @ 014d7828 size=2048 calls_out=20 calls_in=2
// strings: status | status | status | status | title | title

void FUN_014d7828(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 uVar9;
  char **ppcVar10;
  uint uVar11;
  undefined2 *unaff_r9;
  char cVar12;
  byte bVar13;
  char **ppcVar14;
  bool bVar15;
  int local_d0;
  int local_bc;
  undefined2 *local_b8;
  char *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  uint local_a4;
  undefined4 *local_a0;
  int local_9c;
  char **local_98 [4];
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  char *local_50;
  undefined2 *local_4c;
  int local_48;
  char *local_44;
  undefined2 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 *local_34;
  int local_30;
  undefined1 uStack_25;
  
  uVar11 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar11 < 0) {
    uVar2 = uVar11 ^ 0x80000000;
  }
  if (uVar2 != 0x14) {
    if (uVar2 != 0x15) {
      iVar8 = FUN_014c8278(param_2,&uStack_25,&DAT_01cf9dd4);
      *param_1 = -0x80000000;
      param_1[1] = iVar8;
      return;
    }
    local_88 = param_2[1];
    local_7c = local_88 + param_2[2] * 0x20;
    puVar3 = (undefined4 *)((uint)&local_38 | 4);
    puVar4 = (undefined4 *)((uint)local_98 | 4);
    local_b0 = (char *)0x80000000;
    local_78 = 0;
    local_98[0] = (char **)0x80000015;
    ppcVar10 = (char **)&DAT_80000001;
    local_84 = local_88;
    local_80 = uVar11;
    cVar12 = '\x03';
    bVar13 = 2;
    while( true ) {
      FUN_014d5d10(&local_38,local_98);
      ppcVar14 = local_98[0];
      if ((char)local_38 == '\x01') break;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_38 >> 8 & 0xff) {
      case 1:
        if (ppcVar10 != (char **)&DAT_80000001) {
          local_48 = local_bc;
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_4c = local_b8;
          local_50 = local_b0;
          local_40 = (undefined2 *)0x5;
          local_44 = "title";
          puVar7 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_38);
          goto LAB_014d7a88;
        }
        FUN_014d5fb0(&local_38,local_98);
        if (local_38 == (char **)&DAT_80000001) {
          ppcVar10 = (char **)&DAT_80000001;
          local_48 = local_bc;
          local_4c = local_b8;
          local_50 = local_b0;
          puVar7 = local_34;
          goto LAB_014d7a88;
        }
        local_d0 = local_30;
        ppcVar10 = local_38;
        unaff_r9 = local_34;
        break;
      case 2:
        if (bVar13 != 2) {
          local_48 = local_bc;
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_4c = local_b8;
          local_50 = local_b0;
          local_40 = (undefined2 *)0x7;
          local_44 = 
          "versionRandomtypEchConfigContentskey_configmaximum_name_lengthpublic_nameextensionsSessionIDDHEECDHEHpkeSymmetricCipherSuitekdf_idaead_idDistinguishedNamesClientExtensionServerExtensionServerNamesClientHelloPayloadServerHelloPayloadProtocolNamesSingleProtocolNameHelloRetryExtensionCertificateExtensionNewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
          ;
          puVar7 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_38);
          goto LAB_014d7a88;
        }
        FUN_014d6010(&local_38,local_98);
        if ((char)local_38 != '\0') goto LAB_014d7a64;
        bVar13 = local_38._1_1_;
        break;
      case 3:
        if (local_b0 != (char *)0x80000000) {
          local_48 = local_bc;
          local_4c = local_b8;
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_50 = local_b0;
          local_40 = (undefined2 *)0x8;
          local_44 = "releasesP\x11\x01";
          iVar8 = FUN_019676ac(&DAT_005ab34f,&local_38);
          bVar15 = true;
          *param_1 = -0x80000000;
          param_1[1] = iVar8;
          goto LAB_014d7a94;
        }
        bVar15 = local_98[0] == (char **)0x80000015;
        local_98[0] = (char **)0x80000015;
        if (bVar15) {
          local_48 = local_bc;
          local_4c = local_b8;
          local_50 = local_b0;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                       ,0x2c,&DAT_01cfa02c);
        }
        uVar5 = puVar4[1];
        uVar9 = puVar4[2];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar9;
        local_38 = ppcVar14;
        FUN_014dfdf0(&local_44,&local_38);
        if (local_44 == (char *)0x80000000) {
          bVar15 = true;
          local_4c = local_b8;
          local_50 = local_b0;
          *param_1 = -0x80000000;
          param_1[1] = (int)local_40;
          goto LAB_014d7a9c;
        }
        local_bc = local_3c;
        local_b8 = local_40;
        local_b0 = local_44;
        break;
      case 4:
        local_48 = local_bc;
        local_4c = local_b8;
        local_50 = local_b0;
        if (cVar12 == '\x03') {
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_40 = (undefined2 *)0x6;
          local_44 = "status";
          puVar7 = (undefined2 *)FUN_019676ac(&DAT_0057cd64,&local_38);
          goto LAB_014d7a88;
        }
        ppcVar14 = ppcVar10;
        if (ppcVar10 == (char **)&DAT_80000001) {
          ppcVar14 = (char **)&DAT_80000000;
        }
        bVar15 = ppcVar10 == (char **)&DAT_80000001;
        if (bVar13 == 2) {
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_40 = (undefined2 *)0x7;
          local_44 = 
          "versionRandomtypEchConfigContentskey_configmaximum_name_lengthpublic_nameextensionsSessionIDDHEECDHEHpkeSymmetricCipherSuitekdf_idaead_idDistinguishedNamesClientExtensionServerExtensionServerNamesClientHelloPayloadServerHelloPayloadProtocolNamesSingleProtocolNameHelloRetryExtensionCertificateExtensionNewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
          ;
          iVar8 = FUN_019676ac(&DAT_0057cd64,&local_38);
        }
        else {
          if (local_b0 != (char *)0x80000000) {
            *(byte *)(param_1 + 6) = bVar13 & 1;
            param_1[1] = (int)local_b8;
            param_1[2] = local_bc;
            param_1[4] = (int)unaff_r9;
            *param_1 = (int)local_b0;
            param_1[5] = local_d0;
            *(char *)((int)param_1 + 0x19) = cVar12;
            param_1[3] = (int)ppcVar14;
            local_70 = *param_1;
            iStack_6c = param_1[1];
            iStack_68 = param_1[2];
            local_64 = param_1[3];
            iStack_60 = param_1[4];
            iStack_5c = param_1[5];
            iStack_58 = param_1[6];
            iVar8 = FUN_014c9cac(local_98);
            if (iVar8 != 0) {
              *param_1 = -0x80000000;
              param_1[1] = iVar8;
              FUN_014d8210(&local_70);
            }
            goto LAB_014d7ac0;
          }
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_40 = (undefined2 *)0x8;
          local_44 = "releasesP\x11\x01";
          iVar8 = FUN_019676ac(&DAT_0057cd64,&local_38);
        }
        *param_1 = -0x80000000;
        param_1[1] = iVar8;
        if (ppcVar14 != (char **)&DAT_80000000) {
          FUN_019bb7e0(ppcVar14,unaff_r9);
        }
        goto LAB_014d7a8c;
      default:
        if (cVar12 != '\x03') {
          local_48 = local_bc;
          local_34 = &DAT_0132b6a0;
          local_38 = &local_44;
          local_4c = local_b8;
          local_50 = local_b0;
          local_40 = (undefined2 *)0x6;
          local_44 = "status";
          puVar7 = (undefined2 *)FUN_019676ac(&DAT_005ab34f,&local_38);
          goto LAB_014d7a88;
        }
        FUN_014d5f50(&local_38,local_98);
        if ((char)local_38 != '\0') goto LAB_014d7a64;
        cVar12 = local_38._1_1_;
      }
    }
LAB_014d7a64:
    local_48 = local_bc;
    local_4c = local_b8;
    local_50 = local_b0;
    puVar7 = local_34;
LAB_014d7a88:
    bVar15 = true;
    *param_1 = -0x80000000;
    param_1[1] = (int)puVar7;
LAB_014d7a8c:
    if (local_b0 != (char *)0x80000000) {
LAB_014d7a94:
      FUN_014ca9c8(&local_50);
    }
LAB_014d7a9c:
    if ((bVar15) && (-0x7fffffff < (int)ppcVar10)) {
      FUN_019bb7e0(ppcVar10,unaff_r9);
    }
    FUN_014c9c60(local_98);
    goto LAB_014d7ac0;
  }
  local_a4 = param_2[1];
  local_ac = (undefined4 *)param_2[2];
  local_a0 = local_ac + param_2[3] * 4;
  local_9c = 0;
  local_a8 = local_ac;
  FUN_014d6094(&local_38,&local_ac);
  if ((char)local_38 == '\x01') {
LAB_014d7a4c:
    puVar7 = local_34;
LAB_014d7a50:
    *param_1 = -0x80000000;
    param_1[1] = (int)puVar7;
  }
  else {
    cVar12 = local_38._1_1_;
    if (local_38._1_1_ == '\x03') {
      puVar7 = (undefined2 *)FUN_014dee0c(0,&DAT_01cf9fec,&DAT_01d064b8);
      goto LAB_014d7a50;
    }
    FUN_014d6134(&local_38,&local_ac);
    puVar7 = local_34;
    ppcVar10 = local_38;
    if (local_38 == (char **)0x80000002) goto LAB_014d7a4c;
    if (local_38 == (char **)&DAT_80000001) {
      puVar7 = (undefined2 *)FUN_014dee0c(1,&DAT_01cf9fec,&DAT_01d064b8);
      goto LAB_014d7a50;
    }
    FUN_014d61d0(&local_38,&local_ac);
    if ((char)local_38 == '\x01') {
      puVar6 = local_34;
    }
    else {
      cVar1 = local_38._1_1_;
      puVar3 = local_a8;
      if (local_38._1_1_ == '\x02') {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
        if (local_a8 != local_a0) {
          ppcVar14 = (char **)*local_a8;
          puVar3 = local_a8 + 4;
          if (ppcVar14 != (char **)0x80000015) {
            puVar3 = (undefined4 *)((uint)&local_38 | 4);
            uVar5 = local_a8[2];
            uVar9 = local_a8[3];
            *puVar3 = local_a8[1];
            puVar3[1] = uVar5;
            puVar3[2] = uVar9;
            local_9c = local_9c + 1;
            local_a8 = local_a8 + 4;
            local_38 = ppcVar14;
            FUN_014dfdf0(&local_44,&local_38);
            if (local_44 != (char *)0x80000000) {
              *param_1 = (int)local_44;
              param_1[1] = (int)local_40;
              param_1[2] = local_3c;
              param_1[3] = (int)ppcVar10;
              param_1[4] = (int)puVar7;
              *(char *)((int)param_1 + 0x19) = cVar12;
              *(char *)(param_1 + 6) = cVar1;
              param_1[5] = local_30;
              local_70 = *param_1;
              iStack_6c = param_1[1];
              iStack_68 = param_1[2];
              local_64 = param_1[3];
              iStack_60 = param_1[4];
              iStack_5c = param_1[5];
              iStack_58 = param_1[6];
              iVar8 = FUN_014ca838(&local_ac);
              if (iVar8 != 0) {
                *param_1 = -0x80000000;
                param_1[1] = iVar8;
                FUN_014d8210(&local_70);
              }
              goto LAB_014d7ac0;
            }
            puVar6 = local_40;
            goto LAB_014d7c30;
          }
        }
      }
      local_a8 = puVar3;
      puVar6 = (undefined2 *)FUN_014dee0c(uVar5,&DAT_01cf9fec,&DAT_01d064b8);
    }
LAB_014d7c30:
    *param_1 = -0x80000000;
    param_1[1] = (int)puVar6;
    if (ppcVar10 != (char **)&DAT_80000000) {
      FUN_019bb7e0(ppcVar10,puVar7);
    }
  }
  FUN_014deb6c(&local_ac);
LAB_014d7ac0:
  if ((uVar11 < 0x80000000) || ((undefined1 *)(uVar11 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_014c81b0(param_2);
  return;
}

