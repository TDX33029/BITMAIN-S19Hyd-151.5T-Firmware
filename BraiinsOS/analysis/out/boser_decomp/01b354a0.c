// FUN_01b354a0 @ 01b354a0 size=212 calls_out=7 calls_in=1
// strings: 

bool FUN_01b354a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_01b32a2c();
  if (iVar1 == 0) {
LAB_01b354cc:
    bVar3 = false;
  }
  else {
    if (param_3 == 0) {
      param_3 = FUN_01b2e788();
      iVar1 = param_3;
      if (param_3 == 0) goto LAB_01b354cc;
    }
    else {
      iVar1 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    FUN_01b2af70(param_1);
    iVar2 = FUN_01b353f4(param_1,iVar2 << 6);
    if ((iVar2 == 0) || (iVar2 = FUN_01b33d3c(0,param_1,param_1,param_1 + 0x14,param_3), iVar2 == 0)
       ) {
      bVar3 = false;
    }
    else {
      iVar2 = FUN_01b2b700(param_1,*(undefined4 *)(param_1 + 0x18));
      bVar3 = iVar2 != 0;
    }
    FUN_01b2e7c8(iVar1);
  }
  return bVar3;
}

