// FUN_0160dde0 @ 0160dde0 size=396 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_0160dde0(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_r6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [48];
  code *local_48;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (0x3f < param_2) {
    FUN_0160cbd4(auStack_78,param_3,param_4);
    uVar6 = 0;
    local_28 = 0;
    local_2c = 1;
    if (local_38 <= param_2) {
      uVar8 = (*local_48)(auStack_78,&local_2c,param_1,param_2,local_3c,local_38);
      unaff_r6 = (int)((ulonglong)uVar8 >> 0x20);
      uVar6 = (undefined4)uVar8;
    }
    if (local_40 != 0 && local_38 != 0) {
      thunk_FUN_01be4678(local_3c);
    }
    goto LAB_0160ded4;
  }
  if (param_4 != 0) {
    uVar3 = 1;
    uVar5 = (uint)*param_3;
    unaff_r6 = 1;
    pbVar7 = param_3;
    do {
      if (uVar3 == 0) {
        if (pbVar7 == param_3 + param_4) goto LAB_0160dec8;
      }
      else {
        if ((uint)((int)(param_3 + param_4) - (int)pbVar7) <= uVar3) goto LAB_0160dec8;
        pbVar7 = pbVar7 + uVar3;
        uVar3 = 0;
      }
      unaff_r6 = unaff_r6 << 1;
      uVar5 = (uint)*pbVar7 + uVar5 * 2;
      pbVar7 = pbVar7 + 1;
    } while( true );
  }
  uVar5 = 0;
  unaff_r6 = 1;
  uVar3 = 0;
LAB_0160df1c:
  pbVar7 = param_1;
  while( true ) {
    if ((uVar5 == uVar3) && (iVar2 = FUN_015fc218(pbVar7,param_3,param_4), iVar2 != 0)) {
      unaff_r6 = (int)pbVar7 - (int)param_1;
      uVar6 = 1;
      goto LAB_0160ded4;
    }
    if (param_1 + param_2 <= pbVar7) break;
    bVar1 = *pbVar7;
    pbVar4 = pbVar7 + param_4;
    pbVar7 = pbVar7 + 1;
    uVar3 = (uint)*pbVar4 + (uVar3 - unaff_r6 * (uint)bVar1) * 2;
  }
  goto LAB_0160ded0;
LAB_0160dec8:
  if (param_4 <= param_2) {
    param_2 = param_2 - param_4;
    uVar3 = 0;
    pbVar7 = param_1;
    do {
      pbVar4 = pbVar7 + 1;
      uVar3 = (uint)*pbVar7 + uVar3 * 2;
      pbVar7 = pbVar4;
    } while (pbVar4 < param_1 + param_4);
    goto LAB_0160df1c;
  }
LAB_0160ded0:
  uVar6 = 0;
LAB_0160ded4:
  return CONCAT44(unaff_r6,uVar6);
}

