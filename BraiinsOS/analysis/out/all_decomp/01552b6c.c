// FUN_01552b6c @ 01552b6c size=176 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01552b6c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r5;
  
  if (param_2 != 0x20) {
    return CONCAT44(unaff_r5,0xc);
  }
  uVar1 = FUN_016e3960();
  iVar2 = FUN_0177a6c0(0x248);
  if (iVar2 == 0) {
    return 0xc;
  }
  FUN_017231fc();
  iVar3 = FUN_017232f0(iVar2,uVar1,param_1,0x20,param_3,0);
  if (iVar3 == 1) {
    return CONCAT44(iVar2,0xb);
  }
  FUN_017233d4(iVar2);
  return CONCAT44(iVar2,0xc);
}

