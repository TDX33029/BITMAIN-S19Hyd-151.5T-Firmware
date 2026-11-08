// FUN_01a84be0 @ 01a84be0 size=104 calls_out=4 calls_in=2
// strings: 

int * FUN_01a84be0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_80 [104];
  
  piVar1 = (int *)FUN_01427b74(1,0);
  FUN_01bed4e2(auStack_80,param_1,0x68);
  iVar2 = FUN_01a65494(auStack_80);
  if (*piVar1 != 0) {
    FUN_01443048(*piVar1,piVar1[1]);
  }
  *piVar1 = iVar2;
  piVar1[1] = (int)&DAT_01d2cc7c;
  return piVar1;
}

