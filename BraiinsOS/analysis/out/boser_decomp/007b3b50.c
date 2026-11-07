// FUN_007b3b50 @ 007b3b50 size=132 calls_out=3 calls_in=0
// strings: a formatting trait implementation returned an error when the underlying stream did not

void FUN_007b3b50(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  local_14 = param_1[1];
  *(undefined1 *)param_1 = 4;
  local_18 = *param_1;
  local_10 = param_2;
  iVar1 = FUN_012fa178(&local_18,&DAT_01c0a1e0);
  if (iVar1 == 0) {
    FUN_012c3098(local_18 & 0xff,local_14);
  }
  else {
    if ((local_18 & 0xff) == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&DAT_01d28600);
    }
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return;
}

