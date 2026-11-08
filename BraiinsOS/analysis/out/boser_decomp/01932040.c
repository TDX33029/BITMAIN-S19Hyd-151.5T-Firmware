// FUN_01932040 @ 01932040 size=508 calls_out=7 calls_in=1
// strings: 

void FUN_01932040(undefined1 *param_1,undefined4 param_2,uint *param_3,char *param_4,
                 undefined4 param_5,int param_6)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = *(uint *)(param_6 + 8);
  if (uVar6 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(5,uVar6,uVar6,&DAT_01d255e8);
  }
  uVar7 = uVar6 - 5;
  if (param_3[1] == 0 && (uint)(uVar7 <= *param_3) <= param_3[1]) {
    cVar1 = *param_4;
    iVar3 = 1;
    *param_1 = 1;
    if (cVar1 == '\0') {
      return;
    }
    do {
      param_4[iVar3] = '\0';
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xd);
    return;
  }
  if (*param_4 == '\x01') {
    FUN_01bed4e2(local_60,param_4 + 1,0xc);
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    FUN_01657150(param_6,&local_50,&local_40);
    uVar4 = *(uint *)(param_6 + 8);
    if (uVar4 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(5,uVar4,uVar4,&DAT_01d255e8);
    }
    iVar3 = *(int *)(param_6 + 4) + 5;
    iVar3 = FUN_01b37c84(param_2,iVar3,&local_30,uVar6 + 0xb,local_60,0xc,iVar3,uVar7,param_5,5);
    if (iVar3 != 1) {
      iVar3 = 0;
      *param_1 = 1;
      do {
        *(undefined1 *)((int)local_60 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xc);
      return;
    }
    puVar5 = local_60;
  }
  else {
    FUN_01bed93e(&local_50,0,0x1c);
    iVar3 = *(int *)(param_6 + 4) + 5;
    iVar3 = FUN_01b37e2c(param_2,iVar3,&local_50,auStack_34,0x1c,0,0,iVar3,uVar7,0,0,param_5,5);
    if (iVar3 != 1) {
      uVar2 = 1;
      goto LAB_019321e0;
    }
    local_30 = local_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    FUN_01ac6cbc(param_6,&local_50,0x10);
    puVar5 = &local_30;
  }
  FUN_01bed4e2(param_1 + 1,puVar5,0xc);
  uVar2 = 0;
LAB_019321e0:
  *param_1 = uVar2;
  return;
}

