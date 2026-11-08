// FUN_01220064 @ 01220064 size=140 calls_out=2 calls_in=7
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01220064(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(param_1 + 0x2ac);
  iVar4 = *(int *)(param_1 + 0x2b0);
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x2c0) != -0x80000000) {
    piVar2 = (int *)(param_1 + 0x2c0);
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar1 = 1;
  puVar1[1] = iVar3;
  puVar1[2] = iVar4 * 0x2e0 + iVar3;
  puVar1[3] = 0;
  puVar1[4] = local_38;
  puVar1[5] = 0;
  puVar1[6] = uStack_30;
  puVar1[7] = 1;
  puVar1[8] = piVar2;
  puVar1[9] = 0;
  puVar1[10] = uStack_20;
  puVar1[0xb] = 0;
  puVar1[0xc] = uStack_18;
  return;
}

