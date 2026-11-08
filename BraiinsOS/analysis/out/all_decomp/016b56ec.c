// FUN_016b56ec @ 016b56ec size=664 calls_out=2 calls_in=2
// strings: 

byte * FUN_016b56ec(int *param_1,uint param_2,undefined4 param_3,byte *param_4,byte *param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar3 = param_1[2];
  pbVar8 = param_4;
  do {
    while( true ) {
      puVar4 = &DAT_00110000;
      if (pbVar8 == param_5) goto joined_r0x016b57f4;
      puVar6 = (undefined1 *)(uint)*pbVar8;
      pbVar1 = pbVar8 + 1;
      if ((uint)(int)(char)*pbVar8 < 0x80000000) break;
      if (puVar6 < (undefined1 *)0xe0) {
        puVar6 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar6 & 0x1f) << 6);
        pbVar1 = pbVar8 + 2;
        break;
      }
      uVar5 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
      if ((undefined1 *)0xef < puVar6) {
        pbVar1 = pbVar8 + 3;
        pbVar8 = pbVar8 + 4;
        puVar6 = (undefined1 *)(*pbVar1 & 0x3f | uVar5 << 6 | ((uint)puVar6 & 7) << 0x12);
        pbVar1 = pbVar8;
        if (puVar6 != &DAT_00110000) break;
        goto joined_r0x016b57f4;
      }
      puVar6 = (undefined1 *)(uVar5 | ((uint)puVar6 & 0x1f) << 0xc);
      pbVar8 = pbVar8 + 3;
      if ((undefined1 *)0xd < puVar6) goto LAB_016b57b0;
LAB_016b5788:
      if ((1 << ((uint)puVar6 & 0xff) & 0x2600U) == 0) {
        puVar4 = puVar6;
      }
      if (puVar4 != &DAT_00110000) goto joined_r0x016b57f4;
    }
    pbVar8 = pbVar1;
    if (puVar6 < (undefined1 *)0xe) goto LAB_016b5788;
LAB_016b57b0:
    puVar4 = puVar6;
  } while (puVar6 == &DAT_00110000);
joined_r0x016b57f4:
  if ((param_2 & 0xff) != 2) {
    if ((puVar4 == (undefined1 *)0x5c) && (param_1[6] != 0)) {
      (**(code **)(param_1[7] + 0x14))(param_1[6],0);
    }
    iVar2 = param_1[1];
    if ((iVar3 == 0) || (*(char *)(iVar2 + iVar3 + -1) != '/')) {
      iVar7 = iVar3;
      if (*param_1 == iVar3) {
        FUN_016bd7fc(param_1,iVar3,1,1,1);
        iVar7 = param_1[2];
        iVar2 = param_1[1];
      }
      *(undefined1 *)(iVar2 + iVar7) = 0x2f;
      param_1[2] = iVar3 + 1;
      if (puVar4 == (undefined1 *)0x2f || puVar4 == (undefined1 *)0x5c) {
        pbVar8 = (byte *)FUN_016b3bfc(param_1,param_2,param_3,iVar3,pbVar8,param_5);
        return pbVar8;
      }
    }
    pbVar8 = (byte *)FUN_016b3bfc(param_1,param_2,param_3,iVar3,param_4,param_5);
    return pbVar8;
  }
  if (puVar4 < (undefined1 *)0x3f) {
    if (puVar4 == (undefined1 *)0x23) {
      return param_4;
    }
    if (puVar4 == (undefined1 *)0x2f) goto LAB_016b58cc;
  }
  else {
    if (puVar4 == (undefined1 *)0x3f) {
      return param_4;
    }
    if (puVar4 == &DAT_00110000) goto LAB_016b58cc;
  }
  iVar2 = iVar3;
  if (*param_1 == iVar3) {
    FUN_016bd7fc(param_1,iVar3,1,1,1);
    iVar2 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar2) = 0x2f;
  param_1[2] = iVar3 + 1;
LAB_016b58cc:
  pbVar8 = (byte *)FUN_016b3bfc(param_1,2,param_3,iVar3,param_4,param_5);
  return pbVar8;
}

