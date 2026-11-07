// FUN_01be2d48 @ 01be2d48 size=52 calls_out=2 calls_in=2
// strings: 

int FUN_01be2d48(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01be34a6(param_1,0x84000);
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01be3f8c(1,0x818);
    if (iVar2 == 0) {
      software_interrupt(0);
    }
    else {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  return iVar2;
}

