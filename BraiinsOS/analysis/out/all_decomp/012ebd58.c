// FUN_012ebd58 @ 012ebd58 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012ebd58(undefined4 param_1,undefined4 param_2,int param_3)

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
  if ((local_20 != 0xf1a70c35 || local_18 != -0x7ed864f6) ||
      (iStack_1c != 0x4eb1dd66 || local_14 != 0xf84fe4f)) {
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

