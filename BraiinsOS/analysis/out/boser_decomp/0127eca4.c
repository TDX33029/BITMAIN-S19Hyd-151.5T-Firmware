// FUN_0127eca4 @ 0127eca4 size=1664 calls_out=14 calls_in=1
// strings: general_http | cgminer | graphqlstruct RawPoolReconnectBackoffConfig | graphqlstruct RawPoolReconnectBackoffConfig | general_http | cgminer

void FUN_0127eca4(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_4c;
  uint local_48;
  char *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined1 *local_28;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar8 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
      if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar10 == 0x5b) {
          cVar1 = param_2[0x1c];
          param_2[0x1c] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar8 + 1;
            uVar8 = 0;
            bVar2 = true;
            local_28 = (undefined1 *)CONCAT31(local_28._1_3_,1);
            local_2c = param_2;
            FUN_01278b9c(&local_38,&local_2c);
            if ((char)local_38 == '\x01') {
              puVar5 = local_34;
            }
            else {
              uVar8 = (uint)local_38 >> 8 & 0xff;
              FUN_01278b9c(&local_38,&local_2c);
              if ((char)local_38 != '\x01') {
                uVar10 = (uint)local_38 >> 8 & 0xff;
                FUN_01278b9c(&local_38,&local_2c);
                if ((char)local_38 != '\x01') {
                  bVar11 = local_38._1_1_;
                  FUN_01278b9c(&local_38,&local_2c);
                  if ((char)local_38 != '\x01') {
                    uVar12 = (uint)local_38 >> 8 & 0xff;
                    FUN_01278b9c(&local_38,&local_2c);
                    if ((char)local_38 != '\x01') {
                      uVar13 = (uint)local_38 >> 8 & 0xff;
                      FUN_01278b9c(&local_38,&local_2c);
                      if ((char)local_38 != '\x01') {
                        uVar14 = (uint)local_38 >> 8 & 0xff;
                        FUN_01278b9c(&local_38,&local_2c);
                        if ((char)local_38 != '\x01') {
                          if (uVar10 == 2) {
                            uVar10 = 1;
                          }
                          if (uVar8 == 2) {
                            uVar8 = 1;
                          }
                          if (bVar11 == 2) {
                            bVar11 = 1;
                          }
                          if (uVar13 == 2) {
                            uVar13 = 1;
                          }
                          if (uVar12 == 2) {
                            uVar12 = 1;
                          }
                          bVar2 = false;
                          uVar8 = uVar10 << 0x10 | uVar8 << 8 | (uint)bVar11 << 0x18;
                          if (uVar14 == 2) {
                            uVar14 = 1;
                          }
                          bVar11 = local_38._1_1_;
                          if (local_38._1_1_ == 2) {
                            bVar11 = 1;
                          }
                          puVar5 = (undefined1 *)
                                   (uVar12 | uVar13 << 8 | uVar14 << 0x10 | (uint)bVar11 << 0x18);
                          goto LAB_0127f098;
                        }
                      }
                    }
                  }
                }
              }
              uVar8 = 0;
              bVar2 = true;
              puVar5 = local_34;
            }
LAB_0127f098:
            param_2[0x1c] = param_2[0x1c] + '\x01';
            puVar7 = (undefined1 *)FUN_014d9568(param_2);
            goto LAB_0127f178;
          }
        }
        else {
          if (uVar10 != 0x7b) {
            puVar7 = (undefined1 *)FUN_012c7788(param_2,&local_38,&DAT_01c25880);
            goto LAB_0127f1b8;
          }
          cVar1 = param_2[0x1c];
          param_2[0x1c] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar8 + 1;
            local_3c = 1;
            uVar10 = 2;
            uVar12 = 2;
            uVar13 = 2;
            uVar14 = 2;
            uVar15 = 2;
            local_4c = 2;
            local_48 = 2;
            local_40 = param_2;
            goto LAB_0127ed6c;
          }
        }
        local_38 = (char **)0x18;
        goto LAB_0127ecfc;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
    } while (*(uint *)(param_2 + 0x10) != uVar8);
  }
  local_38 = (char **)0x5;
LAB_0127ecfc:
  puVar5 = (undefined1 *)FUN_012c6b30(param_2,&local_38);
LAB_0127f1c0:
  uVar4 = 1;
LAB_0127f19c:
  *param_1 = uVar4;
  *(undefined1 **)(param_1 + 4) = puVar5;
  return;
LAB_0127ed6c:
  FUN_01278730(&local_38,&local_40);
  if ((char)local_38 == '\x01') goto LAB_0127f0b0;
  if (local_38._1_1_ != '\x01') {
    uVar8 = 0;
    if ((local_4c & 1) != 0) {
      uVar8 = 0x1000000;
    }
    if (local_4c == 2) {
      uVar8 = 0x1000000;
    }
    uVar9 = uVar8 | (local_48 & 1) << 0x10;
    if (local_48 == 2) {
      uVar9 = uVar8 | 0x10000;
    }
    uVar8 = uVar9 | (uVar10 & 1) << 8;
    if (uVar10 == 2) {
      uVar8 = uVar9 | 0x100;
    }
    bVar2 = false;
    uVar10 = 0;
    if ((uVar12 & 1) != 0) {
      uVar10 = 0x1000000;
    }
    if (uVar12 == 2) {
      uVar10 = 0x1000000;
    }
    uVar12 = uVar10 | (uVar13 & 1) << 0x10;
    if (uVar13 == 2) {
      uVar12 = uVar10 | 0x10000;
    }
    uVar10 = uVar12 | (uVar14 & 1) << 8;
    if (uVar14 == 2) {
      uVar10 = uVar12 | 0x100;
    }
    puVar5 = (undefined1 *)(uVar10 | (uint)(uVar15 == 2) | uVar15 & 1);
    goto LAB_0127f164;
  }
  iVar6 = *(int *)(local_40 + 0x14);
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  *(int *)(local_40 + 0x14) = iVar6 + 1;
  FUN_01968828(&local_38,local_40 + 0xc);
  puVar5 = local_34;
  if (local_38 == (char **)0x2) goto LAB_0127f160;
  FUN_0127e60c(&local_2c,local_34,local_30);
  pcVar3 = local_40;
  if ((char)local_2c == '\x01') {
    puVar5 = local_28;
    goto LAB_0127f160;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uint)local_2c >> 8 & 0xff) {
  case 0:
    if (uVar10 == 2) {
      FUN_01278b38(&local_38,local_40);
      if ((char)local_38 == '\0') {
        uVar10 = (uint)local_38 >> 8 & 0xff;
        goto LAB_0127ed6c;
      }
      break;
    }
    local_2c = "cgminer";
LAB_0127f320:
    local_28 = (undefined1 *)0x7;
LAB_0127f324:
    local_34 = &LAB_018a13b8;
    local_38 = &local_2c;
    puVar5 = (undefined1 *)FUN_019676ac(&DAT_005ab34f,&local_38);
LAB_0127f160:
    uVar8 = 0;
    bVar2 = true;
LAB_0127f164:
    param_2[0x1c] = param_2[0x1c] + '\x01';
    puVar7 = (undefined1 *)FUN_012c7b64(param_2);
LAB_0127f178:
    if (bVar2) {
      if (puVar7 != (undefined1 *)0x0) {
        FUN_01278260();
      }
      puVar7 = puVar5;
    }
    else if (puVar7 == (undefined1 *)0x0) {
      param_1[3] = (char)(uVar8 >> 0x18);
      *(short *)(param_1 + 1) = (short)(uVar8 >> 8);
      uVar4 = 0;
      goto LAB_0127f19c;
    }
LAB_0127f1b8:
    puVar5 = (undefined1 *)FUN_0127dee8(puVar7,param_2);
    goto LAB_0127f1c0;
  case 1:
    if (local_48 != 2) {
      local_28 = (undefined1 *)0xc;
      local_2c = "general_http";
      goto LAB_0127f324;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      local_48 = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 2:
    if (local_4c != 2) {
      local_2c = "graphqlstruct RawPoolReconnectBackoffConfig";
      goto LAB_0127f320;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      local_4c = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 3:
    if (uVar15 != 2) {
      local_2c = "grpch!";
LAB_0127f2e0:
      local_28 = (undefined1 *)0x4;
      goto LAB_0127f324;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      uVar15 = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 4:
    if (uVar14 != 2) {
      local_28 = (undefined1 *)0x8;
      local_2c = "grpc_weba\x1e";
      goto LAB_0127f324;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      uVar14 = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 5:
    if (uVar13 != 2) {
      local_2c = "luci\x15\x04";
      goto LAB_0127f2e0;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      uVar13 = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 6:
    if (uVar12 != 2) {
      local_2c = "rest)\x04";
      goto LAB_0127f2e0;
    }
    FUN_01278b38(&local_38,local_40);
    if ((char)local_38 == '\0') {
      uVar12 = (uint)local_38 >> 8 & 0xff;
      goto LAB_0127ed6c;
    }
    break;
  case 7:
    goto switchD_0127edec_caseD_7;
  }
LAB_0127f0b0:
  puVar5 = local_34;
  goto LAB_0127f160;
switchD_0127edec_caseD_7:
  puVar5 = (undefined1 *)FUN_0167459c(local_40);
  if ((puVar5 != (undefined1 *)0x0) ||
     (puVar5 = (undefined1 *)FUN_012c6c4c(pcVar3), puVar5 != (undefined1 *)0x0)) goto LAB_0127f160;
  goto LAB_0127ed6c;
}

