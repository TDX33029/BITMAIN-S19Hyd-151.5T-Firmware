// FUN_00f5ba80 @ 00f5ba80 size=2560 calls_out=15 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f5ba80(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  byte *pbVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_94;
  undefined4 *local_8c;
  byte *local_84;
  uint local_80;
  byte *local_74;
  int local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  byte *local_5c;
  uint local_54;
  byte *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_38;
  byte *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_70 = 0;
  local_64 = local_64 & 0xffff0000;
  local_6c = 0x1b6;
  local_68 = 1;
  FUN_015ec1bc(&local_38,&local_70,param_2,param_3);
  pbVar15 = local_34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_38 & 0xff) {
  case 0:
    pbVar15 = &SUB_00000002;
    if (local_34 != &SUB_00000002) goto LAB_00f5c3b8;
    goto LAB_00f5c3d0;
  case 1:
    bVar1 = local_38._1_1_;
    break;
  default:
    bVar1 = local_34[8];
    break;
  case 4:
    iVar3 = thunk_FUN_016d4a50(0x2000);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    local_6c = 0x2000;
    uVar20 = 0;
    local_5c = pbVar15;
    uVar23 = 0;
    uVar19 = 0;
    local_80 = 0;
    local_94 = 0;
    local_70 = iVar3;
LAB_00f5bbcc:
    local_4c = (undefined4 *)0x0;
    local_54 = 0;
    local_50 = &DAT_00000001;
    local_84 = &DAT_00000001;
    puVar18 = local_4c;
    puVar16 = (undefined4 *)0x0;
LAB_00f5bbf4:
    do {
      if (uVar23 < uVar19) {
LAB_00f5bc54:
        uVar17 = uVar19 - uVar23;
        pcVar21 = (char *)(iVar3 + uVar23);
        if (uVar17 < 8) {
          if (uVar17 == 0) goto LAB_00f5bdd0;
          if (*pcVar21 == '\n') {
            uVar8 = 0;
          }
          else {
            if (uVar17 == 1) goto LAB_00f5bdd0;
            if (pcVar21[1] == '\n') {
              uVar8 = 1;
            }
            else {
              if (uVar17 == 2) goto LAB_00f5bdd0;
              if (pcVar21[2] == '\n') {
                uVar8 = 2;
              }
              else {
                if (uVar17 == 3) goto LAB_00f5bdd0;
                if (pcVar21[3] == '\n') {
                  uVar8 = 3;
                }
                else {
                  if (uVar17 == 4) goto LAB_00f5bdd0;
                  if (pcVar21[4] == '\n') {
                    uVar8 = 4;
                  }
                  else {
                    if (uVar17 == 5) goto LAB_00f5bdd0;
                    if (pcVar21[5] == '\n') {
                      uVar8 = 5;
                    }
                    else {
                      if ((uVar17 == 6) || (pcVar21[6] != '\n')) goto LAB_00f5bdd0;
                      uVar8 = 6;
                    }
                  }
                }
              }
            }
          }
LAB_00f5be7c:
          local_60 = local_80;
          local_68 = uVar23;
          if (uVar17 <= uVar8) {
            local_64 = uVar20;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar8,uVar17,&DAT_0188bbe0);
          }
          iVar11 = uVar8 + 1;
          local_64 = uVar20;
          if (local_54 - (int)puVar18 <= uVar8) {
            FUN_00f58340(&local_54,puVar18,iVar11);
            local_84 = local_50;
            puVar18 = local_4c;
          }
          FUN_016dd1aa(local_84 + (int)puVar18,pcVar21,iVar11);
          puVar4 = (undefined4 *)(iVar11 + (int)puVar16);
          puVar18 = (undefined4 *)((int)puVar18 + iVar11);
          local_68 = uVar23 + iVar11;
          if (uVar19 < uVar23 + iVar11) {
            local_68 = uVar19;
          }
        }
        else {
          uVar5 = ((uint)(pcVar21 + 3) & 0xfffffffc) - (int)pcVar21;
          if (uVar5 == 0) {
            uVar5 = 0;
            goto LAB_00f5bd44;
          }
          uVar8 = 0;
          do {
            if (pcVar21[uVar8] == '\n') goto LAB_00f5be7c;
            uVar8 = uVar8 + 1;
          } while (uVar5 != uVar8);
          for (; uVar5 <= uVar17 - 8; uVar5 = uVar5 + 8) {
LAB_00f5bd44:
            uVar9 = *(uint *)(pcVar21 + uVar5);
            uVar8 = *(uint *)((int)(pcVar21 + uVar5) + 4) ^ 0xa0a0a0a;
            if (((0x1010100 - (uVar9 ^ 0xa0a0a0a) | uVar9) & 0x80808080 &
                (0x1010100 - uVar8 | uVar8)) != 0x80808080) break;
          }
          if (uVar17 != uVar5) {
            iVar11 = 0;
            do {
              if (pcVar21[iVar11 + uVar5] == '\n') {
                uVar8 = iVar11 + uVar5;
                goto LAB_00f5be7c;
              }
              iVar11 = iVar11 + 1;
            } while ((uVar19 - uVar5) - uVar23 != iVar11);
          }
LAB_00f5bdd0:
          if (local_54 - (int)puVar18 < uVar17) {
            FUN_00f58340(&local_54,puVar18,uVar17);
            local_84 = local_50;
            puVar18 = local_4c;
          }
          else {
          }
          FUN_016dd1aa(local_84 + (int)puVar18,pcVar21,uVar17);
          uVar23 = uVar23 + uVar17;
          puVar18 = (undefined4 *)((int)puVar18 + uVar17);
          puVar4 = (undefined4 *)(uVar17 + (int)puVar16);
          if (uVar19 < uVar23) {
            uVar23 = uVar19;
          }
          local_4c = puVar18;
          puVar16 = puVar4;
          if (uVar17 != 0) goto LAB_00f5bbf4;
          local_60 = local_80;
          local_68 = uVar23;
          local_64 = uVar20;
        }
        uVar17 = 4;
        goto LAB_00f5bed4;
      }
      uVar19 = FUN_016e0250(pbVar15,iVar3,0x2000);
      if (uVar19 != 0xffffffff) {
        uVar23 = 0;
        if (local_80 < uVar19) {
          local_80 = uVar19;
        }
        uVar20 = uVar19;
        goto LAB_00f5bc54;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      puVar4 = (undefined4 *)*puVar4;
      uVar20 = 0;
      uVar23 = 0;
      uVar19 = 0;
    } while (puVar4 == (undefined4 *)0x4);
    local_60 = local_80;
    local_64 = 0;
    local_68 = 0;
    uVar17 = 0x2000;
LAB_00f5bed4:
    pbVar6 = local_50;
    uVar23 = local_68;
    FUN_00fab1e0(&local_38,local_50,puVar18);
    uVar5 = uVar17 & 0xff;
    if (local_38 == 0) {
      local_4c = puVar18;
      if (uVar5 == 4) goto LAB_00f5bf20;
LAB_00f5bf8c:
      uVar8 = 0x80000000;
      local_74 = (byte *)(uVar17 & 0xffffff00 | uVar5);
joined_r0x00f5c324:
      local_8c = puVar4;
      puVar18 = local_4c;
      if (local_54 != 0) {
        thunk_FUN_016d3fb4(pbVar6);
        puVar18 = local_4c;
      }
    }
    else {
      if (uVar5 == 4) {
        uVar17 = 0;
        puVar4 = &DAT_018aaa9c;
        uVar5 = 2;
      }
      local_4c = (undefined4 *)0x0;
      if (uVar5 != 4) goto LAB_00f5bf8c;
LAB_00f5bf20:
      if (puVar4 == (undefined4 *)0x0) {
        uVar8 = 0x80000001;
        puVar4 = local_8c;
        goto joined_r0x00f5c324;
      }
      uVar8 = local_54;
      local_8c = local_4c;
      local_74 = local_50;
      puVar18 = local_4c;
      if ((((local_4c != (undefined4 *)0x0) &&
           (local_8c = local_4c, pbVar6[(int)local_4c + -1] == 10)) &&
          (local_8c = (undefined4 *)((int)local_4c + -1), puVar18 = local_8c,
          local_8c != (undefined4 *)0x0)) && (pbVar6[(int)local_4c + -2] == 0xd)) {
        local_8c = (undefined4 *)((int)local_4c + -2);
        puVar18 = (undefined4 *)((int)local_4c + -2);
      }
    }
    local_4c = puVar18;
    if (uVar8 == 0x80000001) {
      thunk_FUN_016d3fb4(iVar3);
      FUN_016dffb2(pbVar15);
      *(undefined1 *)param_1 = 4;
      param_1[1] = local_94;
      return;
    }
    if (uVar8 == 0x80000000) {
      *param_1 = (uint)local_74;
      param_1[1] = (uint)local_8c;
      thunk_FUN_016d3fb4(iVar3);
      FUN_016dffb2(pbVar15);
      return;
    }
    pbVar6 = local_74 + (int)local_8c;
    pbVar10 = (byte *)0x0;
    pbVar22 = pbVar10;
    pbVar12 = local_74;
    if (local_8c == (undefined4 *)0x0) {
      pbVar22 = (byte *)0x0;
      pbVar13 = local_74;
LAB_00f5c124:
      do {
        do {
          pbVar12 = pbVar6;
          if (pbVar13 == pbVar12) goto LAB_00f5c228;
          pbVar6 = pbVar12 + -1;
          uVar17 = (uint)(char)*pbVar6;
          if (0x7fffffff < uVar17) {
            pbVar6 = pbVar12 + -2;
            bVar1 = *pbVar6;
            if ((char)bVar1 < -0x40) {
              pbVar6 = pbVar12 + -3;
              bVar2 = *pbVar6;
              if ((char)bVar2 < -0x40) {
                pbVar6 = pbVar12 + -4;
                uVar5 = (int)(char)bVar2 & 0x3fU | (*pbVar6 & 7) << 6;
              }
              else {
                uVar5 = bVar2 & 0xf;
              }
              uVar5 = (int)(char)bVar1 & 0x3fU | uVar5 << 6;
            }
            else {
              uVar5 = bVar1 & 0x1f;
            }
            uVar17 = uVar17 & 0x3f | uVar5 << 6;
          }
        } while ((uVar17 - 9 < 5) || (uVar17 == 0x20));
        if (uVar17 < 0x80) goto LAB_00f5c214;
        uVar5 = uVar17 >> 8;
        if (0x1f < uVar5) {
          if (uVar5 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar17 & 0xff] & 2;
joined_r0x00f5c210:
            if (bVar1 == 0) goto LAB_00f5c214;
          }
          else if ((uVar5 != 0x30) || (uVar17 != 0x3000)) goto LAB_00f5c214;
          goto LAB_00f5c124;
        }
        if (uVar5 == 0) {
          bVar1 = (&DAT_0041951b)[uVar17 & 0xff] & 1;
          goto joined_r0x00f5c210;
        }
        if ((uVar5 != 0x16) || (uVar17 != 0x1680)) goto LAB_00f5c214;
      } while( true );
    }
    do {
      pbVar13 = pbVar12 + 1;
      uVar17 = (uint)*pbVar12;
      if (0x7fffffff < (uint)(int)(char)*pbVar12) {
        if (uVar17 < 0xe0) {
          uVar17 = pbVar12[1] & 0x3f | (uVar17 & 0x1f) << 6;
          pbVar13 = pbVar12 + 2;
        }
        else {
          uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar17 < 0xf0) {
            uVar17 = uVar5 | (uVar17 & 0x1f) << 0xc;
            pbVar13 = pbVar12 + 3;
          }
          else {
            pbVar13 = pbVar12 + 4;
            uVar17 = pbVar12[3] & 0x3f | uVar5 << 6 | (uVar17 & 7) << 0x12;
          }
        }
      }
      pbVar10 = pbVar22 + ((int)pbVar13 - (int)pbVar12);
      if ((4 < uVar17 - 9) && (uVar17 != 0x20)) {
        if (uVar17 < 0x80) goto LAB_00f5c124;
        uVar5 = uVar17 >> 8;
        if (uVar5 < 0x20) {
          if (uVar5 == 0) {
            bVar1 = (&DAT_0041951b)[uVar17 & 0xff] & 1;
joined_r0x00f5c104:
            if (bVar1 == 0) goto LAB_00f5c124;
          }
          else if ((uVar5 != 0x16) || (uVar17 != 0x1680)) goto LAB_00f5c124;
        }
        else {
          if (uVar5 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar17 & 0xff] & 2;
            goto joined_r0x00f5c104;
          }
          if ((uVar5 != 0x30) || (uVar17 != 0x3000)) goto LAB_00f5c124;
        }
      }
      pbVar22 = pbVar10;
      pbVar12 = pbVar13;
    } while (pbVar13 != pbVar6);
    pbVar22 = (byte *)0x0;
    pbVar10 = (byte *)0x0;
    goto LAB_00f5c228;
  }
  if (bVar1 != 0) {
LAB_00f5c3b8:
    *param_1 = local_38;
    param_1[1] = (uint)local_34;
    return;
  }
LAB_00f5c3d0:
  param_1[1] = 0;
  *(undefined1 *)param_1 = 4;
  if ((byte)local_38 < 3) {
    return;
  }
  uVar14 = *(undefined4 *)pbVar15;
  puVar18 = *(undefined4 **)(pbVar15 + 4);
  pcVar7 = (code *)*puVar18;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(uVar14);
  }
  if (puVar18[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  thunk_FUN_016d3fb4(pbVar15);
  return;
LAB_00f5c214:
  pbVar10 = pbVar12 + ((int)pbVar10 - (int)pbVar13);
LAB_00f5c228:
  uVar5 = (int)pbVar10 - (int)pbVar22;
  pbVar22 = local_74 + (int)pbVar22;
  uVar17 = uVar5;
  do {
    uVar24 = FUN_00fb737c(0x20,pbVar22,uVar17);
    uVar17 = (uint)(uVar24 >> 0x20);
    if ((uVar24 & 1) == 0) break;
    if ((uVar17 < uVar5) && (pbVar22[uVar17] == 0x20)) {
      pbVar22 = pbVar22 + uVar17 + 1;
      uVar5 = uVar5 - (uVar17 + 1);
      break;
    }
  } while (uVar17 <= uVar5);
  FUN_016be0a8(&local_38,pbVar22,uVar5);
  if ((byte)local_38 == '\x01') {
    FUN_016bdd70(&local_50,local_34,local_30);
    local_54 = CONCAT31(local_54._1_3_,1);
  }
  else {
    *(undefined2 *)((uint)&local_54 | 1) = *(undefined2 *)((uint)&local_38 | 1);
    local_44 = local_28;
    local_48 = local_2c;
    *(undefined1 *)((undefined2 *)((uint)&local_54 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_38 | 1) + 1);
    local_4c = local_30;
    local_50 = local_34;
    local_54 = local_54 & 0xffffff00;
    FUN_00f53608(param_4);
    local_94 = local_94 + 1;
  }
  if (uVar8 != 0) {
    thunk_FUN_016d3fb4(local_74);
  }
  goto LAB_00f5bbcc;
}

