// FUN_01983350 @ 01983350 size=676 calls_out=13 calls_in=2
// strings: 

void FUN_01983350(int param_1,char *param_2,undefined2 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 *local_6c;
  int local_68;
  undefined2 *local_64;
  char local_60 [4];
  short *local_5c;
  int local_58;
  char *local_44;
  undefined2 *local_40;
  char *local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (param_3 == (undefined2 *)0x0) {
    local_26 = false;
    local_64 = (undefined2 *)0x0;
    local_68 = 1;
  }
  else {
    iVar2 = FUN_01298504(param_3,1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(iVar2,param_2,param_3);
    local_26 = *param_2 == '/';
    local_68 = iVar2;
    local_64 = param_3;
  }
  local_3c = (char *)CONCAT31(local_3c._1_3_,6);
  local_28 = 0x201;
  local_6c = local_64;
  local_44 = param_2;
  local_40 = param_3;
  FUN_01982524(local_60,&local_44);
  if ((local_60[0] == '\t') && ((local_58 != 2 || (*local_5c != 0x2e2e)))) {
    iVar2 = local_58;
    do {
      iVar3 = iVar2;
      if (iVar3 == 0) goto LAB_019834cc;
      iVar2 = iVar3 + -1;
    } while (*(char *)((int)local_5c + iVar3 + -1) != '.');
    if (iVar3 + -1 == 0) goto LAB_019834cc;
    pcVar6 = (char *)(local_58 - iVar3);
    puVar7 = (undefined2 *)&DAT_00000001;
    if ((pcVar6 != (char *)0x0) &&
       (puVar7 = (undefined2 *)FUN_01298504(pcVar6,1), puVar7 == (undefined2 *)0x0))
    goto LAB_019835e0;
    FUN_01bed4e2(puVar7,(int)local_5c + iVar3,pcVar6);
    local_44 = pcVar6;
    local_40 = puVar7;
    local_3c = pcVar6;
    FUN_0197ac30(&local_44,pcVar6,4,1,1);
    bVar1 = local_44 == (char *)0x0;
    builtin_strncpy((char *)((int)local_40 + (int)local_3c),".dwp",4);
    pcVar6 = local_3c + 4;
    puVar7 = local_40;
  }
  else {
LAB_019834cc:
    pcVar6 = &DAT_00000003;
    puVar7 = (undefined2 *)thunk_FUN_01be5118(3);
    if (puVar7 == (undefined2 *)0x0) {
LAB_019835e0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,pcVar6);
    }
    *(undefined1 *)(puVar7 + 1) = 0x70;
    bVar1 = false;
    pcVar6 = &DAT_00000003;
    *puVar7 = 0x7764;
  }
  FUN_0199ec90(&local_6c,puVar7,pcVar6);
  if (!bVar1) {
    thunk_FUN_01be4678(puVar7);
  }
  iVar2 = local_68;
  FUN_019809f0(&local_44,local_68,local_64);
  pcVar6 = local_3c;
  puVar7 = local_40;
  if (local_44 == &DAT_00000001) {
    uVar5 = *(uint *)(param_4 + 0x14);
    if (uVar5 == *(uint *)(param_4 + 0xc)) {
      FUN_01986d38();
    }
    *(uint *)(param_4 + 0x14) = uVar5 + 1;
    puVar4 = (undefined4 *)(*(int *)(param_4 + 0x10) + uVar5 * 8);
    *puVar4 = puVar7;
    puVar4[1] = pcVar6;
    if (0xfffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27680);
    }
    iVar3 = *(int *)(param_4 + 0x10) + (uVar5 + 1) * 8;
    FUN_01980be4(param_1,*(undefined4 *)(iVar3 + -8),*(undefined4 *)(iVar3 + -4));
    if (*(int *)(param_1 + 0x40) != -0x80000000) goto joined_r0x019835c4;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
joined_r0x019835c4:
  if (local_6c == (undefined2 *)0x0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

