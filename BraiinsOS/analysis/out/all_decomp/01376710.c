// FUN_01376710 @ 01376710 size=2028 calls_out=14 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01376a78) */
/* WARNING: Removing unreachable block (ram,0x01376a98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01376710(int *param_1,uint *param_2,int *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int *local_c8;
  int *local_c4;
  uint *local_c0;
  int *local_b8;
  int *piStack_b4;
  uint *puStack_b0;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  bVar1 = *(byte *)((int)param_2 + 0xb);
  bVar15 = (bVar1 & 1) != 0;
  if (bVar15) {
    bVar1 = *(byte *)((int)param_2 + 0xd);
  }
  if (bVar15 && bVar1 != 2) {
    *param_1 = 0x29;
    return;
  }
  if (param_2[8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892970);
  }
  puVar13 = param_2 + 9;
  param_2[8] = 0xffffffff;
  FUN_013b6168(puVar13);
  uVar6 = param_2[8];
  param_2[8] = uVar6 + 1;
  if (uVar6 != 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892960);
  }
  param_2[8] = 0xffffffff;
  uVar6 = param_2[1];
  uVar9 = *(undefined1 *)((int)param_2 + 9);
  if ((char)param_2[2] == '\0') {
    uVar9 = 10;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = uVar9;
  uVar10 = 0;
  if (*param_2 != 2) {
    uVar10 = *param_2;
  }
  param_2[0xc] = uVar6;
  *(byte *)((int)param_2 + 0x5d) = *(byte *)((int)param_2 + 0xb) & 1;
  param_2[0xb] = uVar10;
  *(byte *)(param_2 + 0x17) = *(byte *)((int)param_2 + 10) == 2 | *(byte *)((int)param_2 + 10) & 1;
  if (((uVar10 & 1) != 0) && (uVar6 < param_2[0x16] + param_2[0xf] * 0x10)) {
    *param_1 = 0x27;
    param_1[1] = uVar6;
    param_2[8] = 0;
    return;
  }
  param_2[8] = 0;
  if (param_4 == 0) {
LAB_013768f8:
    uVar6 = param_2[0xf];
    param_2[8] = 0xffffffff;
    local_64 = 0;
    local_68 = 0;
    if (uVar6 == param_2[0xd]) {
      FUN_013c40f0();
      uVar10 = param_2[0xb];
    }
    param_2[0xf] = uVar6 + 1;
    puVar11 = (undefined4 *)(param_2[0xe] + uVar6 * 0x10);
    *puVar11 = 0;
    puVar11[1] = 0;
    if (((uVar10 & 1) != 0) && (uVar10 = param_2[0xc], uVar10 < param_2[0x16] + (uVar6 + 1) * 0x10))
    {
      uVar6 = param_2[8];
      *param_1 = 0x27;
      param_1[1] = uVar10;
      param_2[8] = uVar6 + 1;
      return;
    }
    param_2[8] = param_2[8] + 1;
    uVar10 = uVar6;
  }
  else {
    iVar12 = param_4 * 4;
    if ((*(byte *)((int)param_2 + 0xb) & 1) == 0) {
      uVar6 = *(uint *)(*(int *)(*param_3 + 0x18) + 0x1c);
      piVar3 = param_3 + 1;
      while ((uVar6 & 1) != 0) {
        iVar12 = iVar12 + -4;
        if (iVar12 == 0) goto LAB_013768f8;
        uVar6 = *(uint *)(*(int *)(*piVar3 + 0x18) + 0x1c);
        piVar3 = piVar3 + 1;
      }
    }
    else {
      bVar1 = *(byte *)(*(int *)(*param_3 + 0x18) + 0x20);
      piVar3 = param_3 + 1;
      while ((bVar1 & 2) != 0) {
        iVar12 = iVar12 + -4;
        if (iVar12 == 0) goto LAB_013768f8;
        bVar1 = *(byte *)(*(int *)(*piVar3 + 0x18) + 0x20);
        piVar3 = piVar3 + 1;
      }
    }
    local_100 = CONCAT31(local_100._1_3_,1);
    FUN_0136fe68(&local_a8,&local_100);
    FUN_01370168(&local_68,param_2,&local_a8,0,0);
    uVar6 = local_60;
    uVar10 = local_64;
    if (local_68 != 0x2a) {
      param_1[3] = local_5c;
      param_1[4] = iStack_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
      param_1[7] = local_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = local_40;
      param_1[0xb] = local_3c;
      param_1[0xc] = iStack_38;
      param_1[0xd] = iStack_34;
      param_1[0xe] = iStack_30;
      param_1[0xf] = iStack_2c;
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      FUN_013e0514(&local_a8);
      FUN_01370b64(&local_a8);
      thunk_FUN_016d3fb4(local_90);
      return;
    }
    FUN_013e0514(&local_a8);
    FUN_01370b64(&local_a8);
    thunk_FUN_016d3fb4(local_90);
  }
  local_c4 = param_3 + param_4;
  local_c8 = param_3;
  local_c0 = param_2;
  FUN_01376fc0(&local_68,&local_c8);
  uVar7 = local_60;
  uVar14 = local_64;
  if (local_68 == 0x2b) {
    if (param_2[8] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01892980);
    }
    uVar14 = param_2[0xf];
    param_2[8] = 0xffffffff;
    local_a8 = 8;
    if (uVar14 == param_2[0xd]) {
      FUN_013c40f0();
    }
    *(undefined4 *)(param_2[0xe] + uVar14 * 0x10) = 8;
    param_2[0xf] = uVar14 + 1;
    if ((param_2[0xb] == 1) && (param_2[0xc] < param_2[0x16] + (uVar14 + 1) * 0x10)) {
      local_68 = 0x27;
      param_2[8] = param_2[8] + 1;
      local_60 = 8;
      local_64 = param_2[0xc];
      goto LAB_01376e40;
    }
    param_2[8] = param_2[8] + 1;
  }
  else if (local_68 == 0x2a) {
    FUN_01376fc0(&local_68,&local_c8);
    uVar5 = local_60;
    uVar4 = local_64;
    if (local_68 != 0x2b) {
      if (local_68 == 0x2a) {
        if (param_2[8] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_018929d0);
        }
        param_2[8] = 0xffffffff;
        FUN_013b64f8(&local_68,puVar13,0,4,0);
        uVar2 = local_64;
        uVar8 = param_2[8];
        param_2[8] = uVar8 + 1;
        if (local_68 == 0x2a) {
          if (uVar8 + 1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb715c(&DAT_018929a0);
          }
          param_2[8] = 0xffffffff;
          FUN_013b63b4(&local_68,puVar13);
          uVar8 = local_64;
          param_2[8] = param_2[8] + 1;
          if ((((local_68 == 0x2a) &&
               (FUN_01371010(&local_68,param_2,uVar2,uVar14), local_68 == 0x2a)) &&
              (FUN_01371010(&local_68,param_2,uVar7,uVar8), local_68 == 0x2a)) &&
             ((FUN_01371010(&local_68,param_2,uVar2,uVar4), local_68 == 0x2a &&
              (FUN_01371010(&local_68,param_2,uVar5,uVar8), local_68 == 0x2a)))) {
            local_b8 = local_c8;
            piStack_b4 = local_c4;
            puStack_b0 = local_c0;
            do {
              FUN_01376fc0(&local_a8,&local_b8);
              uVar14 = local_a0;
              if (local_a8 == 0x2b) {
                uVar7 = param_2[8];
                local_a8 = 0x2b;
                goto joined_r0x01376b20;
              }
              if (local_a8 != 0x2a) {
                local_100 = local_9c;
                iStack_fc = iStack_98;
                iStack_f8 = iStack_94;
                iStack_f4 = local_90;
                local_f0 = local_8c;
                iStack_ec = iStack_88;
                iStack_e8 = iStack_84;
                iStack_e4 = iStack_80;
                local_e0 = local_7c;
                iStack_dc = iStack_78;
                iStack_d8 = iStack_74;
                iStack_d4 = iStack_70;
                iStack_d0 = iStack_6c;
                local_60 = local_a0;
                local_64 = local_a4;
                local_68 = local_a8;
                goto LAB_01376e40;
              }
              FUN_01371010(&local_68,param_2,uVar2,local_a4);
            } while ((local_68 == 0x2a) &&
                    (FUN_01371010(&local_68,param_2,uVar14,uVar8), local_68 == 0x2a));
          }
        }
        local_100 = local_5c;
        iStack_fc = iStack_58;
        iStack_f8 = local_54;
        iStack_f4 = local_50;
        local_f0 = local_4c;
        iStack_ec = iStack_48;
        iStack_e8 = iStack_44;
        iStack_e4 = local_40;
        local_e0 = local_3c;
        iStack_dc = iStack_38;
        iStack_d8 = iStack_34;
        iStack_d4 = iStack_30;
        iStack_d0 = iStack_2c;
      }
      else {
        local_100 = local_5c;
        iStack_fc = iStack_58;
        iStack_f8 = local_54;
        iStack_f4 = local_50;
        local_f0 = local_4c;
        iStack_ec = iStack_48;
        iStack_e8 = iStack_44;
        iStack_e4 = local_40;
        local_e0 = local_3c;
        iStack_dc = iStack_38;
        iStack_d8 = iStack_34;
        iStack_d4 = iStack_30;
        iStack_d0 = iStack_2c;
        uVar14 = local_64;
        if (local_68 == 0x2a) goto LAB_01376b18;
      }
LAB_01376e40:
      param_1[3] = local_100;
      param_1[4] = iStack_fc;
      param_1[5] = iStack_f8;
      param_1[6] = iStack_f4;
      param_1[7] = local_f0;
      param_1[8] = iStack_ec;
      param_1[9] = iStack_e8;
      param_1[10] = iStack_e4;
      param_1[0xb] = local_e0;
      param_1[0xc] = iStack_dc;
      param_1[0xd] = iStack_d8;
      param_1[0xe] = iStack_d4;
      param_1[0xf] = iStack_d0;
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      return;
    }
  }
  else {
    local_100 = local_5c;
    iStack_fc = iStack_58;
    iStack_f8 = local_54;
    iStack_f4 = local_50;
    local_f0 = local_4c;
    iStack_ec = iStack_48;
    iStack_e8 = iStack_44;
    iStack_e4 = local_40;
    local_e0 = local_3c;
    iStack_dc = iStack_38;
    iStack_d8 = iStack_34;
    iStack_d4 = iStack_30;
    iStack_d0 = iStack_2c;
    if (local_68 != 0x2a) goto LAB_01376e40;
  }
LAB_01376b18:
  uVar7 = param_2[8];
  uVar2 = uVar14;
joined_r0x01376b20:
  if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892940);
  }
  param_2[8] = 0xffffffff;
  FUN_013b6288(&local_68,puVar13,uVar6,uVar2);
  uVar6 = param_2[8];
  param_2[8] = uVar6 + 1;
  if (local_68 != 0x2a) {
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    return;
  }
  if (uVar6 + 1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892950);
  }
  param_2[8] = 0xffffffff;
  FUN_013b3b10(&local_68,puVar13,uVar2,uVar10);
  if (local_68 == 0x2a) {
    uVar6 = param_2[8];
    local_68 = 0x2a;
  }
  else {
    param_1[2] = local_60;
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = local_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    uVar6 = param_2[8];
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_2[8] = uVar6 + 1;
  return;
}

