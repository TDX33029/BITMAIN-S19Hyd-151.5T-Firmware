// FUN_012fd360 @ 012fd360 size=488 calls_out=0 calls_in=1
// strings: 0000000000000000000000000000000000000000000000000000000000000000 | 0000000000000000000000000000000000000000000000000000000000000000

undefined4 FUN_012fd360(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  code *pcVar7;
  undefined4 local_2c;
  undefined1 local_28;
  
  if ((param_3[1] != 0) && (iVar1 = (**(code **)(param_2 + 0xc))(param_1,*param_3), iVar1 != 0)) {
    return 1;
  }
  iVar1 = param_3[3];
  if (iVar1 != 0) {
    psVar4 = (short *)param_3[2];
    psVar5 = psVar4;
    do {
      psVar6 = psVar5 + 6;
      if (*psVar5 == 0) {
        uVar2 = *(uint *)(psVar5 + 2);
        if (0x40 < uVar2) {
          pcVar7 = *(code **)(param_2 + 0xc);
          do {
            iVar3 = (*pcVar7)(param_1,
                              "0000000000000000000000000000000000000000000000000000000000000000",
                              0x40);
            if (iVar3 != 0) {
              return 1;
            }
            uVar2 = uVar2 - 0x40;
          } while (0x40 < uVar2);
LAB_012fd4b8:
          iVar3 = (*pcVar7)(param_1,
                            "0000000000000000000000000000000000000000000000000000000000000000",uVar2
                           );
          goto joined_r0x012fd3f4;
        }
        if (uVar2 != 0) {
          pcVar7 = *(code **)(param_2 + 0xc);
          goto LAB_012fd4b8;
        }
      }
      else {
        if (*psVar5 == 1) {
          uVar2 = (uint)(ushort)psVar5[1];
          local_28 = 0;
          local_2c = 0;
          if (uVar2 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = ((uVar2 + 0x5fff6 & uVar2 + 0x7ff9c ^ uVar2 + 0xdfc18 & uVar2 + 0x7d8f0) >> 0x11
                    ) + 1;
          }
          iVar3 = 1 - iVar3;
          do {
            *(byte *)((int)&local_2c - iVar3) = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
            iVar3 = iVar3 + 1;
            uVar2 = uVar2 / 10;
          } while (iVar3 != 1);
          iVar3 = (**(code **)(param_2 + 0xc))(param_1,&local_2c);
        }
        else {
          iVar3 = (**(code **)(param_2 + 0xc))
                            (param_1,*(undefined4 *)(psVar5 + 2),*(undefined4 *)(psVar5 + 4));
        }
joined_r0x012fd3f4:
        if (iVar3 != 0) {
          return 1;
        }
      }
      psVar5 = psVar6;
    } while (psVar6 != psVar4 + iVar1 * 6);
  }
  return 0;
}

