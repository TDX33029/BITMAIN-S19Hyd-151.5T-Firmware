// FUN_00705d60 @ 00705d60 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_00705d60(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  if (1 < *param_2) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00705d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00705d8c + *(int *)(&DAT_00705d8c + iVar1 * 4)))();
  return;
}

