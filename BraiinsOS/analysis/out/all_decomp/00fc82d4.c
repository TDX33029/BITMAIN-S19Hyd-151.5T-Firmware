// FUN_00fc82d4 @ 00fc82d4 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00fc82d4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_24 [20];
  
  uVar4 = ((uint *)*param_1)[1];
  uVar1 = (int)uVar4 >> 0x1f;
  uVar2 = *(uint *)*param_1 ^ uVar1;
  iVar3 = FUN_00fabdb8(uVar2 - uVar1,(uVar4 ^ uVar1) - (uVar1 + (uVar2 < uVar1)),auStack_24,0x14);
  FUN_00fa9698(param_2,~uVar4 >> 0x1f,1,0,auStack_24 + iVar3,0x14 - iVar3);
  return;
}

