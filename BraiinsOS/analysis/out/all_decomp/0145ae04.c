// FUN_0145ae04 @ 0145ae04 size=84 calls_out=2 calls_in=2
// strings: 

void FUN_0145ae04(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  return;
}

