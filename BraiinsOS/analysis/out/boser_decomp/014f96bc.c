// FUN_014f96bc @ 014f96bc size=72 calls_out=1 calls_in=5
// strings: 

undefined1 * FUN_014f96bc(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  puVar1 = &DAT_00110000;
  uVar2 = param_1[2];
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar3,&DAT_01cfa5e4);
    }
    param_1[2] = uVar2 + 1;
    puVar1 = (undefined1 *)(uint)*(byte *)(*param_1 + uVar2);
  }
  return puVar1;
}

