// FUN_01298f6c @ 01298f6c size=92 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01298f6c(int param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066651c(param_2,uVar3,&DAT_01ce24f4);
  }
  puVar2 = (undefined8 *)(*(int *)(param_1 + 4) + param_2 * 8);
  uVar1 = *puVar2;
  FUN_01bed864(puVar2,puVar2 + 1,(uVar3 + ~param_2) * 8);
  *(uint *)(param_1 + 8) = uVar3 - 1;
  return uVar1;
}

