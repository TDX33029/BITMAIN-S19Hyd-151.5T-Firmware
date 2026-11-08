// FUN_00698acc @ 00698acc size=1704 calls_out=16 calls_in=1
// strings: graphqlstruct RawPoolReconnectBackoffConfig | grpch! | general_http | grpch! | graphqlstruct RawPoolReconnectBackoffConfig | general_http

void FUN_00698acc(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  char *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  
  FUN_00677900(&local_2c);
  if ((char)local_2c == '\x01') goto LAB_00698af4;
  if (local_2c._1_1_ == '\x01') {
    if (local_2c._2_1_ == '[') {
      cVar1 = param_2[0x2c];
      param_2[0x2c] = cVar1 + -1;
      if ((char)(cVar1 + -1) != '\0') {
        FUN_0157653c(param_2 + 0xc);
        uVar5 = 0;
        bVar2 = true;
        local_28 = (undefined1 *)CONCAT31(local_28._1_3_,1);
        local_2c = param_2;
        FUN_00679d5c(&local_38,&local_2c);
        if ((char)local_38 == '\x01') {
          puVar7 = local_34;
        }
        else {
          uVar5 = (uint)local_38 >> 8 & 0xff;
          FUN_00679d5c(&local_38,&local_2c);
          if ((char)local_38 != '\x01') {
            uVar8 = (uint)local_38 >> 8 & 0xff;
            FUN_00679d5c(&local_38,&local_2c);
            if ((char)local_38 != '\x01') {
              bVar13 = local_38._1_1_;
              FUN_00679d5c(&local_38,&local_2c);
              if ((char)local_38 != '\x01') {
                uVar9 = (uint)local_38 >> 8 & 0xff;
                FUN_00679d5c(&local_38,&local_2c);
                if ((char)local_38 != '\x01') {
                  uVar15 = (uint)local_38 >> 8 & 0xff;
                  FUN_00679d5c(&local_38,&local_2c);
                  if ((char)local_38 != '\x01') {
                    uVar14 = (uint)local_38 >> 8 & 0xff;
                    FUN_00679d5c(&local_38,&local_2c);
                    if ((char)local_38 != '\x01') {
                      if (uVar8 == 2) {
                        uVar8 = 1;
                      }
                      if (uVar5 == 2) {
                        uVar5 = 1;
                      }
                      if (bVar13 == 2) {
                        bVar13 = 1;
                      }
                      if (uVar15 == 2) {
                        uVar15 = 1;
                      }
                      if (uVar9 == 2) {
                        uVar9 = 1;
                      }
                      bVar2 = false;
                      uVar5 = uVar8 << 0x10 | uVar5 << 8 | (uint)bVar13 << 0x18;
                      if (uVar14 == 2) {
                        uVar14 = 1;
                      }
                      bVar13 = local_38._1_1_;
                      if (local_38._1_1_ == 2) {
                        bVar13 = 1;
                      }
                      puVar7 = (undefined1 *)
                               (uVar9 | uVar15 << 8 | uVar14 << 0x10 | (uint)bVar13 << 0x18);
                      goto LAB_00698eac;
                    }
                  }
                }
              }
            }
          }
          uVar5 = 0;
          bVar2 = true;
          puVar7 = local_34;
        }
LAB_00698eac:
        param_2[0x2c] = param_2[0x2c] + '\x01';
        puVar6 = (undefined1 *)FUN_006795cc(param_2);
LAB_00698f9c:
        if (bVar2) {
          if (puVar6 != (undefined1 *)0x0) {
            FUN_0067904c();
          }
          puVar6 = puVar7;
        }
        else if (puVar6 == (undefined1 *)0x0) {
          param_1[3] = (char)(uVar5 >> 0x18);
          *(short *)(param_1 + 1) = (short)(uVar5 >> 8);
          uVar4 = 0;
          goto LAB_00698fc0;
        }
        goto LAB_00698fdc;
      }
    }
    else {
      if (local_2c._2_1_ != '{') {
        puVar6 = (undefined1 *)FUN_00678df8(param_2,&local_38,&DAT_01c25880);
LAB_00698fdc:
        puVar7 = (undefined1 *)
                 FUN_012c6694(puVar6,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                             );
        uVar4 = 1;
LAB_00698fc0:
        *param_1 = uVar4;
        *(undefined1 **)(param_1 + 4) = puVar7;
        return;
      }
      cVar1 = param_2[0x2c];
      param_2[0x2c] = cVar1 + -1;
      if ((char)(cVar1 + -1) != '\0') {
        FUN_0157653c(param_2 + 0xc);
        local_3c = 1;
        uVar5 = 0;
        bVar2 = true;
        local_4c = 2;
        local_50 = 2;
        local_48 = 2;
        local_44 = 2;
        local_5c = 2;
        local_58 = 2;
        local_54 = 2;
        local_40 = param_2;
LAB_00698b7c:
        FUN_006796f4(&local_38,&local_40);
        pcVar3 = local_40;
        if ((char)local_38 == '\x01') goto LAB_00698ec4;
        if (local_38._1_1_ == '\x01') {
          pcVar12 = local_40 + 0xc;
          FUN_0157653c(pcVar12);
          pcVar3[8] = '\0';
          pcVar3[9] = '\0';
          pcVar3[10] = '\0';
          pcVar3[0xb] = '\0';
          FUN_0069e49c(&local_38,pcVar12,pcVar3);
          puVar7 = local_34;
          if (local_38 != (undefined4 *)0x2) {
            FUN_0127e60c(&local_2c,local_34,local_30);
            pcVar3 = local_40;
            if ((char)local_2c == '\x01') {
              puVar7 = local_28;
              goto LAB_00698f84;
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((uint)local_2c >> 8 & 0xff) {
            case 0:
              if (local_54 != 2) {
                local_2c = "cgminer";
LAB_00699110:
                local_28 = (undefined1 *)0x7;
LAB_00699170:
                local_34 = &LAB_018a13b8;
                local_38 = &local_2c;
                puVar7 = (undefined1 *)FUN_019676ac(&DAT_005ab34f,&local_38);
                goto LAB_00698f84;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_54 = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 1:
              if (local_58 != 2) {
                local_28 = (undefined1 *)0xc;
                local_2c = "general_http";
                goto LAB_00699170;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_58 = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 2:
              if (local_5c != 2) {
                local_2c = "graphqlstruct RawPoolReconnectBackoffConfig";
                goto LAB_00699110;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_5c = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 3:
              if (local_44 != 2) {
                local_2c = "grpch!";
LAB_0069916c:
                local_28 = (undefined1 *)0x4;
                goto LAB_00699170;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_44 = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 4:
              if (local_48 != 2) {
                local_28 = (undefined1 *)0x8;
                local_2c = "grpc_weba\x1e";
                goto LAB_00699170;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_48 = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 5:
              if (local_50 != 2) {
                local_2c = "luci\x15\x04";
                goto LAB_0069916c;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_50 = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 6:
              if (local_4c != 2) {
                local_2c = "rest)\x04";
                goto LAB_0069916c;
              }
              FUN_006799a8(&local_38,local_40);
              if ((char)local_38 == '\0') {
                local_4c = (uint)local_38 >> 8 & 0xff;
                goto LAB_00698b7c;
              }
              break;
            case 7:
              goto switchD_00698bfc_caseD_7;
            }
LAB_00698ec4:
            puVar7 = local_34;
          }
LAB_00698f84:
          uVar5 = 0;
          bVar2 = true;
          goto LAB_00698f88;
        }
        uVar5 = 0;
        if ((local_5c & 1) != 0) {
          uVar5 = 0x1000000;
        }
        if (local_5c == 2) {
          uVar5 = 0x1000000;
        }
        uVar8 = uVar5 | (local_58 & 1) << 0x10;
        if (local_58 == 2) {
          uVar8 = uVar5 | 0x10000;
        }
        uVar5 = uVar8 | (local_54 & 1) << 8;
        if (local_54 == 2) {
          uVar5 = uVar8 | 0x100;
        }
        bVar2 = false;
        uVar8 = 0;
        if ((local_4c & 1) != 0) {
          uVar8 = 0x1000000;
        }
        if (local_4c == 2) {
          uVar8 = 0x1000000;
        }
        uVar9 = uVar8 | (local_50 & 1) << 0x10;
        if (local_50 == 2) {
          uVar9 = uVar8 | 0x10000;
        }
        uVar8 = uVar9 | (local_48 & 1) << 8;
        if (local_48 == 2) {
          uVar8 = uVar9 | 0x100;
        }
        puVar7 = (undefined1 *)(uVar8 | (uint)(local_44 == 2) | local_44 & 1);
LAB_00698f88:
        param_2[0x2c] = param_2[0x2c] + '\x01';
        puVar6 = (undefined1 *)FUN_00679540(param_2);
        goto LAB_00698f9c;
      }
    }
    uVar10 = *(undefined4 *)(param_2 + 0x1c);
    uVar11 = *(undefined4 *)(param_2 + 0x20);
    local_38 = (undefined4 *)0x18;
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0x1c);
    uVar11 = *(undefined4 *)(param_2 + 0x20);
    local_38 = (undefined4 *)0x5;
  }
  local_28 = (undefined1 *)FUN_01966fbc(&local_38,uVar10,uVar11);
LAB_00698af4:
  *(undefined1 **)(param_1 + 4) = local_28;
  *param_1 = 1;
  return;
switchD_00698bfc_caseD_7:
  puVar7 = (undefined1 *)FUN_006794bc(local_40);
  if ((puVar7 != (undefined1 *)0x0) ||
     (puVar7 = (undefined1 *)FUN_00677d34(pcVar3), puVar7 != (undefined1 *)0x0)) goto LAB_00698f88;
  goto LAB_00698b7c;
}

