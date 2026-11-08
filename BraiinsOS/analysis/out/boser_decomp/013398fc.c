// FUN_013398fc @ 013398fc size=76 calls_out=2 calls_in=1
// strings: mutating instruction other than Jmp

void FUN_013398fc(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,param_2,&DAT_01ce6724);
  }
  piVar1 = (int *)(param_1 + param_3 * 0x28);
  if (*piVar1 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("mutating instruction other than Jmp",0x23,&DAT_01ce6734);
  }
  piVar1[1] = param_4;
  return;
}

