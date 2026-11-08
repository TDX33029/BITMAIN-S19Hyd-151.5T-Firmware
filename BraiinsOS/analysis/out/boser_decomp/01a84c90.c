// FUN_01a84c90 @ 01a84c90 size=72 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_01a84c90(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  
  local_20 = 2;
  cVar1 = FUN_01a620d4(param_1,&local_20,1);
  uVar2 = 0;
  if (cVar1 != '\f') {
    local_20 = CONCAT31(CONCAT21(local_20._2_2_,cVar1),3);
    uVar2 = FUN_01a84cd8(&local_20);
  }
  return uVar2;
}

