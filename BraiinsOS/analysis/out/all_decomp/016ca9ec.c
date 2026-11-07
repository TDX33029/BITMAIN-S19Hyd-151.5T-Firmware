// FUN_016ca9ec @ 016ca9ec size=348 calls_out=2 calls_in=1
// strings: 

void FUN_016ca9ec(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  if (param_4 == 0 && (0x7b1 < param_3) <= param_4) {
    *param_1 = 0x80000001;
    return;
  }
  iVar1 = param_4 - (param_3 == 0);
  FUN_01846088(param_3 - 1,iVar1,100,0);
  FUN_01846088(param_3 - 1,iVar1,400,0);
  if ((param_3 & 3) == 0) {
    FUN_01846088(param_3,param_4,400,0);
  }
  if ((uint)(param_5 - 1U < 0xc) <= -(param_6 - (uint)(param_5 == 0))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018af398);
  }
                    /* WARNING: Could not recover jumptable at 0x016cab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_016cab1c + *(int *)(&DAT_016cab1c + (param_5 - 1U) * 4)))
            (*(int *)(&DAT_016cab1c + (param_5 - 1U) * 4),&DAT_016cab1c,in_stack_00000018,0x16d);
  return;
}

