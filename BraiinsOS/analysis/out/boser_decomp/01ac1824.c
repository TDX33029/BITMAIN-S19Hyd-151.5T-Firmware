// FUN_01ac1824 @ 01ac1824 size=328 calls_out=1 calls_in=0
// strings: 

void FUN_01ac1824(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_2c;
  
  puVar7 = (uint *)*param_1;
  if (puVar7[3] != 0) {
    uVar1 = FUN_01ab2e08(puVar7[4],puVar7[5],puVar7[6],puVar7[7],param_2);
    uVar5 = uVar1 >> 0x19;
    uVar6 = *puVar7;
    iVar2 = *(int *)(param_2 + 8);
    local_2c = 0;
    while( true ) {
      uVar1 = puVar7[1] & uVar1;
      uVar9 = *(uint *)(uVar6 + uVar1);
      uVar8 = uVar9 ^ uVar5 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar3 = uVar1 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                puVar7[1];
        uVar8 = uVar8 - 1 & uVar8;
        iVar10 = (uVar6 - 0x30) + uVar3 * -0x30;
        bVar11 = iVar2 == *(int *)(iVar10 + 8);
        iVar4 = iVar2;
        if (bVar11) {
          iVar4 = *(int *)(iVar10 + 0x10);
        }
        if (bVar11 && *(int *)(param_2 + 0x10) == iVar4) {
          iVar2 = uVar6 + uVar3 * -0x30;
          uVar5 = (uint)*(byte *)(iVar2 + -0x18);
          bVar11 = uVar5 == 2;
          if (bVar11) {
            uVar5 = param_4 ^ *(uint *)(iVar2 + -0xc);
            uVar6 = param_3 ^ *(uint *)(iVar2 + -0x10);
          }
          if (bVar11 && (uVar6 == 0 && uVar5 == 0)) {
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar2 + -8) = 1;
            return;
          }
          return;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar1 = uVar1 + local_2c;
    }
  }
  return;
}

