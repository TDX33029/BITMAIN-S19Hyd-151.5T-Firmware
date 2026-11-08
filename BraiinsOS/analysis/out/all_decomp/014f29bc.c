// FUN_014f29bc @ 014f29bc size=652 calls_out=8 calls_in=7
// strings: 

void FUN_014f29bc(int param_1,int param_2,uint param_3)

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
  
  iVar4 = *(int *)(param_1 + 200);
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar3 = *(uint *)(iVar4 + 0x50);
  uVar5 = uVar3 - uVar1;
  if (param_3 < uVar5) {
    if (CARRY4(uVar1,param_3) || 0x80 < uVar1 + param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar1,uVar1 + param_3,0x80,&DAT_018a6e10);
    }
    FUN_016dd1aa(param_1 + uVar1,param_2,param_3);
    param_3 = *(int *)(param_1 + 0xd0) + param_3;
  }
  else {
    if (uVar1 == 0) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_018a6de0);
      }
      FUN_0184606c(param_3,uVar3);
      uVar1 = param_3 - extraout_r1_00;
      param_3 = extraout_r1_00;
    }
    else {
      if ((0x80 < uVar3) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar3,0x80,&DAT_018a6e00);
      }
      FUN_016dd1aa(param_1 + uVar1,param_2,uVar5);
      iVar4 = *(int *)(param_1 + 200);
      uVar1 = *(uint *)(iVar4 + 0x50);
      if (uVar1 == 0) {
LAB_014f2c30:
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_018a6da0);
      }
      uVar2 = FUN_018462e8(uVar3,uVar1);
      local_2c = uVar2 * uVar1;
      local_28 = uVar3;
      if (local_2c != uVar3) goto LAB_014f2bd8;
      if (uVar1 <= uVar3) {
        DataMemoryBarrier(0xb);
        if (DAT_018dd942 != '\x02') {
          FUN_01110ec4();
        }
        (**(code **)(iVar4 + 0x40))(param_1 + 0x80,param_1,uVar2);
        uVar1 = *(uint *)(param_1 + 0xc0);
        if (CARRY4(*(uint *)(param_1 + 0xc4),(uint)CARRY4(uVar1,uVar2))) goto LAB_014f2c0c;
        iVar4 = *(int *)(param_1 + 200);
        *(uint *)(param_1 + 0xc0) = uVar1 + uVar2;
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) + (uint)CARRY4(uVar1,uVar2);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      FUN_0184606c(param_3 - uVar5,uVar3);
      uVar3 = *(uint *)(iVar4 + 0x50);
      if (uVar3 == 0) goto LAB_014f2c30;
      uVar1 = (param_3 - uVar5) - extraout_r1;
      param_2 = param_2 + uVar5;
      param_3 = extraout_r1;
    }
    uVar5 = FUN_018462e8(uVar1,uVar3);
    local_2c = uVar5 * uVar3;
    local_28 = uVar1;
    if (local_2c != uVar1) {
LAB_014f2bd8:
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_2c,&local_28,0);
    }
    if (uVar3 <= uVar1) {
      DataMemoryBarrier(0xb);
      if (DAT_018dd942 != '\x02') {
        FUN_01110ec4();
      }
      (**(code **)(iVar4 + 0x40))(param_1 + 0x80,param_2,uVar5);
      uVar3 = *(uint *)(param_1 + 0xc0);
      if (CARRY4(*(uint *)(param_1 + 0xc4),(uint)CARRY4(uVar3,uVar5))) {
LAB_014f2c0c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a6dc0);
      }
      *(uint *)(param_1 + 0xc0) = uVar3 + uVar5;
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) + (uint)CARRY4(uVar3,uVar5);
    }
    if (param_3 == 0) {
      return;
    }
    if (0x80 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3,0x80,&DAT_018a6df0);
    }
    FUN_016dd1aa(param_1,param_2 + uVar1,param_3);
  }
  *(uint *)(param_1 + 0xd0) = param_3;
  return;
}

