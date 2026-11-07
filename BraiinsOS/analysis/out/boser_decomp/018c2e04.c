// FUN_018c2e04 @ 018c2e04 size=104 calls_out=1 calls_in=6
// strings: 

void FUN_018c2e04(undefined1 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_018beed0(param_2,3);
  pbVar1 = (byte *)uVar4;
  if ((pbVar1 == (byte *)0x0) || ((int)((ulonglong)uVar4 >> 0x20) != 3)) {
    uVar3 = 0xb;
    *(undefined4 *)(param_1 + 8) = 3;
    pcVar2 = "u24";
  }
  else {
    uVar3 = 0x14;
    pcVar2 = (char *)((uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2]);
  }
  *param_1 = uVar3;
  *(char **)(param_1 + 4) = pcVar2;
  return;
}

