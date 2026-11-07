// FUN_016b3574 @ 016b3574 size=108 calls_out=1 calls_in=2
// strings: 

void FUN_016b3574(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_2 + 0x38);
  FUN_013385f8(pcVar4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)pcVar4 = *param_3;
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  if (*(char *)(param_2 + 0x4e) == '\x02') {
    if (*(char *)(param_2 + 0x44) == '\x03') {
      pcVar4 = "";
    }
    *(bool *)(param_2 + 0x4e) = pcVar4[0xc] != '\x02';
  }
  FUN_01bed4e2(param_1,param_2,0x50);
  return;
}

