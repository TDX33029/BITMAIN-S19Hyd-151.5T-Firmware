// FUN_0143cda0 @ 0143cda0 size=84 calls_out=2 calls_in=2
// strings: 

void FUN_0143cda0(undefined4 *param_1)

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
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  return;
}

