// FUN_01b1d564 @ 01b1d564 size=208 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b1d564(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar2 = 0;
  local_2c = DAT_01d53560;
  uVar1 = 0;
  do {
    iVar3 = *(int *)(param_3 + iVar2 * 4);
    FUN_01b1d47c(&local_34,&local_30,*(undefined4 *)(param_2 + iVar2 * 4),uVar1);
    uVar1 = local_30;
    if (iVar3 != 0) {
      if (local_34 < 1) {
        uVar1 = local_30 - 1;
      }
      else {
        uVar1 = local_30 + 1;
      }
      uVar1 = uVar1 & 0xf;
    }
    *(uint *)(param_1 + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

