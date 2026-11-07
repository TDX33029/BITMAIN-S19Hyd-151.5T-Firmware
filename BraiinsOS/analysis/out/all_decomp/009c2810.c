// FUN_009c2810 @ 009c2810 size=328 calls_out=7 calls_in=2
// strings: BUG: Couldn't build generic_gauge with opts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_009c2810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [96];
  int local_e8;
  undefined4 local_e4;
  undefined4 *local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  
  uVar1 = FUN_009c19f8(&local_e8,param_1,param_2,param_3);
  uVar7 = thunk_FUN_016de0ee(uVar1,0x2c0);
  puVar3 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar3[4] == '\0') {
    FUN_015f62e4(&local_88);
    *puVar3 = (uint)local_88;
    puVar3[1] = local_84;
    puVar3[2] = local_80;
    puVar3[3] = local_7c;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  uVar6 = puVar3[2];
  uVar5 = puVar3[3];
  *puVar3 = uVar2 + 1;
  puVar3[1] = uVar4 + (0xfffffffe < uVar2);
  FUN_016dd1aa(&local_88,&local_e8,0x60);
  FUN_012b56f4(&local_e8);
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_88 = &DAT_005674cc;
  local_78 = uVar2;
  uStack_74 = uVar4;
  uStack_70 = uVar6;
  local_6c = uVar5;
  FUN_016dd1aa(auStack_148,&local_88,0x60);
  FUN_009b5dd0(&local_e8,auStack_148,param_5,param_6);
  if (local_e8 != 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_88,&DAT_0186a208);
  }
  return local_e4;
}

