// FUN_012209b0 @ 012209b0 size=200 calls_out=3 calls_in=5
// strings: 

int FUN_012209b0(int *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) goto LAB_012209f0;
  puVar4 = (undefined *)param_1[3];
  while( true ) {
    iVar1 = (**(code **)(puVar4 + 0xc))(iVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_012d40d0(iVar2,puVar4);
    param_1[2] = 0;
    param_2 = extraout_r1;
LAB_012209f0:
    iVar2 = *param_1;
    if (iVar2 != 0) {
      param_2 = param_1[1];
    }
    if (iVar2 == 0 || iVar2 == param_2) break;
    *param_1 = iVar2 + 0x2e0;
    iVar2 = FUN_01220064();
    FUN_012d40d0(0,param_1[3]);
    puVar4 = &DAT_01c2458c;
    param_1[2] = iVar2;
    param_1[3] = (int)&DAT_01c2458c;
  }
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = param_1[5];
  iVar1 = (**(code **)(iVar3 + 0xc))(iVar2);
  if (iVar1 == 0) {
    FUN_012d40d0(iVar2,iVar3);
    param_1[4] = 0;
    return 0;
  }
  return iVar1;
}

