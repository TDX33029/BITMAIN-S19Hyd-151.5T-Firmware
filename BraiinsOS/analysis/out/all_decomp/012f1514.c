// FUN_012f1514 @ 012f1514 size=208 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012f1514(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar1 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar1 >> 0x20) + 0xc))(&local_20,(int)uVar1);
  if ((local_20 != 0x6f2f6d7f || iStack_18 != -0x1ed9b0a0) ||
      (iStack_1c != -0x2d6e2458 || iStack_14 != -0x67cd61ba)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012b4e44(&local_20,param_1,(int)uVar1);
  if ((local_20 & 0xff) == 0xb) {
    return 1;
  }
  if ((local_20 & 0xff) != 7) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(&DAT_003b78db,10,&DAT_0188d584);
  }
  return CONCAT44(iStack_18,iStack_1c);
}

