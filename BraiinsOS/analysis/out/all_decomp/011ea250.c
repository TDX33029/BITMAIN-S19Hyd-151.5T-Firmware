// FUN_011ea250 @ 011ea250 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_011ea250(int *param_1,int param_2,undefined4 param_3)

{
  int local_80 [28];
  
  FUN_016dd1aa(local_80,param_3,0x70);
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_0120d654(param_2,local_80);
  }
  if (local_80[0] == 2) {
    param_1[1] = 2;
    *param_1 = param_2;
    return;
  }
  FUN_016dd1aa(param_1 + 1,local_80,0x70);
  *param_1 = param_2;
  return;
}

