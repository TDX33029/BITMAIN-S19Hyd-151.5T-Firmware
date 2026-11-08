// FUN_0094ecf4 @ 0094ecf4 size=520 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094ecf4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_r8;
  uint unaff_r9;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint local_40c;
  uint local_408;
  uint uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  uint uStack_3f8;
  undefined1 auStack_3f0 [224];
  uint local_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  undefined1 auStack_2f8 [224];
  undefined1 *local_218;
  undefined4 local_214;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined1 *local_208;
  undefined1 auStack_204 [220];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined1 auStack_104 [12];
  uint local_f8;
  uint local_f4;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar2 = (undefined1 *)*param_2;
  param_2[1] = param_2[1] - 1;
  FUN_0094f574(&local_110,puVar2);
  if ((char)local_110 == '\x01') {
    unaff_r8 = local_10c;
  }
  else {
    uVar1 = (uint)local_110 >> 8 & 0xff;
    if (uVar1 == 0) {
      puVar4 = (undefined1 *)0x0;
      puVar3 = (undefined1 *)0x2;
LAB_0094edf8:
      FUN_01bed4e2(param_1 + 3,auStack_3f0,0xdc);
      param_1[0x3a] = (uint)puVar2;
      param_1[0x3b] = local_408;
      param_1[0x3c] = uStack_404;
      param_1[0x3d] = uStack_400;
      param_1[0x3e] = uStack_3fc;
      param_1[0x3f] = uStack_3f8;
      param_1[0x40] = unaff_r9;
      param_1[0x41] = local_40c;
      *param_1 = (uint)puVar3;
      param_1[1] = (uint)puVar4;
      goto LAB_0094ee58;
    }
    if (uVar1 == 1) {
      local_214 = 1;
      local_218 = puVar2;
      FUN_00a8d9e4(&local_110,puVar2);
      puVar3 = local_110;
      unaff_r8 = local_108;
      if (local_110 != (undefined1 *)0x2 || local_10c != (undefined1 *)0x0) {
        FUN_01bed4e2(auStack_204,auStack_104,0xdc);
        local_20c = local_10c;
        local_210 = puVar3;
        local_208 = local_108;
        FUN_0094ef80(&local_110,&local_218);
        if (local_f8 == 0x3b9aca02) {
          unaff_r8 = local_110;
        }
        else {
          puVar5 = (uint *)((uint)&local_110 | 4);
          local_310 = *puVar5;
          uStack_30c = puVar5[1];
          uStack_308 = puVar5[2];
          uStack_304 = puVar5[3];
          uStack_300 = puVar5[4];
          local_128 = local_310;
          uStack_124 = uStack_30c;
          uStack_120 = uStack_308;
          uStack_11c = uStack_304;
          uStack_118 = uStack_300;
          if (local_f8 != 0x3b9aca01) {
            local_40c = local_f4;
            FUN_01bed4e2(auStack_2f8,auStack_204,0xdc);
            FUN_01bed4e2(auStack_3f0,auStack_2f8,0xdc);
            local_408 = local_310;
            uStack_404 = uStack_30c;
            uStack_400 = uStack_308;
            uStack_3fc = uStack_304;
            uStack_3f8 = uStack_300;
            puVar2 = local_110;
            unaff_r9 = local_f8;
            puVar4 = local_10c;
            goto LAB_0094edf8;
          }
          unaff_r8 = (undefined1 *)FUN_00a9d070(1,&DAT_01c0c428,&DAT_01d064b8);
        }
        FUN_00b9a764(&local_210);
      }
    }
    else {
      local_110 = &DAT_80000004;
      local_10c = (undefined1 *)uVar1;
      unaff_r8 = (undefined1 *)FUN_0073696c(&local_110);
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
LAB_0094ee58:
  param_1[2] = (uint)unaff_r8;
  return;
}

