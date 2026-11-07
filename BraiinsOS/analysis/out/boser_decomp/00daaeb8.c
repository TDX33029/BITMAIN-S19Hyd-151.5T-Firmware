// FUN_00daaeb8 @ 00daaeb8 size=440 calls_out=6 calls_in=0
// strings: down_s

void FUN_00daaeb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint **local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint *local_28;
  
  local_48 = thunk_FUN_01be5118(0x80);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  uVar4 = 1;
  local_40 = 0x80;
  pcVar2 = "{";
  local_3c = 1;
  local_44 = 0;
  local_28 = &local_48;
  do {
    uVar5 = local_44;
    uVar3 = local_44 ^ 0x7fffffff;
    if (uVar4 < (local_44 ^ 0x7fffffff)) {
      uVar3 = uVar4;
    }
    FUN_01284394(&local_48,pcVar2,uVar3);
    if (uVar5 == 0x7fffffff) goto LAB_00dab02c;
    pcVar2 = pcVar2 + uVar3;
    uVar4 = uVar4 - uVar3;
  } while (uVar4 != 0);
  local_34 = &local_28;
  local_38 = 0x100;
  iVar1 = FUN_00ebe9c0(&local_38,&DAT_0056caac,4,param_2);
  if ((((iVar1 == 0) && (iVar1 = FUN_00ebe9c0(&local_38,"down_s",6,param_3), iVar1 == 0)) &&
      (iVar1 = 0, (local_38 & 0xff00) != 0)) && ((local_38 & 1) == 0)) {
    uVar4 = 1;
    puVar6 = *local_34;
    pcVar2 = "}";
    do {
      uVar3 = puVar6[1];
      uVar5 = uVar3 ^ 0x7fffffff;
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      FUN_01284394(puVar6,pcVar2,uVar5);
      if (uVar3 == 0x7fffffff) goto LAB_00dab02c;
      pcVar2 = pcVar2 + uVar5;
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
  }
LAB_00dab040:
  local_38 = local_48;
  local_34 = (uint **)local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(param_1,&local_38,iVar1);
  return;
LAB_00dab02c:
  iVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00dab040;
}

