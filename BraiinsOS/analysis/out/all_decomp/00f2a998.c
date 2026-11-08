// FUN_00f2a998 @ 00f2a998 size=276 calls_out=5 calls_in=1
// strings: 

void FUN_00f2a998(int *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_88;
  undefined8 *local_84;
  int local_80;
  undefined1 auStack_78 [84];
  
  uVar4 = FUN_00f2aacc(param_2);
  if ((int)uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  puVar1 = (undefined8 *)thunk_FUN_016d4a50(0x20);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x20);
  }
  local_80 = 1;
  local_88 = 4;
  *puVar1 = uVar4;
  local_84 = puVar1;
  FUN_016dd1aa(auStack_78,param_2,0x50);
  iVar2 = 0;
  while (uVar4 = FUN_00f2aacc(auStack_78), (int)uVar4 != 0) {
    iVar3 = iVar2 + 1;
    if (iVar3 == local_88) {
      FUN_00edff4c(&local_88,iVar3,1,4,8);
      puVar1 = local_84;
    }
    puVar1[iVar2 + 1] = uVar4;
    local_80 = iVar2 + 2;
    iVar2 = iVar3;
  }
  *param_1 = local_88;
  param_1[1] = (int)local_84;
  param_1[2] = local_80;
  return;
}

