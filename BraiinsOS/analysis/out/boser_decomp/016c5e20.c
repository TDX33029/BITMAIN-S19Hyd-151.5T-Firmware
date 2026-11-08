// FUN_016c5e20 @ 016c5e20 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_016c5e20(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_2 + 0x40);
  FUN_016b7bb4(pcVar4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)pcVar4 = *param_3;
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar3;
  if (*(char *)(param_2 + 0x54) == '\x02') {
    if (*(char *)(param_2 + 0x4c) == '\x03') {
      pcVar4 = "";
    }
    *(bool *)(param_2 + 0x54) = pcVar4[0xc] != '\x02';
  }
  FUN_01bed4e2(param_1,param_2,0x58);
  return;
}

