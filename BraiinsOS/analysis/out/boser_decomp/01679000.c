// FUN_01679000 @ 01679000 size=632 calls_out=2 calls_in=1
// strings: $anchor | $anchor | idlast_updatedlast_ticknext_tickran | $dynamicAnchor

void FUN_01679000(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  pcVar5 = (char *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    uVar4 = 2;
    if (((*pcVar5 != '\x05') ||
        (pcVar3 = (char *)FUN_0196b3a8(*(undefined4 *)(pcVar5 + 4),*(undefined4 *)(pcVar5 + 8),
                                       "idlast_updatedlast_ticknext_tickran",2),
        pcVar3 == (char *)0x0)) ||
       ((*pcVar3 != '\x03' ||
        (uVar8 = FUN_01343b04(*(undefined4 *)(pcVar3 + 8),*(undefined4 *)(pcVar3 + 0xc),0x23),
        (int)uVar8 == 0)))) goto LAB_016791c0;
    param_1[4] = pcVar5;
    *(undefined1 *)(param_1 + 5) = 0;
    break;
  default:
    uVar4 = 2;
    if (((*pcVar5 != '\x05') ||
        (pcVar3 = (char *)FUN_0196b3a8(*(undefined4 *)(pcVar5 + 4),*(undefined4 *)(pcVar5 + 8),"$id"
                                       ,3), pcVar3 == (char *)0x0)) ||
       ((*pcVar3 != '\x03' ||
        (uVar8 = FUN_01343b04(*(undefined4 *)(pcVar3 + 8),*(undefined4 *)(pcVar3 + 0xc),0x23),
        (int)uVar8 == 0)))) goto LAB_016791c0;
    *(undefined1 *)(param_1 + 5) = uVar1;
    param_1[4] = pcVar5;
    break;
  case 3:
    uVar4 = 2;
    if (((*pcVar5 == '\x05') &&
        (pcVar3 = (char *)FUN_0196b3a8(*(undefined4 *)(pcVar5 + 4),*(undefined4 *)(pcVar5 + 8),
                                       "$anchor",7), pcVar3 != (char *)0x0)) && (*pcVar3 == '\x03'))
    {
      uVar6 = *(undefined4 *)(pcVar3 + 0xc);
      uVar4 = 3;
      param_1[2] = *(undefined4 *)(pcVar3 + 8);
      param_1[1] = 0;
      param_1[3] = uVar6;
      *(undefined1 *)(param_1 + 5) = 3;
      param_1[4] = pcVar5;
    }
    goto LAB_016791c0;
  case 4:
  case 5:
    if (*pcVar5 == '\x05') {
      uVar6 = *(undefined4 *)(pcVar5 + 4);
      uVar4 = *(undefined4 *)(pcVar5 + 8);
      pcVar3 = (char *)FUN_0196b3a8(uVar6,uVar4,"$anchor",7);
      uVar7 = 2;
      bVar2 = true;
      if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
        local_2c = *(undefined4 *)(pcVar3 + 8);
        bVar2 = false;
        local_28 = *(undefined4 *)(pcVar3 + 0xc);
        uVar7 = 0;
      }
      pcVar3 = (char *)FUN_0196b3a8(uVar6,uVar4,"$dynamicAnchor",0xe);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
        uVar4 = *(undefined4 *)(pcVar3 + 8);
        uVar6 = *(undefined4 *)(pcVar3 + 0xc);
        if (bVar2) {
          *(undefined1 *)(param_1 + 5) = uVar1;
          param_1[4] = pcVar5;
          *param_1 = 3;
          param_1[1] = 1;
          param_1[2] = uVar4;
          param_1[3] = uVar6;
          return;
        }
        param_1[6] = uVar4;
        param_1[1] = local_2c;
        *(undefined1 *)(param_1 + 4) = uVar1;
        param_1[3] = pcVar5;
        *(undefined1 *)(param_1 + 9) = uVar1;
        param_1[8] = pcVar5;
        param_1[5] = 1;
        *param_1 = uVar7;
        param_1[2] = local_28;
        param_1[7] = uVar6;
        return;
      }
      if (!bVar2) {
        param_1[2] = local_2c;
        *(undefined1 *)(param_1 + 5) = uVar1;
        param_1[4] = pcVar5;
        *param_1 = 3;
        param_1[1] = uVar7;
        param_1[3] = local_28;
        return;
      }
    }
    *param_1 = 2;
    return;
  }
  uVar4 = 3;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar8;
LAB_016791c0:
  *param_1 = uVar4;
  return;
}

