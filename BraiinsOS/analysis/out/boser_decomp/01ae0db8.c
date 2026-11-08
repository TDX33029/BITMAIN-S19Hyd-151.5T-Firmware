// FUN_01ae0db8 @ 01ae0db8 size=68 calls_out=1 calls_in=6
// strings: 

void FUN_01ae0db8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(param_2 + 0x178);
  if (*pcVar5 != '\x06') {
    FUN_01964c44(pcVar5);
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar6 = param_3[5];
  *(undefined4 *)pcVar5 = *param_3;
  *(undefined4 *)(param_2 + 0x17c) = uVar1;
  *(undefined4 *)(param_2 + 0x180) = uVar2;
  *(undefined4 *)(param_2 + 0x184) = uVar3;
  *(undefined4 *)(param_2 + 0x188) = uVar4;
  *(undefined4 *)(param_2 + 0x18c) = uVar6;
  FUN_01bed4e2(param_1,param_2,0x1c8);
  return;
}

