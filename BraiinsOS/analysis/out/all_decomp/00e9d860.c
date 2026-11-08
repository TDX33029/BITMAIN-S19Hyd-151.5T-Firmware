// FUN_00e9d860 @ 00e9d860 size=196 calls_out=3 calls_in=10
// strings: a formatting trait implementation returned an error when the underlying stream did not

void FUN_00e9d860(uint *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint local_28;
  undefined4 *local_24;
  undefined4 uStack_20;
  
  local_24 = (undefined4 *)param_1[1];
  *(undefined1 *)param_1 = 4;
  local_28 = *param_1;
  uStack_20 = param_2;
  iVar2 = FUN_00fa948c(&local_28,&DAT_0187d0a0);
  puVar1 = local_24;
  uVar3 = local_28 & 0xff;
  if (iVar2 == 0) {
    if ((uVar3 != 4) && (uVar3 == 3)) {
      uVar5 = *local_24;
      puVar6 = (undefined4 *)local_24[1];
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      thunk_FUN_016d3fb4(puVar1);
      return;
    }
  }
  else {
    if (uVar3 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_018ac994);
    }
    *param_1 = local_28;
    param_1[1] = (uint)local_24;
  }
  return;
}

