// FUN_01655840 @ 01655840 size=148 calls_out=3 calls_in=7
// strings: 

void FUN_01655840(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  while (uVar3 = FUN_0165574c(&local_30), uVar1 = (uint)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0)
  {
    iVar2 = param_2[2];
    if ((uint)(*param_2 - iVar2) < uVar1) {
      FUN_006520b4(param_2,iVar2,uVar1,1,1);
      iVar2 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar2,(int)uVar3,uVar1);
    param_2[2] = iVar2 + uVar1;
  }
  return;
}

