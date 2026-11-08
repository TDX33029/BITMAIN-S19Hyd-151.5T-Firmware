// FUN_00a29038 @ 00a29038 size=796 calls_out=11 calls_in=0
// strings: Missing upgrade image | System error

void FUN_00a29038(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  uint local_a0;
  undefined4 ***local_9c;
  uint local_98;
  undefined4 ***local_94;
  int local_90;
  undefined2 local_54;
  undefined4 **local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int **local_38;
  undefined2 *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = 0;
  local_94 = (undefined4 ***)&DAT_00000001;
  local_98 = 0;
  if (param_2 == '\0') {
    FUN_0132b898(&local_98,0,0xc,1,1);
    iVar2 = local_90;
    local_a0 = local_98;
    local_9c = local_94;
    FUN_01bed4e2((undefined1 *)((int)local_94 + local_90),"System error",0xc);
    iVar2 = iVar2 + 0xc;
    uVar1 = 500;
  }
  else if (param_2 == '\x01') {
    FUN_0132b898(&local_98,0,0x15,1,1);
    iVar2 = local_90;
    local_a0 = local_98;
    local_9c = local_94;
    FUN_01bed4e2((undefined1 *)((int)local_94 + local_90),"Missing upgrade image",0x15);
    uVar1 = 400;
    iVar2 = iVar2 + 0x15;
  }
  else {
    local_34 = &DAT_0132b6a0;
    local_38 = (int **)&DAT_01c24550;
    iVar2 = FUN_012fa178(&local_98,&DAT_01c0e3e4,&DAT_00590e5f,&local_38);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01c0e3fc,&DAT_01d30334);
    }
    local_a0 = local_98;
    local_9c = local_94;
    uVar1 = 0x199;
    iVar2 = local_90;
  }
  local_48 = (undefined4 **)thunk_FUN_01be5118(0x80);
  if (local_48 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  uVar6 = 1;
  pcVar3 = "{";
  local_3c = 1;
  local_40 = 0x80;
  local_44 = 0;
  local_38 = (int **)&local_48;
  do {
    uVar4 = local_44;
    uVar5 = local_44 ^ 0x7fffffff;
    if (uVar6 < (local_44 ^ 0x7fffffff)) {
      uVar5 = uVar6;
    }
    FUN_01284394(&local_48,pcVar3,uVar5);
    if (uVar4 == 0x7fffffff) goto LAB_00a292a4;
    pcVar3 = pcVar3 + uVar5;
    uVar6 = uVar6 - uVar5;
  } while (uVar6 != 0);
  local_94 = &local_38;
  local_98 = 0x100;
  iVar2 = FUN_0096b5ec(&local_98,&DAT_0053268a,5,local_9c,iVar2);
  if (((iVar2 == 0) && (iVar2 = 0, (local_98 & 0xff00) != 0)) && ((local_98 & 1) == 0)) {
    uVar6 = 1;
    ppuVar8 = *local_94;
    pcVar3 = "}";
    do {
      puVar7 = ppuVar8[1];
      uVar4 = (uint)puVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(ppuVar8,pcVar3,uVar4);
      if (puVar7 == (undefined4 *)0x7fffffff) goto LAB_00a292a4;
      pcVar3 = pcVar3 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
  }
LAB_00a292b0:
  local_38 = local_48;
  local_34 = (undefined2 *)local_44;
  uStack_30 = local_40;
  uStack_2c = local_3c;
  FUN_00710a2c(&local_98,&local_38,iVar2);
  FUN_019bb7e0(local_a0,local_9c);
  local_54 = uVar1;
  FUN_01bed4e2(param_1,&local_98,0x50);
  return;
LAB_00a292a4:
  iVar2 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00a292b0;
}

