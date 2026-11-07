// FUN_014fe458 @ 014fe458 size=600 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014fe458(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined1 *local_38 [2];
  undefined2 local_30;
  byte local_2e;
  byte local_2d;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
    uVar5 = 1;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)((uint)&local_48 | 2);
      do {
        while (param_2 != (undefined1 *)0x22) {
          if (param_2 == &DAT_00110000) {
                    /* WARNING: Could not recover jumptable at 0x014fe6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
            return uVar5;
          }
          if ((int)param_2 < 0xd) {
            if (param_2 == (undefined1 *)0x0) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x305c;
              goto LAB_014fe5d0;
            }
            if (param_2 == (undefined1 *)0x9) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x745c;
              goto LAB_014fe5d0;
            }
            if (param_2 == (undefined1 *)0xa) {
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x6e5c;
              goto LAB_014fe5d0;
            }
LAB_014fe568:
            if ((((uint)param_2 >> 8 < 3) || (iVar3 = FUN_00faa250(param_2), iVar3 == 0)) &&
               (iVar3 = FUN_00fa9eec(param_2), iVar3 != 0)) {
              uVar8 = 0x80;
              uVar9 = 0x81;
              local_48 = param_2;
              goto LAB_014fe5d8;
            }
            FUN_014ff0e4(local_38,param_2);
            local_48 = local_38[0];
            uStack_44 = local_38[1];
            local_40 = local_30;
            uVar8 = (uint)local_2e;
            uVar9 = (uint)local_2d;
            if (uVar8 < uVar9) goto LAB_014fe5f0;
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
              if (param_2 != (undefined1 *)0x5c) goto LAB_014fe568;
              puVar4[1] = 0;
              *puVar4 = 0;
              uVar2 = 0x5c5c;
            }
LAB_014fe5d0:
            uVar8 = 0;
            local_48 = (undefined1 *)CONCAT22(local_48._2_2_,uVar2);
            uVar9 = 2;
LAB_014fe5d8:
            local_38[0] = local_48;
            local_38[1] = uStack_44;
            local_30 = local_40;
LAB_014fe5f0:
            puVar1 = local_38[0];
            uVar5 = *param_1;
            pcVar7 = *(code **)(param_1[1] + 0x10);
            local_48 = local_38[0];
            uStack_44 = local_38[1];
            local_40 = local_30;
            do {
              puVar6 = puVar1;
              if (uVar9 < 0x81) {
                puVar6 = (undefined1 *)(uint)*(byte *)((int)local_38 + uVar8);
              }
              iVar3 = (*pcVar7)(uVar5,puVar6);
              if (iVar3 != 0) goto LAB_014fe688;
              uVar8 = uVar8 + 1;
            } while (uVar9 != uVar8);
          }
          param_2 = &DAT_00110000;
        }
        iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,0x22);
        param_2 = &DAT_00110000;
      } while (iVar3 == 0);
LAB_014fe688:
      uVar5 = 1;
    }
  }
  return uVar5;
}

