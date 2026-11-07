// FUN_00e4b6d4 @ 00e4b6d4 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_00e4b6d4(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(int *)(param_1 + 8) != 0;
  bVar2 = iVar3 != 0;
  if (bVar1 || bVar2) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  if ((bVar1 || bVar2) && iVar3 != 3) {
    FUN_005c70d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00e4b704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x134) + 0xc))(*(undefined4 *)(param_1 + 0x138));
  return;
}

