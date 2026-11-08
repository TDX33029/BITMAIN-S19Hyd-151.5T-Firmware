// FUN_018a4adc @ 018a4adc size=572 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_018a4adc(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined1 *local_38 [2];
  undefined2 local_30;
  byte local_2e;
  byte local_2d;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
    uVar8 = 1;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)((uint)&local_48 | 2);
      do {
        while (param_2 != (undefined1 *)0x22) {
          if (param_2 == &DAT_00110000) {
                    /* WARNING: Could not recover jumptable at 0x018a4d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
            return uVar8;
          }
          if ((int)param_2 < 0xd) {
            if (param_2 == (undefined1 *)0x0) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x305c;
              goto LAB_018a4c50;
            }
            if (param_2 == (undefined1 *)0x9) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x745c;
              goto LAB_018a4c50;
            }
            if (param_2 == (undefined1 *)0xa) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x6e5c;
              goto LAB_018a4c50;
            }
LAB_018a4be8:
            if ((((uint)param_2 >> 8 < 3) || (iVar3 = FUN_012faed8(param_2), iVar3 == 0)) &&
               (iVar3 = FUN_012fab74(param_2), iVar3 != 0)) {
              uVar7 = 0x81;
              uVar6 = 0x80;
              local_48 = param_2;
            }
            else {
              FUN_01af79b0(local_38,param_2);
              local_48 = local_38[0];
              uStack_44 = local_38[1];
              uVar6 = (uint)local_2e;
              uVar7 = (uint)local_2d;
              local_40 = local_30;
            }
          }
          else {
            if (param_2 == (undefined1 *)0xd) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x725c;
            }
            else if (param_2 == (undefined1 *)0x27) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x275c;
            }
            else {
              if (param_2 != (undefined1 *)0x5c) goto LAB_018a4be8;
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x5c5c;
            }
LAB_018a4c50:
            uVar6 = 0;
            local_48 = (undefined1 *)CONCAT22(local_48._2_2_,uVar2);
            uVar7 = 2;
          }
          puVar1 = local_48;
          local_38[0] = local_48;
          local_38[1] = (undefined1 *)uStack_44;
          uVar9 = uVar7;
          if (uVar7 < uVar6) {
            uVar9 = uVar6;
          }
          local_30 = local_40;
          while (uVar9 != uVar6) {
            puVar5 = puVar1;
            if (uVar7 < 0x81) {
              puVar5 = (undefined1 *)(uint)*(byte *)((int)local_38 + uVar6);
            }
            iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,puVar5);
            uVar6 = uVar6 + 1;
            if (iVar3 != 0) {
              return 1;
            }
          }
          param_2 = &DAT_00110000;
        }
        iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,0x22);
        param_2 = &DAT_00110000;
      } while (iVar3 == 0);
    }
  }
  return uVar8;
}

