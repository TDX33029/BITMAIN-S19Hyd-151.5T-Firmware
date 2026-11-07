// FUN_012dc4f8 @ 012dc4f8 size=204 calls_out=3 calls_in=0
// strings: 

byte FUN_012dc4f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar2 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_20,(int)uVar2);
  if ((local_20 != 0x1234f316 || iStack_18 != 0x5bd9f366) ||
      (iStack_1c != -0x7d0f84f9 || iStack_14 != 0x1dcc78)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012b4e44(&local_20,param_1,(int)uVar2);
  bVar1 = 0;
  if ((local_20 & 0xff) != 0xb) {
    if ((local_20 & 0xff) != 6) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_003b78db,10,&DAT_0188d5b4);
    }
    bVar1 = local_20._1_1_;
  }
  return bVar1 & 1;
}

