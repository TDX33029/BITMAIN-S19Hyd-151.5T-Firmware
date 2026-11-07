// FUN_007056fc @ 007056fc size=144 calls_out=3 calls_in=1
// strings: 

void FUN_007056fc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3f0 [248];
  undefined1 auStack_2f8 [248];
  undefined1 auStack_200 [244];
  undefined1 auStack_10c [244];
  
  iVar1 = FUN_01b2ab50(param_2,param_3 << 3,auStack_3f0);
  if ((iVar1 == 0) && (iVar1 = FUN_01b2ac0c(param_2,param_3 << 3,auStack_2f8), iVar1 == 0)) {
    FUN_01bed4e2(auStack_200,auStack_3f0,0xf4);
    FUN_01bed4e2(auStack_10c,auStack_2f8,0xf4);
    FUN_01bed4e2(param_1 + 1,auStack_200,0x1e8);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

