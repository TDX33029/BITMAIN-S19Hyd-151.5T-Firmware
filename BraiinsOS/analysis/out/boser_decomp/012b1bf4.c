// FUN_012b1bf4 @ 012b1bf4 size=148 calls_out=2 calls_in=1
// strings: 

int FUN_012b1bf4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8) << 3;
  uVar3 = 0;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(int *)(iVar4 + uVar3 * 8 + 4) == param_3) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + uVar3 * 8),param_2,param_3), iVar1 == 0))
    break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + -8;
  }
  if (*(uint *)(param_1 + 0x14) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,*(uint *)(param_1 + 0x14),&DAT_01ce2534);
  }
  return *(int *)(param_1 + 0x10) + uVar3 * 0x3c;
}

