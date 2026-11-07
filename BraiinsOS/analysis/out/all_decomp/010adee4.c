// FUN_010adee4 @ 010adee4 size=120 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_010adee4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < param_3) {
    FUN_010bf6b0(piVar2,iVar1,param_3,1,1);
    iVar1 = piVar2[2];
  }
  FUN_016dd1aa(piVar2[1] + iVar1,param_2,param_3);
  piVar2[2] = piVar2[2] + param_3;
  return 0;
}

