// FUN_0118c0f0 @ 0118c0f0 size=380 calls_out=3 calls_in=2
// strings: 

void FUN_0118c0f0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_b8;
  uint local_b4;
  
  if (param_2[1] == 0) {
    *param_1 = (uint)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_014b5130(&local_b8,0x90,4,param_2[1] + 1);
    uVar1 = local_b8;
    puVar4 = (uint *)*param_2;
    FUN_01bed4e2(local_b8,puVar4,local_b4 + 5);
    uVar2 = param_2[3];
    if (uVar2 != 0) {
      puVar7 = puVar4 + 1;
      uVar8 = ~*puVar4 & 0x80808080;
      iVar3 = local_b8 - 0x90;
      puVar5 = puVar4;
      uVar9 = uVar2;
      do {
        puVar6 = puVar7;
        if (uVar8 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar8 = *puVar6;
            puVar5 = puVar5 + -0x90;
            puVar6 = puVar7;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        puVar6 = puVar5 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                         (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) * -0x24;
        local_b8 = puVar6[-0x24];
        FUN_00ff7900((uint)&local_b8 | 4,puVar6 + -0x23);
        FUN_01bed4e2(iVar3 + ((int)puVar4 - (int)puVar6 >> 4) * -0x10,&local_b8,0x90);
        uVar8 = uVar8 - 1 & uVar8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar9 = param_2[2];
    *param_1 = uVar1;
    param_1[1] = local_b4;
    param_1[2] = uVar9;
    param_1[3] = uVar2;
  }
  return;
}

