// FUN_0070a708 @ 0070a708 size=424 calls_out=4 calls_in=16
// strings: 

void FUN_0070a708(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  uint local_2c;
  uint local_28;
  
  local_68 = *param_2;
  iStack_64 = param_2[1];
  iStack_60 = param_2[2];
  iStack_5c = param_2[3];
  iStack_58 = param_2[4];
  local_54 = *param_3;
  iStack_50 = param_3[1];
  iStack_4c = param_3[2];
  iStack_48 = param_3[3];
  iStack_44 = param_3[4];
  if (local_68 == 1) {
    *param_1 = 1;
    if (local_54 != 2) {
      return;
    }
    piVar1 = &iStack_50;
LAB_0070a860:
    FUN_012840cc(piVar1);
    return;
  }
  if (local_54 == 0) {
    param_3 = param_2;
    if (local_68 == 0) {
      uVar2 = 0;
      goto LAB_0070a884;
    }
  }
  else {
    if (local_54 == 1) {
      *param_1 = 1;
      if (local_68 != 2) {
        return;
      }
      piVar1 = (int *)((uint)&local_68 | 4);
      goto LAB_0070a860;
    }
    if (local_68 != 0) {
      local_40 = param_2[1];
      local_3c = param_2[2];
      local_38 = param_2[3];
      iStack_34 = param_2[4];
      piVar1 = param_3 + 1;
      iVar3 = *piVar1;
      uVar6 = param_3[2];
      if (local_38 == local_3c) {
        FUN_01283c9c(&local_40,1);
      }
      *(undefined1 *)(local_40 + local_3c) = 0x2c;
      if (local_38 == local_3c) {
        local_28 = 0;
        local_2c = 1;
      }
      else {
        local_3c = local_3c + 1;
        local_28 = local_38 - local_3c;
        if (local_28 < uVar6) {
          FUN_01283c9c(&local_40,uVar6);
          local_28 = local_38 - local_3c;
        }
        iVar4 = local_3c;
        FUN_01bed4e2(local_40 + local_3c,iVar3,uVar6);
        if (uVar6 <= local_28) {
          local_3c = iVar4 + uVar6;
          param_1[1] = local_40;
          param_1[2] = local_3c;
          param_1[3] = local_38;
          param_1[4] = iStack_34;
          *param_1 = 2;
          goto LAB_0070a860;
        }
        local_2c = uVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01284540();
    }
  }
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  iVar5 = param_3[4];
  uVar2 = 2;
  param_1[1] = param_3[1];
  param_1[2] = iVar3;
  param_1[3] = iVar4;
  param_1[4] = iVar5;
LAB_0070a884:
  *param_1 = uVar2;
  return;
}

