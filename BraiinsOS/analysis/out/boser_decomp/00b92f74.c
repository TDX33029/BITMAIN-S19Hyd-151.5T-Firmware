// FUN_00b92f74 @ 00b92f74 size=596 calls_out=6 calls_in=1
// strings: 

void FUN_00b92f74(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_50;
  int *local_4c;
  undefined4 uStack_48;
  int *local_44;
  uint local_40;
  undefined4 local_38;
  int *local_34;
  undefined4 uStack_30;
  int *local_2c;
  
  uVar4 = param_2[4];
  if (uVar4 == 0) {
    local_58 = 0;
    local_5c = 4;
    local_60 = 0;
  }
  else {
    uVar10 = 0;
    uVar2 = ((uint)(param_2[3] - param_2[1]) >> 2) * -0x55555555;
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    if (0xaaaaaaa < uVar2) {
LAB_00b92fd0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar2 * 0xc);
    }
    if (param_2[3] == param_2[1]) {
      local_5c = 4;
      uVar2 = 0;
    }
    else {
      uVar10 = 4;
      local_5c = FUN_01298504(uVar2 * 0xc,4);
      if (local_5c == 0) goto LAB_00b92fd0;
    }
    local_58 = 0;
    uVar1 = ((uint)(param_2[3] - param_2[1]) >> 2) * -0x55555555;
    if (uVar4 < uVar1) {
      uVar1 = uVar4;
    }
    local_60 = uVar2;
    if (uVar2 < uVar1) {
      FUN_006520b4(&local_60,0,uVar1,4,0xc);
    }
  }
  uVar2 = local_58;
  uVar4 = local_5c;
  local_50 = *param_2;
  local_4c = (int *)param_2[1];
  uStack_48 = param_2[2];
  piVar3 = (int *)param_2[3];
  local_40 = param_2[4];
  local_44 = piVar3;
  if (local_40 != 0) {
    uVar1 = ((uint)((int)piVar3 - (int)local_4c) >> 2) * -0x55555555;
    if (uVar1 <= local_40) {
LAB_00b93130:
      piVar3 = local_44;
      local_38 = local_50;
      local_34 = local_4c;
      uStack_30 = uStack_48;
      local_2c = local_44;
      if (local_4c != local_44) {
        iVar5 = uVar4 + uVar2 * 0xc;
        piVar7 = local_4c;
        do {
          FUN_01bed864(iVar5,piVar7,0xc);
          piVar7 = piVar7 + 3;
          iVar5 = iVar5 + 0xc;
          uVar2 = uVar2 + 1;
        } while (piVar7 != piVar3);
        local_34 = piVar7;
      }
      local_58 = uVar2;
      FUN_01323e8c(&local_38);
      goto LAB_00b93194;
    }
    uVar9 = uVar1 + ~local_40;
    uVar6 = uVar1;
    if (CARRY4(uVar1,~local_40)) {
      uVar6 = uVar9;
    }
    piVar8 = local_4c + 1;
    piVar7 = local_4c + uVar6 * 3;
    local_4c = piVar7;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      FUN_019bb7e0(piVar8[-1],*piVar8);
      piVar8 = piVar8 + 3;
    }
    if ((uVar9 <= uVar1) && (piVar7 != piVar3)) {
      local_4c = piVar7 + 3;
      if (*piVar7 != -0x80000000) {
        FUN_019bb7e0(*piVar7,piVar7[1]);
        goto LAB_00b93130;
      }
    }
  }
  local_58 = uVar2;
  FUN_01323e8c(&local_50);
LAB_00b93194:
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return;
}

