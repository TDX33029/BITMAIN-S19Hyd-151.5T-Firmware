// FUN_00081e64 @ 00081e64  size=124  callers=1
// program: bmminer


uint FUN_00081e64(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar4 = 0;
    uVar5 = 0;
    iVar2 = param_3 + -1;
    do {
      iVar3 = iVar2 + 0x10000;
      uVar1 = FUN_000983e0(iVar2,param_3);
      uVar1 = FUN_00081200(param_1,0,iVar4,0xc,uVar1 & 0xffff | 0x80000000);
      iVar4 = iVar4 + param_2;
      uVar5 = uVar5 | uVar1;
      iVar2 = iVar3;
    } while (iVar3 != param_3 * 0x10001 + -1);
  }
  return uVar5;
}

