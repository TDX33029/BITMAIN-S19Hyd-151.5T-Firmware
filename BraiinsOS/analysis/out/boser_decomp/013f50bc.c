// FUN_013f50bc @ 013f50bc size=228 calls_out=5 calls_in=2
// strings: asse

void FUN_013f50bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *local_48;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("asse",0x20,&DAT_01cf3550);
  }
  if ((param_2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00475d01,0x23,&DAT_01cf3540);
  }
  puVar3 = (undefined4 *)(param_2 & 0xfffffff8);
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    local_28 = puVar3[4];
    uStack_24 = puVar3[5];
    uStack_20 = puVar3[6];
    uStack_1c = puVar3[7];
    FUN_01406d64();
  }
  else {
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    local_28 = puVar3[4];
    uStack_24 = puVar3[5];
    uStack_20 = puVar3[6];
    uStack_1c = puVar3[7];
    local_44 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar4 = puVar3[3];
    *local_44 = *puVar3;
    local_44[1] = uVar1;
    local_44[2] = uVar2;
    local_44[3] = uVar4;
    uVar1 = puVar3[5];
    uVar2 = puVar3[6];
    uVar4 = puVar3[7];
    local_44[4] = puVar3[4];
    local_44[5] = uVar1;
    local_44[6] = uVar2;
    local_44[7] = uVar4;
    local_48 = FUN_01406ddc;
    FUN_01319ffc(param_1,&local_48);
  }
  return;
}

