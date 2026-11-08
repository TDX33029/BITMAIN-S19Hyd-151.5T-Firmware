// FUN_00deff78 @ 00deff78 size=832 calls_out=11 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

/* WARNING: Removing unreachable block (ram,0x00df043c) */

undefined4 FUN_00deff78(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 local_b68 [80];
  undefined1 auStack_b18 [1432];
  undefined1 auStack_580 [88];
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined1 auStack_4a0 [284];
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 local_254;
  undefined1 auStack_1c0 [88];
  undefined1 auStack_168 [288];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar12 = thunk_FUN_016de0ee(0,0x40);
  iVar7 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar7 + 0x38) != '\x01') {
    uVar10 = 0;
    uVar9 = 0;
    if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_00defff0;
    FUN_015e8e6c(iVar7,FUN_01655ec4);
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  uVar10 = *(undefined4 *)(iVar7 + 0x18);
  uVar9 = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar7 + 0x18) = uVar5;
  *(undefined4 *)(iVar7 + 0x1c) = uVar4;
LAB_00defff0:
  iVar6 = param_1 + 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x5f6)) {
  case 0:
    puVar2 = (undefined1 *)(param_1 + 0x5f0);
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x5f5) = 0;
    FUN_016dd1aa(auStack_1c0,param_1 + 0x470,0x58);
    *(undefined1 *)(param_1 + 0x5f4) = 0;
    FUN_016dd1aa(auStack_168,param_1 + 0x4d4,0x11c);
    *(undefined1 *)(param_1 + 0x5f3) = 0;
    local_48 = *(undefined4 *)(param_1 + 0x458);
    uStack_44 = *(undefined4 *)(param_1 + 0x45c);
    uStack_40 = *(undefined4 *)(param_1 + 0x460);
    uStack_3c = *(undefined4 *)(param_1 + 0x464);
    uStack_38 = *(undefined4 *)(param_1 + 0x468);
    uStack_34 = *(undefined4 *)(param_1 + 0x46c);
    uVar4 = *(undefined4 *)(param_1 + 0x4cc);
    *(undefined1 *)(param_1 + 0x5f2) = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x4d0);
    uVar11 = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined1 *)(param_1 + 0x5f1) = 0;
    local_2c = uVar4;
    local_28 = uVar11;
    FUN_01663af4(uVar5);
    FUN_016dd1aa(auStack_580,auStack_1c0,0x58);
    FUN_016dd1aa(auStack_4a0,auStack_168,0x11c);
    local_528 = local_48;
    uStack_524 = uStack_44;
    uStack_520 = uStack_40;
    uStack_51c = uStack_3c;
    uStack_518 = uStack_38;
    uStack_514 = uStack_34;
    local_254 = 0;
    local_384 = uVar4;
    local_380 = uVar5;
    local_37c = uVar11;
    FUN_01656eb8(auStack_168,local_48,10,0,0,&DAT_01878c78);
    iVar3 = *(int *)(param_1 + 0x4d0);
    uVar8 = *(uint *)(iVar3 + 8);
    DataMemoryBarrier(0xb);
    FUN_016dd1aa(auStack_b18,auStack_580,0x3c0);
    FUN_016dd1aa(local_b68,auStack_168,0x50);
    FUN_016dd1aa(param_1 + 0x68,auStack_b18,0x3c0);
    FUN_016dd1aa(iVar6,local_b68,0x50);
    *(undefined4 **)(param_1 + 0x428) = (undefined4 *)(param_1 + 0x4d0);
    *(uint *)(param_1 + 0x430) = uVar8 >> 2;
    *(int *)(param_1 + 0x454) = iVar6;
    *(undefined1 **)(param_1 + 0x450) = puVar2;
    *(undefined1 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x444) = 0;
    *(int *)(param_1 + 0x42c) = iVar3 + 8;
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    iVar3 = iVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878c88);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878c88);
  case 3:
    puVar2 = *(undefined1 **)(param_1 + 0x450);
    iVar3 = *(int *)(param_1 + 0x454);
  }
  iVar3 = FUN_00db459c(puVar2,iVar3,param_2);
  if (iVar3 != 4) {
    FUN_00de4068(iVar6);
                    /* WARNING: Could not recover jumptable at 0x00df020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_00df0210 + *(int *)(&DAT_00df0210 + iVar3 * 4)))();
    return uVar4;
  }
  cVar1 = *(char *)(iVar7 + 0x38);
  *(undefined1 *)(param_1 + 0x5f6) = 3;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return 1;
    }
    FUN_015e8e6c(iVar7,FUN_01655ec4);
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  *(undefined4 *)(iVar7 + 0x18) = uVar10;
  *(undefined4 *)(iVar7 + 0x1c) = uVar9;
  return 1;
}

