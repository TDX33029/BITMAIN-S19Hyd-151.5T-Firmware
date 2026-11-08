// FUN_017f0768 @ 017f0768 size=64 calls_out=2 calls_in=2
// strings: Parsed Url is not a valid Uri

void FUN_017f0768(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_017f07c0("Parsed Url is not a valid Uri",0x1d);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  FUN_01bed4e2(piVar1,param_1,0x48);
  return;
}

