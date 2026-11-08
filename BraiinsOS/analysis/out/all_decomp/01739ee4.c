// FUN_01739ee4 @ 01739ee4 size=156 calls_out=2 calls_in=27
// strings: 

undefined4 FUN_01739ee4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0177ea78(param_1,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (pcVar3 = *(code **)(*(int *)(param_1 + 0xc) + 0x58), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = FUN_0177aafc(param_1);
  return uVar2;
}

