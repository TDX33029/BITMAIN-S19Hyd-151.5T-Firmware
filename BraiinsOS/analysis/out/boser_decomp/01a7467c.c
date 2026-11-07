// FUN_01a7467c @ 01a7467c size=316 calls_out=6 calls_in=49
// strings: 

void FUN_01a7467c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined8 uVar4;
  undefined4 *local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 *local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_58;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_01a7481c(&local_110);
  uVar4 = CONCAT44(local_58._4_4_,(int *)local_58);
  if (local_110 == (undefined4 *)0x3 && local_10c == 0) {
    local_a8 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_9c = 0;
    local_2c = 1;
    local_a0 = 0x60000020;
    local_a4 = &DAT_01d2d1f4;
    iVar2 = (**(code **)(local_104 + 0x10))(local_108,&local_a8);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01d2d21c,&DAT_01d30334);
    }
    local_40 = local_30;
    uStack_3c = local_2c;
    uStack_38 = local_28;
    FUN_01a70fd4(&local_a8,2);
    uVar4 = FUN_01a756d0(local_108,local_104);
    if ((int *)local_58 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *(int *)local_58;
        bVar1 = (bool)hasExclusiveAccess((int *)local_58);
      } while (!bVar1);
      *(int *)local_58 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0((int *)local_58,local_58._4_4_);
      }
    }
    ppuVar3 = &local_a8;
  }
  else {
    ppuVar3 = &local_110;
  }
  local_58 = uVar4;
  FUN_01bed4e2(param_1,ppuVar3,0x68);
  return;
}

