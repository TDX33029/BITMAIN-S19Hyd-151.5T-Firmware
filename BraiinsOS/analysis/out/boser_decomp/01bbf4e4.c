// FUN_01bbf4e4 @ 01bbf4e4 size=132 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bbf4e4(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0) {
    uVar2 = 3;
  }
  uVar1 = *param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0x40;
  }
  uVar3 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 0x14) = uVar1;
  if (uVar3 == 0) {
    uVar3 = uVar1 - 7;
    if (uVar3 < 6) {
      uVar3 = 6;
    }
    *(uint *)(param_1 + 4) = uVar3;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = 0;
    if (uVar3 <= uVar1) {
      iVar4 = uVar1 - uVar3;
    }
    *(int *)(param_1 + 0x10) = iVar4;
  }
  if (uVar3 < uVar2) {
    *(uint *)(param_1 + 8) = uVar3;
  }
  else {
    *(uint *)(param_1 + 8) = uVar2;
  }
  return 0;
}

