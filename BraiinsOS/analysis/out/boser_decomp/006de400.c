// FUN_006de400 @ 006de400 size=84 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_006de400(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 8;
  uVar3 = 8;
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
    uVar2 = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  }
  if ((int)*(uint *)(param_2 + 0x10) < 0) {
    uVar3 = *(uint *)(param_2 + 0x10) ^ 0x80000000;
  }
  if (uVar2 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x006de440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_006de444 + *(int *)(&DAT_006de444 + uVar2 * 4)))();
    return uVar1;
  }
  return 0;
}

