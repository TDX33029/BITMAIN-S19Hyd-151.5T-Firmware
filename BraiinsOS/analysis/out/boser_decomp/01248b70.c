// FUN_01248b70 @ 01248b70 size=104 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01248b70(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = uVar2;
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&UNK_01c24d24,puVar1);
}

