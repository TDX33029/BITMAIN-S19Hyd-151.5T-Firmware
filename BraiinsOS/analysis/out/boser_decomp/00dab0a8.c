// FUN_00dab0a8 @ 00dab0a8 size=276 calls_out=6 calls_in=0
// strings: 

void FUN_00dab0a8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = (undefined1 *)thunk_FUN_01be5118(0x80);
  if (local_50 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_44 = 1;
  local_48 = 0x80;
  local_4c = 0;
  if ((param_3 & 1) == 0) {
    uVar3 = 4;
    puVar4 = &DAT_0056d030;
    local_40 = (undefined1 *)&local_50;
    do {
      uVar1 = local_4c;
      uVar5 = local_4c ^ 0x7fffffff;
      if (uVar3 < (local_4c ^ 0x7fffffff)) {
        uVar5 = uVar3;
      }
      FUN_01284394(&local_50,puVar4,uVar5);
      if (uVar1 == 0x7fffffff) {
        uVar2 = FUN_01966f50(2,&DAT_01d2e7b8,0);
        goto LAB_00dab188;
      }
      puVar4 = puVar4 + uVar5;
      uVar3 = uVar3 - uVar5;
    } while (uVar3 != 0);
    uVar2 = 0;
  }
  else {
    local_40 = (undefined1 *)&local_50;
    uVar2 = FUN_00edf01c(&local_40);
  }
LAB_00dab188:
  local_40 = local_50;
  uStack_3c = local_4c;
  uStack_38 = local_48;
  uStack_34 = local_44;
  FUN_00710a2c(param_1,&local_40,uVar2);
  return;
}

