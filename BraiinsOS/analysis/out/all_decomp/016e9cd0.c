// FUN_016e9cd0 @ 016e9cd0 size=272 calls_out=5 calls_in=275
// strings: 

undefined8
FUN_016e9cd0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined2 param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_01782028(0);
  if ((iVar1 != 0) ||
     ((iVar1 = FUN_016d38c8(0x10c,1), iVar1 != 0 &&
      (iVar3 = FUN_017820bc(0,iVar1,FUN_016e9958), iVar3 != 0)))) {
    if (param_1 == 2 && param_3 == 0) {
      puVar2 = (uint *)FUN_016d2bc8();
      param_3 = *puVar2;
    }
    uVar4 = *(int *)(iVar1 + 0x100) + 1U & 0xf;
    *(uint *)(iVar1 + 0x100) = uVar4;
    if (uVar4 == *(uint *)(iVar1 + 0x104)) {
      *(uint *)(iVar1 + 0x104) = uVar4 + 1 & 0xf;
    }
    iVar3 = iVar1 + uVar4 * 0x10;
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 4));
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar1 + uVar4 * 0x10) = param_4;
    *(undefined2 *)(iVar3 + 0xc) = param_5;
    *(uint *)(iVar3 + 8) = param_3 & 0xfff | param_1 << 0x18;
  }
  return 0;
}

