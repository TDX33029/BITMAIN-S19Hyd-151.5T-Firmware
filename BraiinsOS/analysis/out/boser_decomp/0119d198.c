// FUN_0119d198 @ 0119d198 size=300 calls_out=4 calls_in=0
// strings: 

void FUN_0119d198(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 *local_38;
  undefined4 *local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = 0;
  uVar4 = param_2[1] - *param_2;
  if (0x7ffffffc < uVar4) {
LAB_0119d1cc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,uVar4);
  }
  if (param_2[1] == *param_2) {
    local_58 = 4;
    local_5c = 0;
  }
  else {
    uVar3 = 4;
    local_58 = FUN_01298504(uVar4,4);
    if (local_58 == 0) goto LAB_0119d1cc;
    local_5c = uVar4 >> 2;
  }
  local_54 = 0;
  local_50 = *param_2;
  local_4c = param_2[1];
  iStack_48 = param_2[2];
  iStack_44 = param_2[3];
  iStack_40 = param_2[4];
  uVar4 = 0;
  if (local_5c < (uint)(local_4c - local_50) >> 2) {
    FUN_0132b898(&local_5c,0,(uint)(local_4c - local_50) >> 2,4,4);
    uVar4 = local_54;
  }
  uVar1 = local_58;
  local_38 = (undefined4 *)*param_2;
  local_34 = (undefined4 *)param_2[1];
  iStack_30 = param_2[2];
  iStack_2c = param_2[3];
  iStack_28 = param_2[4];
  puVar2 = local_38;
  if (local_38 != local_34) {
    do {
      local_38 = puVar2 + 1;
      *(undefined4 *)(local_58 + uVar4 * 4) = *puVar2;
      uVar4 = uVar4 + 1;
      puVar2 = local_38;
    } while (local_38 != local_34);
  }
  local_54 = uVar4;
  FUN_011e497c(&local_38);
  param_1[2] = 0;
  *param_1 = local_5c;
  param_1[1] = uVar1;
  param_1[3] = uVar4;
  return;
}

