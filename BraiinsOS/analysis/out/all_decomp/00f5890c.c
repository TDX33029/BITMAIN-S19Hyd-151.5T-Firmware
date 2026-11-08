// FUN_00f5890c @ 00f5890c size=1352 calls_out=18 calls_in=1
// strings: events | level | level | level | events

void FUN_00f5890c(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ushort uVar10;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined *puVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  uint local_48;
  char *local_44;
  undefined1 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char **local_30;
  int local_2c;
  undefined1 uStack_25;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar11 < uVar4) {
    do {
      uVar13 = *(byte *)(*(int *)(param_2 + 0xc) + uVar11) - 9;
      if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar11) != 0x6e) goto LAB_00f58974;
        uVar12 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar12;
        uVar13 = uVar4;
        if (uVar4 < uVar12) {
          uVar13 = uVar12;
        }
        if (uVar12 < uVar4) {
          iVar6 = *(int *)(param_2 + 0xc);
          cVar1 = *(char *)(iVar6 + uVar12);
          uVar4 = uVar11 + 2;
          *(uint *)(param_2 + 0x14) = uVar4;
          if (cVar1 == 'u') {
            if (uVar4 == uVar13) goto LAB_00f58cec;
            cVar1 = *(char *)(iVar6 + uVar4);
            uVar4 = uVar11 + 3;
            *(uint *)(param_2 + 0x14) = uVar4;
            if (cVar1 == 'l') {
              if (uVar4 == uVar13) goto LAB_00f58cec;
              cVar1 = *(char *)(iVar6 + uVar4);
              *(uint *)(param_2 + 0x14) = uVar11 + 4;
              if (cVar1 == 'l') {
                param_1[1] = 2;
                *param_1 = 0;
                return;
              }
            }
          }
          local_34 = (char **)0x9;
        }
        else {
LAB_00f58cec:
          local_34 = (char **)0x5;
        }
        uVar5 = FUN_00f4c908(param_2,&local_34);
        goto LAB_00f58dcc;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
    } while (uVar4 != uVar11);
  }
  else {
LAB_00f58974:
    if (uVar11 < uVar4) {
      do {
        uVar13 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar11);
        if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar13 == 0x5b) {
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              uVar14 = 0;
              bVar2 = true;
              local_38 = CONCAT31(local_38._1_3_,1);
              local_3c = param_2;
              FUN_00f4df24(&local_34,&local_3c);
              if ((char)local_34 == '\x01') {
                ppcVar8 = local_30;
              }
              else {
                if (local_34._1_1_ == '\x01') {
                  FUN_00f543f4(&local_34,local_3c);
                  if ((char)local_34 != '\x01') {
                    ppcVar8 = (char **)((uint)local_34 >> 8 & 0xff);
                    FUN_00f4df24(&local_34,&local_3c);
                    if ((char)local_34 != '\x01') {
                      uVar14 = 0x100;
                      if (local_34._1_1_ == '\x01') {
                        FUN_00f58704(&local_34,local_3c);
                        if ((char)local_34 == '\x01') goto LAB_00f58c48;
                        uVar14 = (ushort)((((uint)local_34 >> 8 & 0xff) << 0x10) >> 8);
                      }
                      uVar14 = uVar14 | (ushort)ppcVar8;
                      bVar2 = false;
                      goto LAB_00f58c50;
                    }
                  }
LAB_00f58c48:
                  ppcVar8 = local_30;
                }
                else {
                  ppcVar8 = (char **)FUN_00f2c2f0(0,&DAT_0187f210,&DAT_018ab990);
                }
                uVar14 = 0;
                bVar2 = true;
              }
LAB_00f58c50:
              param_2[0x1c] = param_2[0x1c] + '\x01';
              ppcVar7 = (char **)FUN_00f4cc54(param_2);
              if (!bVar2) goto LAB_00f58d80;
              if (ppcVar7 != (char **)0x0) {
                FUN_005c3974();
                thunk_FUN_016d3fb4(ppcVar7);
              }
              goto LAB_00f58dc4;
            }
          }
          else {
            if (uVar13 != 0x7b) {
              ppcVar8 = (char **)FUN_00f4db6c(param_2,&uStack_25,&DAT_0187f308);
              goto LAB_00f58dc4;
            }
            cVar1 = param_2[0x1c];
            param_2[0x1c] = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              *(uint *)(param_2 + 0x14) = uVar11 + 1;
              local_40 = 1;
              local_48 = 2;
              ppcVar8 = &local_44;
              uVar4 = 2;
              local_44 = param_2;
              goto LAB_00f58a44;
            }
          }
          local_34 = (char **)0x18;
          goto LAB_00f589b0;
        }
        uVar11 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar11;
      } while (uVar4 != uVar11);
    }
  }
  local_34 = (char **)0x5;
LAB_00f589b0:
  uVar5 = FUN_01143ab8(param_2,&local_34);
  goto LAB_00f58dcc;
  while (ppcVar7 = (char **)FUN_00f4e360(pcVar3), ppcVar7 == (char **)0x0) {
LAB_00f58a44:
    FUN_00f4d74c(&local_34,ppcVar8);
    pcVar3 = local_44;
    if ((char)local_34 == '\x01') {
LAB_00f58c7c:
      ppcVar7 = local_30;
      break;
    }
    if (local_34._1_1_ != '\x01') {
      if (uVar4 != 2) {
        uVar10 = (ushort)uVar4 | 0x100;
        uVar14 = uVar10;
        if ((local_48 & 1) == 0) {
          uVar14 = (ushort)uVar4;
        }
        if (local_48 == 2) {
          uVar14 = uVar10;
        }
        bVar2 = false;
        goto LAB_00f58d64;
      }
      puVar9 = &DAT_0057a25d;
LAB_00f58d34:
      local_38 = 5;
      local_3c = "level";
LAB_00f58d48:
      local_30 = (char **)&DAT_0157d360;
      local_34 = &local_3c;
      ppcVar7 = (char **)FUN_00f56780(puVar9,&local_34);
      break;
    }
    iVar6 = *(int *)(local_44 + 0x14);
    local_44[8] = '\0';
    local_44[9] = '\0';
    local_44[10] = '\0';
    local_44[0xb] = '\0';
    *(int *)(local_44 + 0x14) = iVar6 + 1;
    FUN_0157e5fc(&local_34,local_44 + 0xc,local_44);
    ppcVar7 = local_30;
    if (local_34 == (char **)&SUB_00000002) break;
    if (local_2c == 6) {
      iVar6 = thunk_FUN_016dd50a(local_30,"events",6);
      if (iVar6 == 0) {
        if (local_48 != 2) {
          local_38 = 6;
          puVar9 = &DAT_00582dbd;
          local_3c = "events";
          goto LAB_00f58d48;
        }
        ppcVar7 = (char **)FUN_00f4d8b4(pcVar3);
        if (ppcVar7 != (char **)0x0) break;
        FUN_00f58704(&local_34,pcVar3);
        if ((char)local_34 == '\x01') goto LAB_00f58c7c;
        local_48 = (uint)local_34 >> 8 & 0xff;
        goto LAB_00f58a44;
      }
    }
    else if ((local_2c == 5) && (iVar6 = thunk_FUN_016dd50a(local_30,"level",5), iVar6 == 0)) {
      if (uVar4 != 2) {
        puVar9 = &DAT_00582dbd;
        goto LAB_00f58d34;
      }
      ppcVar7 = (char **)FUN_00f4d8b4(pcVar3);
      if (ppcVar7 != (char **)0x0) break;
      FUN_00f543f4(&local_34,pcVar3);
      if ((char)local_34 == '\x01') goto LAB_00f58c7c;
      uVar4 = (uint)local_34 >> 8 & 0xff;
      goto LAB_00f58a44;
    }
  }
  uVar14 = 0;
  bVar2 = true;
  ppcVar8 = ppcVar7;
LAB_00f58d64:
  param_2[0x1c] = param_2[0x1c] + '\x01';
  ppcVar7 = (char **)FUN_00f4cfec(param_2);
  if (bVar2) {
    if (ppcVar7 != (char **)0x0) {
      FUN_005c3974();
      thunk_FUN_016d3fb4(ppcVar7);
    }
  }
  else {
LAB_00f58d80:
    ppcVar8 = ppcVar7;
    if (ppcVar8 == (char **)0x0) {
      param_1[1] = (byte)uVar14 & 1;
      param_1[2] = (char)(uVar14 >> 8);
      *param_1 = 0;
      return;
    }
  }
LAB_00f58dc4:
  uVar5 = FUN_011257e4(ppcVar8,param_2);
LAB_00f58dcc:
  *(undefined4 *)(param_1 + 4) = uVar5;
  *param_1 = 1;
  return;
}

