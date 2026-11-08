// FUN_014f8a28 @ 014f8a28 size=248 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x014f8af4) */

undefined4 FUN_014f8a28(undefined4 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_30 [3];
  byte local_24;
  byte local_23;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    iVar2 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
    uVar7 = 1;
    if (iVar2 == 0) {
      if (param_2 == (undefined1 *)0x22) {
        iVar2 = (**(code **)(param_1[1] + 0x10))(*param_1,0x22);
        param_2 = &DAT_00110000;
        if (iVar2 != 0) {
          return 1;
        }
      }
      do {
        if (param_2 == &DAT_00110000) {
                    /* WARNING: Could not recover jumptable at 0x014f8b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
          return uVar7;
        }
        FUN_014f9608(local_30);
        uVar1 = local_30[0];
        uVar4 = (uint)local_23;
        uVar5 = (uint)local_24;
        uVar6 = uVar4;
        if (uVar4 < uVar5) {
          uVar6 = uVar5;
        }
        while (uVar6 != uVar5) {
          uVar3 = uVar1;
          if (uVar4 < 0x81) {
            uVar3 = (uint)*(byte *)((int)local_30 + uVar5);
          }
          iVar2 = (**(code **)(param_1[1] + 0x10))(*param_1,uVar3);
          uVar5 = uVar5 + 1;
          if (iVar2 != 0) {
            return 1;
          }
        }
        param_2 = &DAT_00110000;
      } while( true );
    }
  }
  return uVar7;
}

