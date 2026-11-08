// FUN_00676af8 @ 00676af8 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_00676af8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x3c);
  }
  *puVar1 = param_1;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1[1] = *param_3;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[5] = param_2;
  return;
}

