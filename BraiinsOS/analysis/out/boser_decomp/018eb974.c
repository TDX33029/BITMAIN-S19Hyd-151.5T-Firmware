// FUN_018eb974 @ 018eb974 size=356 calls_out=3 calls_in=1
// strings: 

void FUN_018eb974(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *local_6c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar5 = 0;
  uVar2 = (uint)((int)param_3 - (int)param_2) / 0xc;
  iVar1 = uVar2 * 0x18;
  if (0x3ffffffc < (uint)((int)param_3 - (int)param_2)) {
LAB_018eb9b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar1);
  }
  uVar7 = 0;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)&SUB_00000004;
    uVar4 = 0;
  }
  else {
    uVar5 = 4;
    puVar3 = (undefined4 *)FUN_01298504(iVar1,4);
    uVar4 = uVar2;
    if (puVar3 == (undefined4 *)0x0) goto LAB_018eb9b0;
  }
  if (param_3 != param_2) {
    uVar7 = 0;
    puVar6 = puVar3;
    local_6c = param_2;
    do {
      if (*local_6c == -0x80000000) {
        local_58 = *local_6c;
        iStack_54 = local_6c[1];
        iStack_50 = local_6c[2];
      }
      else {
        FUN_015e8ad4(&local_58,local_6c[1],local_6c[2]);
      }
      iStack_44 = iStack_50;
      iStack_48 = iStack_54;
      iStack_4c = local_58;
      uVar7 = uVar7 + 1;
      local_3c = 4;
      local_38 = 0;
      local_40 = 0;
      local_58 = 0;
      iStack_54 = 4;
      iStack_50 = 0;
      *puVar6 = 0;
      puVar6[1] = 4;
      puVar6[2] = 0;
      puVar6[3] = iStack_4c;
      puVar6[4] = iStack_48;
      puVar6[5] = iStack_44;
      puVar6 = puVar6 + 6;
      local_6c = local_6c + 3;
    } while (uVar2 != uVar7);
  }
  param_1[3] = uVar4;
  param_1[4] = puVar3;
  param_1[5] = uVar7;
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}

