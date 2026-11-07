// FUN_01119b28 @ 01119b28 size=32 calls_out=1 calls_in=1
// strings: 

void FUN_01119b28(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 1) == 2) {
    FUN_00b9391c(*(undefined1 *)(param_1 + 2),param_1[3]);
    return;
  }
  uVar1 = FUN_01beaf68(*param_1);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

