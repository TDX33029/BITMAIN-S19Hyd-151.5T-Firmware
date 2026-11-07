// FUN_0111eb80 @ 0111eb80 size=328 calls_out=1 calls_in=2
// strings: 

longlong FUN_0111eb80(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    return 0;
  }
  uVar5 = param_1[2];
  puVar7 = (uint *)param_1[4];
  pbVar3 = (byte *)*param_1;
  uVar4 = uVar1;
  if (uVar5 < uVar1) {
    uVar4 = uVar5;
  }
  *param_1 = pbVar3 + uVar4;
  param_1[1] = uVar1 - uVar4;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_018873f0);
  }
  iVar6 = param_1[3];
  uVar5 = (uint)*pbVar3;
  uVar1 = iVar6 << 1;
  if ((uVar5 - 0x41 & 0xff) < 6) {
    uVar2 = uVar5 - 0x37;
  }
  else if ((uVar5 - 0x61 & 0xff) < 6) {
    uVar2 = uVar5 - 0x57;
  }
  else {
    uVar2 = uVar5 - 0x30;
    uVar8 = uVar1;
    if (9 < (uVar2 & 0xff)) goto LAB_0111ec84;
  }
  if (uVar4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(1,1,&DAT_01887400);
  }
  uVar5 = (uint)pbVar3[1];
  if ((uVar5 - 0x41 & 0xff) < 6) {
    uVar4 = uVar5 - 0x37;
  }
  else if ((uVar5 - 0x61 & 0xff) < 6) {
    uVar4 = uVar5 - 0x57;
  }
  else {
    uVar4 = uVar5 - 0x30;
    if (9 < (uVar4 & 0xff)) {
      uVar8 = uVar1 | 1;
LAB_0111ec84:
      *puVar7 = uVar5;
      puVar7[1] = uVar1 & 0xffffff00 | uVar8 & 0xff;
      param_1[3] = iVar6 + 1;
      return (ulonglong)uVar2 << 0x20;
    }
  }
  param_1[3] = iVar6 + 1;
  return CONCAT44(uVar4 | uVar2 << 4,1);
}

