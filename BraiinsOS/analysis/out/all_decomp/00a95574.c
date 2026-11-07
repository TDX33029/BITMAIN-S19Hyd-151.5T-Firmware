// FUN_00a95574 @ 00a95574 size=332 calls_out=8 calls_in=2
// strings: BUG: Couldn't build generic_gauge with opts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00a95574(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_140 [96];
  int local_e0;
  undefined4 local_dc;
  undefined4 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  uVar1 = FUN_00aa4b64(&local_e0,param_1,param_2,param_3);
  uVar7 = thunk_FUN_016de0ee(uVar1,0x2c0);
  puVar2 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_015f62e4(&local_80);
    *puVar2 = (uint)local_80;
    puVar2[1] = local_7c;
    puVar2[2] = local_78;
    puVar2[3] = local_74;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  uVar4 = *puVar2;
  uVar3 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *puVar2 = uVar4 + 1;
  puVar2[1] = uVar3 + (0xfffffffe < uVar4);
  FUN_016dd1aa(&local_80,&local_e0,0x60);
  FUN_012b56f4(&local_e0);
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_80 = &DAT_005674cc;
  local_70 = uVar4;
  uStack_6c = uVar3;
  uStack_68 = uVar5;
  uStack_64 = uVar6;
  FUN_016dd1aa(auStack_140,&local_80,0x60);
  FUN_00a642b4(&local_e0,auStack_140,4,0);
  FUN_0074c178(auStack_140);
  if (local_e0 != 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_80,&DAT_0186dee4);
  }
  return local_dc;
}

