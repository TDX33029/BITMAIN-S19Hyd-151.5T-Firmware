// FUN_00da9654 @ 00da9654 size=260 calls_out=6 calls_in=0
// strings: 

void FUN_00da9654(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48 = (undefined1 *)thunk_FUN_01be5118(0x80);
  if (local_48 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_3c = 1;
  local_40 = 0x80;
  local_44 = 0;
  if ((param_3 & 1) == 0) {
    uVar3 = 4;
    puVar4 = &DAT_0056d030;
    local_38 = (undefined1 *)&local_48;
    do {
      uVar1 = local_44;
      uVar5 = local_44 ^ 0x7fffffff;
      if (uVar3 < (local_44 ^ 0x7fffffff)) {
        uVar5 = uVar3;
      }
      FUN_01284394(&local_48,puVar4,uVar5);
      if (uVar1 == 0x7fffffff) {
        uVar2 = FUN_01966f50(2,&DAT_01d2e7b8,0);
        goto LAB_00da972c;
      }
      puVar4 = puVar4 + uVar5;
      uVar3 = uVar3 - uVar5;
    } while (uVar3 != 0);
    uVar2 = 0;
  }
  else {
    local_38 = (undefined1 *)&local_48;
    uVar2 = FUN_00edeeb8(param_5,param_6,&local_38);
  }
LAB_00da972c:
  local_38 = local_48;
  uStack_34 = local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(param_1,&local_38,uVar2);
  return;
}

