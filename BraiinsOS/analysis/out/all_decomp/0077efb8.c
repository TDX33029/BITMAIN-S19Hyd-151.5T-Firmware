// FUN_0077efb8 @ 0077efb8 size=264 calls_out=5 calls_in=1
// strings: 

void FUN_0077efb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_90 [96];
  
  iVar1 = FUN_00fabc64(param_2,auStack_90);
  iVar3 = 10 - iVar1;
  if (iVar1 == 10) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(iVar2,auStack_90 + iVar1,iVar3);
  iVar1 = FUN_00fabdb8(*param_4,param_4[1],auStack_90,0x14);
  iVar3 = 0x14 - iVar1;
  if (iVar1 == 0x14) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(iVar2,auStack_90 + iVar1,iVar3);
                    /* WARNING: Could not recover jumptable at 0x0077f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0077f0a8 + *(int *)(&DAT_0077f0a8 + param_4[4] * 4)))(param_4[6],param_4[7]);
  return;
}

