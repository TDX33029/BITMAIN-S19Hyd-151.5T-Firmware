// FUN_01be8eca @ 01be8eca size=54 calls_out=3 calls_in=3
// strings: 

int FUN_01be8eca(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  thunk_FUN_01bee080(0x129,param_1,param_2,param_3,0,0,0);
  iVar1 = FUN_01be3b5a();
  if (-1 < iVar1) {
    FUN_01be8ddc(param_2,uVar2);
  }
  return iVar1;
}

