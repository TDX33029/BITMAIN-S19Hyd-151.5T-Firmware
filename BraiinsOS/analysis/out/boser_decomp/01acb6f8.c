// FUN_01acb6f8 @ 01acb6f8 size=392 calls_out=3 calls_in=2
// strings: 

void FUN_01acb6f8(int param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *local_30;
  uint local_2c;
  undefined *local_28;
  
  if (param_2 != param_3) {
    do {
      pbVar4 = param_2 + 1;
      puVar3 = (undefined1 *)(uint)*param_2;
      if (0x7fffffff < (uint)(int)(char)*param_2) {
        if (puVar3 < (undefined1 *)0xe0) {
          puVar3 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
          pbVar4 = param_2 + 2;
        }
        else {
          uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
          if (puVar3 < (undefined1 *)0xf0) {
            puVar3 = (undefined1 *)(uVar1 | ((uint)puVar3 & 0x1f) << 0xc);
            pbVar4 = param_2 + 3;
          }
          else {
            pbVar4 = param_2 + 4;
            puVar3 = (undefined1 *)(param_2[3] & 0x3f | uVar1 << 6 | ((uint)puVar3 & 7) << 0x12);
          }
        }
      }
      if (((undefined1 *)0xd < puVar3) || ((1 << ((uint)puVar3 & 0xff) & 0x2600U) == 0)) {
        if (puVar3 == &DAT_00110000) {
          return;
        }
        uVar1 = 1;
        if ((undefined1 *)0x7f < puVar3) {
          uVar1 = 2;
        }
        if (((undefined1 *)0x7ff < puVar3) && (uVar1 = 4, puVar3 < (undefined1 *)0x10000)) {
          uVar1 = 3;
        }
        uVar2 = (int)param_3 - (int)param_2;
        if (uVar1 < uVar2) {
          if ((char)param_2[uVar1] < -0x40) {
LAB_01acb864:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_2,uVar2,0,uVar1,0x1d2fa78);
          }
        }
        else if (uVar1 != uVar2) goto LAB_01acb864;
        if (puVar3 == (undefined1 *)0x0) {
          if (*(int *)(param_1 + 0x18) != 0) {
            (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))(*(int *)(param_1 + 0x18),7);
          }
        }
        else {
          if (puVar3 == &DAT_00110000) {
            return;
          }
          FUN_01acaf80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),puVar3,pbVar4
                       ,param_3);
        }
        local_28 = &DAT_00567a78;
        local_30 = param_2;
        local_2c = uVar1;
        FUN_01655840(&local_30,param_1);
      }
      param_2 = pbVar4;
    } while (pbVar4 != param_3);
  }
  return;
}

