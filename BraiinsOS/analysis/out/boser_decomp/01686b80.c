// FUN_01686b80 @ 01686b80 size=412 calls_out=3 calls_in=11
// strings: 

void FUN_01686b80(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
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
    uVar4 = param_2[4];
    iVar2 = param_2[2];
    local_38 = param_2[3];
    local_58 = param_2[1];
    local_44 = (undefined1)param_2[6];
    local_54 = iVar2;
    local_50 = local_38;
    local_48 = uVar3;
    do {
      uVar4 = uVar4 + 1;
      if (param_5 < local_38) {
        if (-0x41 < *(char *)(iVar2 + (int)param_5)) {
LAB_01686cec:
          *param_1 = 1;
          param_1[1] = param_3;
          param_1[2] = param_4;
          return;
        }
      }
      else if (param_5 == (uint *)local_38) goto LAB_01686cec;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d0758c);
      }
      bVar6 = local_38 <= uVar3;
      bVar5 = uVar3 == local_38;
      if (!bVar6 || bVar5) {
        bVar6 = uVar3 + 1 <= uVar4;
        bVar5 = uVar4 == uVar3 + 1;
      }
      local_40 = uVar4;
      local_3c = uVar3;
      if (bVar6 && !bVar5) {
        local_30 = FUN_0065fd28;
        local_34 = &local_40;
        local_28 = FUN_012fd02c;
        local_2c = &local_38;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
      }
      local_4c = uVar4;
      FUN_0167efb0(&local_34,param_6,&local_5c);
      if (local_34 == (uint *)0x2) {
        uVar1 = 2;
        param_1[1] = local_30;
        goto LAB_01686d08;
      }
      param_3 = local_30;
      param_5 = local_2c;
      param_4 = local_2c;
      if (((uint)local_34 & 1) == 0) {
        uVar1 = 0;
LAB_01686d08:
        *param_1 = uVar1;
        return;
      }
    } while( true );
  }
  if (param_5 < (uint)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_01686cd4:
      uVar1 = 1;
      goto LAB_01686cd8;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_01686cd4;
  uVar1 = 0;
LAB_01686cd8:
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

