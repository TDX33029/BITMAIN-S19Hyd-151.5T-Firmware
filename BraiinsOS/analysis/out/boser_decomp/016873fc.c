// FUN_016873fc @ 016873fc size=396 calls_out=2 calls_in=5
// strings: 

void FUN_016873fc(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  local_5c = *param_2;
  if (1 < local_5c - 1U) {
    iVar6 = param_2[2];
    uVar2 = 0;
    local_38 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5] - 1;
    local_58 = param_2[1];
    local_44 = (undefined1)param_2[6];
    uVar1 = param_2[5];
    local_54 = iVar6;
    local_50 = local_38;
    local_4c = uVar4;
    do {
      if (param_5 < local_38) {
        if (-0x41 < *(char *)(iVar6 + (int)param_5)) {
LAB_01687560:
          *param_1 = 1;
          param_1[1] = param_3;
          param_1[2] = param_4;
          return;
        }
      }
      else if (param_5 == (uint *)local_38) goto LAB_01687560;
      if (uVar1 == 0) goto LAB_0168757c;
      uVar3 = uVar1 - 1;
      bVar8 = uVar1 <= uVar4;
      bVar7 = uVar4 == uVar1;
      if (!bVar8 || bVar7) {
        bVar8 = local_38 <= uVar5;
        bVar7 = uVar5 == local_38;
      }
      local_40 = uVar4;
      local_3c = uVar3;
      if (bVar8 && !bVar7) {
        local_30 = FUN_0065fd28;
        local_34 = &local_40;
        local_28 = FUN_012fd02c;
        local_2c = &local_38;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
      }
      local_48 = uVar3;
      FUN_0168111c(&local_34,param_6,&local_5c);
      if (local_34 == (uint *)0x2) {
        uVar2 = 2;
        param_1[1] = local_30;
        goto LAB_0168757c;
      }
      uVar1 = uVar3;
      param_3 = local_30;
      param_4 = local_2c;
      param_5 = local_2c;
      if (((uint)local_34 & 1) == 0) {
LAB_0168757c:
        *param_1 = uVar2;
        return;
      }
    } while( true );
  }
  if (param_5 < (uint)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_01687548:
      uVar2 = 1;
      goto LAB_0168754c;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_01687548;
  uVar2 = 0;
LAB_0168754c:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

