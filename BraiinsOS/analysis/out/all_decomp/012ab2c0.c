// FUN_012ab2c0 @ 012ab2c0 size=200 calls_out=3 calls_in=0
// strings: 

int FUN_012ab2c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  
  uVar2 = (**(code **)(param_3 + 0x6c))(param_2);
  (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_20,(int)uVar2);
  if ((local_20 != 0x3d3dfba3 || iStack_18 != -0x53c337f7) ||
      (local_1c != 0x3fd9ab0d || iStack_14 != 0x35288097)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890610);
  }
  FUN_012a903c(&local_20,param_1,(int)uVar2);
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

