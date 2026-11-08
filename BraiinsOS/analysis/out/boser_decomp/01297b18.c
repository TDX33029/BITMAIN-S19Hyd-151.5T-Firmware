// FUN_01297b18 @ 01297b18 size=276 calls_out=1 calls_in=1
// strings: 

void FUN_01297b18(undefined4 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int in_r12;
  uint uVar9;
  int unaff_lr;
  
  if (param_3 == 0) {
    piVar1 = param_2 + 1;
    if (*piVar1 != 0) {
      puVar5 = (uint *)*param_2;
      uVar9 = param_2[4];
      param_2 = (int *)param_2[5];
      uVar7 = *puVar5;
      uVar2 = uVar7 + uVar9;
      unaff_lr = uVar2 + (int)param_2;
      param_3 = puVar5[1] + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar7,uVar9) +
                ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar2,(uint)param_2);
    }
    uVar2 = (uint)(*piVar1 != 0);
    uVar4 = 0;
  }
  else {
    uVar2 = param_2[1];
    uVar9 = param_3 - 1;
    if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,uVar2,&DAT_01ce21fc);
    }
    iVar3 = *param_2;
    puVar5 = (uint *)(iVar3 + uVar9 * 0x18);
    uVar7 = puVar5[4];
    uVar8 = puVar5[5];
    uVar9 = uVar8 + uVar7;
    iVar6 = ((int)uVar8 >> 0x1f) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar8,uVar7);
    in_r12 = uVar9 + *puVar5;
    param_2 = (int *)(iVar6 + puVar5[1] + (uint)CARRY4(uVar9,*puVar5));
    if (param_3 == uVar2) {
      uVar2 = 0;
      uVar4 = 1;
    }
    else {
      if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_3,uVar2,&DAT_01ce220c);
      }
      puVar5 = (uint *)(iVar3 + param_3 * 0x18);
      uVar7 = *puVar5;
      unaff_lr = uVar9 + uVar7;
      uVar2 = 1;
      uVar4 = 1;
      param_3 = iVar6 + puVar5[1] + (uint)CARRY4(uVar9,uVar7);
    }
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[2] = in_r12;
  param_1[4] = uVar2;
  param_1[5] = 0;
  param_1[6] = unaff_lr;
  param_1[7] = param_3;
  return;
}

