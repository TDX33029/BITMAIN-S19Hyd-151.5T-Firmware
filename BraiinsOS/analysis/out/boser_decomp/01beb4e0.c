// FUN_01beb4e0 @ 01beb4e0 size=38 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01beb4e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01bedbda();
  iVar2 = FUN_01beb584(param_1,1,iVar1,param_2);
  uVar3 = 0;
  if (iVar2 != iVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

