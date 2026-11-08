// FUN_00fe5af0 @ 00fe5af0 size=488 calls_out=4 calls_in=2
// strings: 

void FUN_00fe5af0(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_34;
  
  do {
    uVar5 = 9;
    if ((int)*param_2 < 0) {
      uVar5 = *param_2 ^ 0x80000000;
    }
    iVar1 = 4;
    switch(uVar5) {
    case 4:
    case 5:
      if (param_2[3] == 0) {
        return;
      }
      uVar5 = param_2[2];
      iVar1 = param_2[3] * 0x14;
      do {
        FUN_00fe5af0(param_1,uVar5);
        uVar5 = uVar5 + 0x14;
        iVar1 = iVar1 + -0x14;
      } while (iVar1 != 0);
      return;
    default:
      return;
    case 0x10:
      FUN_00fe5af0(param_1,param_2[1]);
      FUN_00fe5af0(param_1,param_2[2]);
      iVar1 = 0xc;
    case 6:
    case 7:
    case 8:
    case 0xc:
      param_2 = *(uint **)((int)param_2 + iVar1);
      break;
    case 0x12:
      if (*(int *)(param_1 + 0x24) != 0) {
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        uVar2 = FUN_01003d44(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),uVar7,
                             uVar8);
        uVar5 = uVar2 >> 0x19;
        iVar1 = *(int *)(param_1 + 0x18);
        uVar10 = *(uint *)(param_1 + 0x1c);
        local_34 = 0;
        while( true ) {
          uVar2 = uVar10 & uVar2;
          uVar3 = *(uint *)(iVar1 + uVar2);
          uVar4 = uVar3 ^ uVar5 * 0x1010101;
          uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
          while (uVar4 != 0) {
            uVar9 = uVar4 - 1 & uVar4;
            uVar11 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar10;
            iVar6 = iVar1 + -0x10 + uVar11 * -0x10;
            uVar4 = uVar9;
            if ((uVar8 == *(uint *)(iVar6 + 8)) &&
               (iVar6 = thunk_FUN_016dd50a(uVar7,*(undefined4 *)(iVar6 + 4),uVar8), iVar6 == 0)) {
              uVar5 = *(uint *)(iVar1 + uVar11 * -0x10 + -4);
              FUN_00fe5d20(param_2);
              *param_2 = 0x80000011;
              param_2[1] = uVar5;
              return;
            }
          }
          if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
          local_34 = local_34 + 4;
          uVar2 = uVar2 + local_34;
        }
      }
      *(undefined1 *)(param_1 + 0x42) = 1;
      return;
    }
  } while( true );
}

