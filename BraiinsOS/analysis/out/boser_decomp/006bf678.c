// FUN_006bf678 @ 006bf678 size=104 calls_out=2 calls_in=1
// strings: 

uint FUN_006bf678(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = 2;
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
    uVar2 = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  }
  if (uVar2 == 3) {
    uVar2 = FUN_006e4fc4(param_1 + 0x20);
    return uVar2;
  }
  if (uVar2 == 2) {
    uVar2 = FUN_006e4fc4(param_1 + 0x30);
    return uVar2;
  }
  bVar4 = uVar2 == 1;
  uVar3 = 0;
  if (bVar4) {
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  if (bVar4 && uVar2 == param_3) {
    iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x5c));
    uVar3 = (uint)(iVar1 == 0);
  }
  return uVar3;
}

