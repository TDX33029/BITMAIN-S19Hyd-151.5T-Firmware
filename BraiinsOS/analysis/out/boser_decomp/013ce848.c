// FUN_013ce848 @ 013ce848 size=76 calls_out=0 calls_in=2
// strings: 

void FUN_013ce848(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    param_3 = param_3 * 0xe8;
    do {
      if (*(ushort *)(param_2 + 0x48) < 2) {
        uVar1 = *(undefined4 *)(param_2 + 0xe4);
        *param_1 = *(undefined4 *)(param_2 + 0x44);
        param_1[1] = param_2;
        param_1[2] = param_2 + 0x48;
        param_1[3] = uVar1;
        return;
      }
      param_2 = param_2 + 0xe8;
      param_3 = param_3 + -0xe8;
    } while (param_3 != 0);
  }
  *(undefined2 *)param_1 = 7;
  return;
}

