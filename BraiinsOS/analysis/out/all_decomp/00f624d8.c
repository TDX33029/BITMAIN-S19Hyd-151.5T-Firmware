// FUN_00f624d8 @ 00f624d8 size=536 calls_out=4 calls_in=2
// strings: 

void FUN_00f624d8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  byte *local_1c;
  int local_18;
  int local_14;
  
  FUN_00f603a8(&local_1c,param_2,param_3,param_4,&DAT_0187fb3c,&DAT_0187fb90);
  if (local_1c == (byte *)0x0) {
LAB_00f625f4:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_18;
    return;
  }
  if (local_18 == 0) {
    uVar5 = 4;
LAB_00f62680:
    *(undefined1 *)(param_1 + 1) = uVar5;
    *param_1 = 0;
    return;
  }
  bVar1 = *local_1c;
  if ((bVar1 != 0x20 && bVar1 != 0x54) && (uVar5 = 3, bVar1 != 0x74)) goto LAB_00f62680;
  if ((local_18 != 1) && ((char)local_1c[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(local_1c,local_18,1,local_18,&DAT_0187fb90);
  }
  FUN_00f603a8(&local_1c,param_2,local_1c + 1,local_18 + -1,&DAT_0187fba0,&DAT_0187fc0c);
  if (local_1c == (byte *)0x0) goto LAB_00f625f4;
  uVar6 = FUN_00f6aec0(local_1c,local_18);
  iVar4 = (int)(uVar6 >> 0x20);
  pbVar2 = (byte *)uVar6;
  if (0x2ffffffff < uVar6) {
    uVar3 = (uint)*pbVar2;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 == 0x75) {
      uVar3 = (uint)pbVar2[1];
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 == 0x74) {
        uVar3 = (uint)pbVar2[2];
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 == 99) {
          if ((iVar4 != 3) && ((char)pbVar2[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar2,iVar4,3,iVar4,&DAT_0187fc0c);
          }
          local_18 = iVar4 + -3;
          local_1c = pbVar2 + 3;
          local_14 = 0;
          goto LAB_00f62644;
        }
      }
    }
  }
  FUN_00f69fc0(&local_1c,pbVar2,iVar4,1,0);
  if (local_1c == (byte *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_18;
    return;
  }
LAB_00f62644:
  if ((*(int *)(param_2 + 0xa0) == 1) && (*(int *)(param_2 + 0xa4) != local_14)) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = local_1c;
  param_1[1] = local_18;
  *(undefined4 *)(param_2 + 0xa0) = 1;
  *(int *)(param_2 + 0xa4) = local_14;
  return;
}

