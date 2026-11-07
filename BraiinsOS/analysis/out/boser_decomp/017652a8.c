// FUN_017652a8 @ 017652a8 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_017652a8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_3d8 [952];
  
  FUN_01bed4e2(auStack_3d8,param_3,0x3b8);
  iVar1 = thunk_FUN_01be5118(0x3b8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x3b8);
  }
  iVar2 = *(int *)(param_2 + 8);
  FUN_01bed4e2(iVar1,param_3,0x3b8);
                    /* WARNING: Could not recover jumptable at 0x01765318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0xc))(param_1 + (iVar2 - 1U & 0xfffffff8) + 8,iVar1,&UNK_01d1a05c);
  return;
}

