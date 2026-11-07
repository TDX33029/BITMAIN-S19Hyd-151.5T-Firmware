// FUN_01b353f4 @ 01b353f4 size=172 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_01b353f4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar1 = (int)param_2 >> 5;
  if (param_1[1] <= iVar1) {
    iVar3 = iVar1 + 1;
    iVar2 = FUN_01b2b248(param_1,iVar3);
    if (iVar2 == 0) {
      return 0;
    }
    for (iVar2 = param_1[1]; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      *(undefined4 *)(*param_1 + iVar2 * 4) = 0;
    }
    param_1[1] = iVar3;
  }
  *(uint *)(*param_1 + iVar1 * 4) = *(uint *)(*param_1 + iVar1 * 4) | 1 << (param_2 & 0x1f);
  return 1;
}

