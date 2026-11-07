// FUN_0175d7d0 @ 0175d7d0 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_0175d7d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = param_1[1];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  puVar1[1] = param_3;
  iVar2 = *(int *)(iVar4 + 8);
  *puVar1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0175d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 0xc))(iVar3 + (iVar2 - 1U & 0xfffffff8) + 8,puVar1,&UNK_01d1a03c);
  return;
}

