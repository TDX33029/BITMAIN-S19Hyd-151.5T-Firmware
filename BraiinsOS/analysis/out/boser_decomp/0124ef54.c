// FUN_0124ef54 @ 0124ef54 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_0124ef54(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 5) + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0124d4fc(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0134c054(param_1[2],*param_1,8,0x20);
  return;
}

