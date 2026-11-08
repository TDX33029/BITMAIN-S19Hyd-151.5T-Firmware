// FUN_012a898c @ 012a898c size=204 calls_out=3 calls_in=0
// strings: 

int FUN_012a898c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  
  uVar2 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_20,(int)uVar2);
  if ((local_20 != 0x93551af9 || iStack_18 != -0x4b537908) ||
      (local_1c != 0x64e63c9a || iStack_14 != -0x2a151b0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  uVar1 = FUN_012a903c(&local_20,param_1,(int)uVar2);
  if ((local_20 & 0xff) == 0xb) {
    return 0;
  }
  if ((local_20 & 0xff) != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(uVar1,&DAT_003b78db,10,&DAT_0188d544);
  }
  return local_1c;
}

