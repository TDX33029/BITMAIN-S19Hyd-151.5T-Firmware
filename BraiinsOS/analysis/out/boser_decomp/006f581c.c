// FUN_006f581c @ 006f581c size=264 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_006f581c(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0x84);
  if (uVar5 != 0) {
    if (uVar5 < uVar2) {
      if (*(char *)(*(int *)(param_1 + 0x80) + uVar5) < -0x40) {
LAB_006f5854:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (uVar5 != uVar2) goto LAB_006f5854;
  }
  uVar6 = 1;
  if (uVar5 != uVar2) {
    pbVar3 = (byte *)(*(int *)(param_1 + 0x80) + uVar5);
    iVar1 = 1;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      uVar2 = (uint)*pbVar3;
      if (uVar2 < 0xe0) {
        puVar4 = (undefined1 *)(pbVar3[1] & 0x3f | (uVar2 & 0x1f) << 6);
      }
      else {
        uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (uVar2 < 0xf0) {
          puVar4 = (undefined1 *)(uVar7 | (uVar2 & 0x1f) << 0xc);
        }
        else {
          puVar4 = (undefined1 *)(pbVar3[3] & 0x3f | uVar7 << 6 | (uVar2 & 7) << 0x12);
          uVar6 = 1;
          if (puVar4 == &DAT_00110000) goto LAB_006f5908;
        }
      }
      if ((undefined1 *)0x7f < puVar4) {
        iVar1 = 2;
      }
      if (((undefined1 *)0x7ff < puVar4) && (iVar1 = 4, puVar4 < (undefined1 *)0x10000)) {
        iVar1 = 3;
      }
    }
    uVar6 = 0;
    *(uint *)(param_1 + 0x88) = iVar1 + uVar5;
  }
LAB_006f5908:
  return CONCAT44(param_1,uVar6);
}

