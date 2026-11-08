// FUN_01962110 @ 01962110 size=420 calls_out=1 calls_in=1
// strings: 

void FUN_01962110(uint *param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 == 0) {
LAB_0196223c:
    uVar4 = 1;
LAB_01962248:
    *param_1 = uVar4 | (param_4 & 0xff) << 8;
    param_1[1] = 0;
LAB_01962254:
    param_1[2] = 0;
  }
  else {
    iVar1 = 0;
    uVar8 = 0;
    uVar4 = 0;
    do {
      pbVar7 = param_2 + iVar1;
      iVar6 = (int)(char)*pbVar7;
      if ((iVar6 - 0x3aU & 0xff) < 0xf6) {
        if (iVar1 != 0) {
          if (iVar6 < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_2,param_3,iVar1,param_3,&DAT_01d271a4);
          }
          goto LAB_019621c4;
        }
        puVar2 = (undefined1 *)(uint)*param_2;
        if (0x7fffffff < (uint)(int)(char)*param_2) {
          if (puVar2 < (undefined1 *)0xe0) {
            puVar2 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
          }
          else {
            uVar4 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
            if (puVar2 < (undefined1 *)0xf0) {
              puVar2 = (undefined1 *)(uVar4 | ((uint)puVar2 & 0x1f) << 0xc);
            }
            else {
              puVar2 = (undefined1 *)(param_2[3] & 0x3f | uVar4 << 6 | ((uint)puVar2 & 7) << 0x12);
              if (puVar2 == &DAT_00110000) goto LAB_0196223c;
            }
          }
        }
        *param_1 = (param_4 & 0xff) << 8 | 2;
        param_1[1] = (uint)puVar2;
        goto LAB_01962254;
      }
      if ((uVar8 == 0 && uVar4 == 0) && (iVar1 != 0)) {
        uVar4 = 5;
        goto LAB_01962248;
      }
      uVar3 = (uint)((ulonglong)uVar8 * 10);
      uVar9 = (uint)((ulonglong)uVar8 * 10 >> 0x20);
      uVar8 = (uint)((ulonglong)uVar4 * 10);
      uVar5 = uVar9 + uVar8;
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0 || CARRY4(uVar9,uVar8)) {
LAB_01962288:
        uVar4 = 6;
        goto LAB_01962248;
      }
      uVar9 = iVar6 - 0x30U & 0xff;
      uVar8 = uVar3 + uVar9;
      uVar4 = uVar5 + CARRY4(uVar3,uVar9);
      if (CARRY4(uVar5,(uint)CARRY4(uVar3,uVar9))) goto LAB_01962288;
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
    iVar1 = param_3;
    pbVar7 = param_2 + param_3;
LAB_019621c4:
    *param_1 = uVar8;
    param_1[1] = uVar4;
    param_1[2] = (uint)pbVar7;
    param_1[3] = param_3 - iVar1;
  }
  return;
}

