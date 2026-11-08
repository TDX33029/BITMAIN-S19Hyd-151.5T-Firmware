// FUN_01abaa0c @ 01abaa0c size=424 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01abaa0c(undefined4 *param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *local_30;
  undefined1 *local_2c;
  code *local_28;
  
  if (param_3 != 0) {
    param_1 = (undefined4 *)*param_1;
    pbVar7 = param_2;
    do {
      pbVar8 = pbVar7 + 1;
      puVar3 = (undefined1 *)(uint)*pbVar7;
      if (0x7fffffff < (uint)(int)(char)*pbVar7) {
        if (puVar3 < (undefined1 *)0xe0) {
          puVar3 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
          pbVar8 = pbVar7 + 2;
        }
        else {
          uVar5 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (puVar3 < (undefined1 *)0xf0) {
            puVar3 = (undefined1 *)(uVar5 | ((uint)puVar3 & 0x1f) << 0xc);
            pbVar8 = pbVar7 + 3;
          }
          else {
            pbVar8 = pbVar7 + 4;
            puVar3 = (undefined1 *)(pbVar7[3] & 0x3f | uVar5 << 6 | ((uint)puVar3 & 7) << 0x12);
          }
        }
      }
      if (puVar3 < (undefined1 *)0x1b) {
        if (puVar3 == (undefined1 *)0x7) {
          uVar1 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          puVar4 = &DAT_0056f220;
        }
        else if (puVar3 == (undefined1 *)0x8) {
          uVar1 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          puVar4 = &DAT_0056f9f8;
        }
        else {
          if (puVar3 != (undefined1 *)0xc) goto LAB_01abab58;
          uVar1 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          puVar4 = &DAT_0056f8d8;
        }
LAB_01abab34:
        iVar2 = (*pcVar6)(uVar1,puVar4,4);
      }
      else {
        if (puVar3 == (undefined1 *)0x1b) {
          uVar1 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          puVar4 = &DAT_0056e7f0;
          goto LAB_01abab34;
        }
        if (puVar3 == (undefined1 *)0x7f) {
          uVar1 = *param_1;
          pcVar6 = *(code **)(param_1[1] + 0xc);
          puVar4 = &DAT_0056da94;
          goto LAB_01abab34;
        }
        if (puVar3 == &DAT_00110000) {
          return 0;
        }
LAB_01abab58:
        if (((uint)puVar3 & 0xffffffe0) == 0x80) {
          local_28 = FUN_012fd9d0;
          local_30 = puVar3;
          local_2c = (undefined1 *)&local_30;
          iVar2 = FUN_012fa178(*param_1,param_1[1],&DAT_0057f34b,&local_2c);
        }
        else {
          iVar2 = (**(code **)(param_1[1] + 0x10))(*param_1);
        }
      }
      if (iVar2 != 0) {
        return 1;
      }
      pbVar7 = pbVar8;
    } while (pbVar8 != param_2 + param_3);
  }
  return 0;
}

