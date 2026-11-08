// FUN_01acba34 @ 01acba34 size=428 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01acba34(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar6;
  byte *pbVar5;
  byte *local_30;
  uint local_2c;
  undefined *local_28;
  
  if (param_2 == param_3) {
LAB_01acbbb4:
    pbVar1 = param_2;
  }
  else {
    pbVar5 = param_2;
    pbVar6 = param_2;
    do {
      while( true ) {
        param_2 = pbVar5 + 1;
        puVar4 = (undefined1 *)(uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar4 < (undefined1 *)0xe0) {
            puVar4 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
            param_2 = pbVar5 + 2;
          }
          else {
            uVar2 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar4 < (undefined1 *)0xf0) {
              puVar4 = (undefined1 *)(uVar2 | ((uint)puVar4 & 0x1f) << 0xc);
              param_2 = pbVar5 + 3;
            }
            else {
              param_2 = pbVar5 + 4;
              puVar4 = (undefined1 *)(pbVar5[3] & 0x3f | uVar2 << 6 | ((uint)puVar4 & 7) << 0x12);
            }
          }
        }
        if (((undefined1 *)0xd < puVar4) || ((1 << ((uint)puVar4 & 0xff) & 0x2600U) == 0)) break;
        pbVar1 = param_2;
        pbVar5 = param_2;
        if (param_2 == param_3) goto LAB_01acbbb8;
      }
      if (puVar4 == &DAT_00110000) goto LAB_01acbbb4;
      uVar2 = 1;
      if ((undefined1 *)0x7f < puVar4) {
        uVar2 = 2;
      }
      if (((undefined1 *)0x7ff < puVar4) && (uVar2 = 4, puVar4 < (undefined1 *)0x10000)) {
        uVar2 = 3;
      }
      uVar3 = (int)param_3 - (int)pbVar5;
      if (uVar2 < uVar3) {
        if ((char)pbVar5[uVar2] < -0x40) {
LAB_01acbbc4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pbVar5,uVar3,0,uVar2,0x1d2fa78);
        }
      }
      else if (uVar2 != uVar3) goto LAB_01acbbc4;
      if (puVar4 == (undefined1 *)0x23 || puVar4 == (undefined1 *)0x3f) {
        pbVar1 = pbVar6;
        if (*(char *)(param_1 + 0x20) == '\0') break;
      }
      else if (puVar4 == &DAT_00110000) goto LAB_01acbbb4;
      FUN_01acaf80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),puVar4,param_2,
                   param_3);
      local_28 = &DAT_005693f8;
      local_30 = pbVar5;
      local_2c = uVar2;
      FUN_01655840(&local_30,param_1);
      pbVar1 = param_2;
      pbVar5 = param_2;
      pbVar6 = param_2;
    } while (param_2 != param_3);
  }
LAB_01acbbb8:
  return CONCAT44(param_3,pbVar1);
}

