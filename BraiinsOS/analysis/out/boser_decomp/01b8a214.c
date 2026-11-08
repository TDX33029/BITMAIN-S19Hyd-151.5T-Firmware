// FUN_01b8a214 @ 01b8a214 size=644 calls_out=5 calls_in=1
// strings: 

void FUN_01b8a214(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_r7;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar12 = FUN_01b89e74(param_1,*(undefined4 *)(param_2 + 0x860),*(undefined4 *)(param_2 + 0x864),
                        param_2 + 0xbc,param_2 + 0xda0,*(undefined4 *)(param_2 + 0x948),0x22d8);
  if (0xffffff88 < (uint)uVar12) goto LAB_01b8a420;
  iVar5 = param_1[6];
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  uVar10 = param_1[3] - param_1[2];
  uVar4 = param_1[1] - *param_1;
  if (uVar10 < 0x400) {
    unaff_r7 = 3;
  }
  iVar9 = *(int *)(param_2 + 0xda0);
  if (uVar10 >= 0x400) {
    unaff_r7 = 4;
  }
  iVar8 = *(int *)(param_2 + 0x864);
  iVar1 = (int)uVar4 >> 3;
  uVar11 = *(undefined4 *)(param_2 + 0x948);
  local_30 = 0xff;
  if (iVar9 == 0) {
LAB_01b8a318:
    uVar2 = uVar10;
  }
  else {
    uVar2 = 1;
    if (iVar9 != 1) {
      if (iVar9 - 2U < 2) {
        uVar2 = FUN_01b83060(uVar11,&local_30,param_1[2],uVar10,uVar11,0x22d8);
        if (0xffffff88 < uVar2) goto LAB_01b8a318;
        if (0x3fff < uVar10) {
          unaff_r7 = unaff_r7 + 1;
        }
        iVar3 = FUN_01b846ac(iVar8,uVar11,local_30);
        if (iVar9 == 2) {
          iVar3 = iVar3 + *(int *)(param_2 + 0xe24);
        }
        if (0xff < uVar10) {
          iVar3 = iVar3 + 6;
        }
        uVar2 = unaff_r7 + iVar3;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  if (uVar4 < 0x3f9) {
    iVar9 = 2;
  }
  else {
    iVar9 = 3;
  }
  iVar5 = FUN_01b860c4(*(undefined4 *)(param_2 + 0xe2c),iVar5,iVar1,0x1f,iVar8 + 0x408,0,
                       &DAT_00562814,5,uVar11);
  iVar6 = FUN_01b860c4(*(undefined4 *)(param_2 + 0xe28),iVar6,iVar1,0x23,iVar8 + 0xcb8,&DAT_00562936
                       ,&DAT_005628ee,6,uVar11);
  uVar12 = FUN_01b860c4(*(undefined4 *)(param_2 + 0xe30),iVar7,iVar1,0x34,iVar8 + 0x70c,
                        &DAT_005628b8,&DAT_0056284e,6,uVar11);
  if (0x3f7f8 < uVar4) {
    iVar9 = iVar9 + 1;
  }
  uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),
                    *(int *)(param_2 + 0xebc) + 3 + uVar2 + iVar5 + iVar6 + (int)uVar12 + iVar9);
LAB_01b8a420:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

