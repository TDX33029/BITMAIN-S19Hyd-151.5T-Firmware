// FUN_013cda84 @ 013cda84 size=56 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013cda84(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_013c7920(param_2 + 0x48);
  if (sVar1 == 0x1d) {
    uVar2 = FUN_013c9530(param_2,*(undefined4 *)(param_1 + 4));
    return uVar2;
  }
  return 0;
}

