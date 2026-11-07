// FUN_01687260 @ 01687260 size=396 calls_out=2 calls_in=5
// strings: 

void FUN_01687260(undefined4 *param_1,int *param_2,code *param_3,uint *param_4,uint *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
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
    uVar1 = 0;
    local_38 = param_2[3];
    uVar5 = param_2[5] - 1;
    uVar4 = param_2[4];
    local_58 = param_2[1];
    local_44 = (undefined1)param_2[6];
    uVar2 = param_2[5];
    local_54 = iVar6;
    local_50 = local_38;
    local_4c = uVar4;
    do {
      if (param_5 < local_38) {
        if (-0x41 < *(char *)(iVar6 + (int)param_5)) {
LAB_016873c4:
          *param_1 = 1;
          param_1[1] = param_3;
          param_1[2] = param_4;
          return;
        }
      }
      else if (param_5 == (uint *)local_38) goto LAB_016873c4;
      if (uVar2 == 0) goto LAB_016873e0;
      uVar3 = uVar2 - 1;
      bVar8 = uVar2 <= uVar4;
      bVar7 = uVar4 == uVar2;
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
      FUN_016834b8(&local_34,param_6,param_7,&local_5c);
      if (local_34 == (uint *)0x2) {
        uVar1 = 2;
        param_1[1] = local_30;
        goto LAB_016873e0;
      }
      param_3 = local_30;
      param_4 = local_2c;
      uVar2 = uVar3;
      param_5 = local_2c;
      if (((uint)local_34 & 1) == 0) {
LAB_016873e0:
        *param_1 = uVar1;
        return;
      }
    } while( true );
  }
  if (param_5 < (uint)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_016873ac:
      uVar1 = 1;
      goto LAB_016873b0;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_016873ac;
  uVar1 = 0;
LAB_016873b0:
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

