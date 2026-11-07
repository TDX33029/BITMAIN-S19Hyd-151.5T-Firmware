// FUN_01ab826c @ 01ab826c size=392 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01ab826c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_1[3] != 0) {
    iVar1 = *param_1;
    uVar4 = param_1[1];
    local_40 = 0;
    uVar2 = uVar4 & 0xec869bf;
    while( true ) {
      uVar8 = *(uint *)(iVar1 + uVar2);
      uVar5 = (uVar8 & 0x80808080 ^ 0x80808080) & (uVar8 ^ 0x7070707) + 0xfefefeff;
      while (uVar5 != 0) {
        uVar7 = uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar4;
        piVar3 = (int *)(iVar1 + -0x18 + uVar7 * -0x18);
        uVar5 = uVar5 - 1 & uVar5;
        if ((*piVar3 == -0x19dba75b && piVar3[2] == 0xec869bf) &&
            (piVar3[1] == -0x5dec2a7 && piVar3[3] == -0x2046ba12)) {
          iVar1 = iVar1 + uVar7 * -0x18;
          uVar6 = *(undefined4 *)(iVar1 + -8);
          (**(code **)(*(int *)(iVar1 + -4) + 0xc))(&local_38,uVar6);
          if ((local_38 == -0x19dba75b && iStack_30 == 0xec869bf) &&
              (iStack_34 == -0x5dec2a7 && iStack_2c == -0x2046ba12)) {
            return uVar6;
          }
          return 0;
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_40 = local_40 + 4;
      uVar2 = uVar2 + local_40 & uVar4;
    }
  }
  return 0;
}

