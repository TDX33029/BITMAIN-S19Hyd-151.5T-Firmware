// FUN_01796e68 @ 01796e68 size=128 calls_out=0 calls_in=1
// strings: 

byte FUN_01796e68(uint *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  if (*(byte *)((int)param_1 + 1) < param_3) {
    return 0;
  }
  bVar3 = 0;
  piVar1 = (int *)(param_2 + -4);
  iVar2 = 0;
  do {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    bVar3 = bVar3 | (*piVar1 != 0 && (*param_1 & 0xff) == 0);
  } while (iVar2 <= (int)param_3);
  return bVar3 ^ 1;
}

