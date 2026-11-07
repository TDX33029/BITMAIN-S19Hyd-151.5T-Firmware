// FUN_012087c8 @ 012087c8 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_012087c8(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar3 = param_3[2];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  iVar2 = *(int *)(param_2 + 8);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x14);
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0120882c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + (iVar2 - 1U & 0xfffffff8) + 8,puVar1,&UNK_01c237fc);
  return;
}

