// FUN_00f25450 @ 00f25450 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_00f25450(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != 0) {
    piVar2 = (int *)(param_1 + 8);
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)piVar2[1];
      iVar3 = iVar3 + 1;
      if (*piVar2 == -0x80000000) {
        (**(code **)*puVar1)(puVar1);
      }
      else {
        FUN_00f15518(puVar1,piVar2[2]);
        if (*piVar2 != 0) {
          thunk_FUN_016d3fb4(piVar2[1]);
        }
      }
      piVar2 = piVar2 + 6;
    } while (param_2 != iVar3);
  }
  return;
}

