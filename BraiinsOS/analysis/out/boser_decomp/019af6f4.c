// FUN_019af6f4 @ 019af6f4 size=152 calls_out=4 calls_in=1
// strings: 

void FUN_019af6f4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1[2] + -1;
  if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,0xffffffff,0,&DAT_01d275d8);
  }
  puVar5 = (undefined4 *)param_1[1];
  if (iVar2 != 0) {
    iVar2 = iVar2 * 4;
    puVar3 = puVar5;
    do {
      puVar4 = (undefined1 *)*puVar3;
      iVar1 = FUN_01bedbda(puVar4);
      *puVar4 = 0;
      if (iVar1 != -1) {
        thunk_FUN_01be4678(puVar4);
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -4;
    } while (iVar2 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(puVar5);
  return;
}

