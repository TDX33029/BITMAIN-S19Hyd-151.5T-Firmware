// FUN_00f58ecc @ 00f58ecc size=2084 calls_out=20 calls_in=0
// strings: devfee_health | tuner | devfee_health | tuner | devfee_health | tuner

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00f59230 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f58ecc(undefined4 *param_1,char *param_2)

{
  char **ppcVar1;
  undefined4 uVar2;
  char **ppcVar3;
  int iVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  char cVar11;
  char **unaff_r9;
  char **local_94;
  char **local_88;
  char **local_84;
  char **local_80;
  undefined4 local_78;
  char **local_74;
  undefined1 local_70;
  undefined1 local_69;
  undefined3 uStack_68;
  char *local_64;
  undefined3 uStack_60;
  char *local_5c;
  undefined1 local_58;
  undefined2 uStack_57;
  char *local_54;
  undefined4 local_4c;
  char **local_48;
  undefined4 local_44;
  char local_40;
  char *local_3f;
  undefined3 uStack_3b;
  char *local_38 [2];
  char *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  ppcVar1 = *(char ***)(param_2 + 0x10);
  ppcVar7 = *(char ***)(param_2 + 0x14);
  if (ppcVar7 < ppcVar1) {
    do {
      uVar10 = *(byte *)(*(int *)(param_2 + 0xc) + (int)ppcVar7) - 9;
      if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + (int)ppcVar7) != 0x6e) goto LAB_00f58f34;
        ppcVar3 = (char **)((int)ppcVar7 + 1);
        *(char ***)(param_2 + 0x14) = ppcVar3;
        ppcVar5 = ppcVar1;
        if (ppcVar1 < ppcVar3) {
          ppcVar5 = ppcVar3;
        }
        if (ppcVar3 < ppcVar1) {
          iVar4 = *(int *)(param_2 + 0xc);
          cVar11 = *(char *)(iVar4 + (int)ppcVar3);
          ppcVar1 = (char **)((int)ppcVar7 + 2);
          *(char ***)(param_2 + 0x14) = ppcVar1;
          if ((cVar11 == 'u') && (ppcVar1 != ppcVar5)) {
            cVar11 = *(char *)(iVar4 + (int)ppcVar1);
            ppcVar1 = (char **)((int)ppcVar7 + 3);
            *(char ***)(param_2 + 0x14) = ppcVar1;
            if ((cVar11 == 'l') &&
               ((ppcVar1 != ppcVar5 &&
                (cVar11 = *(char *)(iVar4 + (int)ppcVar1), *(char ***)(param_2 + 0x14) = ppcVar7 + 1
                , cVar11 == 'l')))) {
              *param_1 = 2;
              return;
            }
          }
        }
        uVar2 = FUN_00f4c908(param_2,&local_4c);
        goto LAB_00f595bc;
      }
      ppcVar7 = (char **)((int)ppcVar7 + 1);
      *(char ***)(param_2 + 0x14) = ppcVar7;
    } while (ppcVar1 != ppcVar7);
  }
  else {
LAB_00f58f34:
    if (ppcVar7 < ppcVar1) {
      do {
        uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + (int)ppcVar7);
        if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar10 == 0x5b) {
            cVar11 = param_2[0x1c];
            param_2[0x1c] = cVar11 + -1;
            if ((char)(cVar11 + -1) != '\0') {
              *(undefined1 **)(param_2 + 0x14) = (undefined1 *)((int)ppcVar7 + 1);
              local_2c = CONCAT31(local_2c._1_3_,1);
              local_30 = param_2;
              FUN_00f4df24(&local_4c,&local_30);
              ppcVar1 = (char **)&DAT_0000005b;
              ppcVar5 = unaff_r9;
              if ((char)local_4c == '\x01') goto LAB_00f592dc;
              if (local_4c._1_1_ == '\x01') {
                FUN_00f5890c(&local_4c,local_30);
                if ((char)local_4c == '\x01') {
LAB_00f592dc:
                  unaff_r9 = ppcVar5;
                  local_94 = local_48;
LAB_00f592e0:
                  ppcVar5 = unaff_r9;
LAB_00f592e4:
                  goto LAB_00f592e8;
                }
                local_70 = (undefined1)((uint)local_4c >> 0x10);
                cVar11 = local_4c._1_1_;
                FUN_00f4df24(&local_4c,&local_30);
                if ((char)local_4c == '\x01') goto LAB_00f592dc;
                if (local_4c._1_1_ != '\x01') {
                  uVar2 = 1;
LAB_00f59614:
                  local_94 = (char **)FUN_00f2c2f0(uVar2,&DAT_0187f218,&DAT_018ab990);
                  goto LAB_00f592e0;
                }
                FUN_00f5ae78(&local_4c,local_30);
                ppcVar5 = local_48;
                ppcVar7 = local_4c;
                local_94 = local_4c;
                if (local_40 == '\x03') goto LAB_00f592e0;
                local_78 = local_44;
                local_5c = local_3f;
                local_58 = (undefined1)uStack_3b;
                uStack_57 = (undefined2)((uint3)uStack_3b >> 8);
                FUN_00f4df24(&local_4c,&local_30);
                if ((char)local_4c == '\x01') goto LAB_00f592dc;
                if (local_4c._1_1_ != '\x01') {
                  local_94 = (char **)FUN_00f2c2f0(2,&DAT_0187f218,&DAT_018ab990);
                  goto LAB_00f592e4;
                }
                FUN_00f59d24(&local_4c,local_30);
                local_94 = local_48;
                ppcVar3 = local_4c;
                if (local_4c == (char **)&SUB_00000002) goto LAB_00f592dc;
                FUN_00f4df24(&local_4c,&local_30);
                ppcVar1 = local_94;
                if ((char)local_4c == '\x01') goto LAB_00f592dc;
                if (local_4c._1_1_ != '\x01') {
                  uVar2 = 3;
                  unaff_r9 = ppcVar5;
                  goto LAB_00f59614;
                }
                FUN_00f597d4(&local_4c,local_30);
                ppcVar1 = local_4c;
                if (local_4c == (char **)&SUB_00000002) goto LAB_00f592dc;
                uStack_60 = CONCAT21(uStack_57,local_58);
                local_80 = ppcVar7;
                local_74 = local_48;
                cVar9 = local_40;
              }
              else {
                local_94 = (char **)FUN_00f2c2f0(0,&DAT_0187f218,&DAT_018ab990);
LAB_00f592e8:
                cVar11 = '\0';
                ppcVar3 = (char **)&SUB_00000002;
                cVar9 = '\0';
              }
              param_2[0x1c] = param_2[0x1c] + '\x01';
              ppcVar6 = (char **)FUN_00f4cc54(param_2);
              if (ppcVar3 == (char **)&SUB_00000002) {
                if (ppcVar6 == (char **)0x0) goto LAB_00f595b0;
                FUN_005c3974();
                goto LAB_00f595a8;
              }
              if (ppcVar6 != (char **)0x0) goto LAB_00f595b4;
              ppcVar6 = &local_64;
              goto LAB_00f5943c;
            }
          }
          else {
            if (uVar10 != 0x7b) {
              ppcVar6 = (char **)FUN_00f4db6c(param_2,&uStack_25,&DAT_0187f2e8);
              goto LAB_00f595b4;
            }
            cVar11 = param_2[0x1c];
            param_2[0x1c] = cVar11 + -1;
            if ((char)(cVar11 + -1) != '\0') {
              *(undefined1 **)(param_2 + 0x14) = (undefined1 *)((int)ppcVar7 + 1);
              local_58 = 1;
              local_84 = (char **)&SUB_00000002;
              ppcVar1 = &local_5c;
              uVar10 = 2;
              cVar11 = '\x03';
              local_88 = (char **)&SUB_00000002;
              ppcVar5 = (char **)&LAB_00800012_1;
              local_5c = param_2;
              cVar9 = '\x03';
LAB_00f58ff0:
LAB_00f58ff4:
LAB_00f58ff8:
              local_70 = (undefined1)uVar10;
              do {
                FUN_00f4d74c(&local_4c,ppcVar1);
                pcVar8 = local_5c;
                if ((char)local_4c == '\x01') goto LAB_00f593b4;
                if (local_4c._1_1_ != '\x01') {
                  if (cVar11 == '\x03') {
                    cVar11 = '\x02';
                  }
                  if (cVar9 == '\x03') {
                    cVar9 = '\x02';
                  }
                  else {
                    local_38[0] = local_54;
                  }
                  ppcVar1 = (char **)0x0;
                  if (local_84 != (char **)&SUB_00000002) {
                    ppcVar1 = local_84;
                  }
                  ppcVar3 = (char **)0x0;
                  if (local_88 != (char **)&SUB_00000002) {
                    ppcVar3 = local_88;
                  }
                  goto LAB_00f5940c;
                }
                iVar4 = *(int *)(local_5c + 0x14);
                local_5c[8] = '\0';
                local_5c[9] = '\0';
                local_5c[10] = '\0';
                local_5c[0xb] = '\0';
                *(int *)(local_5c + 0x14) = iVar4 + 1;
                FUN_0157e5fc(&local_4c,local_5c + 0xc,local_5c);
                ppcVar3 = local_48;
                if (local_4c == (char **)&SUB_00000002) goto LAB_00f593a4;
                switch(local_44) {
                case 5:
                  iVar4 = thunk_FUN_016dd50a(local_48,"tuner",5);
                  if (iVar4 != 0) break;
                  if (cVar11 != '\x03') {
                    local_2c = 5;
                    local_30 = "tuner";
                    goto LAB_00f59708;
                  }
                  ppcVar3 = (char **)FUN_00f4d8b4(pcVar8);
                  if (ppcVar3 != (char **)0x0) goto LAB_00f595f8;
                  FUN_00f5890c(&local_4c,pcVar8);
                  if ((char)local_4c == '\x01') goto LAB_00f593b4;
                  uVar10 = (uint)local_4c >> 0x10 & 0xff;
                  cVar11 = local_4c._1_1_;
                  goto LAB_00f58ff8;
                case 9:
                  iVar4 = thunk_FUN_016dd50a(local_48,&DAT_0035c49a,9);
                  if (iVar4 == 0) {
                    if (cVar9 != '\x03') {
                      local_2c = 9;
                      local_30 = &DAT_0035c49a;
                      goto LAB_00f59708;
                    }
                    ppcVar3 = (char **)FUN_00f4d8b4(pcVar8);
                    if ((ppcVar3 != (char **)0x0) ||
                       (FUN_00f5ae78(&local_4c,pcVar8), ppcVar3 = local_4c, local_40 == '\x03'))
                    goto LAB_00f595f8;
                    local_80 = local_4c;
                    local_78 = local_44;
                    local_54 = local_3f;
                    ppcVar5 = local_48;
                    cVar9 = local_40;
                    goto LAB_00f58ff0;
                  }
                  break;
                case 0xd:
                  iVar4 = thunk_FUN_016dd50a(local_48,"devfee_health",0xd);
                  if (iVar4 == 0) goto LAB_00f59164;
                  break;
                case 0x12:
                  iVar4 = thunk_FUN_016dd50a(local_48,&DAT_0035c4b6,0x12);
                  if (iVar4 == 0) {
                    if (local_84 != (char **)&SUB_00000002) {
                      local_2c = 0x12;
                      local_30 = &DAT_0035c4b6;
                      goto LAB_00f59708;
                    }
                    ppcVar3 = (char **)FUN_00f4d8b4(pcVar8);
                    if (ppcVar3 != (char **)0x0) goto LAB_00f595f8;
                    FUN_00f597d4(&local_4c,pcVar8);
                    if (local_4c == (char **)&SUB_00000002) goto LAB_00f593b4;
                    local_84 = local_4c;
                    ppcVar7 = local_48;
                    goto LAB_00f58ff4;
                  }
                }
                ppcVar3 = (char **)FUN_00f4e360(pcVar8);
                if (ppcVar3 != (char **)0x0) {
LAB_00f593a4:
                  local_94 = ppcVar3;
                  goto LAB_00f593c0;
                }
              } while( true );
            }
          }
          local_4c = (char **)0x18;
          goto LAB_00f58f70;
        }
        ppcVar7 = (char **)((int)ppcVar7 + 1);
        *(char ***)(param_2 + 0x14) = ppcVar7;
      } while (ppcVar1 != ppcVar7);
    }
  }
  local_4c = (char **)0x5;
LAB_00f58f70:
  uVar2 = FUN_01143ab8(param_2,&local_4c);
  goto LAB_00f595bc;
LAB_00f595f8:
  local_94 = ppcVar3;
  goto LAB_00f593c0;
LAB_00f593b4:
  local_94 = local_48;
  goto LAB_00f593c0;
LAB_00f59164:
  if (local_88 == (char **)&SUB_00000002) {
    ppcVar3 = (char **)FUN_00f4d8b4(pcVar8);
    if (ppcVar3 != (char **)0x0) goto LAB_00f595f8;
    FUN_00f59d24(&local_4c,pcVar8);
    if (local_4c == (char **)&SUB_00000002) goto LAB_00f593b4;
    local_88 = local_4c;
    local_94 = local_48;
    goto LAB_00f58ff8;
  }
  local_2c = 0xd;
  local_30 = "devfee_health";
LAB_00f59708:
  local_48 = (char **)&DAT_0157d360;
  local_4c = &local_30;
  local_94 = (char **)FUN_00f56780(&DAT_00582dbd,&local_4c);
LAB_00f593c0:
  cVar9 = '\0';
  cVar11 = '\0';
  ppcVar3 = (char **)&SUB_00000002;
LAB_00f5940c:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  ppcVar6 = (char **)FUN_00f4cfec(param_2);
  if (ppcVar3 == (char **)&SUB_00000002) {
    if (ppcVar6 != (char **)0x0) {
      FUN_005c3974();
LAB_00f595a8:
      thunk_FUN_016d3fb4(ppcVar6);
    }
LAB_00f595b0:
    ppcVar6 = local_94;
  }
  else if (ppcVar6 == (char **)0x0) {
    ppcVar6 = local_38;
    local_74 = ppcVar7;
LAB_00f5943c:
    pcVar8 = *ppcVar6;
    uStack_68 = (undefined3)((uint)*(undefined4 *)((int)ppcVar6 + 3) >> 8);
    param_1[3] = local_74;
    *(char **)((int)param_1 + 0x1d) = pcVar8;
    local_69 = (undefined1)((uint)pcVar8 >> 0x18);
    *(char *)(param_1 + 7) = cVar9;
    *param_1 = ppcVar3;
    param_1[1] = local_94;
    param_1[2] = ppcVar1;
    param_1[4] = local_80;
    param_1[5] = ppcVar5;
    param_1[6] = local_78;
    param_1[8] = CONCAT31(uStack_68,local_69);
    *(undefined1 *)((int)param_1 + 0x25) = local_70;
    *(char *)(param_1 + 9) = cVar11;
    return;
  }
LAB_00f595b4:
  uVar2 = FUN_011257e4(ppcVar6,param_2);
LAB_00f595bc:
  *param_1 = 3;
  param_1[1] = uVar2;
  return;
}

