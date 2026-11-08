// FUN_018900dc @ 018900dc size=668 calls_out=8 calls_in=18
// strings: 

void FUN_018900dc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_2c;
  uint local_28;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar3 = *(uint *)(*(int *)(param_1 + 200) + 0x50);
  uVar5 = uVar3 - uVar1;
  if (param_3 < uVar5) {
    if (CARRY4(uVar1,param_3) || 0x80 < uVar1 + param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar1,uVar1 + param_3,0x80,&DAT_01d214dc);
    }
    FUN_01bed4e2(param_1 + uVar1,param_2,param_3);
    param_3 = *(int *)(param_1 + 0xd0) + param_3;
  }
  else {
    if (uVar1 == 0) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01d214bc);
      }
      FUN_01bf0fd4(param_3,uVar3);
      uVar1 = param_3 - extraout_r1_00;
      param_3 = extraout_r1_00;
    }
    else {
      if ((0x80 < uVar3) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uVar3,0x80,&DAT_01d214ac);
      }
      FUN_01bed4e2(param_1 + uVar1,param_2,uVar5);
      iVar4 = *(int *)(param_1 + 200);
      uVar1 = *(uint *)(iVar4 + 0x50);
      if (uVar1 == 0) {
LAB_01890360:
                    /* WARNING: Subroutine does not return */
        FUN_012ffdf4(&DAT_01d2146c);
      }
      uVar2 = FUN_01bf1250(uVar3,uVar1);
      local_2c = uVar2 * uVar1;
      local_28 = uVar3;
      if (local_2c != uVar3) goto LAB_01890308;
      if (uVar1 <= uVar3) {
        DataMemoryBarrier(0xb);
        if (DAT_01d51afc != '\x02') {
          FUN_0188ff90();
        }
        (**(code **)(*(int *)(param_1 + 200) + 0x40))(param_1 + 0x80,param_1,uVar2);
        uVar1 = *(uint *)(param_1 + 0xc0);
        if (CARRY4(*(uint *)(param_1 + 0xc4),(uint)CARRY4(uVar1,uVar2))) goto LAB_01890354;
        iVar4 = *(int *)(param_1 + 200);
        *(uint *)(param_1 + 0xc0) = uVar1 + uVar2;
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) + (uint)CARRY4(uVar1,uVar2);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      FUN_01bf0fd4(param_3 - uVar5,uVar3);
      uVar3 = *(uint *)(iVar4 + 0x50);
      if (uVar3 == 0) goto LAB_01890360;
      uVar1 = (param_3 - uVar5) - extraout_r1;
      param_2 = param_2 + uVar5;
      param_3 = extraout_r1;
    }
    uVar5 = FUN_01bf1250(uVar1,uVar3);
    local_2c = uVar5 * uVar3;
    local_28 = uVar1;
    if (local_2c != uVar1) {
LAB_01890308:
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_2c,&local_28,0);
    }
    if (uVar3 <= uVar1) {
      DataMemoryBarrier(0xb);
      if (DAT_01d51afc != '\x02') {
        FUN_0188ff90();
      }
      (**(code **)(*(int *)(param_1 + 200) + 0x40))(param_1 + 0x80,param_2,uVar5);
      uVar3 = *(uint *)(param_1 + 0xc0);
      if (CARRY4(*(uint *)(param_1 + 0xc4),(uint)CARRY4(uVar3,uVar5))) {
LAB_01890354:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2148c);
      }
      *(uint *)(param_1 + 0xc0) = uVar3 + uVar5;
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) + (uint)CARRY4(uVar3,uVar5);
    }
    if (param_3 == 0) {
      return;
    }
    if (0x80 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,0x80,&DAT_01d214cc);
    }
    FUN_01bed4e2(param_1,param_2 + uVar1,param_3);
  }
  *(uint *)(param_1 + 0xd0) = param_3;
  return;
}

