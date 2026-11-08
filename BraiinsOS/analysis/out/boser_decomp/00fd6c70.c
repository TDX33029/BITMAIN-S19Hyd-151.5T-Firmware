// FUN_00fd6c70 @ 00fd6c70 size=768 calls_out=10 calls_in=0
// strings: 

void FUN_00fd6c70(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_100 [144];
  undefined4 local_70;
  undefined4 *local_6c;
  uint *local_68;
  undefined4 *local_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c [2];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x13c)) {
  case 0:
    *(undefined1 *)(param_2 + 0x13d) = 0;
    *(undefined1 *)(param_2 + 0x13e) = 1;
    FUN_01bed4e2(auStack_100,param_2,0x90);
    *(undefined2 *)(param_2 + 0x13d) = 1;
    *(undefined4 *)(param_2 + 0x90) = 1;
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x9c) = 1;
    FUN_01bed4e2(param_2 + 0xa0,param_2,0x90);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1c918);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1c918);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x138)) {
    case 0:
      iVar4 = *(int *)(param_2 + 0x130);
      goto LAB_00fd6d60;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1c928);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1c928);
    case 3:
      iVar4 = *(int *)(param_2 + 0x134);
      goto LAB_00fd6d64;
    }
  }
  while( true ) {
    *(undefined1 *)(param_2 + 0x138) = 0;
    iVar4 = param_2 + 0xa0;
    *(int *)(param_2 + 0x130) = iVar4;
LAB_00fd6d60:
    *(int *)(param_2 + 0x134) = iVar4;
LAB_00fd6d64:
    FUN_00f86b20(&local_70,iVar4,param_3);
    puVar7 = local_64;
    puVar6 = local_68;
    puVar3 = local_6c;
    uVar1 = (undefined1)local_70;
    uVar5 = (uint)local_70 & 0xff;
    uVar2 = 1;
    if (uVar5 == 0xf) {
      uVar2 = 3;
    }
    *(undefined1 *)(param_2 + 0x138) = uVar2;
    if (uVar5 == 0xf) {
      *param_1 = 0xf;
      uVar2 = 3;
      goto LAB_00fd6f44;
    }
    local_52 = local_70._3_1_;
    local_54 = local_70._1_2_;
    if (uVar5 != 0xe) break;
    if (local_6c == (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 0x9c);
      puVar6 = *(uint **)(param_2 + 0x90);
      puVar7 = *(undefined4 **)(param_2 + 0x94);
      *(undefined1 *)(param_2 + 0x13d) = 0;
      if (((uint)puVar8 & 1) == 0) {
        puVar3 = &DAT_01d2e520;
      }
      else {
        local_44 = (int)puVar7 + ((uint)puVar8 >> 5);
        local_48 = (int)puVar6 - ((uint)puVar8 >> 5);
        local_4c = *(int *)(param_2 + 0x98) + ((uint)puVar8 >> 5);
        FUN_01283524(&local_40,&local_4c);
        local_30 = (uint)puVar8 >> 5;
        if (local_38 < local_30) {
          local_68 = local_2c;
          local_2c[0] = local_38;
          local_64 = (undefined4 *)&LAB_01a6a304;
          local_6c = (undefined4 *)&LAB_01a6a304;
          local_70 = &local_30;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_70,&DAT_01d2e534);
        }
        puVar7 = (undefined4 *)(local_38 - local_30);
        puVar6 = (uint *)((int)local_3c + local_30);
        puVar8 = local_34;
        puVar3 = local_40;
      }
      FUN_00fbbf54(param_2 + 0xa0);
      puStack_60 = puVar8;
      goto LAB_00fd6f0c;
    }
    iVar4 = *(int *)(param_2 + 0x94);
    local_70 = local_6c;
    local_6c = local_68;
    local_68 = local_64;
    local_64 = puStack_60;
    if ((undefined4 *)(*(int *)(param_2 + 0x98) - iVar4) < puVar7) {
      FUN_01283c9c(param_2 + 0x90,puVar7);
      iVar4 = *(int *)(param_2 + 0x94);
    }
    FUN_01bed4e2(*(int *)(param_2 + 0x90) + iVar4,puVar6,puVar7);
    puVar3 = (undefined4 *)(*(int *)(param_2 + 0x98) - *(int *)(param_2 + 0x94));
    if (puVar3 < puVar7) {
      local_40 = puVar7;
      local_3c = puVar3;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_40);
    }
    *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + (int)puVar7;
    (*(code *)local_70[4])(&local_64,local_6c,local_68);
  }
  local_4e = local_70._3_1_;
  local_50 = local_70._1_2_;
  FUN_00fbbf54(param_2 + 0xa0);
  FUN_012840cc(param_2 + 0x90);
LAB_00fd6f0c:
  *(undefined1 *)(param_2 + 0x13d) = 0;
  *(undefined1 *)(param_2 + 0x13e) = 0;
  param_1[3] = local_4e;
  *(uint **)(param_1 + 8) = puVar6;
  *(undefined4 **)(param_1 + 0xc) = puVar7;
  *(undefined4 **)(param_1 + 0x10) = puStack_60;
  *(undefined4 *)(param_1 + 0x14) = uStack_5c;
  uVar2 = 1;
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 1) = local_50;
  *(undefined4 **)(param_1 + 4) = puVar3;
LAB_00fd6f44:
  *(undefined1 *)(param_2 + 0x13c) = uVar2;
  return;
}

