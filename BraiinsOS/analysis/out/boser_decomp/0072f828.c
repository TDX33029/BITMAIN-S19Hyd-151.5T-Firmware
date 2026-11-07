// FUN_0072f828 @ 0072f828 size=564 calls_out=5 calls_in=2
// strings: /usr/lib/debug | /usr/lib/debug/.build-id/ | .debug

void FUN_0072f828(int *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_28;
  
  if (1 < param_3) {
    if (DAT_01d51144 == '\0') {
      iVar1 = FUN_01982f48("/usr/lib/debug",0xe);
      DAT_01d51144 = '\x02';
      if (iVar1 != 0) {
        DAT_01d51144 = '\x01';
      }
    }
    if (DAT_01d51144 == '\x01') {
      iVar1 = param_3 * 2 + 0x20;
      uVar5 = 0;
      if (iVar1 < 0) {
LAB_0072f894:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,iVar1);
      }
      if (iVar1 == 0) {
        local_2c = 1;
        iVar1 = 0;
      }
      else {
        uVar5 = 1;
        local_2c = FUN_01298504(iVar1,1);
        if (local_2c == 0) goto LAB_0072f894;
      }
      local_28 = 0;
      local_30 = iVar1;
      FUN_00724be8(&local_30,"/usr/lib/debug/.build-id/",0x19);
      iVar1 = local_28;
      bVar2 = *param_2;
      bVar4 = (bVar2 >> 4) + 0x57;
      if (bVar2 < 0xa0) {
        bVar4 = bVar2 >> 4 | 0x30;
      }
      if (local_28 == local_30) {
        FUN_006666a0(&local_30);
      }
      bVar2 = bVar2 & 0xf;
      bVar3 = bVar2 + 0x57;
      if (bVar2 < 10) {
        bVar3 = bVar2 | 0x30;
      }
      *(byte *)(local_2c + iVar1) = bVar4;
      iVar6 = iVar1 + 1;
      if (iVar6 == local_30) {
        local_28 = iVar6;
        FUN_006666a0(&local_30);
      }
      *(byte *)(local_2c + iVar6) = bVar3;
      iVar6 = iVar1 + 2;
      if (iVar6 == local_30) {
        local_28 = iVar6;
        FUN_006666a0(&local_30);
      }
      *(undefined1 *)(local_2c + iVar6) = 0x2f;
      iVar6 = param_3 - 1;
      local_28 = iVar1 + 3;
      do {
        param_2 = param_2 + 1;
        bVar2 = *param_2;
        bVar4 = (bVar2 >> 4) + 0x57;
        if (bVar2 < 0xa0) {
          bVar4 = bVar2 >> 4 | 0x30;
        }
        if (iVar1 + 3 == local_30) {
          FUN_006666a0(&local_30);
        }
        local_28 = iVar1 + 4;
        *(byte *)(local_2c + iVar1 + 3) = bVar4;
        bVar2 = bVar2 & 0xf;
        bVar4 = bVar2 + 0x57;
        if (bVar2 < 10) {
          bVar4 = bVar2 | 0x30;
        }
        if (local_28 == local_30) {
          FUN_006666a0(&local_30);
        }
        iVar6 = iVar6 + -1;
        *(byte *)(local_2c + iVar1 + 4) = bVar4;
        local_28 = iVar1 + 5;
        iVar1 = iVar1 + 2;
      } while (iVar6 != 0);
      FUN_00724be8(&local_30,".debug",6);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
  }
  *param_1 = -0x80000000;
  return;
}

