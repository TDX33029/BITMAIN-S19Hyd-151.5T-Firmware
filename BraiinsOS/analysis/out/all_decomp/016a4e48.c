// FUN_016a4e48 @ 016a4e48 size=312 calls_out=1 calls_in=0
// strings: 

void FUN_016a4e48(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_28;
  
  piVar8 = (int *)*param_1;
  if (piVar8[3] != 0) {
    uVar3 = FUN_016a7780(piVar8[4],piVar8[5],piVar8[6],piVar8[7],param_2);
    uVar6 = uVar3 >> 0x19;
    iVar7 = *piVar8;
    local_28 = 0;
    while( true ) {
      uVar3 = piVar8[1] & uVar3;
      uVar10 = *(uint *)(iVar7 + uVar3);
      uVar4 = uVar10 ^ uVar6 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        uVar9 = uVar4 >> 8;
        uVar5 = uVar4 >> 0x10;
        uVar1 = uVar4 >> 0x18;
        uVar2 = uVar4 << 0x18;
        uVar4 = uVar4 - 1 & uVar4;
        uVar5 = uVar3 + ((uint)LZCOUNT(uVar2 | (uVar9 & 0xff) << 0x10 | (uVar5 & 0xff) << 8 | uVar1)
                        >> 3) & piVar8[1];
        iVar11 = iVar7 + -0x30 + uVar5 * -0x30;
        bVar12 = *(int *)(param_2 + 8) == *(int *)(iVar11 + 8);
        uVar9 = param_3;
        if (bVar12) {
          uVar9 = *(uint *)(iVar11 + 0x10);
        }
        if (bVar12 && *(uint *)(param_2 + 0x10) == uVar9) {
          iVar7 = iVar7 + uVar5 * -0x30;
          uVar6 = (uint)*(byte *)(iVar7 + -0x18);
          bVar12 = uVar6 == 0;
          if (bVar12) {
            uVar6 = (uint)*(byte *)(iVar7 + -0x17);
          }
          if (bVar12 && param_3 == uVar6) {
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar7 + -8) = 1;
            return;
          }
          return;
        }
      }
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar3 = uVar3 + local_28;
    }
  }
  return;
}

