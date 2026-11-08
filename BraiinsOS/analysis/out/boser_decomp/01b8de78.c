// FUN_01b8de78 @ 01b8de78 size=100 calls_out=0 calls_in=1
// strings: 

void FUN_01b8de78(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_3 + 4);
  uVar1 = *(ushort *)(param_3 + 6) + 3;
  if (param_2[10] == param_3 - *param_2 >> 3) {
    if (param_2[9] == 1) {
      uVar2 = uVar2 + 0x10000;
    }
    else if (param_2[9] == 2) {
      uVar1 = *(ushort *)(param_3 + 6) + 0x10003;
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}

