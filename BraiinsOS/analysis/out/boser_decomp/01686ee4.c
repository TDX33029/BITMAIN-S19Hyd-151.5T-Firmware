// FUN_01686ee4 @ 01686ee4 size=440 calls_out=3 calls_in=1
// strings: 

void FUN_01686ee4(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
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
    uVar3 = param_2[5];
    local_58 = param_2[1];
    iVar1 = param_2[2];
    local_38 = param_2[3];
    uVar7 = param_2[4];
    uVar6 = *param_6;
    uVar5 = param_6[1];
    uVar4 = param_6[2];
    uVar2 = param_6[3];
    local_44 = (undefined1)param_2[6];
    local_54 = iVar1;
    local_50 = local_38;
    local_48 = uVar3;
    do {
      uVar7 = uVar7 + 1;
      if (param_5 < local_38) {
        if (-0x41 < *(char *)(iVar1 + (int)param_5)) {
LAB_0168706c:
          *param_1 = 1;
          param_1[1] = param_3;
          param_1[2] = param_4;
          return;
        }
      }
      else if (param_5 == (uint *)local_38) goto LAB_0168706c;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d0758c);
      }
      bVar9 = local_38 <= uVar3;
      bVar8 = uVar3 == local_38;
      if (!bVar9 || bVar8) {
        bVar9 = uVar3 + 1 <= uVar7;
        bVar8 = uVar7 == uVar3 + 1;
      }
      local_40 = uVar7;
      local_3c = uVar3;
      if (bVar9 && !bVar8) {
        local_30 = FUN_0065fd28;
        local_34 = &local_40;
        local_28 = FUN_012fd02c;
        local_2c = &local_38;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
      }
      local_4c = uVar7;
      FUN_016b7df8(&local_34,uVar6,uVar5,&local_5c,uVar4,uVar2);
      if (local_34 == (uint *)0x2) {
        uVar2 = 2;
        param_1[1] = local_30;
        goto LAB_01687088;
      }
      param_3 = local_30;
      param_5 = local_2c;
      param_4 = local_2c;
      if (((uint)local_34 & 1) == 0) {
        uVar2 = 0;
LAB_01687088:
        *param_1 = uVar2;
        return;
      }
    } while( true );
  }
  if (param_5 < (uint)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_01687054:
      uVar2 = 1;
      goto LAB_01687058;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_01687054;
  uVar2 = 0;
LAB_01687058:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

