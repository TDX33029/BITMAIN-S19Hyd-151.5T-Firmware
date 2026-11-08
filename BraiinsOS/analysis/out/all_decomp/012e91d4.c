// FUN_012e91d4 @ 012e91d4 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012e91d4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  uVar3 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc))(&local_20,(int)uVar3);
  if ((local_20 != 0x540b9f9e || local_18 != 0x414783ab) ||
      (iStack_1c != 0x4b1f519d || local_14 != 0x65979800)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012b4e44(&local_20,param_1,(int)uVar3);
  iVar1 = 0;
  iVar2 = 0;
  if ((local_20 & 0xff) != 0xb) {
    if ((local_20 & 0xff) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_003b78db,10,&DAT_0188d5a4);
    }
    iVar1 = local_18;
    iVar2 = local_14;
  }
  return CONCAT44(iVar2,iVar1);
}

