// FUN_013b796c @ 013b796c size=408 calls_out=3 calls_in=1
// strings: 

void FUN_013b796c(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int local_60;
  int iStack_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int iStack_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (1 < *param_2 - 1U) {
    local_60 = *param_2;
    iStack_5c = param_2[1];
    iVar5 = param_2[2];
    local_38 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    iStack_48 = param_2[6];
    uVar1 = *param_6;
    uVar7 = param_6[1];
    uVar8 = param_6[2];
    uVar9 = param_6[3];
    uVar2 = uVar3;
    local_58 = iVar5;
    local_54 = local_38;
    local_50 = uVar3;
    local_4c = uVar4;
    do {
      uVar3 = uVar3 + 1;
      if (param_5 < local_38) {
        if (-0x41 < *(char *)(iVar5 + (int)param_5)) {
LAB_013b7aa0:
          *param_1 = 1;
          param_1[1] = param_3;
          param_1[2] = param_4;
          return;
        }
      }
      else if (param_5 == (uint *)local_38) goto LAB_013b7aa0;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893ac0);
      }
      uVar6 = uVar2 + 1;
      bVar10 = local_38 <= uVar4;
      if (uVar4 <= local_38) {
        bVar10 = uVar4 + 1 <= uVar2;
      }
      local_40 = uVar6;
      local_3c = uVar4;
      if (bVar10) {
        local_30 = FUN_005ffff4;
        local_34 = &local_40;
        local_28 = &LAB_00fac484;
        local_2c = &local_38;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
      }
      local_50 = uVar6;
      FUN_01382124(&local_34,uVar1,uVar7,&local_60,uVar8,uVar9);
      uVar2 = uVar6;
      param_3 = local_30;
      param_4 = local_2c;
      param_5 = local_2c;
      if (local_34 == (uint *)0x0) {
        *param_1 = 0;
        return;
      }
    } while( true );
  }
  if (param_5 < (uint)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_013b7a88:
      uVar1 = 1;
      goto LAB_013b7a8c;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_013b7a88;
  uVar1 = 0;
LAB_013b7a8c:
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

