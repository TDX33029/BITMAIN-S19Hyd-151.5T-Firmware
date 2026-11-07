// FUN_013b9d08 @ 013b9d08 size=324 calls_out=2 calls_in=1
// strings: attempted to finish a map with a partial entry

undefined4 FUN_013b9d08(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *local_34;
  char local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  uint *local_2c;
  uint *local_28;
  
  local_30 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
  puVar5 = (uint *)*param_1;
  local_2d = 1;
  local_2f = 0;
  puVar6 = puVar5 + 1;
  uVar8 = ~*puVar5 & 0x80808080;
  ppuVar2 = &local_34;
  local_34 = param_2;
  for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar7 = puVar6;
    if (uVar8 == 0) {
      do {
        puVar6 = puVar7 + 1;
        uVar8 = *puVar7;
        puVar5 = puVar5 + -0xc;
        puVar7 = puVar6;
      } while ((uVar8 & 0x80808080) == 0x80808080);
      uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                          | uVar8 >> 0x18) >> 3;
    local_2c = puVar5 + uVar1 * -3 + -3;
    local_28 = puVar5 + uVar1 * -3 + -1;
    ppuVar2 = (undefined4 **)FUN_00fb243c(ppuVar2,&local_2c,&LAB_013c1df4,&local_28,FUN_013bc1e0);
    uVar8 = uVar8 - 1 & uVar8;
  }
  uVar3 = 1;
  if (local_30 == '\0') {
    if (local_2f._1_1_ == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("attempted to finish a map with a partial entry",0x5d,&DAT_01880ddc);
    }
    uVar3 = (**(code **)(local_34[1] + 0xc))(*local_34,"}",1);
  }
  return uVar3;
}

