// FUN_00fac7cc @ 00fac7cc size=664 calls_out=0 calls_in=1
// strings: 0000000000000000000000000000000000000000000000000000000000000000 | 0000000000000000000000000000000000000000000000000000000000000000

undefined4 FUN_00fac7cc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  code *pcVar10;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28;
  
  if ((param_3[1] != 0) && (iVar4 = (**(code **)(param_2 + 0xc))(param_1,*param_3), iVar4 != 0)) {
    return 1;
  }
  iVar4 = param_3[3];
  if (iVar4 != 0) {
    psVar7 = (short *)param_3[2];
    psVar8 = psVar7;
    local_30 = param_2;
    do {
      psVar9 = psVar8 + 6;
      if (*psVar8 == 0) {
        uVar5 = *(uint *)(psVar8 + 2);
        if (0x40 < uVar5) {
          pcVar10 = *(code **)(local_30 + 0xc);
          do {
            iVar6 = (*pcVar10)(param_1,
                               "0000000000000000000000000000000000000000000000000000000000000000",
                               0x40);
            if (iVar6 != 0) {
              return 1;
            }
            uVar5 = uVar5 - 0x40;
          } while (0x40 < uVar5);
LAB_00fac9f8:
          iVar6 = (*pcVar10)(param_1,
                             "0000000000000000000000000000000000000000000000000000000000000000",
                             uVar5);
          goto joined_r0x00faca18;
        }
        if (uVar5 != 0) {
          pcVar10 = *(code **)(local_30 + 0xc);
          goto LAB_00fac9f8;
        }
      }
      else {
        if (*psVar8 == 1) {
          uVar2 = psVar8[1];
          uVar5 = (uint)uVar2;
          local_28 = 0;
          local_2c = 0;
          if (uVar5 == 0) {
            local_2c = (uint)(byte)((byte)uVar2 | 0x30);
            iVar6 = 1;
          }
          else {
            uVar1 = (uVar5 + 0x5fff6 & uVar5 + 0x7ff9c ^ uVar5 + 0xdfc18 & uVar5 + 0x7d8f0) >> 0x11;
            iVar6 = uVar1 + 1;
            cVar3 = (char)(uVar5 / 10);
            *(byte *)((int)&local_2c + uVar1) = (byte)uVar2 + cVar3 * -10 | 0x30;
            if ((((iVar6 != 1) &&
                 (*(byte *)((int)&local_30 + uVar1 + 3) =
                       cVar3 + (char)((uint)((short)(uVar5 / 10) * 0x199a) >> 0x10) * -10 | 0x30,
                 iVar6 != 2)) &&
                (uVar5 = (short)(uVar2 >> 2) * 0x147b,
                *(byte *)((int)&local_30 + uVar1 + 2) =
                     (char)(uVar5 >> 0x11) +
                     (char)((uint)((short)(ushort)(uVar5 >> 0x11) * 0x199a) >> 0x10) * -10 | 0x30,
                iVar6 != 3)) &&
               (uVar5 = (short)(uVar2 >> 3) * 0x20c5,
               *(byte *)((int)&local_30 + uVar1 + 1) =
                    (char)(uVar5 >> 0x14) +
                    (char)((uint)((short)(ushort)(uVar5 >> 0x14) * 0x199a) >> 0x10) * -10 | 0x30,
               iVar6 != 4)) {
              *(byte *)((int)&local_30 + uVar1) =
                   (byte)((uint)((short)(uVar2 >> 4) * 0x347) >> 0x13) | 0x30;
            }
          }
          iVar6 = (**(code **)(local_30 + 0xc))(param_1,&local_2c,iVar6);
        }
        else {
          iVar6 = (**(code **)(local_30 + 0xc))
                            (param_1,*(undefined4 *)(psVar8 + 2),*(undefined4 *)(psVar8 + 4));
        }
joined_r0x00faca18:
        if (iVar6 != 0) {
          return 1;
        }
      }
      psVar8 = psVar9;
    } while (psVar9 != psVar7 + iVar4 * 6);
  }
  return 0;
}

