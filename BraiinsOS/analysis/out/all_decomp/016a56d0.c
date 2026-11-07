// FUN_016a56d0 @ 016a56d0 size=420 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_016a56d0(undefined4 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  uint local_30;
  undefined1 *local_2c;
  code *local_28;
  
  if (param_3 != 0) {
    param_1 = (undefined4 *)*param_1;
    pbVar8 = param_2 + param_3;
    do {
      uVar4 = (uint)*param_2;
      pbVar1 = param_2 + 1;
      if ((uint)(int)(char)*param_2 < 0x80000000) {
joined_r0x016a577c:
        param_2 = pbVar1;
        uVar6 = uVar4 - 7;
        if (0x14 < uVar6) goto LAB_016a5838;
LAB_016a5780:
        switch((int)&switchD_016a5788::switchdataD_016a578c +
               (&switchD_016a5788::switchdataD_016a578c)[uVar6] & 0xfffffffe) {
        case 0x16a57e0:
          uVar2 = *param_1;
          pcVar7 = *(code **)(param_1[1] + 0xc);
          puVar5 = &DAT_00569100;
          break;
        case 0x16a57f4:
          uVar2 = *param_1;
          pcVar7 = *(code **)(param_1[1] + 0xc);
          puVar5 = &DAT_00569730;
          break;
        case 0x16a5804:
          uVar2 = *param_1;
          pcVar7 = *(code **)(param_1[1] + 0xc);
          puVar5 = &DAT_00568820;
          break;
        case 0x16a5814:
          uVar2 = *param_1;
          pcVar7 = *(code **)(param_1[1] + 0xc);
          puVar5 = &DAT_0056981c;
          break;
        default:
          goto switchD_016a5788_caseD_16a586c;
        }
LAB_016a5850:
        iVar3 = (*pcVar7)(uVar2,puVar5,4);
      }
      else {
        if (uVar4 < 0xe0) {
          uVar4 = param_2[1] & 0x3f | (uVar4 & 0x1f) << 6;
          pbVar1 = param_2 + 2;
          goto joined_r0x016a577c;
        }
        uVar6 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar6 | (uVar4 & 0x1f) << 0xc;
          pbVar1 = param_2 + 3;
          goto joined_r0x016a577c;
        }
        pbVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar4 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar4 & 7) << 0x12;
        uVar6 = uVar4 - 7;
        if (uVar6 < 0x15) goto LAB_016a5780;
LAB_016a5838:
        if (uVar4 == 0x7f) {
          uVar2 = *param_1;
          pcVar7 = *(code **)(param_1[1] + 0xc);
          puVar5 = &DAT_00567c20;
          goto LAB_016a5850;
        }
switchD_016a5788_caseD_16a586c:
        if ((uVar4 & 0xffffffe0) == 0x80) {
          local_28 = FUN_00facd88;
          local_30 = uVar4;
          local_2c = (undefined1 *)&local_30;
          iVar3 = FUN_00fa948c(*param_1,param_1[1],&DAT_0057d1d6,&local_2c);
        }
        else {
          iVar3 = (**(code **)(param_1[1] + 0x10))(*param_1);
        }
      }
      if (iVar3 != 0) {
        return 1;
      }
    } while (param_2 != pbVar8);
  }
  return 0;
}

