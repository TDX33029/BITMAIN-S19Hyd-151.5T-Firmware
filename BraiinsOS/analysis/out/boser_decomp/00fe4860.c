// FUN_00fe4860 @ 00fe4860 size=132 calls_out=0 calls_in=0
// strings: 

int FUN_00fe4860(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    iVar3 = 0;
  }
  else {
    iVar5 = param_1 + 8;
    iVar3 = 0;
    uVar4 = (uint)(param_2 - param_1) >> 4;
    do {
      puVar1 = *(undefined1 **)(iVar5 + -8);
      if (puVar1 != &DAT_80000005) {
        puVar2 = (undefined1 *)0x5;
        if ((int)puVar1 < 0) {
          puVar2 = puVar1;
        }
                    /* WARNING: Could not recover jumptable at 0x00fe48a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*(code *)(&DAT_00fe48ac + *(int *)(&DAT_00fe48ac + (int)puVar2 * 4)))(9);
        return iVar3;
      }
      iVar5 = iVar5 + 0x10;
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 1;
    } while (uVar4 != 0);
  }
  return iVar3;
}

