// FUN_01968bfc @ 01968bfc size=840 calls_out=6 calls_in=1
// strings: Array  | Object 

undefined4 FUN_01968bfc(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 **local_50;
  undefined *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 **local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x01968c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056cbe8,4);
    return uVar7;
  case 1:
    local_5c = (undefined4 *)(param_1 + 1);
    uVar7 = *param_2;
    uVar10 = param_2[1];
    local_4c = &LAB_0164c854;
    puVar8 = &DAT_005b3e2e;
    break;
  case 2:
    uVar7 = *param_2;
    uVar10 = param_2[1];
    local_5c = (undefined4 *)(param_1 + 8);
    local_4c = &LAB_0196a8d0;
    puVar8 = &DAT_005861a5;
    break;
  case 3:
    local_5c = (undefined4 *)(param_1 + 4);
    uVar7 = *param_2;
    uVar10 = param_2[1];
    local_4c = &LAB_01ad035c;
    puVar8 = &DAT_0058ecdc;
    break;
  case 4:
    iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,"Array ",6);
    if (iVar6 != 0) {
      return 1;
    }
    iVar9 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 0xc);
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
    if (iVar6 != 0) {
      iVar6 = iVar6 * 0x18;
      bVar2 = false;
      do {
        uVar1 = uVar4 & 1;
        uVar4 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            if (bVar2) {
              iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
              uVar4 = 1;
              if (iVar5 != 0) goto LAB_01968dac;
            }
            uVar4 = FUN_01968bfc(iVar9,param_2);
          }
          else if ((bVar2) || (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"\n",1), iVar5 == 0)
                  ) {
            local_48 = param_2[2];
            local_44 = param_2[3];
            local_54 = (int)&local_2c + 4;
            local_2c._4_4_ = CONCAT31(local_2c._5_3_,1);
            local_5c = (undefined4 *)*param_2;
            local_58 = param_2[1];
            local_4c = &DAT_01ce45f8;
            local_50 = &local_5c;
            iVar5 = FUN_01968bfc(iVar9,&local_50);
            if (iVar5 == 0) {
              uVar4 = (**(code **)(local_4c + 0xc))(local_50,&DAT_005312e2,2);
            }
            else {
              uVar4 = 1;
            }
          }
        }
LAB_01968dac:
        iVar9 = iVar9 + 0x18;
        iVar6 = iVar6 + -0x18;
        bVar2 = true;
      } while (iVar6 != 0);
    }
    if (uVar4 == 0) {
      uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"]",1);
      return uVar7;
    }
    return 1;
  case 5:
    iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,"Object ",7);
    if (iVar6 != 0) {
      return 1;
    }
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
    local_48 = *(int *)(param_1 + 4);
    local_44 = *(undefined4 *)(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0xc);
    if (local_48 == 0) {
      local_30 = 0;
    }
    local_50 = (undefined4 **)(uint)(local_48 != 0);
    local_58 = CONCAT31(0x10000,uVar3);
    local_3c = 0;
    local_4c = (undefined *)0x0;
    local_5c = param_2;
    local_40 = local_50;
    local_38 = local_48;
    local_34 = local_44;
    while( true ) {
      uVar11 = FUN_01a41998(&local_50);
      if ((int)uVar11 == 0) break;
      local_2c = uVar11;
      FUN_01302ea4(&local_5c,&local_2c,&LAB_01ad035c,(int)&local_2c + 4,&LAB_01968bf4);
    }
    uVar7 = FUN_01303100(&local_5c);
    return uVar7;
  }
  local_50 = &local_5c;
  uVar7 = FUN_012fa178(uVar7,uVar10,puVar8,&local_50);
  return uVar7;
}

