// FUN_0188d408 @ 0188d408 size=352 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0188d408(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte local_31;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  iVar9 = param_1[1];
  if (iVar9 != 0) {
    uVar6 = *param_2;
    iVar7 = param_2[1];
    pbVar8 = (byte *)*param_1;
    do {
      local_31 = *pbVar8;
      uVar1 = (uint)local_31;
      if (uVar1 < 0xd) {
        if (uVar1 == 0) {
          pcVar5 = *(code **)(iVar7 + 0xc);
          puVar3 = (undefined2 *)&DAT_0051de5e;
        }
        else if (uVar1 == 9) {
          pcVar5 = *(code **)(iVar7 + 0xc);
          puVar3 = &DAT_0051de5c;
        }
        else {
          if (uVar1 != 10) goto LAB_0188d4d8;
          pcVar5 = *(code **)(iVar7 + 0xc);
          puVar3 = &DAT_0051de58;
        }
LAB_0188d514:
        iVar2 = (*pcVar5)(uVar6,puVar3,2);
      }
      else {
        if (uVar1 == 0xd) {
          pcVar5 = *(code **)(iVar7 + 0xc);
          puVar3 = &DAT_0051de5a;
          goto LAB_0188d514;
        }
        if (uVar1 == 0x22 || uVar1 == 0x5c) {
          local_28 = FUN_012fbb84;
          puVar4 = &DAT_0057edd8;
          local_30 = uVar1;
          local_2c = &local_30;
        }
        else {
LAB_0188d4d8:
          if (uVar1 - 0x20 < 0x5f) {
            local_28 = FUN_012fbb84;
            puVar4 = &DAT_00590e5f;
            local_30 = uVar1;
            local_2c = &local_30;
          }
          else {
            local_28 = FUN_012fd63c;
            puVar4 = &DAT_0051de60;
            local_2c = (uint *)&local_31;
          }
        }
        iVar2 = FUN_012fa178(uVar6,iVar7,puVar4,&local_2c);
      }
      if (iVar2 != 0) {
        return 1;
      }
      iVar9 = iVar9 + -1;
      pbVar8 = pbVar8 + 1;
    } while (iVar9 != 0);
  }
  return 0;
}

