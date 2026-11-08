// FUN_01ac1310 @ 01ac1310 size=344 calls_out=1 calls_in=0
// strings: 

void FUN_01ac1310(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  double in_d0;
  int local_34;
  
  piVar10 = (int *)*param_1;
  if (piVar10[3] != 0) {
    uVar5 = FUN_01ab2e08(piVar10[4],piVar10[5],piVar10[6],piVar10[7],param_2);
    uVar1 = uVar5 >> 0x19;
    iVar6 = *piVar10;
    local_34 = 0;
    while( true ) {
      uVar5 = piVar10[1] & uVar5;
      uVar11 = *(uint *)(iVar6 + uVar5);
      uVar7 = uVar11 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar7 >> 8;
        uVar2 = uVar7 >> 0x10;
        uVar3 = uVar7 >> 0x18;
        uVar4 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar8 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & piVar10[1];
        iVar9 = iVar6 + -0x30 + uVar8 * -0x30;
        bVar12 = *(int *)(param_2 + 8) == *(int *)(iVar9 + 8);
        if (bVar12) {
          iVar9 = *(int *)(iVar9 + 0x10);
        }
        if (bVar12 && *(int *)(param_2 + 0x10) == iVar9) {
          iVar6 = iVar6 + uVar8 * -0x30;
          if (*(char *)(iVar6 + -0x18) == '\x01') {
            if (2.220446049250313e-16 <= ABS(in_d0 - *(double *)(iVar6 + -0x10))) {
              return;
            }
          }
          else {
            if (*(char *)(iVar6 + -0x18) != '\x04') {
              return;
            }
            if (!NAN(in_d0)) {
              return;
            }
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar6 + -8) = 1;
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

