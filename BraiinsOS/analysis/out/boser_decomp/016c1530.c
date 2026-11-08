// FUN_016c1530 @ 016c1530 size=180 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_016c1530(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_24;
  byte local_20;
  undefined1 local_1f;
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  local_1f = 0;
  local_20 = (byte)uVar1;
  local_24 = param_2;
  if (iVar5 != 0) {
    iVar5 = iVar5 * 0xc;
    ppuVar2 = &local_24;
    do {
      local_1c = iVar4;
      ppuVar2 = (undefined4 **)FUN_01303170(ppuVar2,&local_1c,FUN_016c0e14);
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + -0xc;
    } while (iVar5 != 0);
    uVar1 = (uint)local_20;
  }
  uVar3 = 1;
  if (uVar1 == 0) {
    uVar3 = (**(code **)(local_24[1] + 0xc))(*local_24,"]",1);
  }
  return uVar3;
}

