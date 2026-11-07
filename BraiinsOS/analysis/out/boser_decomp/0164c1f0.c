// FUN_0164c1f0 @ 0164c1f0 size=420 calls_out=0 calls_in=1
// strings: 

int FUN_0164c1f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_48;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_1[3] != 0) {
    iVar1 = *param_1;
    uVar2 = param_1[1];
    local_48 = 0;
    uVar4 = uVar2 & 0x9517afd;
    while( true ) {
      uVar7 = *(uint *)(iVar1 + uVar4);
      uVar6 = (uVar7 & 0x80808080 ^ 0x80808080) & (uVar7 ^ 0x4040404) + 0xfefefeff;
      while (uVar6 != 0) {
        uVar8 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                       (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar2;
        piVar5 = (int *)(iVar1 + -0x18 + uVar8 * -0x18);
        uVar6 = uVar6 - 1 & uVar6;
        if ((*piVar5 == 0x1fa1047b && piVar5[2] == 0x9517afd) &&
            (piVar5[1] == 0x7589a97d && piVar5[3] == -0x4552e5fd)) {
          iVar1 = iVar1 + uVar8 * -0x18;
          iVar3 = *(int *)(iVar1 + -4);
          iVar1 = *(int *)(iVar1 + -8) + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8;
          (**(code **)(iVar3 + 0xc))(&local_38,iVar1);
          if ((local_38 == 0x1fa1047b && iStack_30 == 0x9517afd) &&
              (iStack_34 == 0x7589a97d && iStack_2c == -0x4552e5fd)) {
            return iVar1;
          }
          return 0;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar4 = uVar4 + local_48 & uVar2;
    }
  }
  return 0;
}

