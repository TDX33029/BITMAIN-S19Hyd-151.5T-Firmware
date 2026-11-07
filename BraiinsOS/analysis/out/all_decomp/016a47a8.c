// FUN_016a47a8 @ 016a47a8 size=368 calls_out=1 calls_in=0
// strings: 

void FUN_016a47a8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  double in_d0;
  int local_34;
  
  piVar10 = (int *)*param_1;
  if (piVar10[3] != 0) {
    uVar5 = FUN_016a7780(piVar10[4],piVar10[5],piVar10[6],piVar10[7],param_2);
    uVar1 = uVar5 >> 0x19;
    iVar9 = *piVar10;
    local_34 = 0;
    while( true ) {
      uVar5 = piVar10[1] & uVar5;
      uVar11 = *(uint *)(iVar9 + uVar5);
      uVar6 = uVar11 ^ uVar1 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar7 = uVar6 >> 8;
        uVar2 = uVar6 >> 0x10;
        uVar3 = uVar6 >> 0x18;
        uVar4 = uVar6 << 0x18;
        uVar6 = uVar6 - 1 & uVar6;
        uVar7 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar7 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & piVar10[1];
        iVar8 = iVar9 + -0x30 + uVar7 * -0x30;
        bVar12 = *(int *)(param_2 + 8) == *(int *)(iVar8 + 8);
        if (bVar12) {
          iVar8 = *(int *)(iVar8 + 0x10);
        }
        if (bVar12 && *(int *)(param_2 + 0x10) == iVar8) {
          iVar9 = iVar9 + uVar7 * -0x30;
          if (*(char *)(iVar9 + -0x18) == '\x01') {
            if (2.220446049250313e-16 <= ABS(in_d0 - *(double *)(iVar9 + -0x10))) {
              return;
            }
          }
          else {
            if (*(char *)(iVar9 + -0x18) != '\x04') {
              return;
            }
            if (!NAN(in_d0)) {
              return;
            }
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar9 + -8) = 1;
          return;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_34 = local_34 + 4;
      uVar5 = uVar5 + local_34;
    }
  }
  return;
}

