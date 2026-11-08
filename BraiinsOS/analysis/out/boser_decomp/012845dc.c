// FUN_012845dc @ 012845dc size=400 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_012845dc(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  byte local_31;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  pcVar6 = *(code **)(param_4 + 0xc);
  iVar1 = (*pcVar6)(param_3,&DAT_0051de56,2);
  uVar5 = 1;
  if (iVar1 == 0) {
    if (param_2 != 0) {
      do {
        local_31 = *param_1;
        uVar2 = (uint)local_31;
        if (uVar2 < 0xd) {
          if (uVar2 == 0) {
            puVar3 = (undefined2 *)&DAT_0051de5e;
          }
          else if (uVar2 == 9) {
            puVar3 = &DAT_0051de5c;
          }
          else {
            if (uVar2 != 10) goto LAB_012846c4;
            puVar3 = &DAT_0051de58;
          }
LAB_01284704:
          iVar1 = (*pcVar6)(param_3,puVar3,2);
        }
        else {
          if (uVar2 == 0xd) {
            puVar3 = &DAT_0051de5a;
            goto LAB_01284704;
          }
          if (uVar2 == 0x22 || uVar2 == 0x5c) {
            local_28 = FUN_012fbb84;
            puVar4 = &DAT_0057edd8;
            local_30 = uVar2;
            local_2c = &local_30;
          }
          else {
LAB_012846c4:
            if (uVar2 - 0x20 < 0x5f) {
              local_28 = FUN_012fbb84;
              puVar4 = &DAT_00590e5f;
              local_30 = uVar2;
              local_2c = &local_30;
            }
            else {
              local_28 = FUN_012fd63c;
              puVar4 = &DAT_0051de60;
              local_2c = (uint *)&local_31;
            }
          }
          iVar1 = FUN_012fa178(param_3,param_4,puVar4,&local_2c);
        }
        if (iVar1 != 0) {
          return 1;
        }
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    uVar5 = (*pcVar6)(param_3,"\"",1);
  }
  return uVar5;
}

