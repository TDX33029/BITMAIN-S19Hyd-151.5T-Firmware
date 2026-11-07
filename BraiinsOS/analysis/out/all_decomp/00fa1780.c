// FUN_00fa1780 @ 00fa1780 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_00fa1780(undefined4 *param_1,undefined4 param_2)

{
  uint uVar2;
  int iVar1;
  uint uVar3;
  undefined1 auStack_1a [10];
  
  uVar3 = *(uint *)*param_1;
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = -uVar3;
  }
  iVar1 = FUN_00fabc64(uVar2,auStack_1a);
  FUN_00fa9698(param_2,~uVar3 >> 0x1f,1,0,auStack_1a + iVar1,10 - iVar1);
  return;
}

