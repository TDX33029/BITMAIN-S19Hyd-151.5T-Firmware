// FUN_0132e9b8 @ 0132e9b8 size=472 calls_out=0 calls_in=30
// strings: 

undefined4 * FUN_0132e9b8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  uVar3 = param_2[10];
  uVar2 = param_2[0xc];
  uVar7 = param_2[0xd];
  if (uVar2 != uVar3 + param_2[0xe] || uVar7 != param_2[0xb] + (uint)CARRY4(uVar3,param_2[0xe])) {
    uVar1 = param_2[9];
    uVar6 = uVar3 + uVar1;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[8] = 1;
    param_2[9] = 0;
    iVar5 = param_2[0xb] + (uint)CARRY4(uVar3,uVar1);
    param_2[10] = uVar6;
    param_2[0xb] = iVar5;
    if (*param_2 == 0) {
      iVar4 = param_2[1];
      if (iVar4 == 0) {
        iVar4 = param_2[3];
        (**(code **)(iVar4 + 0x30))(param_2[2],uVar1);
        (**(code **)(iVar4 + 0x2c))(&local_4c,param_2[2]);
        local_2c = local_44;
        local_30 = local_48;
        if (local_4c != 0) {
LAB_0132eb30:
          param_1[1] = local_30;
          *param_1 = 0;
          param_1[2] = local_2c;
          return param_1;
        }
      }
      else {
        uVar3 = param_2[3] + uVar1;
        if ((uint)param_2[4] < param_2[3] + uVar1) {
          uVar3 = param_2[4];
        }
        local_38 = param_2[4];
        param_2[3] = uVar3;
        if (local_38 <= uVar3) {
          local_3c = param_2[2];
          uVar3 = 0;
          local_34 = param_2[5];
          local_38 = 0;
          local_40 = iVar4;
          (**(code **)(param_2[7] + 0x24))(&local_30,param_2[6],&local_40);
          param_2[3] = 0;
          param_2[4] = local_38;
          param_2[5] = local_34;
          if ((char)local_30 != '\x04') goto LAB_0132eb30;
        }
        local_44 = local_38 - uVar3;
        local_48 = iVar4 + uVar3;
      }
      param_2[8] = local_48;
      *param_1 = 4;
      uVar3 = iVar5 + (uint)CARRY4(uVar6,local_44);
      bVar8 = uVar6 + local_44 <= uVar2;
      param_2[9] = local_44;
      if (uVar7 <= uVar3 && (uint)bVar8 <= uVar7 - uVar3) {
        local_44 = uVar2 - uVar6;
      }
      param_2[0xf] = local_44;
      return (undefined4 *)(uVar7 - (uVar3 + !bVar8));
    }
  }
  *param_1 = 4;
  return param_1;
}

