// FUN_0183bd18 @ 0183bd18 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0183bd18(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 local_24 [10];
  
  local_24[0] = 2;
  piVar1 = (int *)FUN_0183b5ec(local_24,param_1);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  FUN_01bed4e2(piVar1,param_2,0x48);
  return;
}

