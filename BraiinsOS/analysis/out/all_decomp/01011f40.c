// FUN_01011f40 @ 01011f40 size=2196 calls_out=13 calls_in=1
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffeec */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01011f40(byte *param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int local_148;
  char *pcStack_144;
  int iStack_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined4 uStack_12c;
  int local_128;
  char *local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  byte local_f8;
  undefined2 local_f7;
  undefined1 local_f5;
  int local_f0;
  byte local_ec;
  undefined4 local_eb;
  uint uStack_e7;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined3 local_94;
  undefined1 uStack_91;
  undefined3 uStack_90;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  uint local_44;
  int local_40;
  byte local_3c;
  int local_38;
  byte local_34;
  undefined4 local_33;
  undefined4 uStack_2f;
  undefined3 uStack_2b;
  
  uVar6 = 4;
  if (param_4 != 0) {
    uVar6 = 6;
  }
  FUN_0101393c(&local_88,param_3,uVar6);
  uVar3 = (undefined2)local_88;
  if ((byte)local_88 == '\x01') {
LAB_01011f78:
    param_1[0x20] = 8;
    *param_1 = local_88._1_1_;
    return;
  }
  if (local_84 != 0) {
    local_88._0_2_ = uVar3;
    FUN_01013d1c(&local_88,param_2 + 8);
    local_f8 = (byte)local_68;
    bVar8 = (byte)local_88;
    if ((byte)local_68 == 8) {
      *param_1 = (byte)local_88;
      param_1[0x20] = 8;
      return;
    }
    FUN_016dd1aa((uint)&local_118 | 1,(uint)&local_88 | 1,0x1f);
    uVar6 = *param_3;
    uVar9 = param_3[1];
    local_f7 = local_68._1_2_;
    local_f5 = local_68._3_1_;
    local_118 = CONCAT31(local_118._1_3_,bVar8);
    FUN_01014e4c(&local_88,param_2,param_3);
    if ((byte)local_88 == '\x01') {
    }
    else {
      FUN_016dd1aa((int)&local_e0 + 2,&local_84,0x18);
      FUN_016dd1aa(&local_c0,(int)&local_e0 + 2,0x18);
      *param_3 = uVar6;
      param_3[1] = uVar9;
      FUN_010153bc(&local_38,&local_c0,param_3);
      local_88._1_1_ = local_34;
      if (local_38 != 0) {
        local_ec = local_34;
        iVar5 = local_f8 - 1;
        uStack_e7 = uStack_2f;
        if (local_f8 == 0 || iVar5 == 0) {
          iVar5 = 0;
        }
        local_eb = local_33;
        local_f0 = local_38;
                    /* WARNING: Overlapping input varnodes */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_01012168 + (&DAT_01012168)[iVar5]))();
        return;
      }
    }
    *param_1 = local_88._1_1_;
    param_1[0x20] = 8;
    FUN_014f073c(&local_118);
    return;
  }
  uVar9 = *param_3;
  uVar6 = param_3[1];
  FUN_01014e4c(&local_88,param_2,param_3);
  uVar3 = (undefined2)local_88;
  if ((byte)local_88 != '\0') goto LAB_01011f78;
  iVar5 = (int)&local_118 + 2;
  local_88._0_2_ = uVar3;
  FUN_016dd1aa(iVar5,&local_84,0x18);
  FUN_016dd1aa(&local_c0,iVar5,0x18);
  FUN_01014e4c(&local_88,param_2,param_3);
  if ((byte)local_88 == '\x01') {
    param_1[0x20] = 8;
    *param_1 = local_88._1_1_;
    if (local_c0 == 0) {
      return;
    }
    (**(code **)(local_c0 + 0x10))(&uStack_b4,local_bc,local_b8);
    return;
  }
  FUN_016dd1aa(iVar5,&local_84,0x18);
  FUN_016dd1aa(&local_e0,iVar5,0x18);
  *param_3 = uVar9;
  param_3[1] = uVar6;
  local_88 = local_c0;
  local_84 = local_bc;
  local_80 = local_b8;
  uStack_7c = uStack_b4;
  local_78 = uStack_b0;
  uStack_74 = uStack_ac;
  FUN_010153bc(&local_148,&local_88,param_3);
  local_88 = local_e0;
  local_84 = iStack_dc;
  local_80 = iStack_d8;
  uStack_7c = uStack_d4;
  local_78 = iStack_d0;
  uStack_74 = uStack_cc;
  FUN_010153bc(&local_138,&local_88,param_3);
  iVar7 = local_130;
  iVar5 = local_134;
  local_11c = local_13c;
  local_128 = local_148;
  local_124 = pcStack_144;
  local_120 = iStack_140;
  if (iStack_140 == 0) {
    param_1[0x20] = 8;
    bVar8 = 0;
LAB_01012378:
    *param_1 = bVar8;
LAB_0101237c:
    (**(code **)(local_138 + 0x10))(&uStack_12c,local_134,local_130);
    pcStack_144 = local_124;
LAB_01012394:
    iStack_140 = local_120;
    goto LAB_01012b34;
  }
  if (*pcStack_144 == ':') {
    switch(iStack_140) {
    case 5:
      cVar2 = pcStack_144[1];
      bVar10 = cVar2 != 'p';
      if (!bVar10) {
        cVar2 = pcStack_144[2];
      }
      if (bVar10 || cVar2 != 'a') break;
      cVar2 = pcStack_144[3];
      bVar10 = cVar2 != 't';
      if (!bVar10) {
        cVar2 = pcStack_144[4];
      }
      if (bVar10 || cVar2 != 'h') break;
      local_88 = local_138;
      local_84 = local_134;
      local_80 = local_130;
      uStack_7c = uStack_12c;
      FUN_01020be4(&local_118,&local_88);
      if (local_118 == 0) {
LAB_01012c20:
        param_1[0x20] = 8;
        *param_1 = 7;
        goto LAB_01012394;
      }
      bVar8 = 5;
LAB_01012310:
      *(int *)param_1 = local_118;
      *(undefined4 *)(param_1 + 4) = local_114;
      *(uint *)(param_1 + 8) = uStack_110;
      *(undefined4 *)(param_1 + 0xc) = uStack_10c;
      param_1[0x20] = bVar8;
      goto LAB_01012b28;
    case 7:
      cVar2 = pcStack_144[1];
      if (cVar2 == 's') {
        if (pcStack_144[2] == 'c') {
          cVar2 = pcStack_144[3];
          bVar10 = cVar2 == 'h';
          if (bVar10) {
            cVar2 = pcStack_144[4];
          }
          if (bVar10 && cVar2 == 'e') {
            cVar2 = pcStack_144[5];
            bVar10 = cVar2 == 'm';
            if (bVar10) {
              cVar2 = pcStack_144[6];
            }
            if (bVar10 && cVar2 == 'e') {
              local_88 = local_138;
              local_84 = local_134;
              local_80 = local_130;
              uStack_7c = uStack_12c;
              FUN_01020be4(&local_118,&local_88);
              if (local_118 == 0) goto LAB_01012c20;
              bVar8 = 4;
              goto LAB_01012310;
            }
          }
        }
        else if (pcStack_144[2] == 't') {
          cVar2 = pcStack_144[3];
          bVar10 = cVar2 == 'a';
          if (bVar10) {
            cVar2 = pcStack_144[4];
          }
          if (bVar10 && cVar2 == 't') {
            cVar2 = pcStack_144[5];
            bVar10 = cVar2 == 'u';
            if (bVar10) {
              cVar2 = pcStack_144[6];
            }
            if (bVar10 && cVar2 == 's') {
              sVar4 = FUN_01020c58();
              if (sVar4 != 0) {
                param_1[0x20] = 7;
                *(short *)param_1 = sVar4;
                goto LAB_01012b18;
              }
              goto LAB_01012368;
            }
          }
        }
      }
      else {
        bVar10 = cVar2 == 'm';
        if (bVar10) {
          cVar2 = pcStack_144[2];
        }
        if (bVar10 && cVar2 == 'e') {
          cVar2 = pcStack_144[3];
          bVar10 = cVar2 == 't';
          if (bVar10) {
            cVar2 = pcStack_144[4];
          }
          if (bVar10 && cVar2 == 'h') {
            cVar2 = pcStack_144[5];
            bVar10 = cVar2 == 'o';
            if (bVar10) {
              cVar2 = pcStack_144[6];
            }
            if (bVar10 && cVar2 == 'd') {
              FUN_010a4108(&local_88);
              if ((byte)local_88 == '\v') goto LAB_01012368;
              *(int *)param_1 = local_88;
              *(int *)(param_1 + 4) = local_84;
              *(int *)(param_1 + 8) = local_80;
              *(undefined4 *)(param_1 + 0xc) = uStack_7c;
              *(int *)(param_1 + 0x10) = local_78;
              param_1[0x20] = 3;
              goto LAB_01012b18;
            }
          }
        }
      }
      break;
    case 9:
      cVar2 = pcStack_144[1];
      bVar10 = cVar2 == 'p';
      if (bVar10) {
        cVar2 = pcStack_144[2];
      }
      if (bVar10 && cVar2 == 'r') {
        cVar2 = pcStack_144[3];
        bVar10 = cVar2 == 'o';
        if (bVar10) {
          cVar2 = pcStack_144[4];
        }
        if (bVar10 && cVar2 == 't') {
          cVar2 = pcStack_144[5];
          bVar10 = cVar2 == 'o';
          if (bVar10) {
            cVar2 = pcStack_144[6];
          }
          if (bVar10 && cVar2 == 'c') {
            cVar2 = pcStack_144[7];
            bVar10 = cVar2 == 'o';
            if (bVar10) {
              cVar2 = pcStack_144[8];
            }
            if (bVar10 && cVar2 == 'l') {
              local_88 = local_138;
              local_84 = local_134;
              local_80 = local_130;
              uStack_7c = uStack_12c;
              FUN_0102a618(&local_118,&local_88);
              if (local_118 == 0) goto LAB_01012c20;
              bVar8 = 6;
              goto LAB_01012310;
            }
          }
        }
      }
      break;
    case 10:
      cVar2 = pcStack_144[1];
      bVar10 = cVar2 == 'a';
      if (bVar10) {
        cVar2 = pcStack_144[2];
      }
      bVar11 = bVar10 && cVar2 == 'u';
      if (bVar10 && cVar2 == 'u') {
        bVar11 = pcStack_144[3] == 't';
      }
      if (bVar11) {
        cVar2 = pcStack_144[4];
        bVar10 = cVar2 == 'h';
        if (bVar10) {
          cVar2 = pcStack_144[5];
        }
        if (bVar10 && cVar2 == 'o') {
          cVar2 = pcStack_144[6];
          bVar10 = cVar2 == 'r';
          if (bVar10) {
            cVar2 = pcStack_144[7];
          }
          if (bVar10 && cVar2 == 'i') {
            cVar2 = pcStack_144[8];
            bVar10 = cVar2 == 't';
            if (bVar10) {
              cVar2 = pcStack_144[9];
            }
            if (bVar10 && cVar2 == 'y') {
              local_88 = local_138;
              local_84 = local_134;
              local_80 = local_130;
              uStack_7c = uStack_12c;
              FUN_01020be4(&local_118,&local_88);
              if (local_118 == 0) goto LAB_01012c20;
              bVar8 = 2;
              goto LAB_01012310;
            }
          }
        }
      }
    }
    param_1[0x20] = 8;
    *param_1 = 9;
  }
  else {
    FUN_0109ff54(&local_44,pcStack_144,iStack_140,&local_88,"");
    if (local_3c == 3) {
LAB_01012368:
      param_1[0x20] = 8;
      bVar8 = 7;
      goto LAB_01012378;
    }
    if (local_3c == 2) {
      local_38 = 0;
    }
    else {
      if ((local_3c & 1) == 0) {
        iVar5 = 0;
        do {
          if (local_40 == iVar5) {
            FUN_00f5eea8(&local_118);
            local_33 = CONCAT13((undefined1)uStack_110,local_114._1_3_);
            uStack_2f = uStack_110 >> 8;
            uVar6 = uStack_10c;
            local_38 = local_118;
            local_34 = (byte)local_114;
            goto LAB_010129e8;
          }
          pbVar1 = (byte *)(local_44 + iVar5);
          iVar5 = iVar5 + 1;
        } while (""[*pbVar1] != '\0');
        goto LAB_01012368;
      }
      FUN_00f5eea8(&local_38);
      uVar6 = CONCAT31(uStack_2b,uStack_2f._3_1_);
LAB_010129e8:
      local_44 = (uint)local_34;
      local_94 = (undefined3)uStack_2f;
      uStack_91 = (undefined1)uVar6;
      uStack_90 = (undefined3)((uint)uVar6 >> 8);
      local_98 = local_33;
    }
    uStack_9c = CONCAT31(uStack_90,uStack_91);
    iStack_a0._1_3_ = (undefined3)_local_94;
    local_a4 = CONCAT31((int3)local_98,(char)local_44);
    iStack_a0._0_1_ = (undefined1)((uint)local_98 >> 0x18);
    local_a8 = local_38;
    if (local_130 == 0) {
      local_80 = 0;
      local_84 = 1;
      local_88 = 0;
      FUN_00f5ef18(&local_118,&local_88);
    }
    else {
      iVar5 = 0;
      do {
        bVar8 = *(byte *)(local_134 + iVar5);
        if (bVar8 < 0x20) {
          if (bVar8 != 9) goto LAB_01012a54;
        }
        else if (bVar8 == 0x7f) {
LAB_01012a54:
          param_1[0x20] = 8;
          *param_1 = 7;
          if (local_38 != 0) {
            (**(code **)(local_38 + 0x10))(&uStack_9c,local_a4,iStack_a0);
          }
          goto LAB_0101237c;
        }
        iVar5 = iVar5 + 1;
      } while (local_130 != iVar5);
      FUN_00f5eea8(&local_118,local_134,local_130);
    }
    local_108 = local_108 & 0xffffff00;
    local_78 = local_118;
    uStack_74 = local_114;
    local_68 = local_108;
    local_88 = local_a8;
    local_84 = local_a4;
    local_80 = iStack_a0;
    uStack_7c = uStack_9c;
    *(int *)param_1 = local_a8;
    *(int *)(param_1 + 4) = local_a4;
    *(int *)(param_1 + 8) = iStack_a0;
    *(undefined4 *)(param_1 + 0xc) = uStack_9c;
    *(int *)(param_1 + 0x10) = local_118;
    *(undefined4 *)(param_1 + 0x14) = local_114;
    *(uint *)(param_1 + 0x18) = uStack_110;
    *(undefined4 *)(param_1 + 0x1c) = uStack_10c;
    *(uint *)(param_1 + 0x20) = local_108;
    iVar5 = local_134;
    iVar7 = local_130;
  }
LAB_01012b18:
  (**(code **)(local_138 + 0x10))(&uStack_12c,iVar5,iVar7);
LAB_01012b28:
  pcStack_144 = local_124;
LAB_01012b34:
  (**(code **)(local_128 + 0x10))(&local_11c,pcStack_144,iStack_140);
  return;
}

