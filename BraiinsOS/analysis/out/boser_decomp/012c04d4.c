// FUN_012c04d4 @ 012c04d4 size=284 calls_out=5 calls_in=1
// strings: 

void FUN_012c04d4(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_43 [19];
  undefined4 local_30;
  undefined1 *local_2c;
  int local_28;
  
  if ((int)param_4 < 0) {
    iVar5 = 0x14;
    local_2c = (undefined1 *)thunk_FUN_01be5118(0x14);
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
    iVar3 = 1;
    *local_2c = 0x2d;
    local_30 = 0x14;
    local_28 = 1;
  }
  else {
    iVar5 = 0x13;
    local_2c = (undefined1 *)thunk_FUN_01be5118(0x13);
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x13);
    }
    iVar3 = 0;
    local_28 = 0;
    local_30 = 0x13;
  }
  puVar2 = local_2c;
  uVar4 = (int)param_4 >> 0x1f;
  iVar1 = FUN_012fc968((param_3 ^ uVar4) - uVar4,
                       (param_4 ^ uVar4) - (uVar4 + ((param_3 ^ uVar4) < uVar4)),auStack_43,0x13);
  uVar4 = 0x13 - iVar1;
  if ((uint)(iVar5 - iVar3) < uVar4) {
    FUN_006520b4(&local_30,iVar3,uVar4,1,1);
    puVar2 = local_2c;
    iVar3 = local_28;
  }
  FUN_01bed4e2(puVar2 + iVar3,auStack_43 + iVar1,uVar4);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28 + uVar4;
  return;
}

