// FUN_0096fc40 @ 0096fc40 size=308 calls_out=7 calls_in=1
// strings: 

void FUN_0096fc40(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 **local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int **local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48 = (undefined4 **)thunk_FUN_01be5118(0x80);
  if (local_48 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  cVar1 = *param_2;
  local_38 = (int **)&local_48;
  local_3c = 1;
  local_40 = 0x80;
  local_44 = 0;
  if (cVar1 == '\x06') {
    uVar5 = 4;
    puVar6 = &DAT_0056d030;
    do {
      uVar2 = local_44;
      uVar4 = local_44 ^ 0x7fffffff;
      if (uVar5 < (local_44 ^ 0x7fffffff)) {
        uVar4 = uVar5;
      }
      FUN_01284394(&local_48,puVar6,uVar4);
      if (uVar2 == 0x7fffffff) {
        uVar3 = FUN_01966f50(2,&DAT_01d2e7b8,0);
        goto LAB_0096fd40;
      }
      puVar6 = puVar6 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0096addc(param_2,&local_38);
  }
LAB_0096fd40:
  local_38 = local_48;
  uStack_34 = local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(param_1,&local_38,uVar3);
  if (cVar1 != '\x06') {
    FUN_00db4764(param_2);
  }
  return;
}

