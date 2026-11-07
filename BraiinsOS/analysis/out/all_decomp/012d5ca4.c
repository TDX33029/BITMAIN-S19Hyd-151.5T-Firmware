// FUN_012d5ca4 @ 012d5ca4 size=200 calls_out=3 calls_in=0
// strings: 

int FUN_012d5ca4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_20;
  int local_1c;
  undefined *puStack_18;
  int iStack_14;
  
  uVar2 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_20,(int)uVar2);
  if ((local_20 != 0x7b9bd9c3 || puStack_18 != &DAT_01243819) ||
      (local_1c != 0x19d78400 || iStack_14 != 0x1cc92291)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012b4e44(&local_20,param_1,(int)uVar2);
  iVar1 = 0;
  if ((local_20 & 0xff) != 0xb) {
    if ((local_20 & 0xff) != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_003b78db,10,&DAT_0188d564);
    }
    iVar1 = local_1c;
  }
  return iVar1;
}

