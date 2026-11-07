// FUN_01abad04 @ 01abad04 size=116 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01abad04(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < param_3) {
    FUN_006520b4(piVar2,iVar1,param_3,1,1);
    iVar1 = piVar2[2];
  }
  FUN_01bed4e2(piVar2[1] + iVar1,param_2,param_3);
  piVar2[2] = piVar2[2] + param_3;
  return 0;
}

