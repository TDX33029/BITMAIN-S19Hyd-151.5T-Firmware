// FUN_00df1564 @ 00df1564 size=320 calls_out=3 calls_in=3
// strings: 

void FUN_00df1564(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_70;
  int local_6c;
  undefined4 uStack_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar4 = 0;
  uVar3 = param_2[3] - param_2[1];
  if (0x7ffffffc < uVar3) {
LAB_00df158c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,uVar3);
  }
  uVar6 = 0;
  if (param_2[3] == param_2[1]) {
    uVar1 = 4;
    uVar3 = 0;
  }
  else {
    uVar4 = 4;
    uVar1 = FUN_01298504(uVar3,4);
    if (uVar1 == 0) goto LAB_00df158c;
    uVar3 = uVar3 >> 6;
  }
  local_70 = *param_2;
  local_6c = param_2[1];
  uStack_68 = param_2[2];
  local_64 = param_2[3];
  if (local_6c != local_64) {
    iVar5 = 0;
    uVar6 = 0;
    do {
      iVar7 = local_64 + iVar5;
      if (*(int *)(iVar7 + -0x40) == -0x80000000) break;
      uVar6 = uVar6 + 1;
      local_60 = *(int *)(iVar7 + -0x3c);
      iStack_5c = *(int *)(iVar7 + -0x38);
      iStack_58 = *(int *)(iVar7 + -0x34);
      iStack_54 = *(int *)(iVar7 + -0x30);
      iStack_50 = *(int *)(iVar7 + -0x2c);
      local_4c = *(int *)(iVar7 + -0x28);
      iStack_48 = *(int *)(iVar7 + -0x24);
      iStack_44 = *(int *)(iVar7 + -0x20);
      iStack_40 = *(int *)(iVar7 + -0x1c);
      iStack_3c = *(int *)(iVar7 + -0x18);
      local_38 = *(int *)(iVar7 + -0x14);
      iStack_34 = *(int *)(iVar7 + -0x10);
      iStack_30 = *(int *)(iVar7 + -0xc);
      iStack_2c = *(int *)(iVar7 + -8);
      iStack_28 = *(int *)(iVar7 + -4);
      piVar2 = (int *)(uVar1 - iVar5);
      *piVar2 = *(int *)(iVar7 + -0x40);
      iVar5 = iVar5 + -0x40;
      piVar2[1] = local_60;
      piVar2[2] = iStack_5c;
      piVar2[3] = iStack_58;
      piVar2[4] = iStack_54;
      piVar2[5] = iStack_50;
      piVar2[6] = local_4c;
      piVar2[7] = iStack_48;
      piVar2[8] = iStack_44;
      piVar2[9] = iStack_40;
      piVar2[10] = iStack_3c;
      piVar2[0xb] = local_38;
      piVar2[0xc] = iStack_34;
      piVar2[0xd] = iStack_30;
      piVar2[0xe] = iStack_2c;
      piVar2[0xf] = iStack_28;
    } while (local_64 + iVar5 != local_6c);
    local_64 = iVar7 + -0x40;
  }
  FUN_00dede10(&local_70);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  return;
}

