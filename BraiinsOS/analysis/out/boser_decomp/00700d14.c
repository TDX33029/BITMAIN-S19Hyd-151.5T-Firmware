// FUN_00700d14 @ 00700d14 size=352 calls_out=3 calls_in=6
// strings: 

void FUN_00700d14(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *local_48;
  int *local_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_1[8] == 0) {
    param_1[2] = 0;
  }
  else {
    iVar8 = param_1[8] + -1;
    param_1[8] = iVar8;
    puVar4 = (uint *)(param_1[7] + iVar8 * 8);
    uVar1 = *puVar4;
    uVar7 = puVar4[1];
    uVar3 = param_1[2];
    if (uVar7 < (uint)param_1[2]) {
      param_1[2] = uVar7;
      uVar3 = uVar7;
    }
    if (uVar7 < uVar1) {
      uStack_3c = param_1[5];
      iVar8 = uVar7 - uVar1;
      uVar1 = iVar8 + uStack_3c;
      if (uStack_3c < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uStack_3c,uStack_3c,&DAT_01d2fe30);
      }
      piVar5 = (int *)(param_1[4] + uStack_3c * 0x10);
      param_1[5] = uVar1;
      piVar2 = (int *)(param_1[4] + uVar1 * 0x10);
      uVar1 = -iVar8;
      if (*param_1 - uVar3 < uVar1) {
        FUN_006520b4(param_1,uVar3,uVar1,4,0x10);
        uVar3 = param_1[2];
      }
      uStack_38 = 0;
      local_44 = piVar5;
      if (piVar2 != piVar5) {
        piVar6 = (int *)(param_1[1] + uVar3 * 0x10 + 4);
        piVar5 = piVar5 + -4;
        do {
          local_44 = piVar5;
          iVar8 = *local_44;
          piVar5 = (int *)0x0;
          if (iVar8 != 0) {
            uVar3 = uVar3 + 1;
            local_30 = local_44[1];
            iStack_2c = local_44[2];
            iStack_28 = local_44[3];
            piVar6[-1] = iVar8;
            *piVar6 = local_30;
            piVar6[1] = iStack_2c;
            piVar6[2] = iStack_28;
            piVar5 = local_44 + -4;
            piVar6 = piVar6 + 4;
          }
        } while (iVar8 != 0 && local_44 != piVar2);
      }
      param_1[2] = uVar3;
      local_48 = piVar2;
      piStack_40 = param_1 + 3;
      FUN_00700f14(&local_48);
    }
  }
  return;
}

