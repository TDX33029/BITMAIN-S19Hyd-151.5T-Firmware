// FUN_01375814 @ 01375814 size=896 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01375814(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
    uVar7 = param_3[2];
    uVar5 = param_3[3];
    if (uVar5 <= uVar7) goto LAB_01375a60;
    uVar2 = *param_3;
    uVar4 = param_3[1];
    FUN_013717fc(&local_68);
    uVar7 = uVar7 + 1;
    iVar1 = local_64;
    iVar6 = local_60;
  }
  else {
    uVar7 = param_3[2];
    uVar5 = param_3[3];
    if (uVar5 <= uVar7) goto LAB_01375a60;
    uVar2 = *param_3;
    uVar4 = param_3[1];
    FUN_013717fc(&local_68);
    uVar5 = uVar5 - 1;
    iVar1 = local_64;
    iVar6 = local_60;
  }
  if (local_68 == 0x2a) {
    local_68 = 0x2a;
    local_64 = iVar1;
    local_60 = iVar6;
    if ((*(byte *)(param_2 + 0xb) & 1) == 0) goto LAB_013759b0;
    do {
      iVar8 = iVar6;
      if (uVar5 <= uVar7) {
LAB_01375b08:
        *param_1 = 0x2a;
        param_1[1] = iVar1;
        param_1[2] = iVar8;
        return;
      }
      FUN_013717fc(&local_68,uVar2,uVar4);
      uVar5 = uVar5 - 1;
      iVar6 = local_60;
      while( true ) {
        if (local_68 != 0x2a) {
          if (local_68 != 0x2b) {
            param_1[3] = local_5c;
            param_1[4] = iStack_58;
            param_1[5] = local_54;
            param_1[6] = iStack_50;
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
            param_1[2] = iVar6;
            return;
          }
          goto LAB_01375b08;
        }
        if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_01892940);
        }
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        local_60 = iVar6;
        FUN_013b6288(&local_68,param_2 + 0x24,iVar8);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        if (local_68 != 0x2a) {
          *param_1 = local_68;
          param_1[1] = local_64;
          param_1[2] = local_60;
          param_1[3] = local_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
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
        if ((*(byte *)(param_2 + 0xb) & 1) != 0) break;
LAB_013759b0:
        iVar8 = iVar6;
        if (uVar5 <= uVar7) goto LAB_01375b08;
        FUN_013717fc(&local_68,uVar2,uVar4);
        uVar7 = uVar7 + 1;
        iVar6 = local_60;
      }
    } while( true );
  }
  if (local_68 != 0x2b) {
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
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
    param_1[1] = iVar1;
    param_1[2] = iVar6;
    return;
  }
LAB_01375a60:
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018929a0);
  }
  uVar7 = *(uint *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  local_64 = 0;
  local_68 = 0;
  if (uVar7 == *(uint *)(param_2 + 0x34)) {
    FUN_013c40f0();
  }
  *(uint *)(param_2 + 0x3c) = uVar7 + 1;
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0x38) + uVar7 * 0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  if ((*(int *)(param_2 + 0x2c) == 1) &&
     (*(uint *)(param_2 + 0x30) < *(int *)(param_2 + 0x58) + (uVar7 + 1) * 0x10)) {
    iVar1 = *(int *)(param_2 + 0x20);
    iVar6 = 0x27;
    uVar7 = *(uint *)(param_2 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x20);
    iVar6 = 0x2a;
    param_1[2] = uVar7;
  }
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  *param_1 = iVar6;
  param_1[1] = uVar7;
  return;
}

