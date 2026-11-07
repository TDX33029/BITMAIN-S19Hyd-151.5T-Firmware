// FUN_012f0354 @ 012f0354 size=204 calls_out=3 calls_in=0
// strings: 

byte FUN_012f0354(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar2 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_20,(int)uVar2);
  if ((local_20 != 0x7604e5ef || iStack_18 != -0x73950af6) ||
      (iStack_1c != 0x4e29a4b5 || iStack_14 != -0x740a818a)) {
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

