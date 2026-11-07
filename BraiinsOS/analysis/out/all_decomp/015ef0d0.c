// FUN_015ef0d0 @ 015ef0d0 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_015ef0d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ab078);
  }
  iVar1 = thunk_FUN_016d4a50(0x2000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  puVar2[2] = iVar1;
  puVar2[3] = 0x2000;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = 0;
  return;
}

