// FUN_009ee7d0 @ 009ee7d0 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_009ee7d0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  DataMemoryBarrier(0xb);
  if ((uint)param_1[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,param_1[1],&DAT_0186b31c);
  }
  param_1 = (undefined4 *)*param_1;
  iVar3 = uVar1 * 4 + 4;
  do {
    puVar2 = (undefined4 *)*param_1;
    DataMemoryBarrier(0xb);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      FUN_009eb854(puVar2[2],puVar2[3]);
      thunk_FUN_016d3fb4(puVar2);
    }
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -4;
  } while (iVar3 != 0);
  return;
}

