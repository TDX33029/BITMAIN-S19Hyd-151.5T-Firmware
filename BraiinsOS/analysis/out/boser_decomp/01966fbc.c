// FUN_01966fbc @ 01966fbc size=76 calls_out=2 calls_in=212
// strings: 

void FUN_01966fbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  return;
}

