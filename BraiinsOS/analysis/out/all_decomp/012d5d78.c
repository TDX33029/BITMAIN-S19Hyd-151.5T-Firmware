// FUN_012d5d78 @ 012d5d78 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012d5d78(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_20;
  int iStack_1c;
  undefined *local_18;
  int local_14;
  
  uVar3 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc))(&local_20,(int)uVar3);
  if ((local_20 != 0x7b9bd9c3 || local_18 != &DAT_01243819) ||
      (iStack_1c != 0x19d78400 || local_14 != 0x1cc92291)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012b4e44(&local_20,param_1,(int)uVar3);
  puVar1 = (undefined *)0x0;
  iVar2 = 0;
  if ((local_20 & 0xff) != 0xb) {
    if ((local_20 & 0xff) != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_003b78db,10,&DAT_0188d574);
    }
    puVar1 = local_18;
    iVar2 = local_14;
  }
  return CONCAT44(iVar2,puVar1);
}

