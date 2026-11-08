// FUN_01572f20 @ 01572f20 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_01572f20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x3c);
  uVar2 = *(uint *)(param_1 + 0x44);
  if (uVar2 <= uVar4) {
    iVar3 = *(int *)(param_1 + 0x38) + 8;
    iVar1 = thunk_FUN_01bed842(*(int *)(param_1 + 0x40) + 8,iVar3,uVar2);
    if (iVar1 == 0) {
      FUN_016bc0ec(iVar3 + uVar2,uVar4 - uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_004a6791,0x26,&DAT_01cfbec0);
}

