// FUN_01678710 @ 01678710 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_01678710(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [88];
  
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_019b06e8();
  }
  puVar2 = (undefined4 *)(iVar1 + 4);
  (*(code *)*puVar2)(auStack_68);
  FUN_01bed4e2(puVar2,auStack_68,0x54);
  return;
}

