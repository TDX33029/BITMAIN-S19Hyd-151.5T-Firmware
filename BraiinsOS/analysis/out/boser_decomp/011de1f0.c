// FUN_011de1f0 @ 011de1f0 size=416 calls_out=0 calls_in=5
// strings: 

undefined4 FUN_011de1f0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_48;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_1 != (int *)0x0) {
    param_2 = param_1[3];
  }
  if (param_1 != (int *)0x0 && param_2 != 0) {
    iVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = uVar2 & 0x9cfd6b5d;
    local_48 = 0;
    while( true ) {
      uVar7 = *(uint *)(iVar1 + uVar3);
      uVar5 = (uVar7 & 0x80808080 ^ 0x80808080) & (uVar7 ^ 0x4e4e4e4e) + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar2;
        piVar4 = (int *)(iVar1 + -0x18 + uVar6 * -0x18);
        uVar5 = uVar5 - 1 & uVar5;
        if ((*piVar4 == -0x60001fdc && piVar4[2] == -0x630294a3) &&
            (piVar4[1] == -0x21717f1c && piVar4[3] == 0x314a1582)) {
          iVar1 = iVar1 + uVar6 * -0x18;
          uVar8 = (**(code **)(*(int *)(iVar1 + -4) + 0x14))(*(undefined4 *)(iVar1 + -8));
          (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))(&local_38,(int)uVar8);
          if ((local_38 == -0x60001fdc && iStack_30 == -0x630294a3) &&
              (iStack_34 == -0x21717f1c && iStack_2c == 0x314a1582)) {
            return (int)uVar8;
          }
          return 0;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar3 = uVar3 + local_48 & uVar2;
    }
  }
  return 0;
}

