// FUN_01729f28 @ 01729f28 size=360 calls_out=12 calls_in=2
// strings: 

undefined4 FUN_01729f28(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  iVar1 = FUN_01729e04();
  if ((iVar1 == 0) || (iVar1 = FUN_017184a8(), iVar1 == 0)) {
    return 0;
  }
  FUN_017185b4();
  uVar2 = FUN_01714250();
  iVar3 = FUN_01715760(param_2,uVar2);
  if (iVar3 < 1) {
    *param_3 = *param_3 | 1;
  }
  iVar3 = FUN_017186b0(iVar1);
  if (((iVar3 == 0) || (iVar4 = FUN_017147ac(iVar3,*param_1), iVar4 == 0)) ||
     (iVar4 = FUN_01717ee0(iVar3,1), iVar4 == 0)) {
LAB_0172a05c:
    uVar2 = 0;
  }
  else {
    iVar4 = FUN_01715760(param_2,iVar3);
    iVar5 = param_1[2];
    if (-1 < iVar4) {
      *param_3 = *param_3 | 2;
    }
    if (iVar5 != 0) {
      iVar4 = FUN_01721398(iVar3,param_2,iVar5,*param_1,iVar1,0);
      if (iVar4 == 0) goto LAB_0172a05c;
      iVar3 = FUN_01718124(iVar3);
      if (iVar3 == 0) {
        *param_3 = *param_3 | 4;
      }
    }
    uVar2 = 1;
  }
  FUN_01718904(iVar1);
  FUN_017184e8(iVar1);
  return uVar2;
}

