// FUN_00f33098 @ 00f33098 size=144 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

int FUN_00f33098(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_5a0 [354];
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar2 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_00f3314c(param_1 + 0x18,param_2);
  FUN_019ec558((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if (iVar1 == 0) {
    local_5a0[0] = 2;
    FUN_00f32514(param_1,local_5a0);
  }
  return iVar1;
}

