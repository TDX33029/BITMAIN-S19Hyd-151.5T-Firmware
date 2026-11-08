// FUN_0070edb8 @ 0070edb8 size=296 calls_out=3 calls_in=2
// strings: 

void FUN_0070edb8(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *param_1;
  iVar5 = 10;
  if ((uint)(uVar1 < 3) <= -param_1[1]) {
    iVar5 = uVar1 - 3;
  }
  switch(iVar5) {
  case 2:
    FUN_0069d8a4((char)param_1[2],param_1[3]);
    return;
  case 5:
    if (((char)param_1[2] == '\n') && (param_1[3] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0070ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
      return;
    }
    break;
  case 6:
    bVar4 = 5;
    puVar2 = param_1 + 2;
    if (1 < (byte)*puVar2) {
      bVar4 = (byte)*puVar2 - 2;
    }
    if (bVar4 < 4) {
      iVar5 = 8;
      iVar7 = 0x10;
      iVar6 = 0xc;
    }
    else if (bVar4 == 4) {
      if ((short)param_1[3] == 0x12) {
        return;
      }
      iVar5 = 0xc;
      iVar7 = 0x14;
      iVar6 = 0x10;
    }
    else {
      iVar5 = 0x10;
      iVar7 = 0x18;
      iVar6 = 0x14;
    }
                    /* WARNING: Could not recover jumptable at 0x0070ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)((int)param_1 + iVar6) + 0x10))
              ((byte *)((int)puVar2 + iVar7),*(undefined4 *)((int)puVar2 + iVar5),
               *(undefined4 *)((int)puVar2 + iVar6));
    return;
  case 9:
    uVar1 = param_1[2];
    if (-1 < (int)uVar1) {
      uVar3 = param_1[3];
      goto LAB_0070eeb0;
    }
    break;
  case 10:
    FUN_0070e92c(param_1,&switchD_0070ede8::switchdataD_0070edec,iVar5,2 - uVar1);
    uVar1 = param_1[0x12];
    if (uVar1 == 0x80000000) {
      return;
    }
    uVar3 = param_1[0x13];
LAB_0070eeb0:
    FUN_019bb7e0(uVar1,uVar3);
    return;
  }
  return;
}

