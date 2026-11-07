// FUN_0142eaa0 @ 0142eaa0 size=104 calls_out=1 calls_in=1
// strings: hunked

void FUN_0142eaa0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (((byte)"c"[iVar1] == 9 || ((byte)"c"[iVar1] - 0x20 < 0x5f))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 7) {
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = &PTR_FUN_01cf4c3c;
      param_1[1] = "c";
      param_1[2] = 7;
      param_1[3] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,&DAT_01d1d594);
}

