// FUN_018c39f8 @ 018c39f8 size=400 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_018c39f8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  byte local_31;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  uVar6 = *param_2;
  iVar8 = param_2[1];
  pcVar10 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar10)(uVar6,&DAT_0051de56,2);
  uVar9 = 1;
  if (iVar1 == 0) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      pbVar7 = (byte *)*param_1;
      do {
        local_31 = *pbVar7;
        uVar2 = (uint)local_31;
        if (uVar2 < 0xd) {
          if (uVar2 == 0) {
            puVar4 = (undefined2 *)&DAT_0051de5e;
          }
          else if (uVar2 == 9) {
            puVar4 = &DAT_0051de5c;
          }
          else {
            if (uVar2 != 10) goto LAB_018c3ae0;
            puVar4 = &DAT_0051de58;
          }
LAB_018c3b20:
          iVar3 = (*pcVar10)(uVar6,puVar4,2);
        }
        else {
          if (uVar2 == 0xd) {
            puVar4 = &DAT_0051de5a;
            goto LAB_018c3b20;
          }
          if (uVar2 == 0x22 || uVar2 == 0x5c) {
            local_28 = FUN_012fbb84;
            puVar5 = &DAT_0057edd8;
            local_30 = uVar2;
            local_2c = &local_30;
          }
          else {
LAB_018c3ae0:
            if (uVar2 - 0x20 < 0x5f) {
              local_28 = FUN_012fbb84;
              puVar5 = &DAT_00590e5f;
              local_30 = uVar2;
              local_2c = &local_30;
            }
            else {
              local_28 = FUN_012fd63c;
              puVar5 = &DAT_0051de60;
              local_2c = (uint *)&local_31;
            }
          }
          iVar3 = FUN_012fa178(uVar6,iVar8,puVar5,&local_2c);
        }
        if (iVar3 != 0) {
          return 1;
        }
        iVar1 = iVar1 + -1;
        pbVar7 = pbVar7 + 1;
      } while (iVar1 != 0);
    }
    uVar9 = (*pcVar10)(uVar6,"\"",1);
  }
  return uVar9;
}

