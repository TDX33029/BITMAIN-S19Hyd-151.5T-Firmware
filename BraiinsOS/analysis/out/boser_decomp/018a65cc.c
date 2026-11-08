// FUN_018a65cc @ 018a65cc size=72 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_018a65cc(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[2];
  if ((uint)param_1[1] <= uVar3) {
    return 1;
  }
  uVar4 = *(byte *)(*param_1 + uVar3) - 0x30;
  bVar1 = (uVar4 & 0xff) < 10;
  uVar2 = 0;
  if (bVar1) {
    param_1[2] = uVar3 + 1;
    uVar2 = uVar4;
  }
  return CONCAT44(uVar2,(uint)!bVar1);
}

