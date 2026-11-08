// FUN_014afd34 @ 014afd34 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_014afd34(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_0167459c(uVar2);
  if (iVar1 == 0) {
    FUN_014af050(param_1,uVar2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  return;
}

