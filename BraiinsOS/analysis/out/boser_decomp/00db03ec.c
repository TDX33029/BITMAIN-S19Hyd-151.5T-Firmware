// FUN_00db03ec @ 00db03ec size=3052 calls_out=19 calls_in=1
// strings: operationName | operationName | variables | variables

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00db03ec(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  char **ppcVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  char *local_19c;
  char *local_198;
  char *local_194;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *local_174;
  char *local_170;
  char *local_16c;
  char **local_168;
  char **local_160;
  char **local_15c;
  char **local_158;
  char **local_154;
  undefined4 local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  int local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char **local_70;
  char *local_6c;
  char *local_68;
  char *pcStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  char **local_38;
  char *local_34;
  char *local_30;
  char *pcStack_2c;
  
  uVar3 = 0x15;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  if (uVar3 != 0x14) {
    if (uVar3 == 0x15) {
      local_90 = (uint *)param_2[1];
      local_158 = (char **)&DAT_80000000;
      local_15c = (char **)&DAT_80000001;
      local_8c = local_90 + param_2[2] * 8;
      local_168 = (char **)0x0;
      bVar1 = false;
      local_160 = (char **)0x0;
      local_84 = 0;
      local_88 = (uint *)0x0;
      local_80 = (char *)0x0;
      local_70 = (char **)0x0;
LAB_00db04a0:
      puVar11 = local_8c;
      puVar7 = local_90;
      iVar12 = local_84;
LAB_00db04a8:
      puVar8 = puVar7;
LAB_00db04ac:
      iVar12 = iVar12 + 1;
      if (puVar8 == puVar11) {
        local_74 = local_17c;
        local_7c = local_174;
        local_80 = (char *)local_168;
        if (local_158 == (char **)&DAT_80000000) {
          local_194 = (char *)0x0;
          ppcVar4 = (char **)0x0;
        }
        else {
          ppcVar4 = local_158;
        }
        if (local_15c == (char **)&DAT_80000001) {
          local_15c = (char **)&DAT_80000000;
        }
        if (local_158 == (char **)&DAT_80000000) {
          local_198 = (char *)0x1;
        }
        if (bVar1) {
          local_50 = local_174;
          local_4c = local_178;
          local_48 = local_17c;
        }
        else {
          local_48 = (char *)0x0;
          local_50 = (char *)0x0;
        }
        if (local_160 == (char **)0x0) {
          uVar15 = thunk_FUN_01bee35a(0,0x2c0);
          puVar11 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
          if ((char)puVar11[4] == '\0') {
            FUN_019ae6ac(&local_150);
            *puVar11 = (uint)local_150;
            puVar11[1] = (uint)local_14c;
            puVar11[2] = (uint)local_148;
            puVar11[3] = (uint)local_144;
            *(undefined1 *)(puVar11 + 4) = 1;
          }
          local_60 = *puVar11;
          uStack_5c = puVar11[1];
          uStack_58 = puVar11[2];
          uStack_54 = puVar11[3];
          *puVar11 = local_60 + 1;
          puVar11[1] = uStack_5c + (0xfffffffe < local_60);
          local_38 = (char **)&DAT_0056d238;
          local_34 = (char *)0x0;
          local_30 = (char *)0x0;
          pcStack_2c = (char *)0x0;
        }
        else {
          local_38 = local_70;
          local_34 = local_6c;
          local_30 = local_68;
          pcStack_2c = pcStack_64;
        }
        param_1[0x28] = ppcVar4;
        param_1[0x27] = local_19c;
        param_1[0x26] = local_180;
        param_1[0x2a] = local_194;
        param_1[0x29] = local_198;
        param_1[0x25] = local_15c;
        param_1[0x22] = local_50;
        param_1[0x23] = local_4c;
        param_1[0x24] = local_48;
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        param_1[3] = pcStack_2c;
        param_1[4] = local_60;
        param_1[5] = uStack_5c;
        param_1[6] = uStack_58;
        param_1[7] = uStack_54;
        param_1[8] = &DAT_0056d238;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        *(undefined1 *)(param_1 + 0x2e) = 1;
        param_1[0x2d] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 4;
        param_1[0xe] = 0x80000001;
        return;
      }
      puVar7 = puVar8 + 8;
      puVar10 = puVar8 + 4;
      uVar3 = 0x15;
      if ((int)*puVar8 < 0) {
        uVar3 = *puVar8 ^ 0x80000000;
      }
      local_90 = puVar7;
      local_88 = puVar10;
      local_84 = iVar12;
      switch(uVar3) {
      case 1:
        bVar2 = (byte)puVar8[1];
        if (3 < bVar2) {
          bVar2 = 4;
        }
        break;
      default:
        local_14c = (char *)FUN_014c82dc(puVar8,&local_50,&DAT_01c1609c);
        local_150 = (char **)CONCAT31(local_150._1_3_,1);
        goto LAB_00db05a4;
      case 4:
        uVar3 = puVar8[2];
        if (3 < uVar3) {
          uVar3 = 4;
        }
        bVar2 = (byte)uVar3;
        if (puVar8[3] != 0) {
          bVar2 = 4;
        }
        break;
      case 0xc:
        uVar3 = puVar8[2];
        uVar13 = puVar8[3];
        goto LAB_00db0594;
      case 0xd:
        uVar3 = puVar8[1];
        uVar13 = puVar8[2];
LAB_00db0594:
        FUN_00db1308(&local_150,uVar3,uVar13);
        goto LAB_00db05a4;
      case 0xe:
        uVar3 = puVar8[2];
        uVar13 = puVar8[3];
        goto LAB_00db0558;
      case 0xf:
        uVar3 = puVar8[1];
        uVar13 = puVar8[2];
LAB_00db0558:
        FUN_00db1410(&local_150,uVar3,uVar13);
        goto LAB_00db05a4;
      }
      local_150 = (char **)((uint)CONCAT21(local_150._2_2_,bVar2) << 8);
LAB_00db05a4:
      if ((char)local_150 != '\0') goto LAB_00db0860;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_150 >> 8 & 0xff) {
      case 0:
        goto switchD_00db05f8_caseD_0;
      case 1:
        if (local_15c != (char **)&DAT_80000001) {
          local_78 = local_178;
          local_74 = local_17c;
          local_7c = local_174;
          local_14c = (char *)&DAT_0132b6a0;
          local_150 = &local_50;
          local_80 = (char *)local_168;
          local_4c = (char *)0xd;
          local_50 = "operationName";
          pcVar5 = (char *)FUN_019676ac(&DAT_005ab34f,&local_150);
          goto LAB_00db0f00;
        }
        FUN_014c92c0(&local_150,&local_90);
        if (local_150 != (char **)&DAT_80000001) {
          local_15c = local_150;
          local_19c = local_148;
          local_180 = local_14c;
          goto LAB_00db04a0;
        }
        local_15c = (char **)&DAT_80000001;
        break;
      case 2:
        if (bVar1) {
          local_78 = local_178;
          local_74 = local_17c;
          local_7c = local_174;
          local_14c = (char *)&DAT_0132b6a0;
          local_150 = &local_50;
          local_80 = (char *)local_168;
          local_4c = (char *)0x9;
          local_50 = "variables";
          pcVar5 = (char *)FUN_019676ac(&DAT_005ab34f,&local_150);
          goto LAB_00db0f00;
        }
        local_88 = (uint *)0x0;
        FUN_00f1e998(&local_150,puVar10);
        if (local_150 == (char **)0x0) {
          bVar1 = true;
          local_178 = local_148;
          local_17c = local_144;
          local_168 = (char **)0x1;
          local_174 = local_14c;
          goto LAB_00db04a8;
        }
        bVar1 = false;
        break;
      case 3:
        local_154 = local_158;
        if (local_160 != (char **)0x0) {
          local_14c = (char *)&DAT_0132b6a0;
          local_150 = &local_50;
          local_78 = local_178;
          local_74 = local_17c;
          local_7c = local_174;
          local_80 = (char *)local_168;
          local_4c = (char *)0xa;
          local_50 = 
          "extensionsSessionIDDHEECDHEHpkeSymmetricCipherSuitekdf_idaead_idDistinguishedNamesClientExtensionServerExtensionServerNamesClientHelloPayloadServerHelloPayloadProtocolNamesSingleProtocolNameHelloRetryExtensionCertificateExtensionNewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
          ;
          uVar6 = FUN_019676ac(&DAT_005ab34f,&local_150);
          param_1[0x2b] = 0x80000000;
          *param_1 = uVar6;
          goto LAB_00db0880;
        }
        local_88 = (uint *)0x0;
        FUN_011e5090(&local_150,puVar10);
        if (local_150 == (char **)0x0) {
          local_78 = local_178;
          local_74 = local_17c;
          local_7c = local_174;
          local_80 = (char *)local_168;
          param_1[0x2b] = 0x80000000;
          *param_1 = local_14c;
          goto LAB_00db0888;
        }
        local_50 = local_148;
        local_4c = local_144;
        local_48 = (char *)local_140;
        uStack_44 = uStack_13c;
        uStack_40 = uStack_138;
        uStack_3c = uStack_134;
        local_6c = local_14c;
        local_160 = local_150;
        local_70 = local_150;
        local_68 = local_148;
        pcStack_64 = local_144;
        local_60 = local_140;
        uStack_5c = uStack_13c;
        uStack_58 = uStack_138;
        uStack_54 = uStack_134;
        goto LAB_00db04a8;
      default:
        goto switchD_00db05f8_default;
      }
LAB_00db0860:
      local_78 = local_178;
      local_74 = local_17c;
      local_7c = local_174;
      local_80 = (char *)local_168;
      pcVar5 = local_14c;
      goto LAB_00db0864;
    }
    local_14c = (char *)FUN_014c82dc(param_2,&local_50,&DAT_01c1604c);
LAB_00db07a8:
    *param_1 = local_14c;
    param_1[0x2b] = 0x80000000;
    return;
  }
  uVar3 = param_2[2];
  uVar13 = param_2[3];
  if (uVar13 == 0) {
    local_198 = (char *)0x1;
    local_158 = (char **)0x0;
    local_15c = (char **)0x0;
    local_154 = (char **)0x0;
    uVar9 = uVar3;
  }
  else {
    FUN_014f4a6c(&local_150,uVar3);
    if (local_150 == (char **)&DAT_80000000) goto LAB_00db07a8;
    local_154 = local_150;
    local_15c = (char **)local_148;
    local_158 = (char **)0x1;
    uVar9 = uVar3 + 0x10;
    local_198 = local_14c;
  }
  uVar3 = uVar3 + uVar13 * 0x10;
  if (uVar9 == uVar3) {
    local_168 = (char **)&DAT_80000000;
LAB_00db0ac8:
    local_78 = (char *)0x0;
    ppcVar4 = (char **)&DAT_01d30848;
    local_80 = (char *)0x0;
LAB_00db0af8:
    pcStack_64 = (char *)0x0;
    local_68 = (char *)0x0;
    local_6c = (char *)0x0;
    local_70 = (char **)&DAT_0056d238;
    local_30 = (char *)0x0;
    local_34 = (char *)0x4;
    local_38 = (char **)0x0;
    uVar15 = thunk_FUN_01bee35a(ppcVar4,0x2c0);
    puVar11 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_150);
      *puVar11 = (uint)local_150;
      puVar11[1] = (uint)local_14c;
      puVar11[2] = (uint)local_148;
      puVar11[3] = (uint)local_144;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    local_140 = *puVar11;
    uStack_13c = puVar11[1];
    uStack_138 = puVar11[2];
    uStack_134 = puVar11[3];
    *puVar11 = local_140 + 1;
    puVar11[1] = uStack_13c + (0xfffffffe < local_140);
    local_150 = (char **)&DAT_0056d238;
    local_50 = (char *)0x0;
    local_4c = (char *)0x0;
    local_48 = (char *)0x0;
    uVar13 = uVar3;
LAB_00db0b50:
    param_1[0x25] = local_168;
    param_1[0x26] = local_170;
    param_1[0x27] = local_16c;
    param_1[0x28] = local_154;
    param_1[0x29] = local_198;
    param_1[0x2a] = local_15c;
    param_1[0x22] = local_80;
    param_1[0x23] = local_7c;
    param_1[0x24] = local_78;
    param_1[0x2b] = local_38;
    param_1[0x2c] = local_34;
    param_1[0x2d] = local_30;
    param_1[8] = local_70;
    param_1[9] = local_6c;
    param_1[10] = local_68;
    param_1[0xb] = pcStack_64;
    *param_1 = local_150;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    param_1[3] = local_48;
    param_1[5] = uStack_13c;
    param_1[6] = uStack_138;
    param_1[7] = uStack_134;
    param_1[4] = local_140;
    *(undefined1 *)(param_1 + 0x2e) = 1;
    param_1[0xe] = 0x80000001;
    if ((param_1[0x2b] != -0x80000000) && (FUN_01bed4e2(&local_150,param_1,0xc0), uVar3 != uVar13))
    {
      local_70 = local_158;
      uVar6 = FUN_014dee0c((int)local_158 + (uVar3 - uVar13 >> 4),&local_70,&DAT_01cfa01c);
      *param_1 = uVar6;
      param_1[0x2b] = 0x80000000;
      FUN_00db1274(&local_150);
    }
    return;
  }
  FUN_014ef5f4(&local_150,uVar9);
  local_170 = local_14c;
  local_168 = local_150;
  if (local_150 == (char **)&DAT_80000001) {
    param_1[0x2b] = 0x80000000;
    *param_1 = local_14c;
    goto LAB_00db0940;
  }
  local_16c = local_148;
  if (uVar9 + 0x10 == uVar3) {
    local_158 = (char **)((int)local_158 + 1);
    goto LAB_00db0ac8;
  }
  FUN_00f1e998(&local_150,uVar9 + 0x10);
  if (local_150 == (char **)0x0) {
    local_78 = local_144;
    local_80 = local_14c;
    local_7c = local_148;
    local_30 = (char *)0x0;
    local_38 = (char **)0x0;
    local_34 = (char *)0x4;
    local_70 = (char **)&DAT_0056d238;
    local_6c = (char *)0x0;
    local_68 = (char *)0x0;
    pcStack_64 = (char *)0x0;
    if (uVar9 + 0x20 == uVar3) {
      ppcVar4 = (char **)((int)local_158 + 2);
      local_158 = ppcVar4;
      goto LAB_00db0af8;
    }
    FUN_011e5090(&local_150);
    if (local_150 != (char **)0x0) {
      puVar14 = (undefined4 *)((uint)&local_150 | 4);
      local_158 = (char **)((int)local_158 + 3);
      local_50 = (char *)*puVar14;
      local_4c = (char *)puVar14[1];
      local_48 = (char *)puVar14[2];
      uVar13 = uVar9 + 0x30;
      goto LAB_00db0b50;
    }
    param_1[0x2b] = 0x80000000;
    *param_1 = local_14c;
    FUN_01aae24c(&DAT_01d30848);
    FUN_006775f0(&local_38);
    FUN_007028c4(&local_80);
  }
  else {
    *param_1 = local_14c;
    param_1[0x2b] = 0x80000000;
  }
  if (local_168 != (char **)&DAT_80000000) {
    FUN_019bb7e0(local_168,local_170);
  }
LAB_00db0940:
  FUN_019bb7e0(local_154,local_198);
  return;
switchD_00db05f8_default:
  local_88 = (uint *)0x0;
  puVar8 = puVar7;
  goto LAB_00db04ac;
switchD_00db05f8_caseD_0:
  if (local_158 == (char **)&DAT_80000000) {
    local_88 = (uint *)0x0;
    FUN_014f4a6c(&local_150,puVar10);
    local_158 = local_150;
    if (local_150 == (char **)&DAT_80000000) {
      local_158 = (char **)&DAT_80000000;
      local_78 = local_178;
      local_74 = local_17c;
      local_7c = local_174;
      local_80 = (char *)local_168;
      pcVar5 = local_14c;
      goto LAB_00db0864;
    }
    local_194 = local_148;
    local_198 = local_14c;
    goto LAB_00db04a8;
  }
  local_78 = local_178;
  local_74 = local_17c;
  local_7c = local_174;
  local_14c = (char *)&DAT_0132b6a0;
  local_150 = &local_50;
  local_80 = (char *)local_168;
  local_4c = (char *)0x5;
  local_50 = &DAT_0050c2f4;
  pcVar5 = (char *)FUN_019676ac(&DAT_005ab34f,&local_150);
LAB_00db0f00:
LAB_00db0864:
  *param_1 = pcVar5;
  param_1[0x2b] = 0x80000000;
  local_154 = local_158;
  if (local_160 != (char **)0x0) {
LAB_00db0880:
    FUN_006b3bf4(&local_70);
  }
LAB_00db0888:
  if (bVar1) {
    FUN_007028c4(&local_7c);
  }
  if (-0x7fffffff < (int)local_15c) {
    FUN_019bb7e0(local_15c,local_180);
  }
  if (local_154 == (char **)&DAT_80000000) {
    return;
  }
  goto LAB_00db0940;
}

