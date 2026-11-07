// FUN_01299228 @ 01299228 size=316 calls_out=3 calls_in=2
// strings: 

void FUN_01299228(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_50;
  undefined4 *local_4c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = 0;
  iVar7 = param_3 * 0x1c;
  if (0x4924924 < param_3) {
LAB_01299250:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar7);
  }
  if (iVar7 == 0) {
    local_4c = (undefined4 *)&SUB_00000004;
    local_50 = 0;
  }
  else {
    uVar5 = 4;
    local_4c = (undefined4 *)FUN_01298504(iVar7,4);
    if (local_4c == (undefined4 *)0x0) goto LAB_01299250;
    local_50 = param_3;
    if (param_3 != 0) {
      puVar6 = param_2 + 6;
      uVar3 = 0;
      puVar4 = local_4c;
      do {
        if (iVar7 == 0) break;
        uVar5 = param_2[1];
        uVar1 = param_2[2];
        uVar2 = param_2[3];
        uVar8 = *param_2;
        if (param_2[4] == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_01299f10(&local_30,puVar6[-1],*puVar6);
        }
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 7;
        *puVar4 = uVar8;
        puVar4[1] = uVar5;
        puVar4[2] = uVar1;
        iVar7 = iVar7 + -0x1c;
        puVar6 = puVar6 + 7;
        puVar4[3] = uVar2;
        puVar4[4] = local_30;
        puVar4[5] = uStack_2c;
        puVar4[6] = uStack_28;
        puVar4 = puVar4 + 7;
      } while (param_3 != uVar3);
    }
  }
  *param_1 = local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = param_3;
  return;
}

