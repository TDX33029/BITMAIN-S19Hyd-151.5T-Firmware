// FUN_016a4920 @ 016a4920 size=392 calls_out=1 calls_in=0
// strings: 

void FUN_016a4920(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_2c;
  
  piVar8 = (int *)*param_1;
  if (piVar8[3] != 0) {
    uVar2 = FUN_016a7780(piVar8[4],piVar8[5],piVar8[6],piVar8[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *piVar8;
    iVar3 = *(int *)(param_2 + 8);
    local_2c = 0;
    while( true ) {
      uVar2 = piVar8[1] & uVar2;
      uVar9 = *(uint *)(iVar6 + uVar2);
      uVar7 = uVar9 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar4 = uVar2 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                       (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                piVar8[1];
        uVar7 = uVar7 - 1 & uVar7;
        iVar10 = iVar6 + -0x30 + uVar4 * -0x30;
        bVar11 = iVar3 == *(int *)(iVar10 + 8);
        iVar5 = iVar3;
        if (bVar11) {
          iVar5 = *(int *)(iVar10 + 0x10);
        }
        if (bVar11 && *(int *)(param_2 + 0x10) == iVar5) {
          iVar6 = iVar6 + uVar4 * -0x30;
          if (*(char *)(iVar6 + -0x18) == '\x02') {
            if (*(int *)(iVar6 + -0xc) < 0) {
              return;
            }
            if (param_3 != *(int *)(iVar6 + -0x10) || param_4 != *(int *)(iVar6 + -0xc)) {
              return;
            }
          }
          else {
            if (*(char *)(iVar6 + -0x18) != '\x03') {
              return;
            }
            if (param_3 != *(int *)(iVar6 + -0x10) || param_4 != *(int *)(iVar6 + -0xc)) {
              return;
            }
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar6 + -8) = 1;
          return;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar2 = uVar2 + local_2c;
    }
  }
  return;
}

