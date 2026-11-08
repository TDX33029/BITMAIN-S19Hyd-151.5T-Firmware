// FUN_013d2e34 @ 013d2e34 size=1988 calls_out=14 calls_in=2
// strings: 

void FUN_013d2e34(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_168 [4];
  uint local_158 [12];
  undefined4 local_128 [28];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [5];
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  local_17c = FUN_013d2518(param_2);
  if (local_17c != 0x5c) {
    FUN_013ff7ac(&local_17c,&DAT_00568330,&DAT_01894bb8);
switchD_013d35b8_caseD_76:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 0x506;
    uVar3 = 0xb;
    goto LAB_013d38a0;
  }
  iVar8 = *param_2;
  local_174 = *(uint *)(iVar8 + 0x54);
  local_170 = *(uint *)(iVar8 + 0x58);
  puVar10 = (uint *)(iVar8 + 0x50);
  local_178 = *puVar10;
  iVar2 = FUN_013d2d20(param_2);
  if (iVar2 == 0) {
    local_5c = *puVar10;
    uStack_58 = *(uint *)(iVar8 + 0x54);
    local_54 = *(uint *)(iVar8 + 0x58);
    uVar3 = param_2[2];
    iVar2 = param_2[1];
    local_68 = local_178;
    local_64 = local_174;
    local_60 = local_170;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar3);
    }
    if (uVar3 == 0) {
      uVar5 = 0;
      uVar12 = 1;
    }
    else {
      uVar12 = thunk_FUN_016d4a50(uVar3);
      uVar5 = uVar3;
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar3);
      }
    }
    FUN_016dd1aa(uVar12,iVar2,uVar3);
    param_1[10] = local_68;
    param_1[0xb] = local_64;
    param_1[0xc] = local_60;
    param_1[0xd] = local_5c;
    param_1[0xe] = uStack_58;
    param_1[0xf] = local_54;
    param_1[7] = uVar5;
    param_1[8] = uVar12;
    param_1[9] = uVar3;
    *param_1 = 10;
    return;
  }
  uVar3 = FUN_013d2518(param_2);
  if ((uVar3 & 0xfffffff8) == 0x30) {
    if (*(char *)(iVar8 + 0x65) != '\0') {
      FUN_013dd94c(local_168,param_2);
      param_1[1] = 0x80000002;
      puVar9 = local_158;
      param_1[2] = local_168[0];
      param_1[3] = local_178;
      param_1[4] = local_174;
      param_1[5] = local_170;
      puVar10 = param_1 + 6;
LAB_013d32c8:
      uVar3 = puVar9[1];
      uVar5 = puVar9[2];
      uVar12 = puVar9[3];
      *puVar10 = *puVar9;
      puVar10[1] = uVar3;
      puVar10[2] = uVar5;
      puVar10[3] = uVar12;
      *param_1 = 0x22;
      return;
    }
LAB_013d314c:
    uVar12 = *puVar10;
    uVar5 = FUN_013d2518(param_2);
    uVar3 = 1;
    if (0x7f < uVar5) {
      uVar3 = 2;
    }
    if ((0x7ff < uVar5) && (uVar3 = 4, uVar5 < 0x10000)) {
      uVar3 = 3;
    }
    if (CARRY4(uVar3,uVar12)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01894f38);
    }
    iVar2 = *(int *)(iVar8 + 0x58);
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01894f28);
    }
    uVar11 = *(uint *)(iVar8 + 0x54);
    iVar8 = FUN_013d2518(param_2);
    uVar5 = param_2[2];
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar5);
    }
    iVar6 = param_2[1];
    if (uVar5 == 0) {
      uVar13 = 0;
      uVar4 = 1;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(uVar5);
      uVar13 = uVar5;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar5);
      }
    }
    FUN_016dd1aa(uVar4,iVar6,uVar5);
    if (iVar8 == 10) {
      uVar11 = uVar11 + 1;
    }
    param_1[10] = local_178;
    param_1[0xd] = uVar3 + uVar12;
    uVar3 = iVar2 + 1;
    if (iVar8 == 10) {
      uVar3 = 1;
    }
    param_1[0xb] = local_174;
    *param_1 = 0x20;
    param_1[7] = uVar13;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
    param_1[0xc] = local_170;
    param_1[0xe] = uVar11;
    param_1[0xf] = uVar3;
    return;
  }
  if ((uVar3 & 0x1ffffe) == 0x38) {
    if (*(char *)(iVar8 + 0x65) != '\x01') goto LAB_013d314c;
  }
  else {
    switch(uVar3) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 100:
    case 0x73:
    case 0x77:
      FUN_013dcfcc(&local_b8,param_2);
      param_1[1] = 0x80000005;
      local_b8 = local_178;
      uStack_b4 = local_174;
      uStack_b0 = local_170;
      puVar9 = auStack_ac;
      param_1[2] = local_178;
      param_1[3] = local_174;
      param_1[4] = local_170;
      puVar10 = param_1 + 5;
      goto LAB_013d32c8;
    case 0x50:
    case 0x70:
      FUN_013dbe8c(&local_68,param_2);
      if (local_68 == 0x22) {
        param_1[1] = local_64;
        param_1[2] = local_60;
        param_1[3] = local_5c;
        param_1[4] = uStack_58;
        param_1[5] = local_54;
        param_1[6] = uStack_50;
        param_1[7] = uStack_4c;
        param_1[8] = local_178;
        param_1[9] = local_174;
        param_1[10] = local_170;
        param_1[0xb] = uStack_3c;
        param_1[0xc] = local_38;
        param_1[0xd] = uStack_34;
        param_1[0xe] = uStack_30;
        *param_1 = 0x22;
        return;
      }
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = uStack_58;
      param_1[5] = local_54;
      param_1[6] = uStack_50;
      param_1[7] = uStack_4c;
      param_1[8] = uStack_48;
      param_1[9] = local_44;
      param_1[10] = local_40;
      param_1[0xb] = uStack_3c;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_34;
      param_1[0xe] = uStack_30;
      param_1[0xf] = local_2c;
      *param_1 = local_68;
      return;
    case 0x55:
    case 0x75:
    case 0x78:
      FUN_013dbcfc(&local_68,param_2);
      if (local_68 == 0x22) {
        param_1[1] = 0x80000002;
        param_1[2] = local_64;
        param_1[3] = local_178;
        param_1[4] = local_174;
        param_1[5] = local_170;
        param_1[6] = local_54;
        param_1[7] = uStack_50;
        param_1[8] = uStack_4c;
        param_1[9] = uStack_48;
        *param_1 = 0x22;
        return;
      }
      param_1[9] = local_44;
      param_1[10] = local_40;
      param_1[0xb] = uStack_3c;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_34;
      param_1[0xe] = uStack_30;
      param_1[0xf] = local_2c;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = uStack_58;
      param_1[5] = local_54;
      param_1[6] = uStack_50;
      param_1[7] = uStack_4c;
      param_1[8] = uStack_48;
      *param_1 = local_68;
      return;
    }
  }
  FUN_013d2d20(param_2);
  uStack_8c = *puVar10;
  uStack_88 = *(uint *)(iVar8 + 0x54);
  uStack_84 = *(uint *)(iVar8 + 0x58);
  local_90 = local_170;
  local_98 = local_178;
  local_94 = local_174;
  switch(uVar3) {
  case 0x23:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x3f:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    param_1[3] = local_178;
    param_1[4] = local_174;
    param_1[5] = local_170;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined1 *)(param_1 + 9) = 1;
    *param_1 = 0x22;
    param_1[1] = 0x80000002;
    param_1[2] = uVar3;
    return;
  }
  iVar2 = FUN_013dd1f0(uVar3);
  if (iVar2 != 0) {
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined1 *)(param_1 + 9) = 2;
    *param_1 = 0x22;
    param_1[1] = 0x80000002;
    param_1[2] = uVar3;
    return;
  }
  switch(uVar3) {
  case 0x3c:
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = uStack_8c;
    param_1[6] = uStack_88;
    param_1[7] = uStack_84;
    uVar1 = 8;
    break;
  default:
    local_128[0] = 0xb;
    FUN_013d1ce4(&local_68,param_2[1],param_2[2],&local_98,local_128);
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = uStack_58;
    param_1[5] = local_54;
    param_1[6] = uStack_50;
    param_1[7] = uStack_4c;
    param_1[8] = uStack_48;
    param_1[9] = local_44;
    param_1[10] = local_40;
    param_1[0xb] = uStack_3c;
    param_1[0xc] = local_38;
    param_1[0xd] = uStack_34;
    param_1[0xe] = uStack_30;
    param_1[0xf] = local_2c;
    return;
  case 0x3e:
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = uStack_8c;
    param_1[6] = uStack_88;
    param_1[7] = uStack_84;
    uVar1 = 9;
    break;
  case 0x41:
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = uStack_8c;
    param_1[6] = uStack_88;
    param_1[7] = uStack_84;
    uVar1 = 2;
    break;
  case 0x42:
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = uStack_8c;
    param_1[6] = uStack_88;
    param_1[7] = uStack_84;
    uVar1 = 5;
    break;
  case 0x61:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 6;
    uVar3 = 7;
    goto LAB_013d38a0;
  case 0x62:
    local_80 = local_98;
    uStack_7c = local_94;
    uStack_78 = local_90;
    local_74 = uStack_8c;
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
    cVar7 = '\x04';
    if (*puVar10 != param_2[2]) {
      iVar2 = FUN_013d2518(param_2);
      if (iVar2 == 0x7b) {
        FUN_013dd3c0(&local_68,param_2,&local_178);
        if (local_68 != 0x22) {
          FUN_016dd1aa((int)param_1 + 5,(int)&local_64 + 1,0x3b);
          *(char *)(param_1 + 1) = (char)local_64;
          *param_1 = local_68;
          return;
        }
        if ((char)local_64 != '\f') {
          local_74 = *puVar10;
          uStack_70 = *(uint *)(iVar8 + 0x54);
          uStack_6c = *(uint *)(iVar8 + 0x58);
          cVar7 = (char)local_64;
        }
      }
    }
    param_1[2] = local_80;
    param_1[3] = uStack_7c;
    param_1[4] = uStack_78;
    param_1[5] = local_74;
    param_1[6] = uStack_70;
    param_1[7] = uStack_6c;
    *(char *)(param_1 + 8) = cVar7;
    goto LAB_013d3830;
  case 0x66:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 0x106;
    uVar3 = 0xc;
    goto LAB_013d38a0;
  case 0x6e:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 0x306;
    uVar3 = 10;
    goto LAB_013d38a0;
  case 0x72:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 0x406;
    uVar3 = 0xd;
    goto LAB_013d38a0;
  case 0x74:
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = uStack_8c;
    param_1[7] = uStack_88;
    param_1[8] = uStack_84;
    *(undefined2 *)(param_1 + 9) = 0x206;
    uVar3 = 9;
LAB_013d38a0:
    param_1[1] = 0x80000002;
    *param_1 = 0x22;
    param_1[2] = uVar3;
    return;
  case 0x76:
    goto switchD_013d35b8_caseD_76;
  case 0x7a:
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = uStack_8c;
    param_1[6] = uStack_88;
    param_1[7] = uStack_84;
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
LAB_013d3830:
  *param_1 = 0x22;
  param_1[1] = 0x80000003;
  return;
}

