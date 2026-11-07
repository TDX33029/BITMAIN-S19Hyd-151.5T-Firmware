// FUN_01385708 @ 01385708 size=108 calls_out=1 calls_in=6
// strings: 

void FUN_01385708(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xd4);
  FUN_0137ac50(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x21) = param_3;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x5c));
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0138576c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x54));
  return;
}

