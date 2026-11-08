// FUN_00dccd94 @ 00dccd94 size=208 calls_out=3 calls_in=1
// strings: 

void FUN_00dccd94(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = param_2[8];
  uVar3 = 0;
  iVar2 = uVar6 * 0xc;
  if (0xaaaaaaa < uVar6) {
LAB_00dccdc0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  uVar5 = 0;
  if (iVar2 == 0) {
    uVar1 = 4;
    uVar6 = 0;
  }
  else {
    uVar3 = 4;
    uVar1 = FUN_01298504(iVar2,4);
    if (uVar1 == 0) goto LAB_00dccdc0;
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  uStack_28 = param_2[8];
  puVar4 = (undefined4 *)(uVar1 + 4);
  uVar3 = param_2[9];
  uVar7 = param_2[10];
  while (iVar2 = FUN_006bf7fc(&local_48), iVar2 != 0) {
    *puVar4 = uVar7;
    puVar4[-1] = uVar3;
    uVar5 = uVar5 + 1;
    puVar4[1] = iVar2;
    puVar4 = puVar4 + 3;
  }
  *param_1 = uVar6;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  return;
}

