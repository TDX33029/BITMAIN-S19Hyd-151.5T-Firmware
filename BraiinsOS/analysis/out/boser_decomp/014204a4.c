// FUN_014204a4 @ 014204a4 size=416 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_014204a4(int *param_1,int param_2)

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
    uVar3 = uVar2 & 0x5cd9c1b8;
    local_48 = 0;
    while( true ) {
      uVar7 = *(uint *)(iVar1 + uVar3);
      uVar5 = (uVar7 & 0x80808080 ^ 0x80808080) & (uVar7 ^ 0x2e2e2e2e) + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar2;
        piVar4 = (int *)(iVar1 + -0x18 + uVar6 * -0x18);
        uVar5 = uVar5 - 1 & uVar5;
        if ((*piVar4 == 0xa48ac07 && piVar4[2] == 0x5cd9c1b8) &&
            (piVar4[1] == 0x3b04fb67 && piVar4[3] == -0x5b2a3ecf)) {
          iVar1 = iVar1 + uVar6 * -0x18;
          uVar8 = (**(code **)(*(int *)(iVar1 + -4) + 0x14))(*(undefined4 *)(iVar1 + -8));
          (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))(&local_38,(int)uVar8);
          if ((local_38 == 0xa48ac07 && iStack_30 == 0x5cd9c1b8) &&
              (iStack_34 == 0x3b04fb67 && iStack_2c == -0x5b2a3ecf)) {
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

