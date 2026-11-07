// FUN_013b7ec0 @ 013b7ec0 size=456 calls_out=3 calls_in=11
// strings: 

void FUN_013b7ec0(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
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
  
  if (*param_2 - 1U < 2) {
    if (param_5 < (uint)param_2[3]) {
      if (*(char *)(param_2[2] + (int)param_5) < -0x40) {
LAB_013b7f50:
        uVar2 = 0;
        goto LAB_013b8000;
      }
    }
    else if (param_5 != (uint *)param_2[3]) goto LAB_013b7f50;
  }
  else {
    local_60 = *param_2;
    iStack_5c = param_2[1];
    iVar6 = param_2[2];
    uVar3 = param_2[3];
    local_50 = param_2[4];
    uVar5 = param_2[5];
    iStack_48 = param_2[6];
    local_58 = iVar6;
    local_54 = uVar3;
    local_4c = uVar5;
    if (uVar5 <= uVar3) {
      iVar8 = local_50 + 1;
      uVar1 = local_50;
      uVar7 = uVar5 + 1;
      if (uVar5 + 1 < local_50) {
        uVar7 = local_50;
      }
      do {
        if (param_5 < uVar3) {
          if (-0x41 < *(char *)(iVar6 + (int)param_5)) goto LAB_013b7ffc;
        }
        else if (param_5 == (uint *)uVar3) goto LAB_013b7ffc;
        if (iVar8 == 0) goto LAB_013b807c;
        uVar4 = uVar1 + 1;
        local_40 = uVar4;
        if (uVar1 == uVar7) goto LAB_013b8038;
        local_50 = uVar4;
        local_3c = uVar5;
        FUN_0137a9fc(&local_34,param_6,param_7,&local_60);
        if (local_34 == (uint *)0x2) {
          param_1[1] = local_30;
          *param_1 = 2;
          return;
        }
        iVar8 = iVar8 + 1;
        uVar1 = uVar4;
        param_3 = local_30;
        param_4 = local_2c;
        param_5 = local_2c;
        if (((uint)local_34 & 1) == 0) {
          *param_1 = 0;
          return;
        }
      } while( true );
    }
    if (param_5 < uVar3) {
      if (*(char *)(iVar6 + (int)param_5) < -0x40) {
LAB_013b8028:
        if (local_50 != 0xffffffff) {
          local_40 = local_50 + 1;
LAB_013b8038:
          local_30 = FUN_005ffff4;
          local_34 = &local_40;
          local_28 = &LAB_00fac484;
          local_2c = &local_38;
          local_3c = uVar5;
          local_38 = uVar3;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
        }
LAB_013b807c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893ac0);
      }
    }
    else if (param_5 != (uint *)uVar3) goto LAB_013b8028;
  }
LAB_013b7ffc:
  uVar2 = 1;
LAB_013b8000:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

