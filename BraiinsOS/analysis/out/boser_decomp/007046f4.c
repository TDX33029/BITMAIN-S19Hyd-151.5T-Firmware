// FUN_007046f4 @ 007046f4 size=220 calls_out=8 calls_in=0
// strings: Unspecified

void FUN_007046f4(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  
  iVar1 = FUN_01b4776c(param_2);
  if ((iVar1 == 0x390 || iVar1 == 6) && (iVar1 = FUN_00703d88(param_2), iVar1 - 0x800U < 0x1801)) {
    local_2c = 0;
    local_28 = 0;
    iVar1 = FUN_01b47928(param_2);
    if ((iVar1 != 0) &&
       ((iVar2 = FUN_01b6ee9c(&local_2c,&local_28,iVar1), iVar1 = local_2c, iVar2 == 1 &&
        (local_2c != 0)))) {
      FUN_0193a93c(auStack_24,local_2c,local_28);
      uVar3 = FUN_00703dd4(auStack_24);
      FUN_01b6b1c4(iVar1);
      if ((int)uVar3 != 0) {
        *param_1 = uVar3;
        *(undefined4 *)(param_1 + 1) = param_2;
        return;
      }
    }
  }
  *(undefined4 *)param_1 = 0;
  *(char **)((int)param_1 + 4) = "Unspecified";
  *(undefined4 *)(param_1 + 1) = 0xb;
  FUN_01b46fd8(param_2);
  return;
}

