// FUN_0130ba70 @ 0130ba70 size=816 calls_out=5 calls_in=2
// strings: 

void FUN_0130ba70(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 != 0) {
    iVar3 = 0;
    do {
      pcVar1 = (char *)(param_2 + iVar3);
      if (iVar3 == 0) break;
      iVar3 = iVar3 + 1;
    } while (*pcVar1 == '*');
    if (*pcVar1 == '*') {
      if ((param_3 != 1) && (*(char *)(param_2 + 1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,0,1,&DAT_01d2e668);
      }
      local_b8 = 0x80000000;
      local_bc = param_3 + -1;
      local_c0 = param_2 + 1;
      piVar2 = &local_c0;
      goto LAB_0130bc6c;
    }
  }
  local_a8 = 0;
  local_b8 = 0x80000003;
  local_b4 = 1;
  local_b0 = param_2;
  local_ac = param_3;
  FUN_0130b738(&local_60,param_2,param_3);
  iVar3 = local_54;
  local_94 = local_60;
  local_90 = local_5c;
  local_88 = local_54;
  iStack_8c = local_58;
  if (local_60 == 3) {
    FUN_0130fd94(&local_60,"-",local_5c,local_58);
    if (local_60 == 1) {
      local_94 = local_5c;
      local_90 = local_58;
      local_88 = local_50;
      iStack_8c = local_54;
      goto LAB_0130bb94;
    }
    FUN_0130b738(&local_60);
    if (local_60 != 3) {
      local_94 = local_60;
      local_90 = local_5c;
      local_88 = local_54;
      iStack_8c = local_58;
      goto LAB_0130bb94;
    }
    local_94 = iVar3;
    local_a0 = local_5c;
    local_90 = local_54;
    local_9c = local_58;
    local_98 = 0x80000002;
  }
  else {
LAB_0130bb94:
    local_98 = 0x80000003;
    if (local_94 == 1) {
      FUN_0130b738(&local_60,param_2,param_3);
      if (local_60 == 3) {
        local_74 = local_54;
        local_78 = 0x80000001;
        local_7c = local_58;
        local_80 = local_5c;
      }
      else {
        local_74 = local_60;
        iStack_70 = local_5c;
        iStack_6c = local_58;
        iStack_68 = local_54;
        local_78 = 0x80000003;
        if ((local_60 != 3) && (local_60 == 1)) {
          FUN_0130b1a8(&local_3c,param_2,param_3);
          iVar6 = local_28;
          iVar4 = local_2c;
          iVar3 = local_30;
          if (local_3c == 1) {
            iVar4 = local_38;
            iVar6 = local_34;
          }
          else {
            FUN_0130fd94(&local_3c,"-",local_38,local_34);
            if (local_3c == 0) {
              FUN_0130b1a8(&local_3c,local_38,local_34);
              if (local_3c == 0) {
                if (iVar3 != -0x80000000) {
                  local_5c = local_34;
                  local_44 = local_28;
                  local_60 = local_38;
                  goto LAB_0130bcfc;
                }
                goto LAB_0130bcf8;
              }
              iVar5 = local_38;
              iVar6 = local_34;
              iVar7 = local_30;
              iVar8 = local_2c;
            }
            else {
              iVar5 = local_38;
              iVar6 = local_34;
              iVar7 = local_30;
              iVar8 = local_2c;
            }
            FUN_0134bd64(iVar3,iVar4);
            iVar4 = iVar5;
            local_30 = iVar7;
            local_2c = iVar8;
          }
LAB_0130bcf8:
          iVar3 = -0x7ffffffd;
LAB_0130bcfc:
          if (iVar3 == -0x7ffffffd && iVar4 == 1) {
            param_1[4] = iVar6;
            param_1[5] = local_30;
            param_1[6] = local_2c;
            param_1[2] = -0x7ffffffd;
            param_1[3] = 1;
            return;
          }
          *param_1 = local_60;
          param_1[1] = local_5c;
          param_1[2] = iVar3;
          param_1[3] = iVar4;
          param_1[4] = iVar6;
          param_1[5] = local_30;
          param_1[6] = local_2c;
          param_1[7] = local_44;
          return;
        }
      }
      piVar2 = &local_80;
      goto LAB_0130bc6c;
    }
  }
  piVar2 = &local_a0;
LAB_0130bc6c:
  iVar3 = piVar2[1];
  iVar4 = piVar2[2];
  iVar6 = piVar2[3];
  *param_1 = *piVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar6;
  iVar3 = piVar2[5];
  iVar4 = piVar2[6];
  iVar6 = piVar2[7];
  param_1[4] = piVar2[4];
  param_1[5] = iVar3;
  param_1[6] = iVar4;
  param_1[7] = iVar6;
  return;
}

