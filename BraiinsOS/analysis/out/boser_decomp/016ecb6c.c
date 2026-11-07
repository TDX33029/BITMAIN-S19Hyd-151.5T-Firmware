// FUN_016ecb6c @ 016ecb6c size=300 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016ecb6c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined1 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,&DAT_005676d8,0x10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_012fb940(param_2,"()",2);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01ce45f8;
    local_29 = 1;
    local_38 = uVar4;
    local_34 = iVar5;
    local_28 = (undefined1 *)&local_38;
    iVar1 = FUN_012fb940(&local_28,"()",2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&local_38,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  }
  return uVar2;
}

