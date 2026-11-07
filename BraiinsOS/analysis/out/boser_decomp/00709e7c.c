// FUN_00709e7c @ 00709e7c size=384 calls_out=7 calls_in=2
// strings: 

void FUN_00709e7c(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *param_1;
  iVar5 = 10;
  if ((uint)(uVar1 < 3) <= -param_1[1]) {
    iVar5 = uVar1 - 3;
  }
  switch(iVar5) {
  case 2:
    FUN_0069263c((char)param_1[2],param_1[3]);
    return;
  case 5:
    if (((char)param_1[2] == '\n') && (param_1[3] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00709f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
      return;
    }
    break;
  case 6:
    puVar2 = param_1 + 2;
    bVar4 = 5;
    if (1 < (byte)*puVar2) {
      bVar4 = (byte)*puVar2 - 2;
    }
    if (bVar4 < 4) {
      iVar7 = 0xc;
      iVar5 = 8;
      iVar8 = 0x10;
      iVar6 = 4;
    }
    else if (bVar4 == 4) {
      if ((short)param_1[3] == 0x12) {
        return;
      }
      iVar7 = 0x10;
      iVar5 = 0xc;
      iVar8 = 0x14;
      iVar6 = 8;
    }
    else {
      iVar7 = 0x14;
      iVar5 = 0x10;
      iVar8 = 0x18;
      iVar6 = 0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x0070a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)((int)puVar2 + iVar6) + 0x10))
              ((byte *)((int)puVar2 + iVar8),*(undefined4 *)((int)puVar2 + iVar5),
               *(undefined4 *)((int)puVar2 + iVar7));
    return;
  case 9:
    uVar1 = param_1[2];
    if (-1 < (int)uVar1) {
      uVar3 = param_1[3];
LAB_00709f94:
      FUN_019bb7e0(uVar1,uVar3);
      return;
    }
    break;
  case 10:
    if (param_1[7] != 0) {
      thunk_FUN_01be4678(param_1[6],&switchD_00709eac::switchdataD_00709eb0,iVar5,2 - uVar1);
    }
    uVar1 = param_1[9];
    FUN_01410ec8(uVar1,param_1[10]);
    FUN_0134aee0(param_1[8],uVar1,4,0x34);
    FUN_008e0ddc(param_1 + 0xb);
    FUN_0178e884(param_1[0x10]);
    uVar1 = param_1[0x12];
    if (uVar1 != 0x80000000) {
      uVar3 = param_1[0x13];
      goto LAB_00709f94;
    }
  }
  return;
}

