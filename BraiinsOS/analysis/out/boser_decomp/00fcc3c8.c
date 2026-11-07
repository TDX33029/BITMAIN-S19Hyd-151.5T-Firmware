// FUN_00fcc3c8 @ 00fcc3c8 size=600 calls_out=12 calls_in=0
// strings: 

void FUN_00fcc3c8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int unaff_r7;
  uint *puVar8;
  uint local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  int aiStack_74 [3];
  undefined1 auStack_68 [24];
  undefined1 local_50 [4];
  uint local_4c;
  uint local_38;
  undefined1 *puStack_34;
  undefined1 *local_30;
  int iStack_2c;
  undefined1 local_25;
  
  puVar8 = &local_80;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x144)) {
  case 0:
    FUN_01bed4e2(param_2 + 0x98,param_2,0x98);
    *(undefined4 *)(param_2 + 0x130) = 1;
    *(undefined4 *)(param_2 + 0x134) = 0;
    *(undefined4 *)(param_2 + 0x138) = 0;
    *(undefined4 *)(param_2 + 0x13c) = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1b6fc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1b6fc);
  case 3:
    iVar4 = *(int *)(param_2 + 0x140);
    goto LAB_00fcc448;
  }
  do {
    iVar4 = param_2 + 0x98;
    *(int *)(param_2 + 0x140) = iVar4;
LAB_00fcc448:
    FUN_011e5240(&local_80,iVar4,param_3);
    uVar3 = (undefined1)local_80;
    uVar5 = local_80 & 0xff;
    if (uVar5 == 0x10) {
      *param_1 = 0x80000001;
      uVar3 = 3;
      goto LAB_00fcc628;
    }
    FUN_01bed4e2(auStack_68,(uint)&local_80 | 1,0x17);
    if (uVar5 == 0xf) {
      FUN_012fbd94(&local_80,*(undefined4 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0x134));
      puVar8 = (uint *)local_78;
      puVar1 = local_7c;
      if (local_80 == 0) {
        if ((int)local_78 < 0) {
          uVar6 = 0;
LAB_00fcc5bc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,puVar8);
        }
        if (local_78 == (undefined1 *)0x0) {
          unaff_r7 = 1;
          puVar7 = (undefined1 *)0x0;
        }
        else {
          uVar6 = 1;
          unaff_r7 = FUN_01298504(local_78,1);
          if (unaff_r7 == 0) goto LAB_00fcc5bc;
          puVar7 = (undefined1 *)puVar8;
        }
        FUN_01bed4e2(unaff_r7,puVar1,puVar8);
      }
      else {
        puVar7 = &DAT_80000000;
        puVar8 = &local_80;
      }
      FUN_012840cc((undefined4 *)(param_2 + 0x130));
      FUN_00fbbf54(param_2 + 0x98);
      goto LAB_00fcc620;
    }
    local_50[0] = uVar3;
    FUN_01bed4e2((uint)local_50 | 1,auStack_68,0x17);
    uVar2 = local_4c;
    iVar4 = param_2 + 0x130;
    if (uVar5 != 0xe) {
      FUN_00fbc188(local_50);
LAB_00fcc594:
      FUN_012840cc(iVar4);
      FUN_00fbbf54(param_2 + 0x98);
      puVar7 = &DAT_80000000;
LAB_00fcc620:
      uVar3 = 1;
      *param_1 = puVar7;
      param_1[1] = unaff_r7;
      param_1[2] = puVar8;
LAB_00fcc628:
      *(undefined1 *)(param_2 + 0x144) = uVar3;
      return;
    }
    unaff_r7 = 0;
    if (local_4c == 0) goto LAB_00fcc594;
    FUN_01bed4e2((uint)&local_38 | 4,(uint)auStack_68 | 7,0xc);
    local_38 = uVar2;
    if ((undefined1 *)(*(int *)(param_2 + 0x138) - *(int *)(param_2 + 0x134)) < local_30) {
      FUN_01283c9c(iVar4,local_30);
    }
    unaff_r7 = iStack_2c;
    local_80 = local_38;
    local_7c = puStack_34;
    local_78 = local_30;
    aiStack_74[0] = iStack_2c;
    while (local_78 != (undefined1 *)0x0) {
      local_78 = local_78 + -1;
      local_25 = *local_7c;
      local_7c = local_7c + 1;
      FUN_01284394(iVar4,&local_25,1);
    }
    (**(code **)(local_80 + 0x10))(aiStack_74,local_7c,0);
  } while( true );
}

