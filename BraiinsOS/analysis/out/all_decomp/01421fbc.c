// FUN_01421fbc @ 01421fbc size=104 calls_out=3 calls_in=1
// strings: 

void FUN_01421fbc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_016d4a50(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x58);
  }
  iVar2 = *(int *)(param_2 + 8);
  FUN_016dd1aa(iVar1,param_3,0x58);
                    /* WARNING: Could not recover jumptable at 0x01422014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0xc))(param_1 + (iVar2 - 1U & 0xfffffff8) + 8,iVar1,&UNK_018a39d8);
  return;
}

