// FUN_01a3b664 @ 01a3b664 size=144 calls_out=2 calls_in=14
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a3b664(void)

{
  undefined4 *puVar1;
  uint local_44;
  uint local_34;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_34 = local_34 & 0xffffff00;
  local_44 = local_44 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x3c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x3c);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  puVar1[3] = local_44;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = local_34;
  puVar1[8] = 0;
  puVar1[9] = 4;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 1;
  puVar1[0xe] = local_18;
  return;
}

