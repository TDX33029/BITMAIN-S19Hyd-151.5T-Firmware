// FUN_00ee3a34 @ 00ee3a34 size=324 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_00ee3a34(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  int local_28;
  
  uVar1 = FUN_00c4fb58(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar8 = uVar1 >> 0x19;
  iVar4 = *param_1;
  uVar10 = param_1[1];
  local_28 = 0;
  while( true ) {
    uVar1 = uVar10 & uVar1;
    uVar5 = *(uint *)(iVar4 + uVar1);
    uVar2 = uVar5 ^ uVar8 * 0x1010101;
    uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff;
    while (uVar7 = uVar2, uVar7 != 0) {
      uVar3 = uVar1 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar10;
      uVar2 = uVar7 - 1 & uVar7;
      if (param_2 == *(int *)(iVar4 + -8 + uVar3 * -8)) {
        puVar6 = (uint *)(iVar4 + (uVar3 - 4 & uVar10));
        uVar1 = *puVar6;
        uVar8 = *(uint *)(iVar4 + uVar3) & 0x80808080 & *(uint *)(iVar4 + uVar3) << 1;
        uVar9 = 0x80;
        if (((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                           | uVar8 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar9 = 0xff;
        }
        *(undefined1 *)(iVar4 + uVar3) = uVar9;
        *(undefined1 *)(puVar6 + 1) = uVar9;
        uVar2 = *(uint *)(iVar4 + uVar3 * -8 + -4);
        param_1[3] = param_1[3] + -1;
        goto LAB_00ee3b68;
      }
    }
    uVar2 = uVar5 & 0x80808080;
    if ((uVar2 & uVar5 << 1) != 0) break;
    local_28 = local_28 + 4;
    uVar1 = uVar1 + local_28;
  }
LAB_00ee3b68:
  return CONCAT44(uVar2,(uint)(uVar7 != 0));
}

