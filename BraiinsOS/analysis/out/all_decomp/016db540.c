// FUN_016db540 @ 016db540 size=90 calls_out=2 calls_in=2
// strings: 

void FUN_016db540(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_118 [256];
  
  uVar3 = param_3 - param_4;
  uVar2 = uVar3;
  if (0xff < uVar3) {
    uVar2 = 0x100;
  }
  FUN_016dd606(auStack_118,param_2,uVar2);
  uVar1 = *param_1;
  uVar2 = uVar3;
  while( true ) {
    bVar4 = uVar2 == (uVar3 & 0xff);
    uVar2 = uVar2 - 0x100;
    if (bVar4) break;
    if ((uVar1 & 0x20) == 0) {
      FUN_016db1c8(auStack_118,0x100,param_1);
      uVar1 = *param_1;
    }
  }
  if ((uVar1 & 0x20) == 0) {
    FUN_016db1c8(auStack_118,uVar3 & 0xff,param_1);
  }
  return;
}

