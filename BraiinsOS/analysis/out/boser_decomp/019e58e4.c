// FUN_019e58e4 @ 019e58e4 size=64 calls_out=3 calls_in=2
// strings: 

void FUN_019e58e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_01bf01d6(*param_1);
  uVar2 = param_1[5];
  FUN_019eb7b4(uVar2,param_1[6]);
  FUN_0134c054(param_1[4],uVar2,4,4);
  uVar2 = FUN_01beaf68(param_1[1]);
  iVar1 = thunk_FUN_01bee080(6,uVar2,0,0,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_01be3b5a(iVar1);
  return;
}

