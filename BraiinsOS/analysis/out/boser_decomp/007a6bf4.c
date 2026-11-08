// FUN_007a6bf4 @ 007a6bf4 size=264 calls_out=5 calls_in=2
// strings: 

void FUN_007a6bf4(int *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_88;
  undefined8 *local_84;
  int local_80;
  undefined1 auStack_78 [84];
  
  uVar4 = FUN_007a6d1c(param_2);
  if ((int)uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)thunk_FUN_01be5118(0x20);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x20);
    }
    local_80 = 1;
    local_88 = 4;
    *puVar1 = uVar4;
    local_84 = puVar1;
    FUN_01bed4e2(auStack_78,param_2,0x50);
    iVar3 = 0;
    while (uVar4 = FUN_007a6d1c(auStack_78), (int)uVar4 != 0) {
      iVar2 = iVar3 + 1;
      if (iVar2 == local_88) {
        FUN_006520b4(&local_88,iVar2,1,4,8);
        puVar1 = local_84;
      }
      puVar1[iVar3 + 1] = uVar4;
      local_80 = iVar3 + 2;
      iVar3 = iVar2;
    }
    *param_1 = local_88;
    param_1[1] = (int)local_84;
    param_1[2] = local_80;
  }
  return;
}

