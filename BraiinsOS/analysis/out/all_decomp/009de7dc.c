// FUN_009de7dc @ 009de7dc size=104 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_009de7dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar1 = FUN_016a0564(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_2);
  uVar6 = thunk_FUN_016de0ee(uVar1,uVar1);
  iVar2 = (int)uVar6;
  if ((uVar5 & uVar4) != 0xffffffff) {
    uVar3 = *(uint *)(iVar2 + 0x80);
    if ((int)((ulonglong)uVar6 >> 0x20) == 0) {
      uVar3 = uVar3 | uVar5;
      uVar4 = *(uint *)(iVar2 + 0x84) | uVar4;
    }
    else {
      uVar3 = uVar3 & ~uVar5;
      uVar4 = *(uint *)(iVar2 + 0x84) & ~uVar4;
    }
    *(uint *)(iVar2 + 0x80) = uVar3;
    *(uint *)(iVar2 + 0x84) = uVar4;
  }
  return 1;
}

