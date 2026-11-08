// FUN_01007fc4 @ 01007fc4 size=368 calls_out=4 calls_in=3
// strings: 

void FUN_01007fc4(undefined1 *param_1,uint *param_2,int param_3,int param_4,uint *param_5,
                 undefined1 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 extraout_r1;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 local_34;
  undefined4 *local_30;
  code *local_2c;
  uint uStack_28;
  
  piVar6 = (int *)param_2[4];
  uVar11 = 0;
  uVar1 = param_5[1];
  uVar5 = param_5[2];
  uVar8 = *param_5;
  uVar10 = param_2[2];
  uVar12 = param_2[3];
  *piVar6 = param_3;
  piVar6[3] = uVar1 + uVar5;
  piVar6[6] = 0;
  piVar6[1] = param_4;
  piVar6[4] = uVar8 - uVar5;
  local_34 = FUN_018162dc(piVar6,param_6);
  uVar9 = piVar6[3] - (uVar1 + uVar5);
  uVar1 = param_2[1] + (uint)CARRY4(*param_2,*piVar6 - param_3);
  *param_2 = *param_2 + (*piVar6 - param_3);
  param_2[1] = uVar1;
  pcVar4 = (code *)(uVar10 + uVar9);
  *piVar6 = 0;
  piVar6[1] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  param_2[2] = (uint)pcVar4;
  param_2[3] = uVar12 + CARRY4(uVar10,uVar9);
  uVar3 = 0;
  switch(local_34) {
  case 0:
    goto switchD_0100807c_caseD_0;
  case 1:
    uVar11 = 0;
    uVar3 = 2;
    break;
  case 0xfffffffb:
    uVar3 = 1;
    uVar11 = 0;
    break;
  default:
    local_30 = &local_34;
    local_2c = FUN_00fac2b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00593ed6,&local_30,&DAT_01881fe4);
  case 0xfffffffe:
    iVar7 = piVar6[6];
    uVar11 = 1;
    if (iVar7 != 0) {
      uVar2 = FUN_016dd8a2(iVar7);
      FUN_00fab1e0(&local_30,iVar7,uVar2);
      pcVar4 = local_2c;
      uVar1 = uStack_28;
      uVar3 = extraout_r1;
      if (local_30 != (undefined4 *)0x0) {
        pcVar4 = (code *)0x0;
      }
      goto switchD_0100807c_caseD_0;
    }
    pcVar4 = (code *)0x0;
    uVar3 = 0;
  }
switchD_0100807c_caseD_0:
  *(code **)(param_1 + 4) = pcVar4;
  *(uint *)(param_1 + 8) = uVar1;
  param_1[1] = uVar3;
  *param_1 = uVar11;
  if (uVar5 + uVar9 < uVar8) {
    uVar8 = uVar5 + uVar9;
  }
  param_5[2] = uVar8;
  return;
}

