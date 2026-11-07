// FUN_01aed364 @ 01aed364 size=460 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01aed364(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint unaff_r5;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  pbVar3 = (byte *)*param_1;
  iVar4 = param_1[1];
  if (iVar4 == 0x10) {
    if (*pbVar3 != 6) goto LAB_01aed390;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 != 7;
    if (!bVar5) {
      bVar1 = pbVar3[2];
    }
    if (bVar5 || bVar1 != 0x2a) goto LAB_01aed390;
    bVar1 = pbVar3[3];
    bVar5 = bVar1 != 0x86;
    if (!bVar5) {
      bVar1 = pbVar3[4];
    }
    if (bVar5 || bVar1 != 0x48) goto LAB_01aed390;
    bVar1 = pbVar3[5];
    bVar5 = bVar1 != 0xce;
    if (!bVar5) {
      bVar1 = pbVar3[6];
    }
    if (bVar5 || bVar1 != 0x3d) goto LAB_01aed390;
    bVar1 = pbVar3[7];
    bVar5 = bVar1 != 2;
    if (!bVar5) {
      bVar1 = pbVar3[8];
    }
    if (bVar5 || bVar1 != 1) goto LAB_01aed390;
    bVar1 = pbVar3[9];
    bVar5 = bVar1 != 6;
    if (!bVar5) {
      bVar1 = pbVar3[10];
    }
    if (bVar5 || bVar1 != 5) goto LAB_01aed390;
    bVar1 = pbVar3[0xb];
    bVar5 = bVar1 != 0x2b;
    if (!bVar5) {
      bVar1 = pbVar3[0xc];
    }
    if (bVar5 || bVar1 != 0x81) goto LAB_01aed390;
    bVar1 = pbVar3[0xd];
    bVar5 = bVar1 != 4;
    if (!bVar5) {
      bVar1 = pbVar3[0xe];
    }
    if ((bVar5 || bVar1 != 0) || ((pbVar3[0xf] & 0xfe) != 0x22)) goto LAB_01aed390;
  }
  else {
    if (iVar4 == 0x13) {
      unaff_r5 = (uint)*pbVar3;
    }
    if (iVar4 != 0x13 || unaff_r5 != 6) goto LAB_01aed390;
    bVar1 = pbVar3[1];
    bVar5 = bVar1 != 7;
    if (!bVar5) {
      bVar1 = pbVar3[2];
    }
    if (bVar5 || bVar1 != 0x2a) goto LAB_01aed390;
    bVar1 = pbVar3[3];
    bVar5 = bVar1 != 0x86;
    if (!bVar5) {
      bVar1 = pbVar3[4];
    }
    if (bVar5 || bVar1 != 0x48) goto LAB_01aed390;
    bVar1 = pbVar3[5];
    bVar5 = bVar1 != 0xce;
    if (!bVar5) {
      bVar1 = pbVar3[6];
    }
    if (bVar5 || bVar1 != 0x3d) goto LAB_01aed390;
    bVar1 = pbVar3[7];
    bVar5 = bVar1 != 2;
    if (!bVar5) {
      bVar1 = pbVar3[8];
    }
    if (bVar5 || bVar1 != 1) goto LAB_01aed390;
    bVar1 = pbVar3[9];
    bVar5 = bVar1 != 6;
    if (!bVar5) {
      bVar1 = pbVar3[10];
    }
    if (bVar5 || bVar1 != 8) goto LAB_01aed390;
    bVar1 = pbVar3[0xb];
    bVar5 = bVar1 != 0x2a;
    if (!bVar5) {
      bVar1 = pbVar3[0xc];
    }
    if (bVar5 || bVar1 != 0x86) goto LAB_01aed390;
    bVar1 = pbVar3[0xd];
    bVar5 = bVar1 != 0x48;
    if (!bVar5) {
      bVar1 = pbVar3[0xe];
    }
    if (bVar5 || bVar1 != 0xce) goto LAB_01aed390;
    bVar1 = pbVar3[0xf];
    bVar5 = bVar1 != 0x3d;
    if (!bVar5) {
      bVar1 = pbVar3[0x10];
    }
    if (bVar5 || bVar1 != 3) goto LAB_01aed390;
    bVar1 = pbVar3[0x11];
    bVar5 = bVar1 != 1;
    if (!bVar5) {
      bVar1 = pbVar3[0x12];
    }
    if (bVar5 || bVar1 != 7) goto LAB_01aed390;
  }
  if ((param_3 == 0) || (2 < *param_2 - 2)) {
    return 1;
  }
LAB_01aed390:
                    /* WARNING: Could not recover jumptable at 0x01aed3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1[5] + 0x18))(param_1[4]);
  return uVar2;
}

