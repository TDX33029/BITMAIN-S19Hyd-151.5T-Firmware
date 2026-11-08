// FUN_01501c80 @ 01501c80 size=780 calls_out=3 calls_in=1
// strings: 

void FUN_01501c80(undefined1 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_58;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  uint local_3c;
  uint local_38;
  char local_34;
  char cStack_33;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  local_34 = '\x01';
  cStack_33 = '\0';
  local_40 = 1;
  local_44 = 0x2e;
  local_58 = 0x2e;
  local_3c = 0;
  local_4c = 0;
  local_54 = param_2;
  local_50 = param_3;
  local_48 = param_3;
  local_38 = param_3;
  FUN_0062a644(&local_30,&local_58);
  uVar1 = local_3c;
  if (local_30 == 1) {
    local_3c = local_28;
    iVar4 = local_2c - uVar1;
  }
  else {
    if ((cStack_33 != '\0') || ((cStack_33 = '\x01', local_34 != '\x01' && (local_38 == local_3c))))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a7510);
    }
    iVar4 = local_38 - local_3c;
    param_2 = local_54;
  }
  FUN_01502240(&local_30,param_2 + uVar1,iVar4);
  uVar3 = local_24;
  uVar1 = local_28;
  iVar4 = local_54;
  if ((local_30 & 1) == 0) {
    if (cStack_33 != '\0') {
LAB_01501d6c:
      uVar6 = 0;
      local_30._1_1_ = 8;
      local_24 = 0;
      if (uVar3 != 0 || uVar3 < (3 < uVar1)) goto LAB_01501e40;
      goto LAB_01501d84;
    }
    FUN_0062a644(&local_30,&local_58);
    uVar6 = local_3c;
    if (local_30 == 1) {
      local_3c = local_28;
      iVar5 = local_2c - uVar6;
    }
    else {
      if ((cStack_33 != '\0') ||
         ((cStack_33 = '\x01', local_34 != '\x01' && (local_38 == local_3c)))) goto LAB_01501d6c;
      iVar5 = local_38 - local_3c;
      iVar4 = local_54;
    }
    FUN_01502240(&local_30,iVar4 + uVar6,iVar5);
    uVar6 = local_28;
    iVar4 = local_54;
    if ((local_30 & 1) == 0) {
      if (cStack_33 != '\0') {
LAB_01501e40:
        *(uint *)(param_1 + 0xc) = uVar3;
        *(uint *)(param_1 + 0x10) = uVar6;
        *(uint *)(param_1 + 8) = uVar1;
        *(uint *)(param_1 + 0x14) = local_24;
        *param_1 = 0;
        return;
      }
      FUN_0062a644(&local_30,&local_58);
      uVar2 = local_3c;
      if (local_30 == 1) {
        local_3c = local_28;
        iVar5 = local_2c - uVar2;
      }
      else {
        if ((cStack_33 != '\0') ||
           ((cStack_33 = '\x01', local_34 != '\x01' && (local_38 == local_3c)))) goto LAB_01501e40;
        iVar5 = local_38 - local_3c;
        iVar4 = local_54;
      }
      FUN_01502240(&local_30,iVar4 + uVar2,iVar5);
      iVar4 = local_54;
      if ((local_30 & 1) == 0) {
        if (cStack_33 == '\0') {
          FUN_0062a644(&local_30,&local_58);
          if (local_30 == 1) {
            local_2c = local_2c - local_3c;
          }
          else {
            if ((cStack_33 != '\0') || ((local_34 != '\x01' && (local_38 == local_3c))))
            goto LAB_01501e40;
            local_2c = local_38 - local_3c;
            iVar4 = local_54;
          }
          FUN_01502240(&local_30,iVar4 + local_3c,local_2c);
          local_30._1_1_ = 9;
          goto LAB_01501d84;
        }
        goto LAB_01501e40;
      }
    }
  }
LAB_01501d84:
  param_1[1] = local_30._1_1_;
  *param_1 = 1;
  return;
}

