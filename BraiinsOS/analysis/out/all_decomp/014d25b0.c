// FUN_014d25b0 @ 014d25b0 size=400 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_014d25b0(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = 2;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  if (uVar2 == 0) {
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar3 = &UNK_0040d849;
  }
  else {
    if (uVar2 != 1) {
      uVar1 = *param_2;
      iVar6 = param_2[1];
      pcVar5 = *(code **)(iVar6 + 0xc);
      iVar4 = (*pcVar5)(uVar1,&DAT_0041200b,5);
      if (iVar4 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar4 = (*pcVar5)(uVar1,"(",1);
          if ((iVar4 == 0) && (iVar4 = FUN_015039ac(param_1,param_2), iVar4 == 0)) {
            uVar1 = *param_2;
            pcVar5 = *(code **)(param_2[1] + 0xc);
LAB_014d271c:
            uVar1 = (*pcVar5)(uVar1,&DAT_00418e07,1);
            return uVar1;
          }
        }
        else {
          iVar4 = (*pcVar5)(uVar1,"(\n",2);
          if (iVar4 == 0) {
            local_38 = &local_31;
            local_2c = &DAT_01880dc4;
            local_28 = param_2[2];
            local_24 = param_2[3];
            local_31 = 1;
            local_40 = uVar1;
            local_3c = iVar6;
            local_30 = (undefined1 *)&local_40;
            iVar4 = FUN_015039ac(param_1,&local_30);
            if ((iVar4 == 0) &&
               (iVar4 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar4 == 0))
            goto LAB_014d271c;
          }
        }
      }
      return 1;
    }
    uVar1 = *param_2;
    iVar4 = param_2[1];
    puVar3 = &UNK_0040d853;
  }
                    /* WARNING: Could not recover jumptable at 0x014d2608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar4 + 0xc))(uVar1,puVar3,10);
  return uVar1;
}

