// FUN_01220dcc @ 01220dcc size=112 calls_out=2 calls_in=7
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01220dcc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(param_1 + 0x2b0);
  iVar2 = *(int *)(param_1 + 0x2ac);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x24);
  }
  *puVar1 = 1;
  puVar1[1] = param_1;
  puVar1[2] = 1;
  puVar1[3] = iVar2;
  puVar1[4] = iVar3 * 0x2e0 + iVar2;
  puVar1[5] = 0;
  puVar1[6] = uStack_20;
  puVar1[7] = 0;
  puVar1[8] = uStack_18;
  return;
}

