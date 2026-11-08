// FUN_00679f40 @ 00679f40 size=1584 calls_out=20 calls_in=2
// strings: window_duration_min | window_duration_min | api_types | max_endpoints | max_user_agents | max_user_agents

void FUN_00679f40(undefined4 *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *unaff_r6;
  char *unaff_r7;
  char cVar14;
  char *unaff_r9;
  char *unaff_r10;
  bool bVar15;
  ulonglong uVar16;
  char *local_74;
  char *local_58;
  uint local_54;
  char *local_50;
  char local_4c;
  char local_4b;
  char local_4a;
  char *local_48;
  char *local_44;
  undefined1 local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined1 uStack_25;
  
  FUN_00677900(&local_4c);
  if (local_4c == '\x01') goto LAB_00679fc4;
  bVar15 = local_4b == '\x01';
  if (bVar15) {
    local_4b = local_4a;
  }
  if (bVar15 && local_4b == 'n') {
    FUN_0157653c(param_2 + 0xc);
    local_48 = (char *)FUN_00677b98(param_2,"ull",3);
    if (local_48 == (char *)0x0) {
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
    goto LAB_00679fc4;
  }
  FUN_00677900(&local_30,param_2);
  if ((char)local_30 == '\x01') {
    local_48 = local_2c;
    goto LAB_00679fc4;
  }
  if (local_30._1_1_ != '\x01') {
    uVar12 = *(undefined4 *)(param_2 + 0x1c);
    uVar13 = *(undefined4 *)(param_2 + 0x20);
    local_3c = (undefined4 *)0x5;
LAB_0067a4bc:
    local_48 = (char *)FUN_01966fbc(&local_3c,uVar12,uVar13);
    goto LAB_00679fc4;
  }
  if (local_30._2_1_ == '[') {
    cVar14 = param_2[0x2c];
    param_2[0x2c] = cVar14 + -1;
    if ((char)(cVar14 + -1) == '\0') goto LAB_0067a4b4;
    FUN_0157653c(param_2 + 0xc);
    local_2c = (char *)CONCAT31(local_2c._1_3_,1);
    local_30 = param_2;
    FUN_00679cf4(&local_3c,&local_30);
    pcVar8 = local_38;
    cVar14 = '\x02';
    if (local_3c == (undefined4 *)0x2) {
LAB_0067a24c:
      cVar14 = '\x02';
      local_74 = unaff_r7;
    }
    else {
      if (((uint)local_3c & 1) == 0) {
        pcVar8 = (char *)FUN_014dee0c(0,&DAT_01c257d8,&DAT_01d064b8);
        goto LAB_0067a24c;
      }
      FUN_00679cf4(&local_3c,&local_30);
      unaff_r7 = local_38;
      puVar7 = local_3c;
      if (local_3c == (undefined4 *)0x2) {
        unaff_r6 = local_3c;
        local_74 = local_38;
        pcVar8 = local_38;
      }
      else {
        FUN_00679cf4(&local_3c,&local_30);
        pcVar10 = local_38;
        unaff_r6 = local_3c;
        if (((uint)puVar7 & 1) == 0) {
          unaff_r7 = (char *)0xa;
        }
        local_74 = unaff_r7;
        if (local_3c == (undefined4 *)0x2) {
          local_50 = local_38;
          pcVar8 = local_38;
        }
        else {
          FUN_00679a0c(&local_3c,&local_30);
          pcVar11 = pcVar10;
          if (((uint)unaff_r6 & 1) == 0) {
            pcVar11 = (char *)0x64;
          }
          unaff_r10 = pcVar10;
          if ((char)local_3c == '\x01') {
            pcVar8 = local_38;
            goto LAB_0067a24c;
          }
          local_50 = pcVar11;
          if (local_3c._1_1_ == '\x01') {
            FUN_00698acc(&local_3c,local_30);
            if ((char)local_3c == '\x01') {
              pcVar8 = local_38;
              goto LAB_0067a24c;
            }
            unaff_r6 = (undefined4 *)((uint)local_3c >> 0x10);
            unaff_r10 = local_38;
            cVar14 = local_3c._1_1_;
          }
          else {
            cVar14 = '\x02';
          }
          if (cVar14 == '\x02') {
            cVar14 = '\x01';
            unaff_r10 = (char *)0x1010101;
            unaff_r6 = (undefined4 *)0x101;
          }
        }
      }
    }
    local_54._0_2_ = SUB42(unaff_r6,0);
    param_2[0x2c] = param_2[0x2c] + '\x01';
    pcVar10 = (char *)FUN_006795cc(param_2);
    if (cVar14 == '\x02') goto LAB_0067a46c;
    local_58 = unaff_r10;
    goto LAB_0067a444;
  }
  if (local_30._2_1_ == '{') {
    cVar14 = param_2[0x2c];
    param_2[0x2c] = cVar14 + -1;
    if ((char)(cVar14 + -1) != '\0') {
      FUN_0157653c(param_2 + 0xc);
      local_40 = 1;
      cVar14 = '\x02';
      bVar6 = false;
      bVar5 = false;
      bVar15 = false;
      bVar4 = false;
      bVar2 = false;
      bVar3 = false;
      local_44 = param_2;
LAB_0067a050:
LAB_0067a054:
      FUN_006796f4(&local_3c,&local_44);
      pcVar8 = local_44;
      if ((char)local_3c != '\x01') {
        if (local_3c._1_1_ == '\0') {
switchD_0067a104_caseD_5:
          if (!bVar2) {
            puVar9 = &DAT_0057cd64;
            goto LAB_0067a39c;
          }
          if (!bVar3) {
            local_74 = (char *)0xa;
          }
          if (!bVar4) {
            local_50 = (char *)0x64;
          }
          if (cVar14 == '\x02') {
            cVar14 = '\x01';
            local_58 = (char *)0x1010101;
            local_54._0_2_ = 0x101;
          }
          pcVar8 = unaff_r9;
          goto LAB_0067a41c;
        }
        unaff_r7 = local_44 + 0xc;
        FUN_0157653c(unaff_r7);
        pcVar8[8] = '\0';
        pcVar8[9] = '\0';
        pcVar8[10] = '\0';
        pcVar8[0xb] = '\0';
        FUN_0069e49c(&local_3c,unaff_r7,pcVar8);
        if (local_3c == (undefined4 *)0x2) {
          unaff_r9 = local_38;
          goto LAB_0067a418;
        }
        FUN_0127e51c(&local_30,local_38,local_34);
        pcVar10 = local_44;
        if ((char)local_30 == '\x01') {
          unaff_r9 = local_2c;
          goto LAB_0067a418;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_30 >> 8 & 0xff) {
        case 0:
          goto switchD_0067a104_caseD_0;
        case 1:
          if (bVar5) {
            local_2c = (char *)0xf;
            puVar9 = &DAT_005ab34f;
            local_30 = "max_user_agents";
            goto LAB_0067a3a8;
          }
          uVar16 = FUN_006799e4(local_44);
          local_74 = (char *)(uVar16 >> 0x20);
          if ((uVar16 & 1) != 0) {
            cVar14 = '\x02';
            pcVar8 = local_74;
            goto LAB_0067a41c;
          }
          bVar5 = true;
          bVar3 = true;
          goto LAB_0067a054;
        case 2:
          if (bVar6) {
            local_2c = (char *)0xd;
            puVar9 = &DAT_005ab34f;
            local_30 = "max_endpoints";
            goto LAB_0067a3a8;
          }
          uVar16 = FUN_006799e4(local_44);
          local_50 = (char *)(uVar16 >> 0x20);
          if ((uVar16 & 1) != 0) {
            cVar14 = '\x02';
            local_74 = unaff_r7;
            pcVar8 = local_50;
            goto LAB_0067a41c;
          }
          bVar6 = true;
          bVar4 = true;
          goto LAB_0067a054;
        case 3:
          if (cVar14 != '\x02') {
            local_2c = (char *)0x9;
            puVar9 = &DAT_005ab34f;
            local_30 = "api_types";
            goto LAB_0067a3a8;
          }
          pcVar8 = (char *)FUN_006794bc(local_44);
          if (pcVar8 == (char *)0x0) {
            FUN_00698acc(&local_3c,pcVar10);
            if ((char)local_3c != '\0') break;
            local_58 = local_38;
            local_54 = (uint)local_3c >> 0x10;
            cVar14 = local_3c._1_1_;
            goto LAB_0067a054;
          }
          local_38 = pcVar8;
          break;
        case 4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x67a584);
          (*pcVar1)();
        case 5:
          goto switchD_0067a104_caseD_5;
        default:
          pcVar8 = (char *)FUN_006794bc(local_44);
          if (pcVar8 == (char *)0x0) goto code_r0x0067a0e8;
          goto LAB_0067a304;
        }
      }
      unaff_r9 = local_38;
      goto LAB_0067a418;
    }
LAB_0067a4b4:
    uVar12 = *(undefined4 *)(param_2 + 0x1c);
    uVar13 = *(undefined4 *)(param_2 + 0x20);
    local_3c = (undefined4 *)0x18;
    goto LAB_0067a4bc;
  }
  pcVar8 = (char *)FUN_00678df8(param_2,&uStack_25,&DAT_01c258a0);
  goto LAB_0067a474;
code_r0x0067a0e8:
  pcVar8 = (char *)FUN_00677d34(pcVar10);
  if (pcVar8 != (char *)0x0) {
LAB_0067a304:
    cVar14 = '\x02';
    local_74 = unaff_r7;
    goto LAB_0067a41c;
  }
  goto LAB_0067a054;
switchD_0067a104_caseD_0:
  if (!bVar15) {
    uVar16 = FUN_006799e4(local_44);
    unaff_r9 = (char *)(uVar16 >> 0x20);
    if ((uVar16 & 1) != 0) goto LAB_0067a418;
    bVar2 = true;
    bVar15 = true;
    goto LAB_0067a050;
  }
  puVar9 = &DAT_005ab34f;
LAB_0067a39c:
  local_2c = (char *)0x13;
  local_30 = "window_duration_min";
LAB_0067a3a8:
  local_38 = &LAB_018a13b8;
  local_3c = &local_30;
  unaff_r9 = (char *)FUN_019676ac(puVar9,&local_3c);
LAB_0067a418:
  cVar14 = '\x02';
  local_74 = unaff_r7;
  pcVar8 = unaff_r9;
LAB_0067a41c:
  param_2[0x2c] = param_2[0x2c] + '\x01';
  pcVar10 = (char *)FUN_00679540(param_2);
  if (cVar14 == '\x02') {
LAB_0067a46c:
    if (pcVar10 != (char *)0x0) {
      FUN_0067904c();
    }
  }
  else {
LAB_0067a444:
    if (pcVar10 == (char *)0x0) {
      *(char **)((int)param_1 + 0xf) = local_58;
      *(undefined2 *)((int)param_1 + 0xd) = (undefined2)local_54;
      *(char *)(param_1 + 3) = cVar14;
      *param_1 = pcVar8;
      param_1[1] = local_74;
      param_1[2] = local_50;
      return;
    }
    pcVar8 = pcVar10;
  }
LAB_0067a474:
  local_48 = (char *)FUN_012c6694(pcVar8,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
LAB_00679fc4:
  *param_1 = local_48;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}

