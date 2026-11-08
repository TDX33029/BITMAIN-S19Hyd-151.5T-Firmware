// FUN_01370168 @ 01370168 size=2448 calls_out=9 calls_in=2
// strings: 

void FUN_01370168(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if (param_5 == 1) {
    FUN_013717fc(&local_78,param_2,param_3);
    iVar3 = local_70;
    iVar8 = local_74;
    if (local_78 != 0x2a) {
LAB_01370338:
      param_1[3] = local_6c;
      param_1[4] = iStack_68;
      param_1[5] = local_64;
      param_1[6] = local_60;
      param_1[7] = local_5c;
      param_1[8] = iStack_58;
      param_1[9] = iStack_54;
      param_1[10] = local_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = iStack_48;
      param_1[0xd] = iStack_44;
      param_1[0xe] = iStack_40;
      param_1[0xf] = iStack_3c;
      *param_1 = local_78;
      param_1[1] = local_74;
      param_1[2] = local_70;
      return;
    }
    if (param_4 == 0) {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370aec;
      iVar2 = *(int *)(param_2 + 0x3c);
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      uVar9 = 7;
      local_70 = 4;
      local_74 = 0;
      local_6c = 0;
      local_78 = 7;
      if (iVar2 == *(int *)(param_2 + 0x34)) {
        FUN_013c40f0();
      }
    }
    else {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370ae0;
      iVar2 = *(int *)(param_2 + 0x3c);
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      uVar9 = 6;
      local_70 = 4;
      local_74 = 0;
      local_6c = 0;
      local_78 = 6;
      if (iVar2 == *(int *)(param_2 + 0x34)) {
        FUN_013c40f0();
      }
    }
    *(int *)(param_2 + 0x3c) = iVar2 + 1;
    puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar2 * 0x10);
    *puVar6 = uVar9;
    puVar6[1] = 0;
    puVar6[2] = 4;
    puVar6[3] = 0;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar7 = *(uint *)(param_2 + 0x30),
       uVar7 < (uint)(*(int *)(param_2 + 0x58) + (iVar2 + 1) * 0x10))) goto LAB_013708b8;
    iVar1 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x20) = iVar1 + 1;
    if (iVar1 != -1) {
LAB_01370ad4:
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01892940);
    }
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_78,param_2 + 0x24,iVar3,iVar2);
    iVar3 = *(int *)(param_2 + 0x20) + 1;
    *(int *)(param_2 + 0x20) = iVar3;
    if (local_78 != 0x2a) goto LAB_01370a5c;
    if (iVar3 != 0) goto LAB_01370ad4;
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_78,param_2 + 0x24,iVar2,iVar8);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  }
  else {
    if (param_5 == 0) {
      if ((**(int **)(param_3 + 0x18) == 1) && ((*(int **)(param_3 + 0x18))[1] != 0)) {
        if (param_4 == 0) {
          if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370aec;
          iVar8 = *(int *)(param_2 + 0x3c);
          *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
          uVar9 = 7;
          local_70 = 4;
          local_74 = 0;
          local_6c = 0;
          local_78 = 7;
          if (iVar8 == *(int *)(param_2 + 0x34)) {
            FUN_013c40f0();
          }
        }
        else {
          if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370ae0;
          iVar8 = *(int *)(param_2 + 0x3c);
          *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
          uVar9 = 6;
          local_70 = 4;
          local_74 = 0;
          local_6c = 0;
          local_78 = 6;
          if (iVar8 == *(int *)(param_2 + 0x34)) {
            FUN_013c40f0();
          }
        }
        *(int *)(param_2 + 0x3c) = iVar8 + 1;
        puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar8 * 0x10);
        *puVar6 = uVar9;
        puVar6[1] = 0;
        puVar6[2] = 4;
        puVar6[3] = 0;
        if ((*(int *)(param_2 + 0x2c) != 1) ||
           (uVar7 = *(uint *)(param_2 + 0x30),
           (uint)(*(int *)(param_2 + 0x58) + (iVar8 + 1) * 0x10) <= uVar7)) {
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
          FUN_013717fc(&local_78,param_2,param_3);
          iVar3 = local_70;
          if (local_78 != 0x2a) {
            param_1[3] = local_6c;
            param_1[4] = iStack_68;
            param_1[5] = local_64;
            param_1[6] = local_60;
            param_1[7] = local_5c;
            param_1[8] = iStack_58;
            param_1[9] = iStack_54;
            param_1[10] = local_50;
            param_1[0xb] = local_4c;
            param_1[0xc] = iStack_48;
            param_1[0xd] = iStack_44;
            param_1[0xe] = iStack_40;
            param_1[0xf] = iStack_3c;
            *param_1 = local_78;
            param_1[1] = local_74;
            param_1[2] = local_70;
            return;
          }
          if (*(int *)(param_2 + 0x20) == 0) {
            *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
            FUN_013b6288(&local_78,param_2 + 0x24,iVar8);
            iVar2 = *(int *)(param_2 + 0x20) + 1;
            *(int *)(param_2 + 0x20) = iVar2;
            if (local_78 == 0x2a) {
              if (iVar2 != 0) goto LAB_01370ad4;
              *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
              FUN_013b6288(&local_78,param_2 + 0x24,iVar3,iVar8);
              *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
              if (local_78 == 0x2a) {
                *param_1 = 0x2a;
                param_1[1] = iVar8;
                param_1[2] = iVar8;
                return;
              }
            }
            goto LAB_01370a5c;
          }
          goto LAB_01370ad4;
        }
LAB_013708b8:
        iVar8 = *(int *)(param_2 + 0x20);
        *param_1 = 0x27;
        param_1[1] = uVar7;
        *(int *)(param_2 + 0x20) = iVar8 + 1;
        return;
      }
      FUN_013717fc(&local_78,param_2,param_3);
      iVar3 = local_70;
      iVar8 = local_74;
      if (local_78 != 0x2a) {
        param_1[3] = local_6c;
        param_1[4] = iStack_68;
        param_1[5] = local_64;
        param_1[6] = local_60;
        param_1[7] = local_5c;
        param_1[8] = iStack_58;
        param_1[9] = iStack_54;
        param_1[10] = local_50;
        param_1[0xb] = local_4c;
        param_1[0xc] = iStack_48;
        param_1[0xd] = iStack_44;
        param_1[0xe] = iStack_40;
        param_1[0xf] = iStack_3c;
        *param_1 = local_78;
        param_1[1] = local_74;
        param_1[2] = local_70;
        return;
      }
      if (param_4 == 0) {
        if (*(int *)(param_2 + 0x20) != 0) {
LAB_01370aec:
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_01892900);
        }
        iVar2 = *(int *)(param_2 + 0x3c);
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        local_70 = 4;
        local_74 = 0;
        local_6c = 0;
        local_78 = 7;
        if (iVar2 == *(int *)(param_2 + 0x34)) {
          FUN_013c40f0();
        }
        iVar1 = iVar2 + 1;
        *(int *)(param_2 + 0x3c) = iVar1;
        puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar2 * 0x10);
        *puVar6 = 7;
        puVar6[1] = 0;
        puVar6[2] = 4;
        puVar6[3] = 0;
        iVar5 = *(int *)(param_2 + 0x2c);
      }
      else {
        if (*(int *)(param_2 + 0x20) != 0) {
LAB_01370ae0:
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_018929d0);
        }
        iVar2 = *(int *)(param_2 + 0x3c);
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        local_70 = 4;
        local_74 = 0;
        local_6c = 0;
        local_78 = 6;
        if (iVar2 == *(int *)(param_2 + 0x34)) {
          FUN_013c40f0();
        }
        iVar1 = iVar2 + 1;
        *(int *)(param_2 + 0x3c) = iVar1;
        puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar2 * 0x10);
        *puVar6 = 6;
        puVar6[1] = 0;
        puVar6[2] = 4;
        puVar6[3] = 0;
        iVar5 = *(int *)(param_2 + 0x2c);
      }
      if ((iVar5 == 1) &&
         (uVar7 = *(uint *)(param_2 + 0x30), uVar7 < (uint)(*(int *)(param_2 + 0x58) + iVar1 * 0x10)
         )) goto LAB_013708b8;
      iVar1 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar1 + 1;
      if (iVar1 != -1) goto LAB_01370ad4;
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      FUN_013b6288(&local_78,param_2 + 0x24,iVar3,iVar2);
      iVar3 = *(int *)(param_2 + 0x20) + 1;
      *(int *)(param_2 + 0x20) = iVar3;
      if (local_78 == 0x2a) {
        if (iVar3 != 0) goto LAB_01370ad4;
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        FUN_013b6288(&local_78,param_2 + 0x24,iVar2,iVar8);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        if (local_78 != 0x2a) {
          *param_1 = local_78;
          param_1[1] = local_74;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = iStack_68;
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = local_5c;
          param_1[8] = iStack_58;
          param_1[9] = iStack_54;
          param_1[10] = local_50;
          param_1[0xb] = local_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          param_1[0xe] = iStack_40;
          param_1[0xf] = iStack_3c;
          return;
        }
        if (param_4 == 0) {
          FUN_01375fd4(&local_78,param_2);
        }
        else {
          FUN_013760bc();
        }
        iVar3 = local_74;
        if (local_78 != 0x2a) {
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = iStack_68;
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = local_5c;
          param_1[8] = iStack_58;
          param_1[9] = iStack_54;
          param_1[10] = local_50;
          param_1[0xb] = local_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          param_1[0xe] = iStack_40;
          param_1[0xf] = iStack_3c;
          *param_1 = local_78;
          param_1[1] = local_74;
          return;
        }
        FUN_013761a4(&local_78,param_2);
        iVar1 = local_74;
        if (local_78 != 0x2a) {
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = iStack_68;
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = local_5c;
          param_1[8] = iStack_58;
          param_1[9] = iStack_54;
          param_1[10] = local_50;
          param_1[0xb] = local_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          param_1[0xe] = iStack_40;
          param_1[0xf] = iStack_3c;
          *param_1 = local_78;
          param_1[1] = local_74;
          return;
        }
        FUN_01371010(&local_78,param_2,iVar3,iVar8);
        if (((local_78 == 0x2a) && (FUN_01371010(&local_78,param_2,iVar3,iVar1), local_78 == 0x2a))
           && (FUN_01371010(&local_78,param_2,iVar2,iVar1), local_78 == 0x2a)) {
          *param_1 = 0x2a;
          param_1[1] = iVar3;
          param_1[2] = iVar1;
          return;
        }
      }
      goto LAB_01370a5c;
    }
    local_28 = param_5 + -1;
    local_2c = 0;
    local_34 = param_2;
    local_30 = param_3;
    FUN_01375814(&local_78,param_2,&local_34);
    iVar3 = local_70;
    iVar8 = local_74;
    if (local_78 != 0x2a) goto LAB_01370338;
    FUN_013717fc(&local_78,param_2,param_3);
    iVar5 = local_70;
    iVar1 = local_74;
    if (local_78 != 0x2a) {
      param_1[3] = local_6c;
      param_1[4] = iStack_68;
      param_1[5] = local_64;
      param_1[6] = local_60;
      param_1[7] = local_5c;
      param_1[8] = iStack_58;
      param_1[9] = iStack_54;
      param_1[10] = local_50;
      param_1[0xb] = local_4c;
      param_1[0xc] = iStack_48;
      param_1[0xd] = iStack_44;
      param_1[0xe] = iStack_40;
      param_1[0xf] = iStack_3c;
      *param_1 = local_78;
      param_1[1] = local_74;
      param_1[2] = local_70;
      return;
    }
    if (param_4 == 0) {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370aec;
      iVar2 = *(int *)(param_2 + 0x3c);
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      local_70 = 4;
      uVar9 = 7;
      local_74 = 0;
      local_6c = 0;
      local_78 = 7;
      if (iVar2 == *(int *)(param_2 + 0x34)) {
        FUN_013c40f0();
      }
    }
    else {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_01370ae0;
      iVar2 = *(int *)(param_2 + 0x3c);
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
      local_70 = 4;
      uVar9 = 6;
      local_74 = 0;
      local_6c = 0;
      local_78 = 6;
      if (iVar2 == *(int *)(param_2 + 0x34)) {
        FUN_013c40f0();
      }
    }
    *(int *)(param_2 + 0x3c) = iVar2 + 1;
    puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar2 * 0x10);
    *puVar6 = uVar9;
    puVar6[1] = 0;
    puVar6[2] = 4;
    puVar6[3] = 0;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar7 = *(uint *)(param_2 + 0x30),
       uVar7 < (uint)(*(int *)(param_2 + 0x58) + (iVar2 + 1) * 0x10))) goto LAB_013708b8;
    iVar4 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x20) = iVar4 + 1;
    if (iVar4 != -1) goto LAB_01370ad4;
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_78,param_2 + 0x24,iVar3,iVar1);
    iVar3 = *(int *)(param_2 + 0x20) + 1;
    *(int *)(param_2 + 0x20) = iVar3;
    if (local_78 != 0x2a) goto LAB_01370a5c;
    if (iVar3 != 0) goto LAB_01370ad4;
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_78,param_2 + 0x24,iVar5,iVar2);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    if (local_78 != 0x2a) goto LAB_01370a5c;
    FUN_01371010(&local_78,param_2,iVar2,iVar1);
  }
  if (local_78 == 0x2a) {
    param_1[1] = iVar8;
    *param_1 = 0x2a;
    param_1[2] = iVar2;
    return;
  }
LAB_01370a5c:
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = iStack_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  param_1[7] = local_5c;
  param_1[8] = iStack_58;
  param_1[9] = iStack_54;
  param_1[10] = local_50;
  param_1[0xb] = local_4c;
  param_1[0xc] = iStack_48;
  param_1[0xd] = iStack_44;
  param_1[0xe] = iStack_40;
  param_1[0xf] = iStack_3c;
  return;
}

