// FUN_00e4b07c @ 00e4b07c size=68 calls_out=1 calls_in=0
// strings: 

void FUN_00e4b07c(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = *(int *)(param_1 + 8) == 0;
  bVar2 = *(int *)(param_1 + 0xc) == 0;
  bVar3 = bVar1 && bVar2;
  if (!bVar1 || !bVar2) {
    bVar3 = *(int *)(param_1 + 0x18) == 8 && *(int *)(param_1 + 0x1c) == 0;
  }
  if (!bVar3) {
    FUN_00e48b94();
  }
                    /* WARNING: Could not recover jumptable at 0x00e4b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xec) + 0xc))(*(undefined4 *)(param_1 + 0xf0));
  return;
}

