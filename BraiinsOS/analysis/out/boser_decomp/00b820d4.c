// FUN_00b820d4 @ 00b820d4 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_00b820d4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  puVar1[4] = param_1;
  return;
}

