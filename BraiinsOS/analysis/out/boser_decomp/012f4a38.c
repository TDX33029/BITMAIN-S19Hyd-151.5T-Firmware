// FUN_012f4a38 @ 012f4a38 size=260 calls_out=2 calls_in=0
// strings: 

void FUN_012f4a38(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  
  if (param_3 == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar4 = 0;
    uVar1 = param_3;
    if (99999 < param_3) {
      uVar1 = param_3 / 100000;
    }
    uVar2 = uVar1 + 0x5fff6 & uVar1 + 0x7ff9c ^ uVar1 + 0xdfc18 & uVar1 + 0x7d8f0;
    uVar1 = uVar2 >> 0x11;
    if (99999 < param_3) {
      uVar1 = (uVar2 >> 0x11) + 5;
    }
    if (4 < uVar1) goto LAB_012f4b00;
    uVar1 = uVar1 ^ 0xff;
  }
  uVar4 = uVar1 + 6 & 0xff;
  uVar1 = uVar4;
  do {
    FUN_01ac6cbc(param_2,"0",1);
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
LAB_012f4b00:
  uVar5 = FUN_019ce0bc(auStack_48,param_3);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  FUN_01ac6cbc(param_2,(int)uVar5,iVar3);
  *param_1 = 4;
  *(uint *)(param_1 + 4) = iVar3 + uVar4;
  return;
}

