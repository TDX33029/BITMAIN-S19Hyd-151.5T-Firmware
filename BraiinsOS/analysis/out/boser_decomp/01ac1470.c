// FUN_01ac1470 @ 01ac1470 size=364 calls_out=1 calls_in=0
// strings: 

void FUN_01ac1470(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_2c;
  
  piVar7 = (int *)*param_1;
  if (piVar7[3] != 0) {
    uVar2 = FUN_01ab2e08(piVar7[4],piVar7[5],piVar7[6],piVar7[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *piVar7;
    iVar3 = *(int *)(param_2 + 8);
    local_2c = 0;
    while( true ) {
      uVar2 = piVar7[1] & uVar2;
      uVar9 = *(uint *)(iVar6 + uVar2);
      uVar8 = uVar9 ^ uVar1 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar4 = uVar2 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                piVar7[1];
        uVar8 = uVar8 - 1 & uVar8;
        iVar10 = iVar6 + -0x30 + uVar4 * -0x30;
        bVar11 = iVar3 == *(int *)(iVar10 + 8);
        iVar5 = iVar3;
        if (bVar11) {
          iVar5 = *(int *)(iVar10 + 0x10);
        }
        if (bVar11 && *(int *)(param_2 + 0x10) == iVar5) {
          iVar6 = iVar6 + uVar4 * -0x30;
          if (*(char *)(iVar6 + -0x18) == '\x02') {
            iVar3 = *(int *)(iVar6 + -0xc);
            if (iVar3 < 0) {
              return;
            }
            iVar5 = *(int *)(iVar6 + -0x10);
          }
          else {
            if (*(char *)(iVar6 + -0x18) != '\x03') {
              return;
            }
            iVar5 = *(int *)(iVar6 + -0x10);
            iVar3 = *(int *)(iVar6 + -0xc);
          }
          if (param_3 == iVar5 && param_4 == iVar3) {
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar6 + -8) = 1;
            return;
          }
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

