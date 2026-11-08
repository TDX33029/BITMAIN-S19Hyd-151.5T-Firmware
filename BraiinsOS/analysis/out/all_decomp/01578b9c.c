// FUN_01578b9c @ 01578b9c size=380 calls_out=2 calls_in=1
// strings: 

void FUN_01578b9c(undefined4 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar2 = &DAT_00000001;
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
LAB_01578c70:
    FUN_01578850(param_1,pbVar2,uVar3);
    param_1[2] = param_2;
    param_1[3] = param_3;
    return;
  }
  uVar1 = 0;
  pbVar5 = param_2;
LAB_01578bc0:
  iVar4 = 0;
  do {
    uVar6 = (uint)*pbVar5;
    if ((0x19 < uVar6 - 0x41) && (uVar6 != 0x2d)) {
      uVar3 = uVar6 - 0x61;
      bVar7 = 0x19 < uVar3;
      if (bVar7) {
        uVar3 = uVar6 - 0x30;
      }
      if (bVar7 && 9 < uVar3) break;
    }
    iVar4 = iVar4 + 1;
    pbVar5 = param_2 + uVar1 + iVar4;
    if (param_3 <= uVar1 + iVar4) {
      uVar6 = uVar1 + 1;
      uVar3 = uVar6;
      if (uVar6 < param_3) {
        uVar3 = param_3;
      }
      if (iVar4 != 0) {
        if (param_3 < uVar6) goto LAB_01578ce8;
        pbVar5 = param_2 + uVar3;
        uVar3 = param_3;
        goto LAB_01578c58;
      }
      if (uVar1 != 0) goto LAB_01578c98;
      uVar3 = 0;
      goto LAB_01578c70;
    }
  } while( true );
  if (iVar4 == 0) {
    if ((uVar1 == 0) && (uVar3 = 0, uVar6 != 0x2e)) goto LAB_01578c70;
    goto LAB_01578c98;
  }
  uVar3 = iVar4 + uVar1;
  if (uVar6 != 0x2e) {
    if (uVar3 == 0) {
      uVar3 = 0;
      pbVar2 = param_2;
    }
    else {
      if ((char)*pbVar5 < -0x40) {
LAB_01578ce8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,0,uVar3,&DAT_018adf70);
      }
LAB_01578c58:
      param_3 = param_3 - uVar3;
      pbVar2 = param_2;
      param_2 = pbVar5;
    }
    goto LAB_01578c70;
  }
  uVar1 = uVar3 + 1;
  pbVar5 = param_2 + uVar1;
  if (param_3 <= uVar1) {
LAB_01578c98:
    *param_1 = 0;
    param_1[1] = 0x407;
    return;
  }
  goto LAB_01578bc0;
}

