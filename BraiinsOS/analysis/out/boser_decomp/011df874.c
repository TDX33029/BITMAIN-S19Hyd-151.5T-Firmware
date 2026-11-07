// FUN_011df874 @ 011df874 size=232 calls_out=3 calls_in=0
// strings: Voltage | Frequency | Chips | Cores

void FUN_011df874(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  iVar1 = FUN_007025b0(param_2,"Voltage",7);
  if ((iVar1 == 0) && (iVar1 = FUN_014a72cc((int)uVar3,param_2), iVar1 == 0)) {
    uVar2 = *(undefined4 *)(param_1 + 1);
    iVar1 = FUN_007025b0(param_2,"Frequency",9);
    if ((iVar1 == 0) && (iVar1 = FUN_014a752c(param_2,uVar2), iVar1 == 0)) {
      uVar2 = *(undefined4 *)((int)param_1 + 0xc);
      iVar1 = FUN_007025b0(param_2,"Chips",5);
      if ((iVar1 == 0) && (iVar1 = FUN_014a752c(param_2,uVar2), iVar1 == 0)) {
        uVar2 = *(undefined4 *)(param_1 + 2);
        iVar1 = FUN_007025b0(param_2,"Cores",5);
        if (iVar1 == 0) {
          FUN_014a752c(param_2,uVar2);
          return;
        }
      }
    }
  }
  return;
}

