// FUN_00ee5fcc @ 00ee5fcc size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00ee5fcc(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_015f8320();
  }
  uVar1 = (**(code **)(iVar2 + 4))();
  *(undefined1 *)(iVar2 + 4) = uVar1;
  return;
}

