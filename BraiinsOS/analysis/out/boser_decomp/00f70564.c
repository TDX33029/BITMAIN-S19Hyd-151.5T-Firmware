// FUN_00f70564 @ 00f70564 size=144 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00f70564(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_550 [334];
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar2 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_00f70618(param_1 + 0x18,param_2);
  FUN_019ec558((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if (iVar1 == 0) {
    local_550[0] = 2;
    FUN_00f31d68(param_1,local_550);
  }
  return iVar1;
}

