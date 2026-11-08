// FUN_0116bcb4 @ 0116bcb4 size=344 calls_out=8 calls_in=0
// strings: 

void FUN_0116bcb4(undefined4 param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int *local_d0 [17];
  undefined2 local_8c;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = *(int *)(param_2 + 4);
  uStack_7c = *(undefined4 *)(param_2 + 6);
  uStack_78 = *(undefined4 *)(param_2 + 8);
  uStack_74 = *(undefined4 *)(param_2 + 10);
  local_70 = *(undefined4 *)(param_2 + 0xc);
  uStack_6c = *(undefined4 *)(param_2 + 0xe);
  uStack_68 = *(undefined4 *)(param_2 + 0x10);
  uStack_64 = *(undefined4 *)(param_2 + 0x12);
  uStack_60 = *(undefined4 *)(param_2 + 0x14);
  local_5c = *(undefined4 *)(param_2 + 0x16);
  uStack_58 = *(undefined4 *)(param_2 + 0x18);
  uStack_54 = *(undefined4 *)(param_2 + 0x1a);
  uStack_50 = *(undefined4 *)(param_2 + 0x1c);
  uStack_4c = *(undefined4 *)(param_2 + 0x1e);
  local_48 = thunk_FUN_01be5118(0x80);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_d0[0] = &local_48;
  local_3c = 1;
  local_40 = 0x80;
  local_44 = 0;
  if (local_80 == 3) {
    uVar4 = 4;
    puVar5 = &DAT_0056d030;
    do {
      uVar1 = local_44;
      uVar3 = local_44 ^ 0x7fffffff;
      if (uVar4 < (local_44 ^ 0x7fffffff)) {
        uVar3 = uVar4;
      }
      FUN_01284394(&local_48,puVar5,uVar3);
      if (uVar1 == 0x7fffffff) {
        uVar2 = FUN_01966f50(2,&DAT_01d2e7b8,0);
        goto LAB_0116bdc0;
      }
      puVar5 = puVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00ebdb58(param_2 + 4,local_d0);
  }
LAB_0116bdc0:
  local_38 = local_48;
  uStack_34 = local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(local_d0,&local_38,uVar2);
  FUN_00d6b0f4(&local_80);
  local_8c = *param_2;
  FUN_01bed4e2(param_1,local_d0,0x50);
  return;
}

