// FUN_01bc59a4 @ 01bc59a4 size=172 calls_out=2 calls_in=2
// strings: 

int FUN_01bc59a4(byte *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2[0x10] == 2) {
    return 0x800;
  }
  if (param_2[0xe] == 1) {
    return 0x600;
  }
  iVar2 = param_2[10];
  uVar3 = iVar2 - 0x100;
  if (param_3 == 0) {
    uVar1 = FUN_01bc5598();
  }
  else {
    uVar1 = FUN_01bc556c(*(undefined4 *)(*param_2 + (uint)*param_1 * 4));
  }
  if (uVar1 < uVar3) {
    uVar3 = uVar1;
  }
  return iVar2 - uVar3;
}

