// FUN_016528d8 @ 016528d8 size=140 calls_out=3 calls_in=2
// strings: a formatting trait implementation returned an error when the underlying stream did not

void FUN_016528d8(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  local_14 = param_1[1];
  *(undefined1 *)param_1 = 4;
  local_18 = *param_1;
  local_10 = param_2;
  iVar1 = FUN_012fa178(&local_18,&DAT_01d06ad8);
  uVar2 = local_18 & 0xff;
  if (iVar1 == 0) {
    if (uVar2 != 4) {
      FUN_0069d8a4(uVar2,local_14);
    }
  }
  else {
    if (uVar2 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_01d28600);
    }
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

