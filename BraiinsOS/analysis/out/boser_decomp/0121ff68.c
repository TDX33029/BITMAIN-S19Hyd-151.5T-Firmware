// FUN_0121ff68 @ 0121ff68 size=200 calls_out=3 calls_in=3
// strings: 

int FUN_0121ff68(int *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) goto LAB_0121ffa8;
  puVar4 = (undefined *)param_1[3];
  while( true ) {
    iVar1 = (**(code **)(puVar4 + 0xc))(iVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_012d40d0(iVar2,puVar4);
    param_1[2] = 0;
    param_2 = extraout_r1;
LAB_0121ffa8:
    iVar2 = *param_1;
    if (iVar2 != 0) {
      param_2 = param_1[1];
    }
    if (iVar2 == 0 || iVar2 == param_2) break;
    *param_1 = iVar2 + 0x2e0;
    iVar2 = FUN_0121f8ac();
    FUN_012d40d0(0,param_1[3]);
    puVar4 = &DAT_01c24570;
    param_1[2] = iVar2;
    param_1[3] = (int)&DAT_01c24570;
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

