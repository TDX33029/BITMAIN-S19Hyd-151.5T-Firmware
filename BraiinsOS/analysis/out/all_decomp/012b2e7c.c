// FUN_012b2e7c @ 012b2e7c size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012b2e7c(undefined4 param_1,undefined4 param_2,int param_3)

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
  if ((local_20 != 0xc1cfc622 || local_18 != 0x607da8cd) ||
      (iStack_1c != -0x7a8ca652 || local_14 != 0x7740f424)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012a903c(&local_20,param_1,(int)uVar3);
  iVar1 = 0;
  iVar2 = 0;
  if ((local_20 & 0xff) != 0xb) {
    if ((local_20 & 0xff) != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_003b78db,10,&DAT_0188d574);
    }
    iVar1 = local_18;
    iVar2 = local_14;
  }
  return CONCAT44(iVar2,iVar1);
}

