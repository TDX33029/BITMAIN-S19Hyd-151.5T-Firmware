// FUN_014e99a0 @ 014e99a0 size=1264 calls_out=10 calls_in=0
// strings: 

void FUN_014e99a0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined **local_88 [4];
  int local_78;
  int local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined **local_48;
  char *local_44;
  byte *local_40;
  uint local_3c;
  undefined **local_38;
  
  local_6c = 1;
  local_88[0] = (undefined **)0x80000015;
  puVar7 = (undefined4 *)((uint)local_88 | 4);
  iVar15 = param_2 + param_3 * 0x20;
  puVar14 = (undefined4 *)((uint)&local_48 | 4);
  local_70 = &DAT_01cfa2ec;
  local_68 = (undefined *)0x2;
  local_78 = param_2;
  local_74 = iVar15;
LAB_014e9a1c:
  puVar4 = local_68;
  iVar12 = local_78;
  do {
    iVar11 = iVar12;
    iVar12 = param_2;
    if (param_2 == iVar15) {
LAB_014e9db4:
      puVar10 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x2) {
        puVar10 = puVar4;
      }
      *param_1 = puVar10;
      param_1[1] = local_ac;
      param_1[2] = local_b0;
      param_1[3] = local_b4;
      local_78 = iVar11;
      if (local_88[0] == (undefined **)0x80000015) {
        return;
      }
      goto LAB_014e9de8;
    }
    while( true ) {
      FUN_01962c44(&local_48,iVar12,&DAT_01cfa2ec,1);
      pbVar6 = local_40;
      pcVar5 = local_44;
      iVar12 = iVar12 + 0x20;
      if (local_48 != (undefined **)0x80000015) break;
      if (iVar12 == iVar15) {
        iVar11 = iVar15;
        goto LAB_014e9db4;
      }
    }
    local_88[0] = local_38;
    uVar9 = 0x15;
    if ((int)local_48 < 0) {
      uVar9 = (uint)local_48 ^ 0x80000000;
    }
    switch(uVar9) {
    case 1:
      uVar9 = (uint)local_44 & 0xff;
      goto LAB_014e9c98;
    default:
      uVar8 = FUN_014c8278(&local_48,&local_58,&DAT_01cf9e34);
      local_78 = iVar12;
      goto LAB_014e9e14;
    case 4:
      uVar9 = (uint)local_40 | local_3c;
LAB_014e9c98:
      bVar16 = false;
      if (uVar9 != 0) {
        bVar16 = true;
      }
      break;
    case 0xc:
      bVar16 = true;
      if (local_3c == 0x10) {
        iVar11 = thunk_FUN_01bed842(local_40,&DAT_00568498,0x10);
LAB_014e9cdc:
        bVar16 = false;
        if (iVar11 != 0) {
          bVar16 = true;
        }
      }
      goto LAB_014e9ce0;
    case 0xd:
      bVar16 = true;
      if (local_40 == &DAT_00000010) {
        iVar11 = thunk_FUN_01bed842(local_44,&DAT_00568498,0x10);
LAB_014e9b20:
        bVar16 = iVar11 != 0;
      }
      break;
    case 0xe:
      bVar16 = true;
      uVar9 = local_3c;
      if (local_3c == 0x10) {
        uVar9 = (uint)*local_40;
      }
      if (local_3c == 0x10 && uVar9 == 0x73) {
        bVar2 = local_40[1];
        bVar17 = bVar2 == 0x75;
        if (bVar17) {
          bVar2 = local_40[2];
        }
        if (bVar17 && bVar2 == 0x70) {
          bVar2 = local_40[3];
          bVar17 = bVar2 == 0x70;
          if (bVar17) {
            bVar2 = local_40[4];
          }
          if (bVar17 && bVar2 == 0x6f) {
            bVar2 = local_40[5];
            bVar17 = bVar2 == 0x72;
            if (bVar17) {
              bVar2 = local_40[6];
            }
            if (bVar17 && bVar2 == 0x74) {
              bVar2 = local_40[7];
              bVar17 = bVar2 == 0x65;
              if (bVar17) {
                bVar2 = local_40[8];
              }
              if (bVar17 && bVar2 == 100) {
                bVar2 = local_40[9];
                bVar17 = bVar2 == 0x5f;
                if (bVar17) {
                  bVar2 = local_40[10];
                }
                if (bVar17 && bVar2 == 0x6d) {
                  bVar2 = local_40[0xb];
                  bVar17 = bVar2 == 0x6f;
                  if (bVar17) {
                    bVar2 = local_40[0xc];
                  }
                  if (bVar17 && bVar2 == 100) {
                    bVar2 = local_40[0xd];
                    bVar17 = bVar2 == 0x65;
                    if (bVar17) {
                      bVar2 = local_40[0xe];
                    }
                    if (bVar17 && bVar2 == 0x6c) {
                      iVar11 = local_40[0xf] - 0x73;
                      goto LAB_014e9cdc;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_014e9ce0:
      FUN_019bb7e0(pcVar5,pbVar6);
      goto LAB_014e9cf8;
    case 0xf:
      bVar16 = true;
      if ((local_40 == &DAT_00000010) && (*local_44 == 's')) {
        cVar1 = local_44[1];
        bVar17 = cVar1 == 'u';
        if (bVar17) {
          cVar1 = local_44[2];
        }
        if (bVar17 && cVar1 == 'p') {
          cVar1 = local_44[3];
          bVar17 = cVar1 == 'p';
          if (bVar17) {
            cVar1 = local_44[4];
          }
          if (bVar17 && cVar1 == 'o') {
            cVar1 = local_44[5];
            bVar17 = cVar1 == 'r';
            if (bVar17) {
              cVar1 = local_44[6];
            }
            if (bVar17 && cVar1 == 't') {
              cVar1 = local_44[7];
              bVar17 = cVar1 == 'e';
              if (bVar17) {
                cVar1 = local_44[8];
              }
              if (bVar17 && cVar1 == 'd') {
                cVar1 = local_44[9];
                bVar17 = cVar1 == '_';
                if (bVar17) {
                  cVar1 = local_44[10];
                }
                if (bVar17 && cVar1 == 'm') {
                  cVar1 = local_44[0xb];
                  bVar17 = cVar1 == 'o';
                  if (bVar17) {
                    cVar1 = local_44[0xc];
                  }
                  if (((!(!bVar17 || cVar1 != 'd')) && (local_44[0xd] == 'e')) &&
                     (local_44[0xe] == 'l')) {
                    iVar11 = (byte)local_44[0xf] - 0x73;
                    goto LAB_014e9b20;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_014c81b0(&local_48);
LAB_014e9cf8:
    ppuVar3 = local_88[0];
    param_2 = iVar12;
    if (!bVar16) break;
    local_88[0] = (undefined **)0x80000015;
    if (ppuVar3 == (undefined **)0x80000015) {
      local_78 = iVar12;
      uVar8 = FUN_019678c0(&DAT_0056ad38,0x10);
      goto LAB_014e9e14;
    }
    uVar8 = puVar7[1];
    uVar13 = puVar7[2];
    *puVar14 = *puVar7;
    puVar14[1] = uVar8;
    puVar14[2] = uVar13;
    local_48 = ppuVar3;
    FUN_014c81b0(&local_48);
  } while( true );
  if (puVar4 != (undefined *)0x2) {
    local_54 = 0x10;
    local_44 = (char *)&DAT_0132b6a0;
    local_48 = &local_58;
    local_58 = &DAT_00568498;
    local_78 = iVar12;
    uVar8 = FUN_019676ac(&DAT_005ab34f,&local_48);
LAB_014e9e14:
    *param_1 = 2;
    param_1[1] = uVar8;
    if (((uint)puVar4 & 0xfffffffd) != 0) {
      FUN_01960c70(&local_64);
    }
    goto LAB_014e9e30;
  }
  local_88[0] = (undefined **)0x80000015;
  if (ppuVar3 == (undefined **)0x80000015) {
    local_78 = iVar12;
    uVar9 = FUN_019678c0(&DAT_0056ad38,0x10);
LAB_014e9e58:
    *param_1 = 2;
    param_1[1] = uVar9;
LAB_014e9e30:
    if (local_88[0] != (undefined **)0x80000015) {
LAB_014e9de8:
      FUN_014dbd38(local_88);
    }
    return;
  }
  uVar8 = puVar7[1];
  uVar13 = puVar7[2];
  *puVar14 = *puVar7;
  puVar14[1] = uVar8;
  puVar14[2] = uVar13;
  local_48 = ppuVar3;
  local_78 = iVar12;
  FUN_014ef4c0(&local_58,&local_48);
  uVar9 = local_54;
  if (local_58 == (undefined *)0x2) goto LAB_014e9e58;
  local_ac = local_54;
  local_64 = local_54;
  local_b0 = local_50;
  local_b4 = uStack_4c;
  local_60 = local_50;
  uStack_5c = uStack_4c;
  local_68 = local_58;
  goto LAB_014e9a1c;
}

