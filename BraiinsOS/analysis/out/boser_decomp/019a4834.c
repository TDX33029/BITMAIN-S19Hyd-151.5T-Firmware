// FUN_019a4834 @ 019a4834 size=120 calls_out=3 calls_in=3
// strings: 

void FUN_019a4834(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,0xffffffff,0,&DAT_01d275d8);
  }
  if (param_2 + -1 != 0) {
    iVar3 = (param_2 + -1) * 4;
    do {
      puVar2 = (undefined1 *)*param_1;
      iVar1 = FUN_01bedbda(puVar2);
      *puVar2 = 0;
      if (iVar1 != -1) {
        thunk_FUN_01be4678(puVar2);
      }
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -4;
    } while (iVar3 != 0);
  }
  return;
}

