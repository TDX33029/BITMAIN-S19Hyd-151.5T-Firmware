// FUN_01b3ae00 @ 01b3ae00 size=328 calls_out=12 calls_in=2
// strings: 

undefined4 FUN_01b3ae00(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  iVar1 = FUN_01b3acd4();
  if ((iVar1 == 0) || (iVar1 = FUN_01b2e788(), iVar1 == 0)) {
    return 0;
  }
  FUN_01b2e894();
  uVar2 = FUN_01b2ae78();
  iVar3 = FUN_01b2be38(param_2,uVar2);
  if (iVar3 < 1) {
    *param_3 = *param_3 | 1;
  }
  iVar3 = FUN_01b2e970(iVar1);
  if (((iVar3 == 0) || (iVar4 = FUN_01b2b33c(iVar3,*param_1), iVar4 == 0)) ||
     (iVar4 = FUN_01b2e358(iVar3,1), iVar4 == 0)) {
LAB_01b3ae9c:
    uVar2 = 0;
  }
  else {
    iVar4 = FUN_01b2be38(param_2,iVar3);
    iVar5 = param_1[2];
    if (-1 < iVar4) {
      *param_3 = *param_3 | 2;
    }
    if (iVar5 != 0) {
      iVar4 = FUN_01b35f88(iVar3,param_2,iVar5,*param_1,iVar1,0);
      if (iVar4 == 0) goto LAB_01b3ae9c;
      iVar3 = FUN_01b2e54c(iVar3);
      if (iVar3 == 0) {
        *param_3 = *param_3 | 4;
      }
    }
    uVar2 = 1;
  }
  FUN_01b2ebbc(iVar1);
  FUN_01b2e7c8(iVar1);
  return uVar2;
}

