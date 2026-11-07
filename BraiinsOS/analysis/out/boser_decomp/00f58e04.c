// FUN_00f58e04 @ 00f58e04 size=96 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

undefined4 FUN_00f58e04(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar1 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_00f58e88(param_1 + 0x18,param_2);
  FUN_019ec558((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return 1;
}

