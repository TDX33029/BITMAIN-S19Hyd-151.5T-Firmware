// FUN_016a4aa8 @ 016a4aa8 size=564 calls_out=4 calls_in=0
// strings: 

void FUN_016a4aa8(int *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_48;
  byte *local_40;
  int local_3c;
  byte **local_38;
  int local_34;
  undefined4 local_30;
  byte ***local_2c;
  undefined1 *local_28;
  
  param_1 = (int *)*param_1;
  if (param_1[3] == 0) {
    return;
  }
  local_40 = param_3;
  local_3c = param_4;
  uVar1 = FUN_016a7780(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  iVar9 = *param_1;
  uVar5 = uVar1 >> 0x19;
  local_48 = 0;
  do {
    uVar1 = param_1[1] & uVar1;
    uVar7 = *(uint *)(iVar9 + uVar1);
    uVar6 = uVar7 ^ uVar5 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar2 = uVar1 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & param_1[1]
      ;
      uVar3 = uVar6 - 1;
      uVar6 = uVar3 & uVar6;
      iVar8 = iVar9 + -0x30 + uVar2 * -0x30;
      bVar10 = *(int *)(param_2 + 8) == *(int *)(iVar8 + 8);
      if (bVar10) {
        uVar3 = *(uint *)(iVar8 + 0x10);
      }
      if (bVar10 && *(uint *)(param_2 + 0x10) == uVar3) {
        iVar9 = iVar9 + uVar2 * -0x30;
        if (*(char *)(iVar9 + -0x18) == '\x05') {
          local_38 = &local_40;
          local_30 = *(undefined4 *)(iVar9 + -0x10);
          local_34 = *(int *)(iVar9 + -0x14) + 8;
          local_2c = &local_38;
          local_28 = &LAB_0162209c;
          iVar8 = FUN_00fa948c(&local_34,&DAT_018ae5a0,&DAT_00590e71,&local_2c);
          if (iVar8 != 0) {
            return;
          }
        }
        else {
          if (*(char *)(iVar9 + -0x18) != '\x06') {
            return;
          }
          uVar11 = FUN_016ae1d8(*(int *)(iVar9 + -0x14) + 8);
          iVar4 = (int)((ulonglong)uVar11 >> 0x20);
          iVar8 = (int)uVar11;
          while (param_4 != 0) {
            param_4 = param_4 + -1;
            iVar4 = *(int *)(*(int *)(iVar8 + 0x54) +
                            (iVar4 + (uint)*(byte *)(iVar8 + 0x5c + (uint)*param_3)) * 4);
            param_3 = param_3 + 1;
            if (iVar4 == 0) {
              return;
            }
          }
          uVar5 = (uint)*(byte *)(iVar8 + 0x15b) + iVar4 + 1;
          if (*(uint *)(iVar8 + 0x58) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,*(uint *)(iVar8 + 0x58),&DAT_018ae9c4);
          }
          uVar5 = *(uint *)(*(int *)(iVar8 + 0x54) + uVar5 * 4);
          if (uVar5 == 0) {
            return;
          }
          if (uVar5 < *(uint *)(iVar8 + 8)) {
            return;
          }
          if (*(uint *)(iVar8 + 0xc) < uVar5) {
            return;
          }
        }
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar9 + -8) = 1;
        return;
      }
    }
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) {
      return;
    }
    local_48 = local_48 + 4;
    uVar1 = uVar1 + local_48;
  } while( true );
}

